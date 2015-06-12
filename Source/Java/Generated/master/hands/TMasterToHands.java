
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from .idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/
    
package TelebotDDSCore.Source.Java.Generated.master.hands;
        

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;

import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;


public class TMasterToHands implements Copyable, Serializable
{

    public int lPinky = 0;
    public int lRing = 0;
    public int lMiddle = 0;
    public int lIndex = 0;
    public int lThumbFlexion = 0;
    public int lThumbOpposition = 0;
    public int rThumbFlexion = 0;
    public int rThumbOpposition = 0;
    public int rIndex = 0;
    public int rMiddle = 0;
    public int rRing = 0;
    public int rPinky = 0;


    public TMasterToHands() {

    }


    public TMasterToHands(TMasterToHands other) {

        this();
        copy_from(other);
    }



    public static Object create() {
        TMasterToHands self;
        self = new TMasterToHands();
         
        self.clear();
        
        return self;
    }

    public void clear() {
        
        lPinky = 0;
            
        lRing = 0;
            
        lMiddle = 0;
            
        lIndex = 0;
            
        lThumbFlexion = 0;
            
        lThumbOpposition = 0;
            
        rThumbFlexion = 0;
            
        rThumbOpposition = 0;
            
        rIndex = 0;
            
        rMiddle = 0;
            
        rRing = 0;
            
        rPinky = 0;
            
    }

    public boolean equals(Object o) {
                
        if (o == null) {
            return false;
        }        
        
        

        if(getClass() != o.getClass()) {
            return false;
        }

        TMasterToHands otherObj = (TMasterToHands)o;



        if(lPinky != otherObj.lPinky) {
            return false;
        }
            
        if(lRing != otherObj.lRing) {
            return false;
        }
            
        if(lMiddle != otherObj.lMiddle) {
            return false;
        }
            
        if(lIndex != otherObj.lIndex) {
            return false;
        }
            
        if(lThumbFlexion != otherObj.lThumbFlexion) {
            return false;
        }
            
        if(lThumbOpposition != otherObj.lThumbOpposition) {
            return false;
        }
            
        if(rThumbFlexion != otherObj.rThumbFlexion) {
            return false;
        }
            
        if(rThumbOpposition != otherObj.rThumbOpposition) {
            return false;
        }
            
        if(rIndex != otherObj.rIndex) {
            return false;
        }
            
        if(rMiddle != otherObj.rMiddle) {
            return false;
        }
            
        if(rRing != otherObj.rRing) {
            return false;
        }
            
        if(rPinky != otherObj.rPinky) {
            return false;
        }
            
        return true;
    }

    public int hashCode() {
        int __result = 0;

        __result += (int)lPinky;
                
        __result += (int)lRing;
                
        __result += (int)lMiddle;
                
        __result += (int)lIndex;
                
        __result += (int)lThumbFlexion;
                
        __result += (int)lThumbOpposition;
                
        __result += (int)rThumbFlexion;
                
        __result += (int)rThumbOpposition;
                
        __result += (int)rIndex;
                
        __result += (int)rMiddle;
                
        __result += (int)rRing;
                
        __result += (int)rPinky;
                
        return __result;
    }
    

    /**
     * This is the implementation of the <code>Copyable</code> interface.
     * This method will perform a deep copy of <code>src</code>
     * This method could be placed into <code>TMasterToHandsTypeSupport</code>
     * rather than here by using the <code>-noCopyable</code> option
     * to rtiddsgen.
     * 
     * @param src The Object which contains the data to be copied.
     * @return Returns <code>this</code>.
     * @exception NullPointerException If <code>src</code> is null.
     * @exception ClassCastException If <code>src</code> is not the 
     * same type as <code>this</code>.
     * @see com.rti.dds.infrastructure.Copyable#copy_from(java.lang.Object)
     */
    public Object copy_from(Object src) {
        

        TMasterToHands typedSrc = (TMasterToHands) src;
        TMasterToHands typedDst = this;

        typedDst.lPinky = typedSrc.lPinky;
            
        typedDst.lRing = typedSrc.lRing;
            
        typedDst.lMiddle = typedSrc.lMiddle;
            
        typedDst.lIndex = typedSrc.lIndex;
            
        typedDst.lThumbFlexion = typedSrc.lThumbFlexion;
            
        typedDst.lThumbOpposition = typedSrc.lThumbOpposition;
            
        typedDst.rThumbFlexion = typedSrc.rThumbFlexion;
            
        typedDst.rThumbOpposition = typedSrc.rThumbOpposition;
            
        typedDst.rIndex = typedSrc.rIndex;
            
        typedDst.rMiddle = typedSrc.rMiddle;
            
        typedDst.rRing = typedSrc.rRing;
            
        typedDst.rPinky = typedSrc.rPinky;
            
        return this;
    }


    
    public String toString(){
        return toString("", 0);
    }
        
    
    public String toString(String desc, int indent) {
        StringBuffer strBuffer = new StringBuffer();        
                        
        
        if (desc != null) {
            CdrHelper.printIndent(strBuffer, indent);
            strBuffer.append(desc).append(":\n");
        }
        
        
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("lPinky: ").append(lPinky).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("lRing: ").append(lRing).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("lMiddle: ").append(lMiddle).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("lIndex: ").append(lIndex).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("lThumbFlexion: ").append(lThumbFlexion).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("lThumbOpposition: ").append(lThumbOpposition).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("rThumbFlexion: ").append(rThumbFlexion).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("rThumbOpposition: ").append(rThumbOpposition).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("rIndex: ").append(rIndex).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("rMiddle: ").append(rMiddle).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("rRing: ").append(rRing).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("rPinky: ").append(rPinky).append("\n");
            
        return strBuffer.toString();
    }
    
}

