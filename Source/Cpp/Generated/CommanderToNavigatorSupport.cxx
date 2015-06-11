
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommanderToNavigator.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "CommanderToNavigatorSupport.h"
#include "CommanderToNavigatorPlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace aeondds{

namespace CmdrAndNav{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'TCommanderToNavigator' support classes.

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
#define TTYPENAME   TCommanderToNavigatorTYPENAME

/* Defines */
#define TDataWriter TCommanderToNavigatorDataWriter
#define TData       ::aeondds::CmdrAndNav::TCommanderToNavigator


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
#define TTYPENAME   TCommanderToNavigatorTYPENAME

/* Defines */
#define TDataReader TCommanderToNavigatorDataReader
#define TDataSeq    TCommanderToNavigatorSeq
#define TData       ::aeondds::CmdrAndNav::TCommanderToNavigator


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
#define TTYPENAME    TCommanderToNavigatorTYPENAME
#define TPlugin_new  ::aeondds::CmdrAndNav::TCommanderToNavigatorPlugin_new
#define TPlugin_delete  ::aeondds::CmdrAndNav::TCommanderToNavigatorPlugin_delete

/* Defines */
#define TTypeSupport TCommanderToNavigatorTypeSupport
#define TData        ::aeondds::CmdrAndNav::TCommanderToNavigator
#define TDataReader  TCommanderToNavigatorDataReader
#define TDataWriter  TCommanderToNavigatorDataWriter
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

   Configure and implement 'TJsonMissionFile' support classes.

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
#define TTYPENAME   TJsonMissionFileTYPENAME

/* Defines */
#define TDataWriter TJsonMissionFileDataWriter
#define TData       ::aeondds::CmdrAndNav::TJsonMissionFile


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
#define TTYPENAME   TJsonMissionFileTYPENAME

/* Defines */
#define TDataReader TJsonMissionFileDataReader
#define TDataSeq    TJsonMissionFileSeq
#define TData       ::aeondds::CmdrAndNav::TJsonMissionFile


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
#define TTYPENAME    TJsonMissionFileTYPENAME
#define TPlugin_new  ::aeondds::CmdrAndNav::TJsonMissionFilePlugin_new
#define TPlugin_delete  ::aeondds::CmdrAndNav::TJsonMissionFilePlugin_delete

/* Defines */
#define TTypeSupport TJsonMissionFileTypeSupport
#define TData        ::aeondds::CmdrAndNav::TJsonMissionFile
#define TDataReader  TJsonMissionFileDataReader
#define TDataWriter  TJsonMissionFileDataWriter
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

   Configure and implement 'TNavigatorToCommander' support classes.

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
#define TTYPENAME   TNavigatorToCommanderTYPENAME

/* Defines */
#define TDataWriter TNavigatorToCommanderDataWriter
#define TData       ::aeondds::CmdrAndNav::TNavigatorToCommander


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
#define TTYPENAME   TNavigatorToCommanderTYPENAME

/* Defines */
#define TDataReader TNavigatorToCommanderDataReader
#define TDataSeq    TNavigatorToCommanderSeq
#define TData       ::aeondds::CmdrAndNav::TNavigatorToCommander


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
#define TTYPENAME    TNavigatorToCommanderTYPENAME
#define TPlugin_new  ::aeondds::CmdrAndNav::TNavigatorToCommanderPlugin_new
#define TPlugin_delete  ::aeondds::CmdrAndNav::TNavigatorToCommanderPlugin_delete

/* Defines */
#define TTypeSupport TNavigatorToCommanderTypeSupport
#define TData        ::aeondds::CmdrAndNav::TNavigatorToCommander
#define TDataReader  TNavigatorToCommanderDataReader
#define TDataWriter  TNavigatorToCommanderDataWriter
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



} /* namespace CmdrAndNav */

} /* namespace aeondds */
