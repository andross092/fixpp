@echo off
setlocal enabledelayedexpansion

:: Variabili
set clean_fields=false
set PPDIR=
set mydir=%~dp0

:: Funzione di uso
:usage
echo Usage: %~nx0 [--clean-fields] -i include-prefix -n namespace -s def-source-dir -d destination-dir [-p gdb-pp-dir]
exit /b 1

:: Parsing degli argomenti
:parse_args
if "%~1"=="" goto check_required
if "%~1"=="-i" ( set DSTINCDIR=%~2 & shift & shift & goto parse_args )
if "%~1"=="-n" ( set DSTNAMESPACE=%~2 & shift & shift & goto parse_args )
if "%~1"=="-s" ( set DEFDIR=%~2 & shift & shift & goto parse_args )
if "%~1"=="-d" ( set DSTDIR=%~2 & shift & shift & goto parse_args )
if "%~1"=="-p" ( set PPDIR=%~2 & shift & shift & goto parse_args )
if "%~1"=="--clean-fields" ( set clean_fields=true & shift & goto parse_args )
goto usage

:: Controllo parametri obbligatori
:check_required
if "%DSTDIR%"=="" goto usage
if "%DEFDIR%"=="" goto usage
if "%DSTINCDIR%"=="" goto usage
if "%DSTNAMESPACE%"=="" goto usage

:: Controllo esistenza file
for %%F in (Fields.def Messages.def Groups.def) do (
    if not exist "%DEFDIR%\%%F" (
        echo File not found: %DEFDIR%\%%F
        exit /b 1
    )
)

:: Creazione cartella destinazione
if not exist "%DSTDIR%" mkdir "%DSTDIR%"

:: Preprocessing file .pp
for %%F in (%mydir%\src\*.pp) do (
    set "name=%%~nF"
    set "dst=%DSTDIR%\!name!"
    echo Generating !dst!
    cl.exe /P "%%F" -o "!dst!" -I"%mydir%" -I"%DEFDIR%"
    powershell -Command "(Get-Content '!dst!') -replace '<nl>', '`n' -replace '<pragma>', '#pragma' -replace 'DSTINCDIR/', '%DSTINCDIR%/' | Set-Content '!dst!'"
)

:: Copia file .h e .cpp
set DSTHEADERGUARD=%DSTNAMESPACE:~0,1%_%DSTNAMESPACE:~1,-1%
for %%F in (%mydir%\src\*.h %mydir%\src\*.cpp) do (
    set "name=%%~nxF"
    set "dst=%DSTDIR%\!name!"
    echo Generating !dst!
    powershell -Command "(Get-Content '%%F') -replace 'DSTINCDIR/', '%DSTINCDIR%/' -replace 'DSTNAMESPACE', '%DSTNAMESPACE%' -replace 'DSTHEADERGUARD', '%DSTHEADERGUARD%' | Set-Content '!dst!'"
)

:: Correzione header
powershell -Command "(Get-Content '%DSTDIR%\Messages.cxx') -replace 'MsgTypeEnums::_.str', 'EMPTY_STRING' | Set-Content '%DSTDIR%\Messages.cxx'"

:: Generazione printers.py
if not "%PPDIR%"=="" (
    set dst=%PPDIR%\printers.py
    echo Generating %dst%
    if not exist "%PPDIR%" mkdir "%PPDIR%"
    copy "%mydir%\src\printers.py" "%dst%"
    powershell -Command "(Get-Content '%dst%') -replace 'DSTNAMESPACE', '%DSTNAMESPACE%' | Set-Content '%dst%'"
)

endlocal
exit /b 0
