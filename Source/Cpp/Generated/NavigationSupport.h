
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Navigation.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NavigationSupport_832035966_h
#define NavigationSupport_832035966_h

/* Uses */
#include "Navigation.h"



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

namespace navigation{
        

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

DDS_TYPESUPPORT_CPP(TWaypointTypeSupport, TWaypoint);

DDS_DATAWRITER_CPP(TWaypointDataWriter, TWaypoint);
DDS_DATAREADER_CPP(TWaypointDataReader, TWaypointSeq, TWaypoint);


#else

DDS_TYPESUPPORT_C(TWaypointTypeSupport, TWaypoint);
DDS_DATAWRITER_C(TWaypointDataWriter, TWaypoint);
DDS_DATAREADER_C(TWaypointDataReader, TWaypointSeq, TWaypoint);

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

DDS_TYPESUPPORT_CPP(TWaypointCourseTypeSupport, TWaypointCourse);

DDS_DATAWRITER_CPP(TWaypointCourseDataWriter, TWaypointCourse);
DDS_DATAREADER_CPP(TWaypointCourseDataReader, TWaypointCourseSeq, TWaypointCourse);


#else

DDS_TYPESUPPORT_C(TWaypointCourseTypeSupport, TWaypointCourse);
DDS_DATAWRITER_C(TWaypointCourseDataWriter, TWaypointCourse);
DDS_DATAREADER_C(TWaypointCourseDataReader, TWaypointCourseSeq, TWaypointCourse);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace navigation */

} /* namespace aeondds */

