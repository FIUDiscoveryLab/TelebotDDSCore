
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QuickLooks.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef QuickLooks_198687349_h
#define QuickLooks_198687349_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


namespace aeondds{

namespace quicklooks{
             
static const char * TOPIC_QUICKLOOKS_VEHICLE_STREAM = "VehicleDataStream";             
static const char * TOPIC_QUICKLOOKS_VIEWER_STREAM = "ViewerDataStream";
#define aeondds_quicklooks_TSensorReport_LAST_MEMBER_ID 42
        
extern const char *TSensorReportTYPENAME;
        


#ifdef __cplusplus
    struct TSensorReportSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TSensorReportTypeSupport;
    class TSensorReportDataWriter;
    class TSensorReportDataReader;
#endif

#endif

            
    
class TSensorReport                                        
{
public:            
#ifdef __cplusplus
    typedef struct TSensorReportSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TSensorReportTypeSupport TypeSupport;
    typedef TSensorReportDataWriter DataWriter;
    typedef TSensorReportDataReader DataReader;
#endif

#endif
    
    DDS_Double  start_utc;

    DDS_Double  stop_utc;

    DDS_Double  mid_utc;

    DDS_Double  longitude;

    DDS_Double  latitude;

    DDS_Double  pressure;

    DDS_Double  altitude;

    DDS_Double  temperature;

    DDS_Double  relHumidity;

    DDS_Double  o3_ppbv;

    DDS_Double  co_ppbv;

    DDS_Double  so2_ppbv;

    DDS_Double  no2_ppbv;

    DDS_Double  bscat450;

    DDS_Double  bscat550;

    DDS_Double  bscat700;

    DDS_Double  bkscat450;

    DDS_Double  bkscat550;

    DDS_Double  bkscat700;

    DDS_Double  pCounts;

    DDS_Double  nDp03_0_4;

    DDS_Double  nDp04_0_491;

    DDS_Double  nDp0491_0_6;

    DDS_Double  nDp06_0_7;

    DDS_Double  dDp0700_0_8;

    DDS_Double  dDp08_plus;

    DDS_Double  BC_370;

    DDS_Double  BC_470;

    DDS_Double  BC_520;

    DDS_Double  BC_590;

    DDS_Double  BC_660;

    DDS_Double  BC_880;

    DDS_Double  BC_950;

    DDS_Double  flight;

    DDS_Double  spiral;

    DDS_Double  raw_temperature;

    DDS_Double  raw_relHumidity;

    DDS_Double  raw_bscat450;

    DDS_Double  raw_bscat550;

    DDS_Double  raw_bscat700;

    DDS_Double  raw_bkscat450;

    DDS_Double  raw_bkscat550;

    DDS_Double  raw_bkscat700;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TSensorReport_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TSensorReportSeq, TSensorReport);
        
NDDSUSERDllExport
RTIBool TSensorReport_initialize(
        TSensorReport* self);
        
NDDSUSERDllExport
RTIBool TSensorReport_initialize_ex(
        TSensorReport* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TSensorReport_initialize_w_params(
        TSensorReport* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TSensorReport_finalize(
        TSensorReport* self);
                        
NDDSUSERDllExport
void TSensorReport_finalize_ex(
        TSensorReport* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TSensorReport_finalize_w_params(
        TSensorReport* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TSensorReport_finalize_optional_members(
        TSensorReport* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TSensorReport_copy(
        TSensorReport* dst,
        const TSensorReport* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_quicklooks_TDiscoverAQReport_LAST_MEMBER_ID 5
        
extern const char *TDiscoverAQReportTYPENAME;
        


#ifdef __cplusplus
    struct TDiscoverAQReportSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TDiscoverAQReportTypeSupport;
    class TDiscoverAQReportDataWriter;
    class TDiscoverAQReportDataReader;
#endif

#endif

            
    
class TDiscoverAQReport                                        
{
public:            
#ifdef __cplusplus
    typedef struct TDiscoverAQReportSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TDiscoverAQReportTypeSupport TypeSupport;
    typedef TDiscoverAQReportDataWriter DataWriter;
    typedef TDiscoverAQReportDataReader DataReader;
#endif

#endif
    
    DDS_Long  vehicleId;

    DDS_Long  timestamp;

    DDS_Double  longitude;

    DDS_Double  latitude;

    DDS_Double  altitude;

    aeondds::quicklooks::TSensorReport  data;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TDiscoverAQReport_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TDiscoverAQReportSeq, TDiscoverAQReport);
        
NDDSUSERDllExport
RTIBool TDiscoverAQReport_initialize(
        TDiscoverAQReport* self);
        
NDDSUSERDllExport
RTIBool TDiscoverAQReport_initialize_ex(
        TDiscoverAQReport* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TDiscoverAQReport_initialize_w_params(
        TDiscoverAQReport* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TDiscoverAQReport_finalize(
        TDiscoverAQReport* self);
                        
NDDSUSERDllExport
void TDiscoverAQReport_finalize_ex(
        TDiscoverAQReport* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TDiscoverAQReport_finalize_w_params(
        TDiscoverAQReport* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TDiscoverAQReport_finalize_optional_members(
        TDiscoverAQReport* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TDiscoverAQReport_copy(
        TDiscoverAQReport* dst,
        const TDiscoverAQReport* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace quicklooks */

} /* namespace aeondds */


#endif /* QuickLooks_198687349_h */
