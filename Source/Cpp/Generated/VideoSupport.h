
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Video.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef VideoSupport_959185661_h
#define VideoSupport_959185661_h

/* Uses */
#include "Video.h"



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

namespace video{
        

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

DDS_TYPESUPPORT_CPP(TSmallInfraredStreamTypeSupport, TSmallInfraredStream);

DDS_DATAWRITER_CPP(TSmallInfraredStreamDataWriter, TSmallInfraredStream);
DDS_DATAREADER_CPP(TSmallInfraredStreamDataReader, TSmallInfraredStreamSeq, TSmallInfraredStream);


#else

DDS_TYPESUPPORT_C(TSmallInfraredStreamTypeSupport, TSmallInfraredStream);
DDS_DATAWRITER_C(TSmallInfraredStreamDataWriter, TSmallInfraredStream);
DDS_DATAREADER_C(TSmallInfraredStreamDataReader, TSmallInfraredStreamSeq, TSmallInfraredStream);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

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

DDS_TYPESUPPORT_CPP(TGenericVideoFrameTypeSupport, TGenericVideoFrame);

DDS_DATAWRITER_CPP(TGenericVideoFrameDataWriter, TGenericVideoFrame);
DDS_DATAREADER_CPP(TGenericVideoFrameDataReader, TGenericVideoFrameSeq, TGenericVideoFrame);


#else

DDS_TYPESUPPORT_C(TGenericVideoFrameTypeSupport, TGenericVideoFrame);
DDS_DATAWRITER_C(TGenericVideoFrameDataWriter, TGenericVideoFrame);
DDS_DATAREADER_C(TGenericVideoFrameDataReader, TGenericVideoFrameSeq, TGenericVideoFrame);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace video */

} /* namespace aeondds */


#endif  /* VideoSupport_959185661_h */
