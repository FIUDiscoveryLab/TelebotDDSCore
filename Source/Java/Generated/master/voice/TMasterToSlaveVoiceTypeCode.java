
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from .idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/
    
package TelebotDDSCore.Source.Java.Generated.master.voice;
        
import com.rti.dds.typecode.*;


public class TMasterToSlaveVoiceTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int i=0;
        StructMember sm[] = new StructMember[1];

        sm[i]=new StructMember("voiceCommand",false,(short)-1,false,(TypeCode)new TypeCode(TCKind.TK_STRING,255),0,false); i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("master::voice::TMasterToSlaveVoice",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,sm);
        return tc;
    }
}
