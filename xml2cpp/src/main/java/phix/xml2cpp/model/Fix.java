//
// This file was generated by the JavaTM Architecture for XML Binding(JAXB) Reference Implementation, v2.2.8-b130911.1802 
// See <a href="http://java.sun.com/xml/jaxb">http://java.sun.com/xml/jaxb</a> 
// Any modifications to this file will be lost upon recompilation of the source schema. 
// Generated on: 2019.12.23 at 12:13:01 PM CET 
//


package phix.xml2cpp.model;

import java.util.ArrayList;
import java.util.List;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlElements;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.adapters.NormalizedStringAdapter;
import javax.xml.bind.annotation.adapters.XmlJavaTypeAdapter;


/**
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "", propOrder = {
    "headerOrMessagesOrTrailerOrComponentsOrFields"
})
@XmlRootElement(name = "fix")
public class Fix {

    @XmlAttribute(name = "type")
    @XmlJavaTypeAdapter(NormalizedStringAdapter.class)
    protected String type;
    @XmlAttribute(name = "major")
    @XmlJavaTypeAdapter(NormalizedStringAdapter.class)
    protected String major;
    @XmlAttribute(name = "minor")
    @XmlJavaTypeAdapter(NormalizedStringAdapter.class)
    protected String minor;
    @XmlAttribute(name = "servicepack")
    @XmlJavaTypeAdapter(NormalizedStringAdapter.class)
    protected String servicepack;
    @XmlElements({
        @XmlElement(name = "header", type = Header.class),
        @XmlElement(name = "messages", type = Messages.class),
        @XmlElement(name = "trailer", type = Trailer.class),
        @XmlElement(name = "components", type = Components.class),
        @XmlElement(name = "fields", type = Fields.class)
    })
    protected List<Object> headerOrMessagesOrTrailerOrComponentsOrFields;

    /**
     * Gets the value of the type property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getType() {
        return type;
    }

    /**
     * Sets the value of the type property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setType(String value) {
        this.type = value;
    }

    /**
     * Gets the value of the major property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getMajor() {
        return major;
    }

    /**
     * Sets the value of the major property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setMajor(String value) {
        this.major = value;
    }

    /**
     * Gets the value of the minor property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getMinor() {
        return minor;
    }

    /**
     * Sets the value of the minor property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setMinor(String value) {
        this.minor = value;
    }

    /**
     * Gets the value of the servicepack property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getServicepack() {
        return servicepack;
    }

    /**
     * Sets the value of the servicepack property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setServicepack(String value) {
        this.servicepack = value;
    }

    /**
     * Gets the value of the headerOrMessagesOrTrailerOrComponentsOrFields property.
     * 
     * <p>
     * This accessor method returns a reference to the live list,
     * not a snapshot. Therefore any modification you make to the
     * returned list will be present inside the JAXB object.
     * This is why there is not a <CODE>set</CODE> method for the headerOrMessagesOrTrailerOrComponentsOrFields property.
     * 
     * <p>
     * For example, to add a new item, do as follows:
     * <pre>
     *    getHeaderOrMessagesOrTrailerOrComponentsOrFields().add(newItem);
     * </pre>
     * 
     * 
     * <p>
     * Objects of the following type(s) are allowed in the list
     * {@link Header }
     * {@link Messages }
     * {@link Trailer }
     * {@link Components }
     * {@link Fields }
     * 
     * 
     */
    public List<Object> getHeaderOrMessagesOrTrailerOrComponentsOrFields() {
        if (headerOrMessagesOrTrailerOrComponentsOrFields == null) {
            headerOrMessagesOrTrailerOrComponentsOrFields = new ArrayList<Object>();
        }
        return this.headerOrMessagesOrTrailerOrComponentsOrFields;
    }

}
