
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from .idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/
    
package TelebotDDSCore.Source.Java.Generated.master.arms;
        
import com.rti.dds.typecode.*;


public class TMasterToArmsTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int i=0;
        StructMember sm[] = new StructMember[3];

        sm[i]=new StructMember("servoId",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,0,false); i++;
        sm[i]=new StructMember("servoPositon",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,1,false); i++;
        sm[i]=new StructMember("servoSpeed",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,2,false); i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("master::arms::TMasterToArms",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,sm);
        return tc;
    }
}
