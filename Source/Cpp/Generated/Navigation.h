
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Navigation.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Navigation_832035966_h
#define Navigation_832035966_h

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

namespace navigation{
             
static const DDS_Long MAX_COURSE_ID_LENGTH = 32;             
static const DDS_Long MAX_WAYPOINTS = 1000;
#define aeondds_navigation_TWaypoint_LAST_MEMBER_ID 4
        
extern const char *TWaypointTYPENAME;
        


#ifdef __cplusplus
    struct TWaypointSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TWaypointTypeSupport;
    class TWaypointDataWriter;
    class TWaypointDataReader;
#endif

#endif

            
    
class TWaypoint                                        
{
public:            
#ifdef __cplusplus
    typedef struct TWaypointSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TWaypointTypeSupport TypeSupport;
    typedef TWaypointDataWriter DataWriter;
    typedef TWaypointDataReader DataReader;
#endif

#endif
    
    DDS_Double  longitude;

    DDS_Double  latitude;

    DDS_Double  alt_m;

    DDS_Double  heading_rads;

    DDS_Double  acceptanceRadius_m;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TWaypoint_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TWaypointSeq, TWaypoint);
        
NDDSUSERDllExport
RTIBool TWaypoint_initialize(
        TWaypoint* self);
        
NDDSUSERDllExport
RTIBool TWaypoint_initialize_ex(
        TWaypoint* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TWaypoint_initialize_w_params(
        TWaypoint* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TWaypoint_finalize(
        TWaypoint* self);
                        
NDDSUSERDllExport
void TWaypoint_finalize_ex(
        TWaypoint* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TWaypoint_finalize_w_params(
        TWaypoint* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TWaypoint_finalize_optional_members(
        TWaypoint* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TWaypoint_copy(
        TWaypoint* dst,
        const TWaypoint* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_navigation_TWaypointCourse_LAST_MEMBER_ID 2
        
extern const char *TWaypointCourseTYPENAME;
        


#ifdef __cplusplus
    struct TWaypointCourseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TWaypointCourseTypeSupport;
    class TWaypointCourseDataWriter;
    class TWaypointCourseDataReader;
#endif

#endif

            
    
class TWaypointCourse                                        
{
public:            
#ifdef __cplusplus
    typedef struct TWaypointCourseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TWaypointCourseTypeSupport TypeSupport;
    typedef TWaypointCourseDataWriter DataWriter;
    typedef TWaypointCourseDataReader DataReader;
#endif

#endif
    
    char*  courseId; /* maximum length = ((aeondds::navigation::MAX_COURSE_ID_LENGTH)) */

    DDS_Long  currentWaypoint;

     aeondds::navigation::TWaypointSeq  waypoints;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TWaypointCourse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TWaypointCourseSeq, TWaypointCourse);
        
NDDSUSERDllExport
RTIBool TWaypointCourse_initialize(
        TWaypointCourse* self);
        
NDDSUSERDllExport
RTIBool TWaypointCourse_initialize_ex(
        TWaypointCourse* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TWaypointCourse_initialize_w_params(
        TWaypointCourse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TWaypointCourse_finalize(
        TWaypointCourse* self);
                        
NDDSUSERDllExport
void TWaypointCourse_finalize_ex(
        TWaypointCourse* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TWaypointCourse_finalize_w_params(
        TWaypointCourse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TWaypointCourse_finalize_optional_members(
        TWaypointCourse* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TWaypointCourse_copy(
        TWaypointCourse* dst,
        const TWaypointCourse* src);

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
 
typedef enum EModeType
{
    AUTO,
    EMERGENCYSOFT,
    EMERGENCYHARD,
    POSITIONHOLD
} EModeType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EModeType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EModeTypeSeq, EModeType);
        
NDDSUSERDllExport
RTIBool EModeType_initialize(
        EModeType* self);
        
NDDSUSERDllExport
RTIBool EModeType_initialize_ex(
        EModeType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EModeType_initialize_w_params(
        EModeType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EModeType_finalize(
        EModeType* self);
                        
NDDSUSERDllExport
void EModeType_finalize_ex(
        EModeType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EModeType_finalize_w_params(
        EModeType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EModeType_finalize_optional_members(
        EModeType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EModeType_copy(
        EModeType* dst,
        const EModeType* src);


NDDSUSERDllExport
RTIBool EModeType_getValues(EModeTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TModeChange_LAST_MEMBER_ID 0
        
extern const char *TModeChangeTYPENAME;
        


#ifdef __cplusplus
    struct TModeChangeSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TModeChangeTypeSupport;
    class TModeChangeDataWriter;
    class TModeChangeDataReader;
#endif

#endif

            
    
class TModeChange                                        
{
public:            
#ifdef __cplusplus
    typedef struct TModeChangeSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TModeChangeTypeSupport TypeSupport;
    typedef TModeChangeDataWriter DataWriter;
    typedef TModeChangeDataReader DataReader;
#endif

#endif
    
    aeondds::cmdrnav::EModeType  modeType;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TModeChange_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TModeChangeSeq, TModeChange);
        
NDDSUSERDllExport
RTIBool TModeChange_initialize(
        TModeChange* self);
        
NDDSUSERDllExport
RTIBool TModeChange_initialize_ex(
        TModeChange* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TModeChange_initialize_w_params(
        TModeChange* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TModeChange_finalize(
        TModeChange* self);
                        
NDDSUSERDllExport
void TModeChange_finalize_ex(
        TModeChange* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TModeChange_finalize_w_params(
        TModeChange* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TModeChange_finalize_optional_members(
        TModeChange* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TModeChange_copy(
        TModeChange* dst,
        const TModeChange* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TRegisterCourse_LAST_MEMBER_ID 1
        
extern const char *TRegisterCourseTYPENAME;
        


#ifdef __cplusplus
    struct TRegisterCourseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TRegisterCourseTypeSupport;
    class TRegisterCourseDataWriter;
    class TRegisterCourseDataReader;
#endif

#endif

            
    
class TRegisterCourse                                        
{
public:            
#ifdef __cplusplus
    typedef struct TRegisterCourseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TRegisterCourseTypeSupport TypeSupport;
    typedef TRegisterCourseDataWriter DataWriter;
    typedef TRegisterCourseDataReader DataReader;
#endif

#endif
    
    DDS_Long  courseId;

    aeondds::navigation::TWaypointCourse  course;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TRegisterCourse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TRegisterCourseSeq, TRegisterCourse);
        
NDDSUSERDllExport
RTIBool TRegisterCourse_initialize(
        TRegisterCourse* self);
        
NDDSUSERDllExport
RTIBool TRegisterCourse_initialize_ex(
        TRegisterCourse* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TRegisterCourse_initialize_w_params(
        TRegisterCourse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TRegisterCourse_finalize(
        TRegisterCourse* self);
                        
NDDSUSERDllExport
void TRegisterCourse_finalize_ex(
        TRegisterCourse* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TRegisterCourse_finalize_w_params(
        TRegisterCourse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TRegisterCourse_finalize_optional_members(
        TRegisterCourse* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TRegisterCourse_copy(
        TRegisterCourse* dst,
        const TRegisterCourse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TSetCourse_LAST_MEMBER_ID 1
        
extern const char *TSetCourseTYPENAME;
        


#ifdef __cplusplus
    struct TSetCourseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TSetCourseTypeSupport;
    class TSetCourseDataWriter;
    class TSetCourseDataReader;
#endif

#endif

            
    
class TSetCourse                                        
{
public:            
#ifdef __cplusplus
    typedef struct TSetCourseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TSetCourseTypeSupport TypeSupport;
    typedef TSetCourseDataWriter DataWriter;
    typedef TSetCourseDataReader DataReader;
#endif

#endif
    
    DDS_Long  courseId;

    DDS_Long  startIndex;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TSetCourse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TSetCourseSeq, TSetCourse);
        
NDDSUSERDllExport
RTIBool TSetCourse_initialize(
        TSetCourse* self);
        
NDDSUSERDllExport
RTIBool TSetCourse_initialize_ex(
        TSetCourse* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TSetCourse_initialize_w_params(
        TSetCourse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TSetCourse_finalize(
        TSetCourse* self);
                        
NDDSUSERDllExport
void TSetCourse_finalize_ex(
        TSetCourse* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TSetCourse_finalize_w_params(
        TSetCourse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TSetCourse_finalize_optional_members(
        TSetCourse* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TSetCourse_copy(
        TSetCourse* dst,
        const TSetCourse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EReportType
{
    COURSECOMPLETION,
    WAYPOINTREACHED,
    MODESHIFT,
    SYSTEMFAILURE,
    STATUSRESPONSE
} EReportType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EReportType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EReportTypeSeq, EReportType);
        
NDDSUSERDllExport
RTIBool EReportType_initialize(
        EReportType* self);
        
NDDSUSERDllExport
RTIBool EReportType_initialize_ex(
        EReportType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EReportType_initialize_w_params(
        EReportType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EReportType_finalize(
        EReportType* self);
                        
NDDSUSERDllExport
void EReportType_finalize_ex(
        EReportType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EReportType_finalize_w_params(
        EReportType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EReportType_finalize_optional_members(
        EReportType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EReportType_copy(
        EReportType* dst,
        const EReportType* src);


NDDSUSERDllExport
RTIBool EReportType_getValues(EReportTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EStatus
{
    FAILURE,
    SUCCESS
} EStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EStatusSeq, EStatus);
        
NDDSUSERDllExport
RTIBool EStatus_initialize(
        EStatus* self);
        
NDDSUSERDllExport
RTIBool EStatus_initialize_ex(
        EStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EStatus_initialize_w_params(
        EStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EStatus_finalize(
        EStatus* self);
                        
NDDSUSERDllExport
void EStatus_finalize_ex(
        EStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EStatus_finalize_w_params(
        EStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EStatus_finalize_optional_members(
        EStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EStatus_copy(
        EStatus* dst,
        const EStatus* src);


NDDSUSERDllExport
RTIBool EStatus_getValues(EStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum ENavigatorSubsystems
{
    AUTOPILOT,
    CONTROLLER,
    HARDWARE
} ENavigatorSubsystems;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ENavigatorSubsystems_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ENavigatorSubsystemsSeq, ENavigatorSubsystems);
        
NDDSUSERDllExport
RTIBool ENavigatorSubsystems_initialize(
        ENavigatorSubsystems* self);
        
NDDSUSERDllExport
RTIBool ENavigatorSubsystems_initialize_ex(
        ENavigatorSubsystems* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ENavigatorSubsystems_initialize_w_params(
        ENavigatorSubsystems* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ENavigatorSubsystems_finalize(
        ENavigatorSubsystems* self);
                        
NDDSUSERDllExport
void ENavigatorSubsystems_finalize_ex(
        ENavigatorSubsystems* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ENavigatorSubsystems_finalize_w_params(
        ENavigatorSubsystems* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ENavigatorSubsystems_finalize_optional_members(
        ENavigatorSubsystems* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ENavigatorSubsystems_copy(
        ENavigatorSubsystems* dst,
        const ENavigatorSubsystems* src);


NDDSUSERDllExport
RTIBool ENavigatorSubsystems_getValues(ENavigatorSubsystemsSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TReportCourseCompletion_LAST_MEMBER_ID 1
        
extern const char *TReportCourseCompletionTYPENAME;
        


#ifdef __cplusplus
    struct TReportCourseCompletionSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TReportCourseCompletionTypeSupport;
    class TReportCourseCompletionDataWriter;
    class TReportCourseCompletionDataReader;
#endif

#endif

            
    
class TReportCourseCompletion                                        
{
public:            
#ifdef __cplusplus
    typedef struct TReportCourseCompletionSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TReportCourseCompletionTypeSupport TypeSupport;
    typedef TReportCourseCompletionDataWriter DataWriter;
    typedef TReportCourseCompletionDataReader DataReader;
#endif

#endif
    
    aeondds::cmdrnav::EStatus  status;

    DDS_Long  courseId;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TReportCourseCompletion_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TReportCourseCompletionSeq, TReportCourseCompletion);
        
NDDSUSERDllExport
RTIBool TReportCourseCompletion_initialize(
        TReportCourseCompletion* self);
        
NDDSUSERDllExport
RTIBool TReportCourseCompletion_initialize_ex(
        TReportCourseCompletion* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TReportCourseCompletion_initialize_w_params(
        TReportCourseCompletion* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TReportCourseCompletion_finalize(
        TReportCourseCompletion* self);
                        
NDDSUSERDllExport
void TReportCourseCompletion_finalize_ex(
        TReportCourseCompletion* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TReportCourseCompletion_finalize_w_params(
        TReportCourseCompletion* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TReportCourseCompletion_finalize_optional_members(
        TReportCourseCompletion* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TReportCourseCompletion_copy(
        TReportCourseCompletion* dst,
        const TReportCourseCompletion* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TReportWaypointReached_LAST_MEMBER_ID 1
        
extern const char *TReportWaypointReachedTYPENAME;
        


#ifdef __cplusplus
    struct TReportWaypointReachedSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TReportWaypointReachedTypeSupport;
    class TReportWaypointReachedDataWriter;
    class TReportWaypointReachedDataReader;
#endif

#endif

            
    
class TReportWaypointReached                                        
{
public:            
#ifdef __cplusplus
    typedef struct TReportWaypointReachedSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TReportWaypointReachedTypeSupport TypeSupport;
    typedef TReportWaypointReachedDataWriter DataWriter;
    typedef TReportWaypointReachedDataReader DataReader;
#endif

#endif
    
    DDS_Long  courseId;

    DDS_Long  waypointIndex;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TReportWaypointReached_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TReportWaypointReachedSeq, TReportWaypointReached);
        
NDDSUSERDllExport
RTIBool TReportWaypointReached_initialize(
        TReportWaypointReached* self);
        
NDDSUSERDllExport
RTIBool TReportWaypointReached_initialize_ex(
        TReportWaypointReached* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TReportWaypointReached_initialize_w_params(
        TReportWaypointReached* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TReportWaypointReached_finalize(
        TReportWaypointReached* self);
                        
NDDSUSERDllExport
void TReportWaypointReached_finalize_ex(
        TReportWaypointReached* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TReportWaypointReached_finalize_w_params(
        TReportWaypointReached* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TReportWaypointReached_finalize_optional_members(
        TReportWaypointReached* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TReportWaypointReached_copy(
        TReportWaypointReached* dst,
        const TReportWaypointReached* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TReportModeShift_LAST_MEMBER_ID 0
        
extern const char *TReportModeShiftTYPENAME;
        


#ifdef __cplusplus
    struct TReportModeShiftSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TReportModeShiftTypeSupport;
    class TReportModeShiftDataWriter;
    class TReportModeShiftDataReader;
#endif

#endif

            
    
class TReportModeShift                                        
{
public:            
#ifdef __cplusplus
    typedef struct TReportModeShiftSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TReportModeShiftTypeSupport TypeSupport;
    typedef TReportModeShiftDataWriter DataWriter;
    typedef TReportModeShiftDataReader DataReader;
#endif

#endif
    
    aeondds::cmdrnav::EModeType  modeType;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TReportModeShift_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TReportModeShiftSeq, TReportModeShift);
        
NDDSUSERDllExport
RTIBool TReportModeShift_initialize(
        TReportModeShift* self);
        
NDDSUSERDllExport
RTIBool TReportModeShift_initialize_ex(
        TReportModeShift* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TReportModeShift_initialize_w_params(
        TReportModeShift* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TReportModeShift_finalize(
        TReportModeShift* self);
                        
NDDSUSERDllExport
void TReportModeShift_finalize_ex(
        TReportModeShift* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TReportModeShift_finalize_w_params(
        TReportModeShift* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TReportModeShift_finalize_optional_members(
        TReportModeShift* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TReportModeShift_copy(
        TReportModeShift* dst,
        const TReportModeShift* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TReportSystemFailure_LAST_MEMBER_ID 1
        
extern const char *TReportSystemFailureTYPENAME;
        


#ifdef __cplusplus
    struct TReportSystemFailureSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TReportSystemFailureTypeSupport;
    class TReportSystemFailureDataWriter;
    class TReportSystemFailureDataReader;
#endif

#endif

            
    
class TReportSystemFailure                                        
{
public:            
#ifdef __cplusplus
    typedef struct TReportSystemFailureSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TReportSystemFailureTypeSupport TypeSupport;
    typedef TReportSystemFailureDataWriter DataWriter;
    typedef TReportSystemFailureDataReader DataReader;
#endif

#endif
    
    aeondds::cmdrnav::ENavigatorSubsystems  subsystem;

    DDS_Boolean  isRecoverable;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TReportSystemFailure_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TReportSystemFailureSeq, TReportSystemFailure);
        
NDDSUSERDllExport
RTIBool TReportSystemFailure_initialize(
        TReportSystemFailure* self);
        
NDDSUSERDllExport
RTIBool TReportSystemFailure_initialize_ex(
        TReportSystemFailure* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TReportSystemFailure_initialize_w_params(
        TReportSystemFailure* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TReportSystemFailure_finalize(
        TReportSystemFailure* self);
                        
NDDSUSERDllExport
void TReportSystemFailure_finalize_ex(
        TReportSystemFailure* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TReportSystemFailure_finalize_w_params(
        TReportSystemFailure* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TReportSystemFailure_finalize_optional_members(
        TReportSystemFailure* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TReportSystemFailure_copy(
        TReportSystemFailure* dst,
        const TReportSystemFailure* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TReportStatusResponse_LAST_MEMBER_ID 0
        
extern const char *TReportStatusResponseTYPENAME;
        


#ifdef __cplusplus
    struct TReportStatusResponseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TReportStatusResponseTypeSupport;
    class TReportStatusResponseDataWriter;
    class TReportStatusResponseDataReader;
#endif

#endif

            
    
class TReportStatusResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct TReportStatusResponseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TReportStatusResponseTypeSupport TypeSupport;
    typedef TReportStatusResponseDataWriter DataWriter;
    typedef TReportStatusResponseDataReader DataReader;
#endif

#endif
    
    aeondds::cmdrnav::EStatus  statusResponse;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TReportStatusResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TReportStatusResponseSeq, TReportStatusResponse);
        
NDDSUSERDllExport
RTIBool TReportStatusResponse_initialize(
        TReportStatusResponse* self);
        
NDDSUSERDllExport
RTIBool TReportStatusResponse_initialize_ex(
        TReportStatusResponse* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TReportStatusResponse_initialize_w_params(
        TReportStatusResponse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TReportStatusResponse_finalize(
        TReportStatusResponse* self);
                        
NDDSUSERDllExport
void TReportStatusResponse_finalize_ex(
        TReportStatusResponse* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TReportStatusResponse_finalize_w_params(
        TReportStatusResponse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TReportStatusResponse_finalize_optional_members(
        TReportStatusResponse* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TReportStatusResponse_copy(
        TReportStatusResponse* dst,
        const TReportStatusResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *TReportUnionTYPENAME;



#ifdef __cplusplus
    struct TReportUnionSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TReportUnionTypeSupport;
    class TReportUnionDataWriter;
    class TReportUnionDataReader;
#endif

#endif


typedef struct TReportUnion {
#ifdef __cplusplus
    typedef struct TReportUnionSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TReportUnionTypeSupport TypeSupport;
    typedef TReportUnionDataWriter DataWriter;
    typedef TReportUnionDataReader DataReader;
#endif

#endif
    aeondds::cmdrnav::EReportType _d;

    struct TReportUnion_u

    {
    aeondds::cmdrnav::TReportCourseCompletion  courseCompletionReport;

    aeondds::cmdrnav::TReportWaypointReached  waypointReachedReport;

    aeondds::cmdrnav::TReportModeShift  modeShiftReport;

    aeondds::cmdrnav::TReportSystemFailure  systemFailureReport;

    aeondds::cmdrnav::TReportStatusResponse  statusResponseReport;


    } _u;
} TReportUnion;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TReportUnion_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TReportUnionSeq, TReportUnion);

NDDSUSERDllExport
RTIBool TReportUnion_initialize(
        TReportUnion* self);
        
NDDSUSERDllExport
RTIBool TReportUnion_initialize_ex(
        TReportUnion* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TReportUnion_initialize_w_params(
        TReportUnion* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TReportUnion_finalize(
        TReportUnion* self);
                        
NDDSUSERDllExport
void TReportUnion_finalize_ex(
        TReportUnion* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void TReportUnion_finalize_w_params(
        TReportUnion* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TReportUnion_finalize_optional_members(
        TReportUnion* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool TReportUnion_copy(
        TReportUnion* dst,
        const TReportUnion* src);
        

NDDSUSERDllExport
aeondds::cmdrnav::EReportType TReportUnion_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_cmdrnav_TReport_LAST_MEMBER_ID 0
        
extern const char *TReportTYPENAME;
        


#ifdef __cplusplus
    struct TReportSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TReportTypeSupport;
    class TReportDataWriter;
    class TReportDataReader;
#endif

#endif

            
    
class TReport                                        
{
public:            
#ifdef __cplusplus
    typedef struct TReportSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TReportTypeSupport TypeSupport;
    typedef TReportDataWriter DataWriter;
    typedef TReportDataReader DataReader;
#endif

#endif
    
    aeondds::cmdrnav::TReportUnion  report;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TReport_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TReportSeq, TReport);
        
NDDSUSERDllExport
RTIBool TReport_initialize(
        TReport* self);
        
NDDSUSERDllExport
RTIBool TReport_initialize_ex(
        TReport* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TReport_initialize_w_params(
        TReport* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TReport_finalize(
        TReport* self);
                        
NDDSUSERDllExport
void TReport_finalize_ex(
        TReport* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TReport_finalize_w_params(
        TReport* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TReport_finalize_optional_members(
        TReport* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TReport_copy(
        TReport* dst,
        const TReport* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace cmdrnav */

} /* namespace aeondds */


#endif /* Navigation_832035966_h */
