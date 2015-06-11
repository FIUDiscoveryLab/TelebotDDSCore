
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TestMessages.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TestMessages_1081376032_h
#define TestMessages_1081376032_h

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

namespace test{
             
static const DDS_Short OBJECT_ID_LENGTH = 16;             
static const char * TOPIC_TAG_POSE_TRACK = "TagPoseTrack";             
static const char * TOPIC_VICON_OBJECT_TRACK = "ViconObjectTrack";             
static const char * TOPIC_VEHICLE_COMMAND = "VehicleCommand";             
static const char * TOPIC_VEHICLE_STATUS = "VehicleStatus";             
static const char * TOPIC_VICON_TRACK_EULER = "ViconTrackEuler";             
static const char * TOPIC_VICON_TRACK_QUATERNION = "ViconTrackQuaternion"; 
typedef enum EObjectType
{
    VEHICLE,
    OBSTACLE
} EObjectType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EObjectType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EObjectTypeSeq, EObjectType);
        
NDDSUSERDllExport
RTIBool EObjectType_initialize(
        EObjectType* self);
        
NDDSUSERDllExport
RTIBool EObjectType_initialize_ex(
        EObjectType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EObjectType_initialize_w_params(
        EObjectType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EObjectType_finalize(
        EObjectType* self);
                        
NDDSUSERDllExport
void EObjectType_finalize_ex(
        EObjectType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EObjectType_finalize_w_params(
        EObjectType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EObjectType_finalize_optional_members(
        EObjectType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EObjectType_copy(
        EObjectType* dst,
        const EObjectType* src);


NDDSUSERDllExport
RTIBool EObjectType_getValues(EObjectTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EVehicleCommandType
{
    TAKEOFF,
    LAND,
    HOVER,
    RETURN,
    GOTOWAYPOINT,
    GOTOTAG,
    ENABLEPID,
    DISABLEPID,
    ENABLEFILTER,
    DISABLEFILTER,
    ENABLEWANDMODE,
    DISABLEWANDMODE,
    PASSTHROUGH
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

 
typedef enum EVehicleState
{
    DISCONNECTED,
    LANDED,
    FLYING,
    EMERGENCY
} EVehicleState;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EVehicleState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EVehicleStateSeq, EVehicleState);
        
NDDSUSERDllExport
RTIBool EVehicleState_initialize(
        EVehicleState* self);
        
NDDSUSERDllExport
RTIBool EVehicleState_initialize_ex(
        EVehicleState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EVehicleState_initialize_w_params(
        EVehicleState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EVehicleState_finalize(
        EVehicleState* self);
                        
NDDSUSERDllExport
void EVehicleState_finalize_ex(
        EVehicleState* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EVehicleState_finalize_w_params(
        EVehicleState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EVehicleState_finalize_optional_members(
        EVehicleState* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EVehicleState_copy(
        EVehicleState* dst,
        const EVehicleState* src);


NDDSUSERDllExport
RTIBool EVehicleState_getValues(EVehicleStateSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum EMissionState
{
    IDLE,
    ACTIVE,
    COMPLETE
} EMissionState;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EMissionState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EMissionStateSeq, EMissionState);
        
NDDSUSERDllExport
RTIBool EMissionState_initialize(
        EMissionState* self);
        
NDDSUSERDllExport
RTIBool EMissionState_initialize_ex(
        EMissionState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EMissionState_initialize_w_params(
        EMissionState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EMissionState_finalize(
        EMissionState* self);
                        
NDDSUSERDllExport
void EMissionState_finalize_ex(
        EMissionState* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EMissionState_finalize_w_params(
        EMissionState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EMissionState_finalize_optional_members(
        EMissionState* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EMissionState_copy(
        EMissionState* dst,
        const EMissionState* src);


NDDSUSERDllExport
RTIBool EMissionState_getValues(EMissionStateSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_test_TTagPose_LAST_MEMBER_ID 6
        
extern const char *TTagPoseTYPENAME;
        


#ifdef __cplusplus
    struct TTagPoseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TTagPoseTypeSupport;
    class TTagPoseDataWriter;
    class TTagPoseDataReader;
#endif

#endif

            
    
class TTagPose                                        
{
public:            
#ifdef __cplusplus
    typedef struct TTagPoseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TTagPoseTypeSupport TypeSupport;
    typedef TTagPoseDataWriter DataWriter;
    typedef TTagPoseDataReader DataReader;
#endif

#endif
    
    DDS_Long  objectId;

    DDS_Double  x_m;

    DDS_Double  y_m;

    DDS_Double  z_m;

    DDS_Double  phi_rad;

    DDS_Double  theta_rad;

    DDS_Double  psi_rad;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TTagPose_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TTagPoseSeq, TTagPose);
        
NDDSUSERDllExport
RTIBool TTagPose_initialize(
        TTagPose* self);
        
NDDSUSERDllExport
RTIBool TTagPose_initialize_ex(
        TTagPose* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TTagPose_initialize_w_params(
        TTagPose* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TTagPose_finalize(
        TTagPose* self);
                        
NDDSUSERDllExport
void TTagPose_finalize_ex(
        TTagPose* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TTagPose_finalize_w_params(
        TTagPose* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TTagPose_finalize_optional_members(
        TTagPose* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TTagPose_copy(
        TTagPose* dst,
        const TTagPose* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_test_TObjectTrack_LAST_MEMBER_ID 7
        
extern const char *TObjectTrackTYPENAME;
        


#ifdef __cplusplus
    struct TObjectTrackSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TObjectTrackTypeSupport;
    class TObjectTrackDataWriter;
    class TObjectTrackDataReader;
#endif

#endif

            
    
class TObjectTrack                                        
{
public:            
#ifdef __cplusplus
    typedef struct TObjectTrackSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TObjectTrackTypeSupport TypeSupport;
    typedef TObjectTrackDataWriter DataWriter;
    typedef TObjectTrackDataReader DataReader;
#endif

#endif
    
    char*  objectId; /* maximum length = ((aeondds::test::OBJECT_ID_LENGTH)) */

    aeondds::test::EObjectType  objectType;

    DDS_Double  x_m;

    DDS_Double  y_m;

    DDS_Double  z_m;

    DDS_Double  phi_rad;

    DDS_Double  theta_rad;

    DDS_Double  psi_rad;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TObjectTrack_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TObjectTrackSeq, TObjectTrack);
        
NDDSUSERDllExport
RTIBool TObjectTrack_initialize(
        TObjectTrack* self);
        
NDDSUSERDllExport
RTIBool TObjectTrack_initialize_ex(
        TObjectTrack* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TObjectTrack_initialize_w_params(
        TObjectTrack* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TObjectTrack_finalize(
        TObjectTrack* self);
                        
NDDSUSERDllExport
void TObjectTrack_finalize_ex(
        TObjectTrack* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TObjectTrack_finalize_w_params(
        TObjectTrack* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TObjectTrack_finalize_optional_members(
        TObjectTrack* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TObjectTrack_copy(
        TObjectTrack* dst,
        const TObjectTrack* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_test_TViconTrackEuler_LAST_MEMBER_ID 8
        
extern const char *TViconTrackEulerTYPENAME;
        


#ifdef __cplusplus
    struct TViconTrackEulerSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TViconTrackEulerTypeSupport;
    class TViconTrackEulerDataWriter;
    class TViconTrackEulerDataReader;
#endif

#endif

            
    
class TViconTrackEuler                                        
{
public:            
#ifdef __cplusplus
    typedef struct TViconTrackEulerSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TViconTrackEulerTypeSupport TypeSupport;
    typedef TViconTrackEulerDataWriter DataWriter;
    typedef TViconTrackEulerDataReader DataReader;
#endif

#endif
    
    char*  objectId; /* maximum length = ((aeondds::test::OBJECT_ID_LENGTH)) */

    aeondds::test::EObjectType  objectType;

    DDS_UnsignedLongLong  timestampMs;

    DDS_Double  x_m;

    DDS_Double  y_m;

    DDS_Double  z_m;

    DDS_Double  phi_rad;

    DDS_Double  theta_rad;

    DDS_Double  psi_rad;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TViconTrackEuler_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TViconTrackEulerSeq, TViconTrackEuler);
        
NDDSUSERDllExport
RTIBool TViconTrackEuler_initialize(
        TViconTrackEuler* self);
        
NDDSUSERDllExport
RTIBool TViconTrackEuler_initialize_ex(
        TViconTrackEuler* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TViconTrackEuler_initialize_w_params(
        TViconTrackEuler* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TViconTrackEuler_finalize(
        TViconTrackEuler* self);
                        
NDDSUSERDllExport
void TViconTrackEuler_finalize_ex(
        TViconTrackEuler* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TViconTrackEuler_finalize_w_params(
        TViconTrackEuler* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TViconTrackEuler_finalize_optional_members(
        TViconTrackEuler* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TViconTrackEuler_copy(
        TViconTrackEuler* dst,
        const TViconTrackEuler* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_test_TViconTrackQuaternion_LAST_MEMBER_ID 9
        
extern const char *TViconTrackQuaternionTYPENAME;
        


#ifdef __cplusplus
    struct TViconTrackQuaternionSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TViconTrackQuaternionTypeSupport;
    class TViconTrackQuaternionDataWriter;
    class TViconTrackQuaternionDataReader;
#endif

#endif

            
    
class TViconTrackQuaternion                                        
{
public:            
#ifdef __cplusplus
    typedef struct TViconTrackQuaternionSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TViconTrackQuaternionTypeSupport TypeSupport;
    typedef TViconTrackQuaternionDataWriter DataWriter;
    typedef TViconTrackQuaternionDataReader DataReader;
#endif

#endif
    
    char*  objectId; /* maximum length = ((aeondds::test::OBJECT_ID_LENGTH)) */

    aeondds::test::EObjectType  objectType;

    DDS_UnsignedLongLong  timestampMs;

    DDS_Double  x_m;

    DDS_Double  y_m;

    DDS_Double  z_m;

    DDS_Double  q0;

    DDS_Double  q1;

    DDS_Double  q2;

    DDS_Double  q3;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TViconTrackQuaternion_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TViconTrackQuaternionSeq, TViconTrackQuaternion);
        
NDDSUSERDllExport
RTIBool TViconTrackQuaternion_initialize(
        TViconTrackQuaternion* self);
        
NDDSUSERDllExport
RTIBool TViconTrackQuaternion_initialize_ex(
        TViconTrackQuaternion* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TViconTrackQuaternion_initialize_w_params(
        TViconTrackQuaternion* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TViconTrackQuaternion_finalize(
        TViconTrackQuaternion* self);
                        
NDDSUSERDllExport
void TViconTrackQuaternion_finalize_ex(
        TViconTrackQuaternion* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TViconTrackQuaternion_finalize_w_params(
        TViconTrackQuaternion* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TViconTrackQuaternion_finalize_optional_members(
        TViconTrackQuaternion* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TViconTrackQuaternion_copy(
        TViconTrackQuaternion* dst,
        const TViconTrackQuaternion* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_test_TVehicleCommand_LAST_MEMBER_ID 6
        
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
    
    DDS_Long  systemId;

    aeondds::test::EVehicleCommandType  commandType;

    DDS_Double  p1;

    DDS_Double  p2;

    DDS_Double  p3;

    DDS_Double  p4;

    DDS_Long  p5;

            
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


#define aeondds_test_TVehicleStatus_LAST_MEMBER_ID 12
        
extern const char *TVehicleStatusTYPENAME;
        


#ifdef __cplusplus
    struct TVehicleStatusSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TVehicleStatusTypeSupport;
    class TVehicleStatusDataWriter;
    class TVehicleStatusDataReader;
#endif

#endif

            
    
class TVehicleStatus                                        
{
public:            
#ifdef __cplusplus
    typedef struct TVehicleStatusSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TVehicleStatusTypeSupport TypeSupport;
    typedef TVehicleStatusDataWriter DataWriter;
    typedef TVehicleStatusDataReader DataReader;
#endif

#endif
    
    DDS_Long  vehicleId;

    char*  vehicleName; /* maximum length = ((aeondds::test::OBJECT_ID_LENGTH)) */

    DDS_Double  longitude;

    DDS_Double  latitude;

    DDS_Double  altitude;

    DDS_Double  roll;

    DDS_Double  pitch;

    DDS_Double  yaw;

    DDS_Double  batteryLevel;

    DDS_Double  goalLat;

    DDS_Double  goalLong;

    DDS_Double  goalAltitude;

    DDS_Double  goalYaw;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TVehicleStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TVehicleStatusSeq, TVehicleStatus);
        
NDDSUSERDllExport
RTIBool TVehicleStatus_initialize(
        TVehicleStatus* self);
        
NDDSUSERDllExport
RTIBool TVehicleStatus_initialize_ex(
        TVehicleStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TVehicleStatus_initialize_w_params(
        TVehicleStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TVehicleStatus_finalize(
        TVehicleStatus* self);
                        
NDDSUSERDllExport
void TVehicleStatus_finalize_ex(
        TVehicleStatus* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TVehicleStatus_finalize_w_params(
        TVehicleStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TVehicleStatus_finalize_optional_members(
        TVehicleStatus* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TVehicleStatus_copy(
        TVehicleStatus* dst,
        const TVehicleStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_test_TPose_LAST_MEMBER_ID 5
        
extern const char *TPoseTYPENAME;
        


#ifdef __cplusplus
    struct TPoseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TPoseTypeSupport;
    class TPoseDataWriter;
    class TPoseDataReader;
#endif

#endif

            
    
class TPose                                        
{
public:            
#ifdef __cplusplus
    typedef struct TPoseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TPoseTypeSupport TypeSupport;
    typedef TPoseDataWriter DataWriter;
    typedef TPoseDataReader DataReader;
#endif

#endif
    
    DDS_Double  x_m;

    DDS_Double  y_m;

    DDS_Double  z_m;

    DDS_Double  phi_rad;

    DDS_Double  theta_rad;

    DDS_Double  psi_rad;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TPose_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TPoseSeq, TPose);
        
NDDSUSERDllExport
RTIBool TPose_initialize(
        TPose* self);
        
NDDSUSERDllExport
RTIBool TPose_initialize_ex(
        TPose* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TPose_initialize_w_params(
        TPose* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TPose_finalize(
        TPose* self);
                        
NDDSUSERDllExport
void TPose_finalize_ex(
        TPose* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TPose_finalize_w_params(
        TPose* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TPose_finalize_optional_members(
        TPose* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TPose_copy(
        TPose* dst,
        const TPose* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const DDS_Long MAX_POSES = 1000;
#define aeondds_test_TPath_LAST_MEMBER_ID 1
        
extern const char *TPathTYPENAME;
        


#ifdef __cplusplus
    struct TPathSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TPathTypeSupport;
    class TPathDataWriter;
    class TPathDataReader;
#endif

#endif

            
    
class TPath                                        
{
public:            
#ifdef __cplusplus
    typedef struct TPathSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TPathTypeSupport TypeSupport;
    typedef TPathDataWriter DataWriter;
    typedef TPathDataReader DataReader;
#endif

#endif
    
    DDS_Long  vehicleId;

     aeondds::test::TPoseSeq  waypoints;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TPath_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TPathSeq, TPath);
        
NDDSUSERDllExport
RTIBool TPath_initialize(
        TPath* self);
        
NDDSUSERDllExport
RTIBool TPath_initialize_ex(
        TPath* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TPath_initialize_w_params(
        TPath* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TPath_finalize(
        TPath* self);
                        
NDDSUSERDllExport
void TPath_finalize_ex(
        TPath* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TPath_finalize_w_params(
        TPath* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TPath_finalize_optional_members(
        TPath* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TPath_copy(
        TPath* dst,
        const TPath* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace test */

} /* namespace aeondds */


#endif /* TestMessages_1081376032_h */
