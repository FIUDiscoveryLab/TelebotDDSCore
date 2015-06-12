
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from .idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/
    
package TelebotDDSCore.Source.Java.Generated.master.hands;
        
import com.rti.dds.typecode.*;


public class TMasterToHandsTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int i=0;
        StructMember sm[] = new StructMember[12];

        sm[i]=new StructMember("lPinky",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,0,false); i++;
        sm[i]=new StructMember("lRing",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,1,false); i++;
        sm[i]=new StructMember("lMiddle",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,2,false); i++;
        sm[i]=new StructMember("lIndex",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,3,false); i++;
        sm[i]=new StructMember("lThumbFlexion",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,4,false); i++;
        sm[i]=new StructMember("lThumbOpposition",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,5,false); i++;
        sm[i]=new StructMember("rThumbFlexion",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,6,false); i++;
        sm[i]=new StructMember("rThumbOpposition",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,7,false); i++;
        sm[i]=new StructMember("rIndex",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,8,false); i++;
        sm[i]=new StructMember("rMiddle",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,9,false); i++;
        sm[i]=new StructMember("rRing",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,10,false); i++;
        sm[i]=new StructMember("rPinky",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,11,false); i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("master::hands::TMasterToHands",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,sm);
        return tc;
    }
}
