
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Navigation.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "NavigationSupport.h"
#include "NavigationPlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace aeondds{

namespace navigation{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'TWaypoint' support classes.

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
#define TTYPENAME   TWaypointTYPENAME

/* Defines */
#define TDataWriter TWaypointDataWriter
#define TData       ::aeondds::navigation::TWaypoint


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
#define TTYPENAME   TWaypointTYPENAME

/* Defines */
#define TDataReader TWaypointDataReader
#define TDataSeq    TWaypointSeq
#define TData       ::aeondds::navigation::TWaypoint


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
#define TTYPENAME    TWaypointTYPENAME
#define TPlugin_new  ::aeondds::navigation::TWaypointPlugin_new
#define TPlugin_delete  ::aeondds::navigation::TWaypointPlugin_delete

/* Defines */
#define TTypeSupport TWaypointTypeSupport
#define TData        ::aeondds::navigation::TWaypoint
#define TDataReader  TWaypointDataReader
#define TDataWriter  TWaypointDataWriter
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

   Configure and implement 'TWaypointCourse' support classes.

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
#define TTYPENAME   TWaypointCourseTYPENAME

/* Defines */
#define TDataWriter TWaypointCourseDataWriter
#define TData       ::aeondds::navigation::TWaypointCourse


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
#define TTYPENAME   TWaypointCourseTYPENAME

/* Defines */
#define TDataReader TWaypointCourseDataReader
#define TDataSeq    TWaypointCourseSeq
#define TData       ::aeondds::navigation::TWaypointCourse


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
#define TTYPENAME    TWaypointCourseTYPENAME
#define TPlugin_new  ::aeondds::navigation::TWaypointCoursePlugin_new
#define TPlugin_delete  ::aeondds::navigation::TWaypointCoursePlugin_delete

/* Defines */
#define TTypeSupport TWaypointCourseTypeSupport
#define TData        ::aeondds::navigation::TWaypointCourse
#define TDataReader  TWaypointCourseDataReader
#define TDataWriter  TWaypointCourseDataWriter
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



} /* namespace navigation */

} /* namespace aeondds */

namespace aeondds{

namespace cmdrnav{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'TModeChange' support classes.

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
#define TTYPENAME   TModeChangeTYPENAME

/* Defines */
#define TDataWriter TModeChangeDataWriter
#define TData       ::aeondds::cmdrnav::TModeChange


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
#define TTYPENAME   TModeChangeTYPENAME

/* Defines */
#define TDataReader TModeChangeDataReader
#define TDataSeq    TModeChangeSeq
#define TData       ::aeondds::cmdrnav::TModeChange


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
#define TTYPENAME    TModeChangeTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TModeChangePlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TModeChangePlugin_delete

/* Defines */
#define TTypeSupport TModeChangeTypeSupport
#define TData        ::aeondds::cmdrnav::TModeChange
#define TDataReader  TModeChangeDataReader
#define TDataWriter  TModeChangeDataWriter
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

   Configure and implement 'TRegisterCourse' support classes.

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
#define TTYPENAME   TRegisterCourseTYPENAME

/* Defines */
#define TDataWriter TRegisterCourseDataWriter
#define TData       ::aeondds::cmdrnav::TRegisterCourse


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
#define TTYPENAME   TRegisterCourseTYPENAME

/* Defines */
#define TDataReader TRegisterCourseDataReader
#define TDataSeq    TRegisterCourseSeq
#define TData       ::aeondds::cmdrnav::TRegisterCourse


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
#define TTYPENAME    TRegisterCourseTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TRegisterCoursePlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TRegisterCoursePlugin_delete

/* Defines */
#define TTypeSupport TRegisterCourseTypeSupport
#define TData        ::aeondds::cmdrnav::TRegisterCourse
#define TDataReader  TRegisterCourseDataReader
#define TDataWriter  TRegisterCourseDataWriter
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

   Configure and implement 'TSetCourse' support classes.

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
#define TTYPENAME   TSetCourseTYPENAME

/* Defines */
#define TDataWriter TSetCourseDataWriter
#define TData       ::aeondds::cmdrnav::TSetCourse


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
#define TTYPENAME   TSetCourseTYPENAME

/* Defines */
#define TDataReader TSetCourseDataReader
#define TDataSeq    TSetCourseSeq
#define TData       ::aeondds::cmdrnav::TSetCourse


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
#define TTYPENAME    TSetCourseTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TSetCoursePlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TSetCoursePlugin_delete

/* Defines */
#define TTypeSupport TSetCourseTypeSupport
#define TData        ::aeondds::cmdrnav::TSetCourse
#define TDataReader  TSetCourseDataReader
#define TDataWriter  TSetCourseDataWriter
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

   Configure and implement 'TReportCourseCompletion' support classes.

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
#define TTYPENAME   TReportCourseCompletionTYPENAME

/* Defines */
#define TDataWriter TReportCourseCompletionDataWriter
#define TData       ::aeondds::cmdrnav::TReportCourseCompletion


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
#define TTYPENAME   TReportCourseCompletionTYPENAME

/* Defines */
#define TDataReader TReportCourseCompletionDataReader
#define TDataSeq    TReportCourseCompletionSeq
#define TData       ::aeondds::cmdrnav::TReportCourseCompletion


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
#define TTYPENAME    TReportCourseCompletionTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TReportCourseCompletionPlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TReportCourseCompletionPlugin_delete

/* Defines */
#define TTypeSupport TReportCourseCompletionTypeSupport
#define TData        ::aeondds::cmdrnav::TReportCourseCompletion
#define TDataReader  TReportCourseCompletionDataReader
#define TDataWriter  TReportCourseCompletionDataWriter
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

