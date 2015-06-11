
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Common.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommonSupport_1118136415_h
#define CommonSupport_1118136415_h

/* Uses */
#include "Common.h"



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

namespace common{
        

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

DDS_TYPESUPPORT_CPP(TSignalTypeSupport, TSignal);

DDS_DATAWRITER_CPP(TSignalDataWriter, TSignal);
DDS_DATAREADER_CPP(TSignalDataReader, TSignalSeq, TSignal);


#else

DDS_TYPESUPPORT_C(TSignalTypeSupport, TSignal);
DDS_DATAWRITER_C(TSignalDataWriter, TSignal);
DDS_DATAREADER_C(TSignalDataReader, TSignalSeq, TSignal);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace common */

} /* namespace aeondds */


#endif  /* CommonSupport_1118136415_h */
