
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ArInterface.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "ArInterfaceSupport.h"
#include "ArInterfacePlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace aeondds{

namespace arinterface{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'TVec3f' support classes.

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
#define TTYPENAME   TVec3fTYPENAME

/* Defines */
#define TDataWriter TVec3fDataWriter
#define TData       ::aeondds::arinterface::TVec3f


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
#define TTYPENAME   TVec3fTYPENAME

/* Defines */
#define TDataReader TVec3fDataReader
#define TDataSeq    TVec3fSeq
#define TData       ::aeondds::arinterface::TVec3f


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
#define TTYPENAME    TVec3fTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TVec3fPlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TVec3fPlugin_delete

/* Defines */
#define TTypeSupport TVec3fTypeSupport
#define TData        ::aeondds::arinterface::TVec3f
#define TDataReader  TVec3fDataReader
#define TDataWriter  TVec3fDataWriter
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

   Configure and implement 'TNavdataDemo' support classes.

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
#define TTYPENAME   TNavdataDemoTYPENAME

/* Defines */
#define TDataWriter TNavdataDemoDataWriter
#define TData       ::aeondds::arinterface::TNavdataDemo


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
#define TTYPENAME   TNavdataDemoTYPENAME

/* Defines */
#define TDataReader TNavdataDemoDataReader
#define TDataSeq    TNavdataDemoSeq
#define TData       ::aeondds::arinterface::TNavdataDemo


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
#define TTYPENAME    TNavdataDemoTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TNavdataDemoPlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TNavdataDemoPlugin_delete

/* Defines */
#define TTypeSupport TNavdataDemoTypeSupport
#define TData        ::aeondds::arinterface::TNavdataDemo
#define TDataReader  TNavdataDemoDataReader
#define TDataWriter  TNavdataDemoDataWriter
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

   Configure and implement 'TNavdataTime' support classes.

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
#define TTYPENAME   TNavdataTimeTYPENAME

/* Defines */
#define TDataWriter TNavdataTimeDataWriter
#define TData       ::aeondds::arinterface::TNavdataTime


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
#define TTYPENAME   TNavdataTimeTYPENAME

/* Defines */
#define TDataReader TNavdataTimeDataReader
#define TDataSeq    TNavdataTimeSeq
#define TData       ::aeondds::arinterface::TNavdataTime


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
#define TTYPENAME    TNavdataTimeTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TNavdataTimePlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TNavdataTimePlugin_delete

/* Defines */
#define TTypeSupport TNavdataTimeTypeSupport
#define TData        ::aeondds::arinterface::TNavdataTime
#define TDataReader  TNavdataTimeDataReader
#define TDataWriter  TNavdataTimeDataWriter
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

   Configure and implement 'TNavdataRawMeasures' support classes.

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
#define TTYPENAME   TNavdataRawMeasuresTYPENAME

/* Defines */
#define TDataWriter TNavdataRawMeasuresDataWriter
#define TData       ::aeondds::arinterface::TNavdataRawMeasures


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
#define TTYPENAME   TNavdataRawMeasuresTYPENAME

/* Defines */
#define TDataReader TNavdataRawMeasuresDataReader
#define TDataSeq    TNavdataRawMeasuresSeq
#define TData       ::aeondds::arinterface::TNavdataRawMeasures


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
#define TTYPENAME    TNavdataRawMeasuresTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TNavdataRawMeasuresPlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TNavdataRawMeasuresPlugin_delete

/* Defines */
#define TTypeSupport TNavdataRawMeasuresTypeSupport
#define TData        ::aeondds::arinterface::TNavdataRawMeasures
#define TDataReader  TNavdataRawMeasuresDataReader
#define TDataWriter  TNavdataRawMeasuresDataWriter
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

   Configure and implement 'TNavdataPwm' support classes.

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
#define TTYPENAME   TNavdataPwmTYPENAME

/* Defines */
#define TDataWriter TNavdataPwmDataWriter
#define TData       ::aeondds::arinterface::TNavdataPwm


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
#define TTYPENAME   TNavdataPwmTYPENAME

/* Defines */
#define TDataReader TNavdataPwmDataReader
#define TDataSeq    TNavdataPwmSeq
#define TData       ::aeondds::arinterface::TNavdataPwm


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
#define TTYPENAME    TNavdataPwmTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TNavdataPwmPlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TNavdataPwmPlugin_delete

/* Defines */
#define TTypeSupport TNavdataPwmTypeSupport
#define TData        ::aeondds::arinterface::TNavdataPwm
#define TDataReader  TNavdataPwmDataReader
#define TDataWriter  TNavdataPwmDataWriter
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

