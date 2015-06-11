
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SelfPose.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SelfPoseSupport_1893211664_h
#define SelfPoseSupport_1893211664_h

/* Uses */
#include "SelfPose.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif


namespace aeondds{

namespace selfpose{
        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TSelfPoseTypeSupport, TSelfPose);

DDS_DATAWRITER_CPP(TSelfPoseDataWriter, TSelfPose);
DDS_DATAREADER_CPP(TSelfPoseDataReader, TSelfPoseSeq, TSelfPose);


#else

DDS_TYPESUPPORT_C(TSelfPoseTypeSupport, TSelfPose);
DDS_DATAWRITER_C(TSelfPoseDataWriter, TSelfPose);
DDS_DATAREADER_C(TSelfPoseDataReader, TSelfPoseSeq, TSelfPose);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace selfpose */

} /* namespace aeondds */


#endif  /* SelfPoseSupport_1893211664_h */
