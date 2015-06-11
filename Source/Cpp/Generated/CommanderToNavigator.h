
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommanderToNavigator.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommanderToNavigator_1956912759_h
#define CommanderToNavigator_1956912759_h

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

namespace CmdrAndNav{
             
static const char * TOPIC_COMMANDER_TO_NAVIGATOR = "CmdrToNavCommands";             
static const char * TOPIC_NAVIGATOR_TO_COMMANDER = "NavToCmdrMessages";             
static const DDS_Long MAX_OCTETS_JSON_FILE = 10485760; 
typedef enum ENavigatorModes
{
    INITILIZE,
    WAITFORMISSION,
    FOLLOWWAYPOINTS,
    EMERGENCYSOFT,
    EMERGENCYHARD,
    PACKAGEPICKUP,
    DROPOFFPACKAGE,
    SHUTDOWNNOW
} ENavigatorModes;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ENavigatorModes_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ENavigatorModesSeq, ENavigatorModes);
        
NDDSUSERDllExport
RTIBool ENavigatorModes_initialize(
        ENavigatorModes* self);
        
NDDSUSERDllExport
RTIBool ENavigatorModes_initialize_ex(
        ENavigatorModes* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ENavigatorModes_initialize_w_params(
        ENavigatorModes* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ENavigatorModes_finalize(
        ENavigatorModes* self);
                        
NDDSUSERDllExport
void ENavigatorModes_finalize_ex(
        ENavigatorModes* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ENavigatorModes_finalize_w_params(
        ENavigatorModes* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ENavigatorModes_finalize_optional_members(
        ENavigatorModes* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ENavigatorModes_copy(
        ENavigatorModes* dst,
        const ENavigatorModes* src);


NDDSUSERDllExport
RTIBool ENavigatorModes_getValues(ENavigatorModesSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum ECommanderMessageType
{
    CHANGEMODE,
    SetCourse
} ECommanderMessageType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ECommanderMessageType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ECommanderMessageTypeSeq, ECommanderMessageType);
        
NDDSUSERDllExport
RTIBool ECommanderMessageType_initialize(
        ECommanderMessageType* self);
        
NDDSUSERDllExport
RTIBool ECommanderMessageType_initialize_ex(
        ECommanderMessageType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ECommanderMessageType_initialize_w_params(
        ECommanderMessageType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ECommanderMessageType_finalize(
        ECommanderMessageType* self);
                        
NDDSUSERDllExport
void ECommanderMessageType_finalize_ex(
        ECommanderMessageType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ECommanderMessageType_finalize_w_params(
        ECommanderMessageType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ECommanderMessageType_finalize_optional_members(
        ECommanderMessageType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ECommanderMessageType_copy(
        ECommanderMessageType* dst,
        const ECommanderMessageType* src);


NDDSUSERDllExport
RTIBool ECommanderMessageType_getValues(ECommanderMessageTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_CmdrAndNav_TCommanderToNavigator_LAST_MEMBER_ID 3
        
extern const char *TCommanderToNavigatorTYPENAME;
        


#ifdef __cplusplus
    struct TCommanderToNavigatorSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TCommanderToNavigatorTypeSupport;
    class TCommanderToNavigatorDataWriter;
    class TCommanderToNavigatorDataReader;
#endif

#endif

            
    
class TCommanderToNavigator                                        
{
public:            
#ifdef __cplusplus
    typedef struct TCommanderToNavigatorSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TCommanderToNavigatorTypeSupport TypeSupport;
    typedef TCommanderToNavigatorDataWriter DataWriter;
    typedef TCommanderToNavigatorDataReader DataReader;
#endif

#endif
    
    aeondds::CmdrAndNav::ECommanderMessageType  Command;

    aeondds::CmdrAndNav::ENavigatorModes  eRequestedMode;

    DDS_Long  nCourseIndex;

    DDS_Long  nCourseToWaypoint;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TCommanderToNavigator_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TCommanderToNavigatorSeq, TCommanderToNavigator);
        
NDDSUSERDllExport
RTIBool TCommanderToNavigator_initialize(
        TCommanderToNavigator* self);
        
NDDSUSERDllExport
RTIBool TCommanderToNavigator_initialize_ex(
        TCommanderToNavigator* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TCommanderToNavigator_initialize_w_params(
        TCommanderToNavigator* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TCommanderToNavigator_finalize(
        TCommanderToNavigator* self);
                        
NDDSUSERDllExport
void TCommanderToNavigator_finalize_ex(
        TCommanderToNavigator* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TCommanderToNavigator_finalize_w_params(
        TCommanderToNavigator* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TCommanderToNavigator_finalize_optional_members(
        TCommanderToNavigator* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TCommanderToNavigator_copy(
        TCommanderToNavigator* dst,
        const TCommanderToNavigator* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_CmdrAndNav_TJsonMissionFile_LAST_MEMBER_ID 1
        
extern const char *TJsonMissionFileTYPENAME;
        


#ifdef __cplusplus
    struct TJsonMissionFileSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TJsonMissionFileTypeSupport;
    class TJsonMissionFileDataWriter;
    class TJsonMissionFileDataReader;
#endif

#endif

            
    
class TJsonMissionFile                                        
{
public:            
#ifdef __cplusplus
    typedef struct TJsonMissionFileSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TJsonMissionFileTypeSupport TypeSupport;
    typedef TJsonMissionFileDataWriter DataWriter;
    typedef TJsonMissionFileDataReader DataReader;
#endif

#endif
    
    DDS_Long  systemId;

     DDS_OctetSeq  jsonFile;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TJsonMissionFile_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TJsonMissionFileSeq, TJsonMissionFile);
        
NDDSUSERDllExport
RTIBool TJsonMissionFile_initialize(
        TJsonMissionFile* self);
        
NDDSUSERDllExport
RTIBool TJsonMissionFile_initialize_ex(
        TJsonMissionFile* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TJsonMissionFile_initialize_w_params(
        TJsonMissionFile* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TJsonMissionFile_finalize(
        TJsonMissionFile* self);
                        
NDDSUSERDllExport
void TJsonMissionFile_finalize_ex(
        TJsonMissionFile* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TJsonMissionFile_finalize_w_params(
        TJsonMissionFile* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TJsonMissionFile_finalize_optional_members(
        TJsonMissionFile* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TJsonMissionFile_copy(
        TJsonMissionFile* dst,
        const TJsonMissionFile* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum ENavigatorMessageType
{
    COURSECOMPLETION,
    WAYPOINTREACHED,
    MODESHIFT,
    SYSTEMFAILURE,
    STATUSRESPONSE
} ENavigatorMessageType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ENavigatorMessageType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ENavigatorMessageTypeSeq, ENavigatorMessageType);
        
NDDSUSERDllExport
RTIBool ENavigatorMessageType_initialize(
        ENavigatorMessageType* self);
        
NDDSUSERDllExport
RTIBool ENavigatorMessageType_initialize_ex(
        ENavigatorMessageType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ENavigatorMessageType_initialize_w_params(
        ENavigatorMessageType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ENavigatorMessageType_finalize(
        ENavigatorMessageType* self);
                        
NDDSUSERDllExport
void ENavigatorMessageType_finalize_ex(
        ENavigatorMessageType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ENavigatorMessageType_finalize_w_params(
        ENavigatorMessageType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ENavigatorMessageType_finalize_optional_members(
        ENavigatorMessageType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ENavigatorMessageType_copy(
        ENavigatorMessageType* dst,
        const ENavigatorMessageType* src);


NDDSUSERDllExport
RTIBool ENavigatorMessageType_getValues(ENavigatorMessageTypeSeq * values);
    

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


#define aeondds_CmdrAndNav_TNavigatorToCommander_LAST_MEMBER_ID 4
        
extern const char *TNavigatorToCommanderTYPENAME;
        


#ifdef __cplusplus
    struct TNavigatorToCommanderSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TNavigatorToCommanderTypeSupport;
    class TNavigatorToCommanderDataWriter;
    class TNavigatorToCommanderDataReader;
#endif

#endif

            
    
class TNavigatorToCommander                                        
{
public:            
#ifdef __cplusplus
    typedef struct TNavigatorToCommanderSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TNavigatorToCommanderTypeSupport TypeSupport;
    typedef TNavigatorToCommanderDataWriter DataWriter;
    typedef TNavigatorToCommanderDataReader DataReader;
#endif

#endif
    
    aeondds::CmdrAndNav::ENavigatorMessageType  eType;

    aeondds::CmdrAndNav::EStatus  eSuccess;

    aeondds::CmdrAndNav::ENavigatorModes  eCurrentMode;

    DDS_Long  nCourseNumber;

    DDS_Long  nWaypointNumber;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TNavigatorToCommander_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TNavigatorToCommanderSeq, TNavigatorToCommander);
        
NDDSUSERDllExport
RTIBool TNavigatorToCommander_initialize(
        TNavigatorToCommander* self);
        
NDDSUSERDllExport
RTIBool TNavigatorToCommander_initialize_ex(
        TNavigatorToCommander* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TNavigatorToCommander_initialize_w_params(
        TNavigatorToCommander* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TNavigatorToCommander_finalize(
        TNavigatorToCommander* self);
                        
NDDSUSERDllExport
void TNavigatorToCommander_finalize_ex(
        TNavigatorToCommander* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TNavigatorToCommander_finalize_w_params(
        TNavigatorToCommander* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TNavigatorToCommander_finalize_optional_members(
        TNavigatorToCommander* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TNavigatorToCommander_copy(
        TNavigatorToCommander* dst,
        const TNavigatorToCommander* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace CmdrAndNav */

} /* namespace aeondds */


#endif /* CommanderToNavigator_1956912759_h */
