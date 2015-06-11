
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QuickLooks.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef QuickLooksSupport_198687349_h
#define QuickLooksSupport_198687349_h

/* Uses */
#include "QuickLooks.h"



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

namespace quicklooks{
        

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

DDS_TYPESUPPORT_CPP(TSensorReportTypeSupport, TSensorReport);

DDS_DATAWRITER_CPP(TSensorReportDataWriter, TSensorReport);
DDS_DATAREADER_CPP(TSensorReportDataReader, TSensorReportSeq, TSensorReport);


#else

DDS_TYPESUPPORT_C(TSensorReportTypeSupport, TSensorReport);
DDS_DATAWRITER_C(TSensorReportDataWriter, TSensorReport);
DDS_DATAREADER_C(TSensorReportDataReader, TSensorReportSeq, TSensorReport);

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

DDS_TYPESUPPORT_CPP(TDiscoverAQReportTypeSupport, TDiscoverAQReport);

DDS_DATAWRITER_CPP(TDiscoverAQReportDataWriter, TDiscoverAQReport);
DDS_DATAREADER_CPP(TDiscoverAQReportDataReader, TDiscoverAQReportSeq, TDiscoverAQReport);


#else

DDS_TYPESUPPORT_C(TDiscoverAQReportTypeSupport, TDiscoverAQReport);
DDS_DATAWRITER_C(TDiscoverAQReportDataWriter, TDiscoverAQReport);
DDS_DATAREADER_C(TDiscoverAQReportDataReader, TDiscoverAQReportSeq, TDiscoverAQReport);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace quicklooks */

} /* namespace aeondds */


#endif  /* QuickLooksSupport_198687349_h */
