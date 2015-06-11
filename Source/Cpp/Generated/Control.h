
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Control.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Control_48527799_h
#define Control_48527799_h

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

namespace control{
             
static const char * TOPIC_PATHPLAN_REQUESTED = "PathPlanningRequested";             
static const char * TOPIC_PATHPLAN_CURRENT = "PathPlanningCurrent";             
static const char * TOPIC_WAYPOINTCOURSE_REQUESTED = "WaypointCourseRequested";             
static const char * TOPIC_WAYPOINTCOURSE_CURRENT = "WaypointCourseCurrent";             
static const char * TOPIC_PIDTARGETWAYPOINT_REQUESTED = "PIDTargetWaypointRequested";             
static const char * TOPIC_PIDTARGETWAYPOINT_CURRENT = "PIDTargetWaypointCurrent";             
static const char * TOPIC_ATTITUDE_COMMAND = "AttitudeCommand";             
static const char * TOPIC_VEHICLECOMMAND_REQUESTED = "VehicleCommandRequested";             
static const char * TOPIC_VEHICLECOMMAND_CURRENT = "VehicleCommandCurrent";             
static const char * TOPIC_VEHICLE_STATE = "VehicleState";
#define aeondds_control_TARState_LAST_MEMBER_ID 3
        
extern const char *TARStateTYPENAME;
        


#ifdef __cplusplus
    struct TARStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TARStateTypeSupport;
    class TARStateDataWriter;
    class TARStateDataReader;
#endif

#endif

            
    
class TARState                                        
{
public:            
#ifdef __cplusplus
    typedef struct TARStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TARStateTypeSupport TypeSupport;
    typedef TARStateDataWriter DataWriter;
    typedef TARStateDataReader DataReader;
#endif

#endif
    
    DDS_Boolean  isFlying;

    DDS_Boolean  isBatteryLow;

    DDS_Boolean  isInEmergency;

