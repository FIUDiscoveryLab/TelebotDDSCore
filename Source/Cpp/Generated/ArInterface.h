
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ArInterface.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ArInterface_1278635152_h
#define ArInterface_1278635152_h

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

namespace arinterface{
             
static const char * TOPIC_AR_NAVDATA_DEMO = "NavdataDemo";             
static const char * TOPIC_AR_NAVDATA_TIME = "NavdataTime";             
static const char * TOPIC_AR_NAVDATA_RAW_MEASURES = "NavdataRawMeasures";             
static const char * TOPIC_AR_NAVDATA_PWM = "NavdataPwm";             
static const char * TOPIC_AR_NAVDATA_ALTITUDE = "NavdataAltitude";             
static const char * TOPIC_AR_NAVDATA_PRESSURE_RAW = "NavdataPressureRaw";             
static const char * TOPIC_AR_NAVDATA_MAGNETO = "NavdataMagneto";             
static const char * TOPIC_AR_NAVDATA_WIFI = "NavdataWifi";
#define aeondds_arinterface_TVec3f_LAST_MEMBER_ID 2
        
extern const char *TVec3fTYPENAME;
        


#ifdef __cplusplus
    struct TVec3fSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TVec3fTypeSupport;
    class TVec3fDataWriter;
    class TVec3fDataReader;
#endif

#endif

            
    
class TVec3f                                        
{
public:            
#ifdef __cplusplus
    typedef struct TVec3fSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TVec3fTypeSupport TypeSupport;
    typedef TVec3fDataWriter DataWriter;
    typedef TVec3fDataReader DataReader;
#endif

#endif
    
    DDS_Float  x;

    DDS_Float  y;

