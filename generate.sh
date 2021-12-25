#!/bin/bash

set -e

mydir=$( cd $(dirname $0); pwd )

usage()
{
    echo "usage: $0 [--clean-fields] -i include-prefix -n namespace -s def-source-dir -d destination-dir [-p gdb-pp-dir]"
    exit 1
}

clean_fields=false
PPDIR=

while :
do
    case "$1" in
        -i)
            DSTINCDIR="$2"
            shift 2
        ;;
        
        -n)
            DSTNAMESPACE="$2"
            shift 2
        ;;
        
        -s)
            DEFDIR="$2"
            shift 2
        ;;
        
        -d)
            DSTDIR="$2"
            shift 2
        ;;
        
        -p)
            PPDIR="$2"
            shift 2
        ;;
        
        --clean-fields)
            clean_fields=true
            shift 1
        ;;
        
        -*)
            usage
        ;;

        *)
            break
        ;;
    esac
done

if [[ -z ${DSTDIR} || -z ${DEFDIR} || -z ${DSTINCDIR} || -z ${DSTNAMESPACE} ]]; then
    usage
fi

# check files existance
for f in $DEFDIR/Fields.def $DEFDIR/Messages.def $DEFDIR/Groups.def; do
    if [[ ! -f $f ]]; then
        echo "File not found $f" >&2
        exit 1
    fi
done

# collect fields
used_fields=" $( sed -n -e 's/.*FIX_MSG_FIELD.*( *\(.*\) *).*/\1/gp' -e 's/FIX_MSG_GROUP_BEGIN.*( *\(.*\) *, *\(.*\) *).*/No\1\n\2/gp' $DEFDIR/Messages.def $DEFDIR/Groups.def | sort -u | tr \\n ' ' ) "
decl_fields=" $( sed -n -e 's/FIX_FIELD_DECL.*( *\(.*\) *,.*,.*).*/\1/gp' $DEFDIR/Fields.def | sort -u | tr \\n ' ' ) "

if $clean_fields; then
    fields_bkp_file=$DEFDIR/Fields.def.$(date +%s)
    cp -f $DEFDIR/Fields.def $fields_bkp_file
fi

# find unused fields
unsed_fields_found=false
for f in $decl_fields; do
    if [[ CheckSum != $f ]] && ! grep -q " $f " <<<"$used_fields"; then
        echo -n "  not used field to be removed from $DEFDIR/Fields.def: $f"
        unsed_fields_found=true
        if $clean_fields; then
            echo " (removing it)"
            sed -e "/FIX_FIELD_DECL.*( * $f *,.*,.*).*/d" -i $DEFDIR/Fields.def
            sed -e "/FIX_ENUM_BEGIN.*( * $f *)/,/FIX_ENUM_END/d" -i $DEFDIR/Fields.def
        else
            echo
        fi
    fi
done

if $clean_fields && ! $unsed_fields_found; then
    rm -f $fields_bkp_file
fi

if [[ -f $fields_bkp_file ]]; then
    echo
    echo "  backup file created: $fields_bkp_file"
    echo
fi


# echo find missing fields
found_mising_fields=false
for f in $used_fields; do
    if ! grep -q " $f " <<<"$decl_fields"; then
        echo "  missing field declaration in $DEFDIR/Fields.def: $f"
        found_mising_fields=true
    fi
done

if $found_mising_fields; then
    echo
    echo "  please declare the missing fields"
    echo
    exit 1
fi

mkdir -p ${DSTDIR}