   Configure and implement 'TReportWaypointReached' support classes.

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
#define TTYPENAME   TReportWaypointReachedTYPENAME

/* Defines */
#define TDataWriter TReportWaypointReachedDataWriter
#define TData       ::aeondds::cmdrnav::TReportWaypointReached


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
#define TTYPENAME   TReportWaypointReachedTYPENAME

/* Defines */
#define TDataReader TReportWaypointReachedDataReader
#define TDataSeq    TReportWaypointReachedSeq
#define TData       ::aeondds::cmdrnav::TReportWaypointReached


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
#define TTYPENAME    TReportWaypointReachedTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TReportWaypointReachedPlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TReportWaypointReachedPlugin_delete

/* Defines */
#define TTypeSupport TReportWaypointReachedTypeSupport
#define TData        ::aeondds::cmdrnav::TReportWaypointReached
#define TDataReader  TReportWaypointReachedDataReader
#define TDataWriter  TReportWaypointReachedDataWriter
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

   Configure and implement 'TReportModeShift' support classes.

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
#define TTYPENAME   TReportModeShiftTYPENAME

/* Defines */
#define TDataWriter TReportModeShiftDataWriter
#define TData       ::aeondds::cmdrnav::TReportModeShift


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
#define TTYPENAME   TReportModeShiftTYPENAME

/* Defines */
#define TDataReader TReportModeShiftDataReader
#define TDataSeq    TReportModeShiftSeq
#define TData       ::aeondds::cmdrnav::TReportModeShift


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
#define TTYPENAME    TReportModeShiftTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TReportModeShiftPlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TReportModeShiftPlugin_delete

/* Defines */
#define TTypeSupport TReportModeShiftTypeSupport
#define TData        ::aeondds::cmdrnav::TReportModeShift
#define TDataReader  TReportModeShiftDataReader
#define TDataWriter  TReportModeShiftDataWriter
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

   Configure and implement 'TReportSystemFailure' support classes.

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
#define TTYPENAME   TReportSystemFailureTYPENAME

/* Defines */
#define TDataWriter TReportSystemFailureDataWriter
#define TData       ::aeondds::cmdrnav::TReportSystemFailure


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
#define TTYPENAME   TReportSystemFailureTYPENAME

/* Defines */
#define TDataReader TReportSystemFailureDataReader
#define TDataSeq    TReportSystemFailureSeq
#define TData       ::aeondds::cmdrnav::TReportSystemFailure


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
#define TTYPENAME    TReportSystemFailureTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TReportSystemFailurePlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TReportSystemFailurePlugin_delete

/* Defines */
#define TTypeSupport TReportSystemFailureTypeSupport
#define TData        ::aeondds::cmdrnav::TReportSystemFailure
#define TDataReader  TReportSystemFailureDataReader
#define TDataWriter  TReportSystemFailureDataWriter
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

   Configure and implement 'TReportStatusResponse' support classes.

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
#define TTYPENAME   TReportStatusResponseTYPENAME

/* Defines */
#define TDataWriter TReportStatusResponseDataWriter
#define TData       ::aeondds::cmdrnav::TReportStatusResponse


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
#define TTYPENAME   TReportStatusResponseTYPENAME

/* Defines */
#define TDataReader TReportStatusResponseDataReader
#define TDataSeq    TReportStatusResponseSeq
#define TData       ::aeondds::cmdrnav::TReportStatusResponse


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
#define TTYPENAME    TReportStatusResponseTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TReportStatusResponsePlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TReportStatusResponsePlugin_delete

/* Defines */
#define TTypeSupport TReportStatusResponseTypeSupport
#define TData        ::aeondds::cmdrnav::TReportStatusResponse
#define TDataReader  TReportStatusResponseDataReader
#define TDataWriter  TReportStatusResponseDataWriter
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

   Configure and implement 'TReportUnion' support classes.

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
#define TTYPENAME   TReportUnionTYPENAME

/* Defines */
#define TDataWriter TReportUnionDataWriter
#define TData       ::aeondds::cmdrnav::TReportUnion


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
#define TTYPENAME   TReportUnionTYPENAME

/* Defines */
#define TDataReader TReportUnionDataReader
#define TDataSeq    TReportUnionSeq
#define TData       ::aeondds::cmdrnav::TReportUnion


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
#define TTYPENAME    TReportUnionTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TReportUnionPlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TReportUnionPlugin_delete

/* Defines */
#define TTypeSupport TReportUnionTypeSupport
#define TData        ::aeondds::cmdrnav::TReportUnion
#define TDataReader  TReportUnionDataReader
#define TDataWriter  TReportUnionDataWriter
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

   Configure and implement 'TReport' support classes.

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
#define TTYPENAME   TReportTYPENAME

/* Defines */
#define TDataWriter TReportDataWriter
#define TData       ::aeondds::cmdrnav::TReport


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
#define TTYPENAME   TReportTYPENAME

/* Defines */
#define TDataReader TReportDataReader
#define TDataSeq    TReportSeq
#define TData       ::aeondds::cmdrnav::TReport


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
#define TTYPENAME    TReportTYPENAME
#define TPlugin_new  ::aeondds::cmdrnav::TReportPlugin_new
#define TPlugin_delete  ::aeondds::cmdrnav::TReportPlugin_delete

/* Defines */
#define TTypeSupport TReportTypeSupport
#define TData        ::aeondds::cmdrnav::TReport
#define TDataReader  TReportDataReader
#define TDataWriter  TReportDataWriter
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



} /* namespace cmdrnav */

} /* namespace aeondds */