   Configure and implement 'TNavdataAltitude' support classes.

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
#define TTYPENAME   TNavdataAltitudeTYPENAME

/* Defines */
#define TDataWriter TNavdataAltitudeDataWriter
#define TData       ::aeondds::arinterface::TNavdataAltitude


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
#define TTYPENAME   TNavdataAltitudeTYPENAME

/* Defines */
#define TDataReader TNavdataAltitudeDataReader
#define TDataSeq    TNavdataAltitudeSeq
#define TData       ::aeondds::arinterface::TNavdataAltitude


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
#define TTYPENAME    TNavdataAltitudeTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TNavdataAltitudePlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TNavdataAltitudePlugin_delete

/* Defines */
#define TTypeSupport TNavdataAltitudeTypeSupport
#define TData        ::aeondds::arinterface::TNavdataAltitude
#define TDataReader  TNavdataAltitudeDataReader
#define TDataWriter  TNavdataAltitudeDataWriter
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

   Configure and implement 'TNavdataPressureRaw' support classes.

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
#define TTYPENAME   TNavdataPressureRawTYPENAME

/* Defines */
#define TDataWriter TNavdataPressureRawDataWriter
#define TData       ::aeondds::arinterface::TNavdataPressureRaw


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
#define TTYPENAME   TNavdataPressureRawTYPENAME

/* Defines */
#define TDataReader TNavdataPressureRawDataReader
#define TDataSeq    TNavdataPressureRawSeq
#define TData       ::aeondds::arinterface::TNavdataPressureRaw


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
#define TTYPENAME    TNavdataPressureRawTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TNavdataPressureRawPlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TNavdataPressureRawPlugin_delete

/* Defines */
#define TTypeSupport TNavdataPressureRawTypeSupport
#define TData        ::aeondds::arinterface::TNavdataPressureRaw
#define TDataReader  TNavdataPressureRawDataReader
#define TDataWriter  TNavdataPressureRawDataWriter
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

   Configure and implement 'TNavdataMagneto' support classes.

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
#define TTYPENAME   TNavdataMagnetoTYPENAME

/* Defines */
#define TDataWriter TNavdataMagnetoDataWriter
#define TData       ::aeondds::arinterface::TNavdataMagneto


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
#define TTYPENAME   TNavdataMagnetoTYPENAME

/* Defines */
#define TDataReader TNavdataMagnetoDataReader
#define TDataSeq    TNavdataMagnetoSeq
#define TData       ::aeondds::arinterface::TNavdataMagneto


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
#define TTYPENAME    TNavdataMagnetoTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TNavdataMagnetoPlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TNavdataMagnetoPlugin_delete

/* Defines */
#define TTypeSupport TNavdataMagnetoTypeSupport
#define TData        ::aeondds::arinterface::TNavdataMagneto
#define TDataReader  TNavdataMagnetoDataReader
#define TDataWriter  TNavdataMagnetoDataWriter
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

   Configure and implement 'TNavdataWifi' support classes.

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
#define TTYPENAME   TNavdataWifiTYPENAME

/* Defines */
#define TDataWriter TNavdataWifiDataWriter
#define TData       ::aeondds::arinterface::TNavdataWifi


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
#define TTYPENAME   TNavdataWifiTYPENAME

/* Defines */
#define TDataReader TNavdataWifiDataReader
#define TDataSeq    TNavdataWifiSeq
#define TData       ::aeondds::arinterface::TNavdataWifi


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
#define TTYPENAME    TNavdataWifiTYPENAME
#define TPlugin_new  ::aeondds::arinterface::TNavdataWifiPlugin_new
#define TPlugin_delete  ::aeondds::arinterface::TNavdataWifiPlugin_delete

/* Defines */
#define TTypeSupport TNavdataWifiTypeSupport
#define TData        ::aeondds::arinterface::TNavdataWifi
#define TDataReader  TNavdataWifiDataReader
#define TDataWriter  TNavdataWifiDataWriter
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



} /* namespace arinterface */

} /* namespace aeondds */