    DDS_Float  z;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TVec3f_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TVec3fSeq, TVec3f);
        
NDDSUSERDllExport
RTIBool TVec3f_initialize(
        TVec3f* self);
        
NDDSUSERDllExport
RTIBool TVec3f_initialize_ex(
        TVec3f* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TVec3f_initialize_w_params(
        TVec3f* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TVec3f_finalize(
        TVec3f* self);
                        
NDDSUSERDllExport
void TVec3f_finalize_ex(
        TVec3f* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TVec3f_finalize_w_params(
        TVec3f* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TVec3f_finalize_optional_members(
        TVec3f* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TVec3f_copy(
        TVec3f* dst,
        const TVec3f* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_arinterface_TNavdataDemo_LAST_MEMBER_ID 8
        
extern const char *TNavdataDemoTYPENAME;
        


#ifdef __cplusplus
    struct TNavdataDemoSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavdataDemoTypeSupport;
    class TNavdataDemoDataWriter;
    class TNavdataDemoDataReader;
#endif

#endif

            
    
class TNavdataDemo                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavdataDemoSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavdataDemoTypeSupport TypeSupport;
    typedef TNavdataDemoDataWriter DataWriter;
    typedef TNavdataDemoDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedLong  controlState;

    DDS_UnsignedLong  batteryPercentage;

    DDS_Float  theta;

    DDS_Float  phi;

    DDS_Float  psi;

    DDS_Long  altitude;

    DDS_Float  vx;

    DDS_Float  vy;

    DDS_Float  vz;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavdataDemo_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavdataDemoSeq, TNavdataDemo);
        
NDDSUSERDllExport
RTIBool TNavdataDemo_initialize(
        TNavdataDemo* self);
        
NDDSUSERDllExport
RTIBool TNavdataDemo_initialize_ex(
        TNavdataDemo* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavdataDemo_initialize_w_params(
        TNavdataDemo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavdataDemo_finalize(
        TNavdataDemo* self);
                        
NDDSUSERDllExport
void TNavdataDemo_finalize_ex(
        TNavdataDemo* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavdataDemo_finalize_w_params(
        TNavdataDemo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavdataDemo_finalize_optional_members(
        TNavdataDemo* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavdataDemo_copy(
        TNavdataDemo* dst,
        const TNavdataDemo* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_arinterface_TNavdataTime_LAST_MEMBER_ID 0
        
extern const char *TNavdataTimeTYPENAME;
        


#ifdef __cplusplus
    struct TNavdataTimeSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavdataTimeTypeSupport;
    class TNavdataTimeDataWriter;
    class TNavdataTimeDataReader;
#endif

#endif

            
    
class TNavdataTime                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavdataTimeSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavdataTimeTypeSupport TypeSupport;
    typedef TNavdataTimeDataWriter DataWriter;
    typedef TNavdataTimeDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedLong  timestamp;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavdataTime_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavdataTimeSeq, TNavdataTime);
        
NDDSUSERDllExport
RTIBool TNavdataTime_initialize(
        TNavdataTime* self);
        
NDDSUSERDllExport
RTIBool TNavdataTime_initialize_ex(
        TNavdataTime* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavdataTime_initialize_w_params(
        TNavdataTime* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavdataTime_finalize(
        TNavdataTime* self);
                        
NDDSUSERDllExport
void TNavdataTime_finalize_ex(
        TNavdataTime* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavdataTime_finalize_w_params(
        TNavdataTime* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavdataTime_finalize_optional_members(
        TNavdataTime* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavdataTime_copy(
        TNavdataTime* dst,
        const TNavdataTime* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_arinterface_TNavdataRawMeasures_LAST_MEMBER_ID 3
        
extern const char *TNavdataRawMeasuresTYPENAME;
        


#ifdef __cplusplus
    struct TNavdataRawMeasuresSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavdataRawMeasuresTypeSupport;
    class TNavdataRawMeasuresDataWriter;
    class TNavdataRawMeasuresDataReader;
#endif

#endif

            
    
class TNavdataRawMeasures                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavdataRawMeasuresSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavdataRawMeasuresTypeSupport TypeSupport;
    typedef TNavdataRawMeasuresDataWriter DataWriter;
    typedef TNavdataRawMeasuresDataReader DataReader;
#endif

#endif
    
     DDS_UnsignedShortSeq  rawAccelerometer;

     DDS_ShortSeq  rawGyros;

     DDS_ShortSeq  rawGyros_xy110;

    DDS_UnsignedLong  rawBatteryVoltage;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavdataRawMeasures_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavdataRawMeasuresSeq, TNavdataRawMeasures);
        
NDDSUSERDllExport
RTIBool TNavdataRawMeasures_initialize(
        TNavdataRawMeasures* self);
        
NDDSUSERDllExport
RTIBool TNavdataRawMeasures_initialize_ex(
        TNavdataRawMeasures* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavdataRawMeasures_initialize_w_params(
        TNavdataRawMeasures* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavdataRawMeasures_finalize(
        TNavdataRawMeasures* self);
                        
NDDSUSERDllExport
void TNavdataRawMeasures_finalize_ex(
        TNavdataRawMeasures* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavdataRawMeasures_finalize_w_params(
        TNavdataRawMeasures* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavdataRawMeasures_finalize_optional_members(
        TNavdataRawMeasures* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavdataRawMeasures_copy(
        TNavdataRawMeasures* dst,
        const TNavdataRawMeasures* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_arinterface_TNavdataPwm_LAST_MEMBER_ID 11
        
extern const char *TNavdataPwmTYPENAME;
        


#ifdef __cplusplus
    struct TNavdataPwmSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavdataPwmTypeSupport;
    class TNavdataPwmDataWriter;
    class TNavdataPwmDataReader;
#endif

#endif

            
    
class TNavdataPwm                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavdataPwmSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavdataPwmTypeSupport TypeSupport;
    typedef TNavdataPwmDataWriter DataWriter;
    typedef TNavdataPwmDataReader DataReader;
#endif

#endif
    
    DDS_Octet  motor1;

    DDS_Octet  motor2;

    DDS_Octet  motor3;

    DDS_Octet  motor4;

    DDS_Octet  satMotor1;

    DDS_Octet  satMotor2;

    DDS_Octet  satMotor3;

    DDS_Octet  satMotor4;

    DDS_UnsignedShort  currentMotor1;

    DDS_UnsignedShort  currentMotor2;

    DDS_UnsignedShort  currentMotor3;

    DDS_UnsignedShort  currentMotor4;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavdataPwm_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavdataPwmSeq, TNavdataPwm);
        
NDDSUSERDllExport
RTIBool TNavdataPwm_initialize(
        TNavdataPwm* self);
        
NDDSUSERDllExport
RTIBool TNavdataPwm_initialize_ex(
        TNavdataPwm* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavdataPwm_initialize_w_params(
        TNavdataPwm* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavdataPwm_finalize(
        TNavdataPwm* self);
                        
NDDSUSERDllExport
void TNavdataPwm_finalize_ex(
        TNavdataPwm* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavdataPwm_finalize_w_params(
        TNavdataPwm* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavdataPwm_finalize_optional_members(
        TNavdataPwm* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavdataPwm_copy(
        TNavdataPwm* dst,
        const TNavdataPwm* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_arinterface_TNavdataAltitude_LAST_MEMBER_ID 3
        
extern const char *TNavdataAltitudeTYPENAME;
        


#ifdef __cplusplus
    struct TNavdataAltitudeSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavdataAltitudeTypeSupport;
    class TNavdataAltitudeDataWriter;
    class TNavdataAltitudeDataReader;
#endif

#endif

            
    
class TNavdataAltitude                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavdataAltitudeSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavdataAltitudeTypeSupport TypeSupport;
    typedef TNavdataAltitudeDataWriter DataWriter;
    typedef TNavdataAltitudeDataReader DataReader;
#endif

#endif
    
    DDS_Long  altitudeVision;

    DDS_Float  altitudeVz;

    DDS_Long  altitudeRef;

    DDS_Long  altitudeRaw;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavdataAltitude_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavdataAltitudeSeq, TNavdataAltitude);
        
NDDSUSERDllExport
RTIBool TNavdataAltitude_initialize(
        TNavdataAltitude* self);
        
NDDSUSERDllExport
RTIBool TNavdataAltitude_initialize_ex(
        TNavdataAltitude* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavdataAltitude_initialize_w_params(
        TNavdataAltitude* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavdataAltitude_finalize(
        TNavdataAltitude* self);
                        
NDDSUSERDllExport
void TNavdataAltitude_finalize_ex(
        TNavdataAltitude* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavdataAltitude_finalize_w_params(
        TNavdataAltitude* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavdataAltitude_finalize_optional_members(
        TNavdataAltitude* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavdataAltitude_copy(
        TNavdataAltitude* dst,
        const TNavdataAltitude* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_arinterface_TNavdataPressureRaw_LAST_MEMBER_ID 3
        
extern const char *TNavdataPressureRawTYPENAME;
        


#ifdef __cplusplus
    struct TNavdataPressureRawSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavdataPressureRawTypeSupport;
    class TNavdataPressureRawDataWriter;
    class TNavdataPressureRawDataReader;
#endif

#endif

            
    
class TNavdataPressureRaw                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavdataPressureRawSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavdataPressureRawTypeSupport TypeSupport;
    typedef TNavdataPressureRawDataWriter DataWriter;
    typedef TNavdataPressureRawDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedLong  uP;

    DDS_UnsignedShort  uT;

    DDS_UnsignedLong  temperatureMeas;

    DDS_UnsignedLong  pressureMeas;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavdataPressureRaw_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavdataPressureRawSeq, TNavdataPressureRaw);
        
NDDSUSERDllExport
RTIBool TNavdataPressureRaw_initialize(
        TNavdataPressureRaw* self);
        
NDDSUSERDllExport
RTIBool TNavdataPressureRaw_initialize_ex(
        TNavdataPressureRaw* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavdataPressureRaw_initialize_w_params(
        TNavdataPressureRaw* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavdataPressureRaw_finalize(
        TNavdataPressureRaw* self);
                        
NDDSUSERDllExport
void TNavdataPressureRaw_finalize_ex(
        TNavdataPressureRaw* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavdataPressureRaw_finalize_w_params(
        TNavdataPressureRaw* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavdataPressureRaw_finalize_optional_members(
        TNavdataPressureRaw* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavdataPressureRaw_copy(
        TNavdataPressureRaw* dst,
        const TNavdataPressureRaw* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_arinterface_TNavdataMagneto_LAST_MEMBER_ID 5
        
extern const char *TNavdataMagnetoTYPENAME;
        


#ifdef __cplusplus
    struct TNavdataMagnetoSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavdataMagnetoTypeSupport;
    class TNavdataMagnetoDataWriter;
    class TNavdataMagnetoDataReader;
#endif

#endif

            
    
class TNavdataMagneto                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavdataMagnetoSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavdataMagnetoTypeSupport TypeSupport;
    typedef TNavdataMagnetoDataWriter DataWriter;
    typedef TNavdataMagnetoDataReader DataReader;
#endif

#endif
    
    DDS_Short  mx;

    DDS_Short  my;

    DDS_Short  mz;

    aeondds::arinterface::TVec3f  raw;

    aeondds::arinterface::TVec3f  rectified;

    aeondds::arinterface::TVec3f  offset;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavdataMagneto_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavdataMagnetoSeq, TNavdataMagneto);
        
NDDSUSERDllExport
RTIBool TNavdataMagneto_initialize(
        TNavdataMagneto* self);
        
NDDSUSERDllExport
RTIBool TNavdataMagneto_initialize_ex(
        TNavdataMagneto* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavdataMagneto_initialize_w_params(
        TNavdataMagneto* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavdataMagneto_finalize(
        TNavdataMagneto* self);
                        
NDDSUSERDllExport
void TNavdataMagneto_finalize_ex(
        TNavdataMagneto* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavdataMagneto_finalize_w_params(
        TNavdataMagneto* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavdataMagneto_finalize_optional_members(
        TNavdataMagneto* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavdataMagneto_copy(
        TNavdataMagneto* dst,
        const TNavdataMagneto* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_arinterface_TNavdataWifi_LAST_MEMBER_ID 0
        
extern const char *TNavdataWifiTYPENAME;
        


#ifdef __cplusplus
    struct TNavdataWifiSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavdataWifiTypeSupport;
    class TNavdataWifiDataWriter;
    class TNavdataWifiDataReader;
#endif

#endif

            
    
class TNavdataWifi                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavdataWifiSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavdataWifiTypeSupport TypeSupport;
    typedef TNavdataWifiDataWriter DataWriter;
    typedef TNavdataWifiDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedLong  linkQuality;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavdataWifi_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavdataWifiSeq, TNavdataWifi);
        
NDDSUSERDllExport
RTIBool TNavdataWifi_initialize(
        TNavdataWifi* self);
        
NDDSUSERDllExport
RTIBool TNavdataWifi_initialize_ex(
        TNavdataWifi* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavdataWifi_initialize_w_params(
        TNavdataWifi* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavdataWifi_finalize(
        TNavdataWifi* self);
                        
NDDSUSERDllExport
void TNavdataWifi_finalize_ex(
        TNavdataWifi* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavdataWifi_finalize_w_params(
        TNavdataWifi* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavdataWifi_finalize_optional_members(
        TNavdataWifi* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavdataWifi_copy(
        TNavdataWifi* dst,
        const TNavdataWifi* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arinterface */

} /* namespace aeondds */


#endif /* ArInterface_1278635152_h */