# Preprocess .pp files
for pp in $mydir/src/*.pp; do
    name=$(basename $pp)
    dst=${DSTDIR}/${name%.pp}
    echo "  generating $dst"
    cpp $pp -o $dst -I$mydir -I${DEFDIR}
    sed -e "/remove-me/d" -e "/^#/d" \
        -e "s/<nl>/\\n/g" \
        -e "s/<pragma>/#pragma/g" \
        -e "s%DSTINCDIR/%${DSTINCDIR}/%g" \
        -e "s/<t1>/  /g" \
        -e "s/<t2>/    /g" \
        -e "s/<t3>/      /g" \
        -e "s/<n1>/\\n  /g" \
        -e "s/<n2>/\\n    /g" \
        -e "s/<n3>/\\n      /g" \
        -e "s%<com>%\\n//%g" \
        -e "s%<icom>%//%g" -i $dst
    sed '/^$/N;/\n$/N;//D' -i $dst
done
rm -f ${DSTDIR}/Common.hxx

# Copy C++ files
DSTHEADERGUARD=${DSTNAMESPACE/::/_}
for cpp in $mydir/src/*.h $mydir/src/*.cpp; do
    name=$(basename $cpp)
    dst=${DSTDIR}/$name
    echo "  generating $dst"
    sed -e "s%DSTINCDIR/%${DSTINCDIR}/%g" \
        -e "s%DSTNAMESPACE%${DSTNAMESPACE}%g" \
        -e "s%DSTHEADERGUARD%${DSTHEADERGUARD}%g" \
        $cpp > $dst
done

# Extract header fields
dst=${DSTDIR}/Header.cxx
echo "  generating $dst"
sed -n /Header/,/FIX_MSG_END/p ${DEFDIR}/Messages.def | grep FIX_MSG_FIELD | sed 's/FIX_MSG_FIELD( \(.*\) )/ Field\1::RAW,/' > $dst

# Build MsgType enums
dst=${DSTDIR}/Fields.hxx
echo "  generating MsgType enums"

BeginStr=$( sed -n /FIX_FIELD_BEGIN_STRING/p ${DEFDIR}/Fields.def | sed -e 's/FIX_FIELD_BEGIN_STRING.*(\(.*\)).*/\1/' -e 's/ //' )
sed "s/BEGIN_STRING_LENGTH/$((${#BeginStr}+1))/" -i $dst

{
echo
echo "constexpr raw_enum_t MsgTypeRaw__ = (raw_enum_t)0; // Header"
grep FIX_ENUM_DECL ${DEFDIR}/Fields.def | grep MsgType | sed 's/.*,\(.*\),.*SOHSTR.*(\(.*\)).*)/\1 \2/' | while read l; do
    name=$( awk '{print $1}'<<< "$l" )
    value=$( awk '{print $2}'<<< "$l" )
    echo -n "constexpr raw_enum_t MsgTypeRaw_${name} = (raw_enum_t)'${value:0:1}'"
    if [[ ${#value} = 2 ]]; then
        echo -n " + (((raw_enum_t)'${value:1:1}')<<8)"
    elif [[ ${#value} -gt 2 ]]; then
        echo "too long MsgType enum value $name=$value" >&2
        exit 1
    fi
    echo ";"
done
} >> $dst

# message and group names for gdb pretty printing
dst=$PPDIR/printers.py
if [[ -n "$PPDIR" ]]; then
    echo "  generating $dst"
    mkdir -p $PPDIR
    cp $mydir/src/printers.py $dst
    
    for m in $(sed -n -e 's/.*FIX_MSG_BEGIN.*( *\(.*\), .*/\1/gp' ${DEFDIR}/Messages.def); do
        sed "/__PRINTERS__/s/__PRINTERS__/pp.add_printer( '${DSTNAMESPACE}::Message$m', '^${DSTNAMESPACE}::Message$m\$', MessagePrinter )\\n    __PRINTERS__/" -i $dst
    done

    for m in $(sed -n -e 's/.*FIX_MSG_GROUP_BEGIN.*( *\(.*\), .*/\1/gp' ${DEFDIR}/Groups.def); do
        sed "/__PRINTERS__/s/__PRINTERS__/pp.add_printer( '${DSTNAMESPACE}::Group$m', '^${DSTNAMESPACE}::Group$m\$', MessagePrinter )\\n    __PRINTERS__/" -i $dst
        sed "/__PRINTERS__/s/__PRINTERS__/pp.add_printer( '${DSTNAMESPACE}::Group$m::Array', '^std::vector\\\\<${DSTNAMESPACE}::Group$m,.\*\\\\>\$', GroupPrinter )\\n    __PRINTERS__/" -i $dst
    done
    
    sed -e "s%DSTNAMESPACE%${DSTNAMESPACE}%g" -e /__PRINTERS__/d -i $dst
fi

