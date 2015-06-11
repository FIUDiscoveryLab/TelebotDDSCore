
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QuickLooks.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "QuickLooksSupport.h"
#include "QuickLooksPlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace aeondds{

namespace quicklooks{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'TSensorReport' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   TSensorReportTYPENAME

/* Defines */
#define TDataWriter TSensorReportDataWriter
#define TData       ::aeondds::quicklooks::TSensorReport


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   TSensorReportTYPENAME

/* Defines */
#define TDataReader TSensorReportDataReader
#define TDataSeq    TSensorReportSeq
#define TData       ::aeondds::quicklooks::TSensorReport


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    TSensorReportTYPENAME
#define TPlugin_new  ::aeondds::quicklooks::TSensorReportPlugin_new
#define TPlugin_delete  ::aeondds::quicklooks::TSensorReportPlugin_delete

/* Defines */
#define TTypeSupport TSensorReportTypeSupport
#define TData        ::aeondds::quicklooks::TSensorReport
#define TDataReader  TSensorReportDataReader
#define TDataWriter  TSensorReportDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'TDiscoverAQReport' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   TDiscoverAQReportTYPENAME

/* Defines */
#define TDataWriter TDiscoverAQReportDataWriter
#define TData       ::aeondds::quicklooks::TDiscoverAQReport


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   TDiscoverAQReportTYPENAME

/* Defines */
#define TDataReader TDiscoverAQReportDataReader
#define TDataSeq    TDiscoverAQReportSeq
#define TData       ::aeondds::quicklooks::TDiscoverAQReport


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    TDiscoverAQReportTYPENAME
#define TPlugin_new  ::aeondds::quicklooks::TDiscoverAQReportPlugin_new
#define TPlugin_delete  ::aeondds::quicklooks::TDiscoverAQReportPlugin_delete

/* Defines */
#define TTypeSupport TDiscoverAQReportTypeSupport
#define TData        ::aeondds::quicklooks::TDiscoverAQReport
#define TDataReader  TDiscoverAQReportDataReader
#define TDataWriter  TDiscoverAQReportDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete



} /* namespace quicklooks */

} /* namespace aeondds */