    DDS_Boolean  isControlWatchdogTriggered;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TARState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TARStateSeq, TARState);
        
NDDSUSERDllExport
RTIBool TARState_initialize(
        TARState* self);
        
NDDSUSERDllExport
RTIBool TARState_initialize_ex(
        TARState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TARState_initialize_w_params(
        TARState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TARState_finalize(
        TARState* self);
                        
NDDSUSERDllExport
void TARState_finalize_ex(
        TARState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TARState_finalize_w_params(
        TARState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TARState_finalize_optional_members(
        TARState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TARState_copy(
        TARState* dst,
        const TARState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TVehicleState_LAST_MEMBER_ID 8
        
extern const char *TVehicleStateTYPENAME;
        


#ifdef __cplusplus
    struct TVehicleStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TVehicleStateTypeSupport;
    class TVehicleStateDataWriter;
    class TVehicleStateDataReader;
#endif

#endif

            
    
class TVehicleState                                        
{
public:            
#ifdef __cplusplus
    typedef struct TVehicleStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TVehicleStateTypeSupport TypeSupport;
    typedef TVehicleStateDataWriter DataWriter;
    typedef TVehicleStateDataReader DataReader;
#endif

#endif
    
    DDS_Long  batteryPercentage;

    DDS_Float  theta;

    DDS_Float  phi;

    DDS_Float  psi;

    DDS_Long  altitude;

    DDS_Float  vx;

    DDS_Float  vy;

    DDS_Float  vz;

    aeondds::control::TARState  arState;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TVehicleState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TVehicleStateSeq, TVehicleState);
        
NDDSUSERDllExport
RTIBool TVehicleState_initialize(
        TVehicleState* self);
        
NDDSUSERDllExport
RTIBool TVehicleState_initialize_ex(
        TVehicleState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TVehicleState_initialize_w_params(
        TVehicleState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TVehicleState_finalize(
        TVehicleState* self);
                        
NDDSUSERDllExport
void TVehicleState_finalize_ex(
        TVehicleState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TVehicleState_finalize_w_params(
        TVehicleState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TVehicleState_finalize_optional_members(
        TVehicleState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TVehicleState_copy(
        TVehicleState* dst,
        const TVehicleState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EWaypointStatus
{
    WAYPOINT_REQUESTED,
    WAYPOINT_CANCELLED,
    WAYPOINT_DENIED,
    WAYPOINT_TRACKING,
    WAYPOINT_ARRIVED
} EWaypointStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EWaypointStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EWaypointStatusSeq, EWaypointStatus);
        
NDDSUSERDllExport
RTIBool EWaypointStatus_initialize(
        EWaypointStatus* self);
        
NDDSUSERDllExport
RTIBool EWaypointStatus_initialize_ex(
        EWaypointStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EWaypointStatus_initialize_w_params(
        EWaypointStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EWaypointStatus_finalize(
        EWaypointStatus* self);
                        
NDDSUSERDllExport
void EWaypointStatus_finalize_ex(
        EWaypointStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EWaypointStatus_finalize_w_params(
        EWaypointStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EWaypointStatus_finalize_optional_members(
        EWaypointStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EWaypointStatus_copy(
        EWaypointStatus* dst,
        const EWaypointStatus* src);


NDDSUSERDllExport
RTIBool EWaypointStatus_getValues(EWaypointStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TWaypoint_LAST_MEMBER_ID 4
        
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
    
    DDS_Float  x;

    DDS_Float  y;

    DDS_Float  z;

    DDS_Float  yaw;

    aeondds::control::EWaypointStatus  status;

            
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

 
typedef enum EPathPlanningStatus
{
    PATHPLANNING_REQUESTED,
    PATHPLANNING_CANCELLED,
    PATHPLANNING_DENIED,
    PATHPLANNING_PROCESSING,
    PATHPLANNING_COMPLETE,
    PATHPLANNING_FAILED
} EPathPlanningStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EPathPlanningStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EPathPlanningStatusSeq, EPathPlanningStatus);
        
NDDSUSERDllExport
RTIBool EPathPlanningStatus_initialize(
        EPathPlanningStatus* self);
        
NDDSUSERDllExport
RTIBool EPathPlanningStatus_initialize_ex(
        EPathPlanningStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EPathPlanningStatus_initialize_w_params(
        EPathPlanningStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EPathPlanningStatus_finalize(
        EPathPlanningStatus* self);
                        
NDDSUSERDllExport
void EPathPlanningStatus_finalize_ex(
        EPathPlanningStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EPathPlanningStatus_finalize_w_params(
        EPathPlanningStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EPathPlanningStatus_finalize_optional_members(
        EPathPlanningStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EPathPlanningStatus_copy(
        EPathPlanningStatus* dst,
        const EPathPlanningStatus* src);


NDDSUSERDllExport
RTIBool EPathPlanningStatus_getValues(EPathPlanningStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TPathPlanningRequest_LAST_MEMBER_ID 2
        
extern const char *TPathPlanningRequestTYPENAME;
        


#ifdef __cplusplus
    struct TPathPlanningRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TPathPlanningRequestTypeSupport;
    class TPathPlanningRequestDataWriter;
    class TPathPlanningRequestDataReader;
#endif

#endif

            
    
class TPathPlanningRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TPathPlanningRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TPathPlanningRequestTypeSupport TypeSupport;
    typedef TPathPlanningRequestDataWriter DataWriter;
    typedef TPathPlanningRequestDataReader DataReader;
#endif

#endif
    
    aeondds::control::EPathPlanningStatus  status;

    aeondds::control::TWaypoint  goalPoint;

    DDS_Long  errorId;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TPathPlanningRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TPathPlanningRequestSeq, TPathPlanningRequest);
        
NDDSUSERDllExport
RTIBool TPathPlanningRequest_initialize(
        TPathPlanningRequest* self);
        
NDDSUSERDllExport
RTIBool TPathPlanningRequest_initialize_ex(
        TPathPlanningRequest* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TPathPlanningRequest_initialize_w_params(
        TPathPlanningRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TPathPlanningRequest_finalize(
        TPathPlanningRequest* self);
                        
NDDSUSERDllExport
void TPathPlanningRequest_finalize_ex(
        TPathPlanningRequest* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TPathPlanningRequest_finalize_w_params(
        TPathPlanningRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TPathPlanningRequest_finalize_optional_members(
        TPathPlanningRequest* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TPathPlanningRequest_copy(
        TPathPlanningRequest* dst,
        const TPathPlanningRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EWaypointCourseStatus
{
    WAYPOINTCOURSE_REQUESTED,
    WAYPOINTCOURSE_CANCELLED,
    WAYPOINTCOURSE_DENIED,
    WAYPOINTCOURSE_NAVIGATING,
    WAYPOINTCOURSE_COMPLETE
} EWaypointCourseStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EWaypointCourseStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EWaypointCourseStatusSeq, EWaypointCourseStatus);
        
NDDSUSERDllExport
RTIBool EWaypointCourseStatus_initialize(
        EWaypointCourseStatus* self);
        
NDDSUSERDllExport
RTIBool EWaypointCourseStatus_initialize_ex(
        EWaypointCourseStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EWaypointCourseStatus_initialize_w_params(
        EWaypointCourseStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EWaypointCourseStatus_finalize(
        EWaypointCourseStatus* self);
                        
NDDSUSERDllExport
void EWaypointCourseStatus_finalize_ex(
        EWaypointCourseStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EWaypointCourseStatus_finalize_w_params(
        EWaypointCourseStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EWaypointCourseStatus_finalize_optional_members(
        EWaypointCourseStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EWaypointCourseStatus_copy(
        EWaypointCourseStatus* dst,
        const EWaypointCourseStatus* src);


NDDSUSERDllExport
RTIBool EWaypointCourseStatus_getValues(EWaypointCourseStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const DDS_Long MAX_WAYPOINTS = 1000;
#define aeondds_control_TWaypointCourse_LAST_MEMBER_ID 2
        
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
    
    aeondds::control::EWaypointCourseStatus  status;

     aeondds::control::TWaypointSeq  waypoints;

    DDS_Long  currentWaypoint;

            
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

 
typedef enum EVehicleCommandStatus
{
    VEHICLECOMMAND_REQUESTED,
    VEHICLECOMMAND_CANCELLED,
    VEHICLECOMMAND_DENIED,
    VEHICLECOMMAND_PROCESSING,
    VEHICLECOMMAND_COMPLETE,
    VEHICLECOMMAND_FAILED
} EVehicleCommandStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EVehicleCommandStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EVehicleCommandStatusSeq, EVehicleCommandStatus);
        
NDDSUSERDllExport
RTIBool EVehicleCommandStatus_initialize(
        EVehicleCommandStatus* self);
        
NDDSUSERDllExport
RTIBool EVehicleCommandStatus_initialize_ex(
        EVehicleCommandStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EVehicleCommandStatus_initialize_w_params(
        EVehicleCommandStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EVehicleCommandStatus_finalize(
        EVehicleCommandStatus* self);
                        
NDDSUSERDllExport
void EVehicleCommandStatus_finalize_ex(
        EVehicleCommandStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EVehicleCommandStatus_finalize_w_params(
        EVehicleCommandStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EVehicleCommandStatus_finalize_optional_members(
        EVehicleCommandStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EVehicleCommandStatus_copy(
        EVehicleCommandStatus* dst,
        const EVehicleCommandStatus* src);


NDDSUSERDllExport
RTIBool EVehicleCommandStatus_getValues(EVehicleCommandStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EVehicleCommandType
{
    VEHICLECOMMANDTYPE_TAKEOFF,
    VEHICLECOMMANDTYPE_LAND,
    VEHICLECOMMANDTYPE_EMERGENCY,
    VEHICLECOMMANDTYPE_ANIMATION
} EVehicleCommandType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EVehicleCommandType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EVehicleCommandTypeSeq, EVehicleCommandType);
        
NDDSUSERDllExport
RTIBool EVehicleCommandType_initialize(
        EVehicleCommandType* self);
        
NDDSUSERDllExport
RTIBool EVehicleCommandType_initialize_ex(
        EVehicleCommandType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EVehicleCommandType_initialize_w_params(
        EVehicleCommandType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EVehicleCommandType_finalize(
        EVehicleCommandType* self);
                        
NDDSUSERDllExport
void EVehicleCommandType_finalize_ex(
        EVehicleCommandType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EVehicleCommandType_finalize_w_params(
        EVehicleCommandType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EVehicleCommandType_finalize_optional_members(
        EVehicleCommandType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EVehicleCommandType_copy(
        EVehicleCommandType* dst,
        const EVehicleCommandType* src);


NDDSUSERDllExport
RTIBool EVehicleCommandType_getValues(EVehicleCommandTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TVehicleCommand_LAST_MEMBER_ID 3
        
extern const char *TVehicleCommandTYPENAME;
        


#ifdef __cplusplus
    struct TVehicleCommandSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TVehicleCommandTypeSupport;
    class TVehicleCommandDataWriter;
    class TVehicleCommandDataReader;
#endif

#endif

            
    
class TVehicleCommand                                        
{
public:            
#ifdef __cplusplus
    typedef struct TVehicleCommandSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TVehicleCommandTypeSupport TypeSupport;
    typedef TVehicleCommandDataWriter DataWriter;
    typedef TVehicleCommandDataReader DataReader;
#endif

#endif
    
    aeondds::control::EVehicleCommandStatus  status;

    aeondds::control::EVehicleCommandType  type;

    DDS_Long  parameter;

    DDS_Long  errorId;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TVehicleCommand_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TVehicleCommandSeq, TVehicleCommand);
        
NDDSUSERDllExport
RTIBool TVehicleCommand_initialize(
        TVehicleCommand* self);
        
NDDSUSERDllExport
RTIBool TVehicleCommand_initialize_ex(
        TVehicleCommand* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TVehicleCommand_initialize_w_params(
        TVehicleCommand* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TVehicleCommand_finalize(
        TVehicleCommand* self);
                        
NDDSUSERDllExport
void TVehicleCommand_finalize_ex(
        TVehicleCommand* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TVehicleCommand_finalize_w_params(
        TVehicleCommand* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TVehicleCommand_finalize_optional_members(
        TVehicleCommand* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TVehicleCommand_copy(
        TVehicleCommand* dst,
        const TVehicleCommand* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TAttitudeCommand_LAST_MEMBER_ID 3
        
extern const char *TAttitudeCommandTYPENAME;
        


#ifdef __cplusplus
    struct TAttitudeCommandSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TAttitudeCommandTypeSupport;
    class TAttitudeCommandDataWriter;
    class TAttitudeCommandDataReader;
#endif

#endif

            
    
class TAttitudeCommand                                        
{
public:            
#ifdef __cplusplus
    typedef struct TAttitudeCommandSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TAttitudeCommandTypeSupport TypeSupport;
    typedef TAttitudeCommandDataWriter DataWriter;
    typedef TAttitudeCommandDataReader DataReader;
#endif

#endif
    
    DDS_Float  roll;

    DDS_Float  pitch;

    DDS_Float  dAltitude;

    DDS_Float  dYaw;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TAttitudeCommand_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TAttitudeCommandSeq, TAttitudeCommand);
        
NDDSUSERDllExport
RTIBool TAttitudeCommand_initialize(
        TAttitudeCommand* self);
        
NDDSUSERDllExport
RTIBool TAttitudeCommand_initialize_ex(
        TAttitudeCommand* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TAttitudeCommand_initialize_w_params(
        TAttitudeCommand* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TAttitudeCommand_finalize(
        TAttitudeCommand* self);
                        
NDDSUSERDllExport
void TAttitudeCommand_finalize_ex(
        TAttitudeCommand* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TAttitudeCommand_finalize_w_params(
        TAttitudeCommand* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TAttitudeCommand_finalize_optional_members(
        TAttitudeCommand* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TAttitudeCommand_copy(
        TAttitudeCommand* dst,
        const TAttitudeCommand* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const char * TOPIC_CONTROL_SOLICITATION_REQREP = "ControlSolicitations";             
static const char * TOPIC_CONTROL_SWITCH_REQREP = "ControlSwitches";             
static const char * TOPIC_CONTROL_SIGNAL = "ControlSignals"; 
typedef enum EControlSolicitationResponse
{
    REJECTED,
    ACCEPTED
} EControlSolicitationResponse;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EControlSolicitationResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EControlSolicitationResponseSeq, EControlSolicitationResponse);
        
NDDSUSERDllExport
RTIBool EControlSolicitationResponse_initialize(
        EControlSolicitationResponse* self);
        
NDDSUSERDllExport
RTIBool EControlSolicitationResponse_initialize_ex(
        EControlSolicitationResponse* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EControlSolicitationResponse_initialize_w_params(
        EControlSolicitationResponse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EControlSolicitationResponse_finalize(
        EControlSolicitationResponse* self);
                        
NDDSUSERDllExport
void EControlSolicitationResponse_finalize_ex(
        EControlSolicitationResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EControlSolicitationResponse_finalize_w_params(
        EControlSolicitationResponse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EControlSolicitationResponse_finalize_optional_members(
        EControlSolicitationResponse* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EControlSolicitationResponse_copy(
        EControlSolicitationResponse* dst,
        const EControlSolicitationResponse* src);


NDDSUSERDllExport
RTIBool EControlSolicitationResponse_getValues(EControlSolicitationResponseSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EControlSwitchResponse
{
    FAILURE,
    SUCCESS
} EControlSwitchResponse;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EControlSwitchResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EControlSwitchResponseSeq, EControlSwitchResponse);
        
NDDSUSERDllExport
RTIBool EControlSwitchResponse_initialize(
        EControlSwitchResponse* self);
        
NDDSUSERDllExport
RTIBool EControlSwitchResponse_initialize_ex(
        EControlSwitchResponse* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EControlSwitchResponse_initialize_w_params(
        EControlSwitchResponse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EControlSwitchResponse_finalize(
        EControlSwitchResponse* self);
                        
NDDSUSERDllExport
void EControlSwitchResponse_finalize_ex(
        EControlSwitchResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EControlSwitchResponse_finalize_w_params(
        EControlSwitchResponse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EControlSwitchResponse_finalize_optional_members(
        EControlSwitchResponse* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EControlSwitchResponse_copy(
        EControlSwitchResponse* dst,
        const EControlSwitchResponse* src);


NDDSUSERDllExport
RTIBool EControlSwitchResponse_getValues(EControlSwitchResponseSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EControlSignal
{
    STOP,
    START,
    ABORT
} EControlSignal;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EControlSignal_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EControlSignalSeq, EControlSignal);
        
NDDSUSERDllExport
RTIBool EControlSignal_initialize(
        EControlSignal* self);
        
NDDSUSERDllExport
RTIBool EControlSignal_initialize_ex(
        EControlSignal* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EControlSignal_initialize_w_params(
        EControlSignal* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EControlSignal_finalize(
        EControlSignal* self);
                        
NDDSUSERDllExport
void EControlSignal_finalize_ex(
        EControlSignal* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EControlSignal_finalize_w_params(
        EControlSignal* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EControlSignal_finalize_optional_members(
        EControlSignal* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EControlSignal_copy(
        EControlSignal* dst,
        const EControlSignal* src);


NDDSUSERDllExport
RTIBool EControlSignal_getValues(EControlSignalSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TControlSolicitationRequest_LAST_MEMBER_ID 0
        
extern const char *TControlSolicitationRequestTYPENAME;
        


#ifdef __cplusplus
    struct TControlSolicitationRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TControlSolicitationRequestTypeSupport;
    class TControlSolicitationRequestDataWriter;
    class TControlSolicitationRequestDataReader;
#endif

#endif

            
    
class TControlSolicitationRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TControlSolicitationRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TControlSolicitationRequestTypeSupport TypeSupport;
    typedef TControlSolicitationRequestDataWriter DataWriter;
    typedef TControlSolicitationRequestDataReader DataReader;
#endif

#endif
    
    DDS_Long  systemId;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TControlSolicitationRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TControlSolicitationRequestSeq, TControlSolicitationRequest);
        
NDDSUSERDllExport
RTIBool TControlSolicitationRequest_initialize(
        TControlSolicitationRequest* self);
        
NDDSUSERDllExport
RTIBool TControlSolicitationRequest_initialize_ex(
        TControlSolicitationRequest* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TControlSolicitationRequest_initialize_w_params(
        TControlSolicitationRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TControlSolicitationRequest_finalize(
        TControlSolicitationRequest* self);
                        
NDDSUSERDllExport
void TControlSolicitationRequest_finalize_ex(
        TControlSolicitationRequest* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TControlSolicitationRequest_finalize_w_params(
        TControlSolicitationRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TControlSolicitationRequest_finalize_optional_members(
        TControlSolicitationRequest* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TControlSolicitationRequest_copy(
        TControlSolicitationRequest* dst,
        const TControlSolicitationRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TControlSolicitationResponse_LAST_MEMBER_ID 1
        
extern const char *TControlSolicitationResponseTYPENAME;
        


#ifdef __cplusplus
    struct TControlSolicitationResponseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TControlSolicitationResponseTypeSupport;
    class TControlSolicitationResponseDataWriter;
    class TControlSolicitationResponseDataReader;
#endif

#endif

            
    
class TControlSolicitationResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct TControlSolicitationResponseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TControlSolicitationResponseTypeSupport TypeSupport;
    typedef TControlSolicitationResponseDataWriter DataWriter;
    typedef TControlSolicitationResponseDataReader DataReader;
#endif

#endif
    
    DDS_Long  systemId;

    aeondds::control::EControlSolicitationResponse  response;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TControlSolicitationResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TControlSolicitationResponseSeq, TControlSolicitationResponse);
        
NDDSUSERDllExport
RTIBool TControlSolicitationResponse_initialize(
        TControlSolicitationResponse* self);
        
NDDSUSERDllExport
RTIBool TControlSolicitationResponse_initialize_ex(
        TControlSolicitationResponse* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TControlSolicitationResponse_initialize_w_params(
        TControlSolicitationResponse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TControlSolicitationResponse_finalize(
        TControlSolicitationResponse* self);
                        
NDDSUSERDllExport
void TControlSolicitationResponse_finalize_ex(
        TControlSolicitationResponse* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TControlSolicitationResponse_finalize_w_params(
        TControlSolicitationResponse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TControlSolicitationResponse_finalize_optional_members(
        TControlSolicitationResponse* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TControlSolicitationResponse_copy(
        TControlSolicitationResponse* dst,
        const TControlSolicitationResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TControlSwitchRequest_LAST_MEMBER_ID 0
        
extern const char *TControlSwitchRequestTYPENAME;
        


#ifdef __cplusplus
    struct TControlSwitchRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TControlSwitchRequestTypeSupport;
    class TControlSwitchRequestDataWriter;
    class TControlSwitchRequestDataReader;
#endif

#endif

            
    
class TControlSwitchRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TControlSwitchRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TControlSwitchRequestTypeSupport TypeSupport;
    typedef TControlSwitchRequestDataWriter DataWriter;
    typedef TControlSwitchRequestDataReader DataReader;
#endif

#endif
    
    DDS_Long  systemId;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TControlSwitchRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TControlSwitchRequestSeq, TControlSwitchRequest);
        
NDDSUSERDllExport
RTIBool TControlSwitchRequest_initialize(
        TControlSwitchRequest* self);
        
NDDSUSERDllExport
RTIBool TControlSwitchRequest_initialize_ex(
        TControlSwitchRequest* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TControlSwitchRequest_initialize_w_params(
        TControlSwitchRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TControlSwitchRequest_finalize(
        TControlSwitchRequest* self);
                        
NDDSUSERDllExport
void TControlSwitchRequest_finalize_ex(
        TControlSwitchRequest* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TControlSwitchRequest_finalize_w_params(
        TControlSwitchRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TControlSwitchRequest_finalize_optional_members(
        TControlSwitchRequest* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TControlSwitchRequest_copy(
        TControlSwitchRequest* dst,
        const TControlSwitchRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TControlSwitchResponse_LAST_MEMBER_ID 1
        
extern const char *TControlSwitchResponseTYPENAME;
        


#ifdef __cplusplus
    struct TControlSwitchResponseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TControlSwitchResponseTypeSupport;
    class TControlSwitchResponseDataWriter;
    class TControlSwitchResponseDataReader;
#endif

#endif

            
    
class TControlSwitchResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct TControlSwitchResponseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TControlSwitchResponseTypeSupport TypeSupport;
    typedef TControlSwitchResponseDataWriter DataWriter;
    typedef TControlSwitchResponseDataReader DataReader;
#endif

#endif
    
    DDS_Long  systemId;

    aeondds::control::EControlSwitchResponse  response;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TControlSwitchResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TControlSwitchResponseSeq, TControlSwitchResponse);
        
NDDSUSERDllExport
RTIBool TControlSwitchResponse_initialize(
        TControlSwitchResponse* self);
        
NDDSUSERDllExport
RTIBool TControlSwitchResponse_initialize_ex(
        TControlSwitchResponse* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TControlSwitchResponse_initialize_w_params(
        TControlSwitchResponse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TControlSwitchResponse_finalize(
        TControlSwitchResponse* self);
                        
NDDSUSERDllExport
void TControlSwitchResponse_finalize_ex(
        TControlSwitchResponse* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TControlSwitchResponse_finalize_w_params(
        TControlSwitchResponse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TControlSwitchResponse_finalize_optional_members(
        TControlSwitchResponse* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TControlSwitchResponse_copy(
        TControlSwitchResponse* dst,
        const TControlSwitchResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_control_TControlSignal_LAST_MEMBER_ID 1
        
extern const char *TControlSignalTYPENAME;
        


#ifdef __cplusplus
    struct TControlSignalSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TControlSignalTypeSupport;
    class TControlSignalDataWriter;
    class TControlSignalDataReader;
#endif

#endif

            
    
class TControlSignal                                        
{
public:            
#ifdef __cplusplus
    typedef struct TControlSignalSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TControlSignalTypeSupport TypeSupport;
    typedef TControlSignalDataWriter DataWriter;
    typedef TControlSignalDataReader DataReader;
#endif

#endif
    
    DDS_Long  systemId;

    aeondds::control::EControlSignal  signal;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TControlSignal_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TControlSignalSeq, TControlSignal);
        
NDDSUSERDllExport
RTIBool TControlSignal_initialize(
        TControlSignal* self);
        
NDDSUSERDllExport
RTIBool TControlSignal_initialize_ex(
        TControlSignal* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TControlSignal_initialize_w_params(
        TControlSignal* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TControlSignal_finalize(
        TControlSignal* self);
                        
NDDSUSERDllExport
void TControlSignal_finalize_ex(
        TControlSignal* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TControlSignal_finalize_w_params(
        TControlSignal* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TControlSignal_finalize_optional_members(
        TControlSignal* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TControlSignal_copy(
        TControlSignal* dst,
        const TControlSignal* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace control */

} /* namespace aeondds */


#endif /* Control_48527799_h */