namespace aeondds{

namespace cmdrnav{
        

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

DDS_TYPESUPPORT_CPP(TModeChangeTypeSupport, TModeChange);

DDS_DATAWRITER_CPP(TModeChangeDataWriter, TModeChange);
DDS_DATAREADER_CPP(TModeChangeDataReader, TModeChangeSeq, TModeChange);


#else

DDS_TYPESUPPORT_C(TModeChangeTypeSupport, TModeChange);
DDS_DATAWRITER_C(TModeChangeDataWriter, TModeChange);
DDS_DATAREADER_C(TModeChangeDataReader, TModeChangeSeq, TModeChange);

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

DDS_TYPESUPPORT_CPP(TRegisterCourseTypeSupport, TRegisterCourse);

DDS_DATAWRITER_CPP(TRegisterCourseDataWriter, TRegisterCourse);
DDS_DATAREADER_CPP(TRegisterCourseDataReader, TRegisterCourseSeq, TRegisterCourse);


#else

DDS_TYPESUPPORT_C(TRegisterCourseTypeSupport, TRegisterCourse);
DDS_DATAWRITER_C(TRegisterCourseDataWriter, TRegisterCourse);
DDS_DATAREADER_C(TRegisterCourseDataReader, TRegisterCourseSeq, TRegisterCourse);

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

DDS_TYPESUPPORT_CPP(TSetCourseTypeSupport, TSetCourse);

DDS_DATAWRITER_CPP(TSetCourseDataWriter, TSetCourse);
DDS_DATAREADER_CPP(TSetCourseDataReader, TSetCourseSeq, TSetCourse);


#else

DDS_TYPESUPPORT_C(TSetCourseTypeSupport, TSetCourse);
DDS_DATAWRITER_C(TSetCourseDataWriter, TSetCourse);
DDS_DATAREADER_C(TSetCourseDataReader, TSetCourseSeq, TSetCourse);

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

DDS_TYPESUPPORT_CPP(TReportCourseCompletionTypeSupport, TReportCourseCompletion);

DDS_DATAWRITER_CPP(TReportCourseCompletionDataWriter, TReportCourseCompletion);
DDS_DATAREADER_CPP(TReportCourseCompletionDataReader, TReportCourseCompletionSeq, TReportCourseCompletion);


#else

DDS_TYPESUPPORT_C(TReportCourseCompletionTypeSupport, TReportCourseCompletion);
DDS_DATAWRITER_C(TReportCourseCompletionDataWriter, TReportCourseCompletion);
DDS_DATAREADER_C(TReportCourseCompletionDataReader, TReportCourseCompletionSeq, TReportCourseCompletion);

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

DDS_TYPESUPPORT_CPP(TReportWaypointReachedTypeSupport, TReportWaypointReached);

DDS_DATAWRITER_CPP(TReportWaypointReachedDataWriter, TReportWaypointReached);
DDS_DATAREADER_CPP(TReportWaypointReachedDataReader, TReportWaypointReachedSeq, TReportWaypointReached);


#else

DDS_TYPESUPPORT_C(TReportWaypointReachedTypeSupport, TReportWaypointReached);
DDS_DATAWRITER_C(TReportWaypointReachedDataWriter, TReportWaypointReached);
DDS_DATAREADER_C(TReportWaypointReachedDataReader, TReportWaypointReachedSeq, TReportWaypointReached);

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

DDS_TYPESUPPORT_CPP(TReportModeShiftTypeSupport, TReportModeShift);

DDS_DATAWRITER_CPP(TReportModeShiftDataWriter, TReportModeShift);
DDS_DATAREADER_CPP(TReportModeShiftDataReader, TReportModeShiftSeq, TReportModeShift);


#else

DDS_TYPESUPPORT_C(TReportModeShiftTypeSupport, TReportModeShift);
DDS_DATAWRITER_C(TReportModeShiftDataWriter, TReportModeShift);
DDS_DATAREADER_C(TReportModeShiftDataReader, TReportModeShiftSeq, TReportModeShift);

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

DDS_TYPESUPPORT_CPP(TReportSystemFailureTypeSupport, TReportSystemFailure);

DDS_DATAWRITER_CPP(TReportSystemFailureDataWriter, TReportSystemFailure);
DDS_DATAREADER_CPP(TReportSystemFailureDataReader, TReportSystemFailureSeq, TReportSystemFailure);


#else

DDS_TYPESUPPORT_C(TReportSystemFailureTypeSupport, TReportSystemFailure);
DDS_DATAWRITER_C(TReportSystemFailureDataWriter, TReportSystemFailure);
DDS_DATAREADER_C(TReportSystemFailureDataReader, TReportSystemFailureSeq, TReportSystemFailure);

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

DDS_TYPESUPPORT_CPP(TReportStatusResponseTypeSupport, TReportStatusResponse);

DDS_DATAWRITER_CPP(TReportStatusResponseDataWriter, TReportStatusResponse);
DDS_DATAREADER_CPP(TReportStatusResponseDataReader, TReportStatusResponseSeq, TReportStatusResponse);


#else

DDS_TYPESUPPORT_C(TReportStatusResponseTypeSupport, TReportStatusResponse);
DDS_DATAWRITER_C(TReportStatusResponseDataWriter, TReportStatusResponse);
DDS_DATAREADER_C(TReportStatusResponseDataReader, TReportStatusResponseSeq, TReportStatusResponse);

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

DDS_TYPESUPPORT_CPP(TReportUnionTypeSupport, TReportUnion);

DDS_DATAWRITER_CPP(TReportUnionDataWriter, TReportUnion);
DDS_DATAREADER_CPP(TReportUnionDataReader, TReportUnionSeq, TReportUnion);


#else

DDS_TYPESUPPORT_C(TReportUnionTypeSupport, TReportUnion);
DDS_DATAWRITER_C(TReportUnionDataWriter, TReportUnion);
DDS_DATAREADER_C(TReportUnionDataReader, TReportUnionSeq, TReportUnion);

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

DDS_TYPESUPPORT_CPP(TReportTypeSupport, TReport);

DDS_DATAWRITER_CPP(TReportDataWriter, TReport);
DDS_DATAREADER_CPP(TReportDataReader, TReportSeq, TReport);


#else

DDS_TYPESUPPORT_C(TReportTypeSupport, TReport);
DDS_DATAWRITER_C(TReportDataWriter, TReport);
DDS_DATAREADER_C(TReportDataReader, TReportSeq, TReport);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace cmdrnav */

} /* namespace aeondds */


#endif  /* NavigationSupport_832035966_h */
