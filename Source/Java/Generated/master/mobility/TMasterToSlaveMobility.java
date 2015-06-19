
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from .idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/
    
package TelebotDDSCore.Source.Java.Generated.master.mobility;
        

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;

import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;


public class TMasterToSlaveMobility implements Copyable, Serializable
{

    public double lMotor = 0;
    public double rMotor = 0;


    public TMasterToSlaveMobility() {

    }


    public TMasterToSlaveMobility(TMasterToSlaveMobility other) {

        this();
        copy_from(other);
    }



    public static Object create() {
        TMasterToSlaveMobility self;
        self = new TMasterToSlaveMobility();
         
        self.clear();
        
        return self;
    }

    public void clear() {
        
        lMotor = 0;
            
        rMotor = 0;
            
    }

    public boolean equals(Object o) {
                
        if (o == null) {
            return false;
        }        
        
        

        if(getClass() != o.getClass()) {
            return false;
        }

        TMasterToSlaveMobility otherObj = (TMasterToSlaveMobility)o;



        if(lMotor != otherObj.lMotor) {
            return false;
        }
            
        if(rMotor != otherObj.rMotor) {
            return false;
        }
            
        return true;
    }

    public int hashCode() {
        int __result = 0;

        __result += (int)lMotor;
                
        __result += (int)rMotor;
                
        return __result;
    }
    

    /**
     * This is the implementation of the <code>Copyable</code> interface.
     * This method will perform a deep copy of <code>src</code>
     * This method could be placed into <code>TMasterToSlaveMobilityTypeSupport</code>
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
        

        TMasterToSlaveMobility typedSrc = (TMasterToSlaveMobility) src;
        TMasterToSlaveMobility typedDst = this;

        typedDst.lMotor = typedSrc.lMotor;
            
        typedDst.rMotor = typedSrc.rMotor;
            
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
        strBuffer.append("lMotor: ").append(lMotor).append("\n");
            
        CdrHelper.printIndent(strBuffer, indent+1);            
        strBuffer.append("rMotor: ").append(rMotor).append("\n");
            
        return strBuffer.toString();
    }
    
}

