
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TestMessages.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TestMessagesPlugin_1081376032_h
#define TestMessagesPlugin_1081376032_h

#include "TestMessages.h"



struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


namespace aeondds{

namespace test{


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EObjectTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EObjectType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EObjectTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EObjectType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EObjectTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EObjectTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EObjectTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EObjectTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EObjectType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EObjectTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EObjectType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EObjectTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EObjectType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EObjectTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EObjectTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EObjectType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EObjectTypePluginSupport_print_data(
    const EObjectType *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EVehicleCommandTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EVehicleCommandType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EVehicleCommandTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleCommandType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EVehicleCommandTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EVehicleCommandTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EVehicleCommandTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EVehicleCommandTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EVehicleCommandType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EVehicleCommandTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EVehicleCommandType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EVehicleCommandTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleCommandType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EVehicleCommandTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EVehicleCommandTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleCommandType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EVehicleCommandTypePluginSupport_print_data(
    const EVehicleCommandType *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EVehicleStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EVehicleState *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EVehicleStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleState *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EVehicleStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EVehicleStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EVehicleStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EVehicleStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EVehicleState * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EVehicleStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EVehicleState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EVehicleStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleState *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EVehicleStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EVehicleStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EVehicleStatePluginSupport_print_data(
    const EVehicleState *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EMissionStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EMissionState *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EMissionStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EMissionState *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EMissionStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EMissionStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EMissionStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EMissionStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EMissionState * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EMissionStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EMissionState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EMissionStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EMissionState *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EMissionStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EMissionStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EMissionState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EMissionStatePluginSupport_print_data(
    const EMissionState *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * TTagPose.
 *
 * By default, this type is struct TTagPose
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TTagPose)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TTagPose, the
 * following restriction applies: the key of struct
 * TTagPose must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TTagPose.
*/
typedef  class TTagPose TTagPoseKeyHolder;


#define TTagPosePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TTagPosePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TTagPosePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TTagPosePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TTagPosePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TTagPosePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TTagPosePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TTagPose*
TTagPosePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TTagPose*
TTagPosePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TTagPose*
TTagPosePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TTagPosePluginSupport_copy_data(
    TTagPose *out,
    const TTagPose *in);

NDDSUSERDllExport extern void 
TTagPosePluginSupport_destroy_data_w_params(
    TTagPose *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TTagPosePluginSupport_destroy_data_ex(
    TTagPose *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TTagPosePluginSupport_destroy_data(
    TTagPose *sample);

NDDSUSERDllExport extern void 
TTagPosePluginSupport_print_data(
    const TTagPose *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TTagPose*
TTagPosePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TTagPose*
TTagPosePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TTagPosePluginSupport_destroy_key_ex(
    TTagPoseKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TTagPosePluginSupport_destroy_key(
    TTagPoseKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TTagPosePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TTagPosePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TTagPosePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TTagPosePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TTagPosePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TTagPose *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TTagPose *out,
    const TTagPose *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TTagPose *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TTagPose *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TTagPose **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TTagPosePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TTagPosePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TTagPosePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TTagPosePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TTagPose * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TTagPosePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TTagPosePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TTagPose *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TTagPose * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TTagPose ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TTagPosePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TTagPose *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TTagPoseKeyHolder *key, 
    const TTagPose *instance);

NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TTagPose *instance, 
    const TTagPoseKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TTagPose *instance);

NDDSUSERDllExport extern RTIBool 
TTagPosePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TTagPosePlugin_new(void);

NDDSUSERDllExport extern void
TTagPosePlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TObjectTrack.
 *
 * By default, this type is struct TObjectTrack
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TObjectTrack)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TObjectTrack, the
 * following restriction applies: the key of struct
 * TObjectTrack must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TObjectTrack.
*/
typedef  class TObjectTrack TObjectTrackKeyHolder;


#define TObjectTrackPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TObjectTrackPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TObjectTrackPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TObjectTrackPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TObjectTrackPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TObjectTrackPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TObjectTrackPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TObjectTrack*
TObjectTrackPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TObjectTrack*
TObjectTrackPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TObjectTrack*
TObjectTrackPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TObjectTrackPluginSupport_copy_data(
    TObjectTrack *out,
    const TObjectTrack *in);

NDDSUSERDllExport extern void 
TObjectTrackPluginSupport_destroy_data_w_params(
    TObjectTrack *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TObjectTrackPluginSupport_destroy_data_ex(
    TObjectTrack *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TObjectTrackPluginSupport_destroy_data(
    TObjectTrack *sample);

NDDSUSERDllExport extern void 
TObjectTrackPluginSupport_print_data(
    const TObjectTrack *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TObjectTrack*
TObjectTrackPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TObjectTrack*
TObjectTrackPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TObjectTrackPluginSupport_destroy_key_ex(
    TObjectTrackKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TObjectTrackPluginSupport_destroy_key(
    TObjectTrackKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TObjectTrackPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TObjectTrackPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TObjectTrackPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TObjectTrackPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TObjectTrackPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrack *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrack *out,
    const TObjectTrack *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TObjectTrack *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrack *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrack **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TObjectTrackPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TObjectTrackPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TObjectTrackPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TObjectTrackPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TObjectTrack * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TObjectTrackPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TObjectTrackPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TObjectTrack *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrack * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrack ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TObjectTrackPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrack *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrackKeyHolder *key, 
    const TObjectTrack *instance);

NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TObjectTrack *instance, 
    const TObjectTrackKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TObjectTrack *instance);

NDDSUSERDllExport extern RTIBool 
TObjectTrackPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TObjectTrackPlugin_new(void);

NDDSUSERDllExport extern void
TObjectTrackPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TViconTrackEuler.
 *
 * By default, this type is struct TViconTrackEuler
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TViconTrackEuler)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TViconTrackEuler, the
 * following restriction applies: the key of struct
 * TViconTrackEuler must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TViconTrackEuler.
*/
typedef  class TViconTrackEuler TViconTrackEulerKeyHolder;


#define TViconTrackEulerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TViconTrackEulerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TViconTrackEulerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TViconTrackEulerPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TViconTrackEulerPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TViconTrackEulerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TViconTrackEulerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TViconTrackEuler*
TViconTrackEulerPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TViconTrackEuler*
TViconTrackEulerPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TViconTrackEuler*
TViconTrackEulerPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPluginSupport_copy_data(
    TViconTrackEuler *out,
    const TViconTrackEuler *in);

NDDSUSERDllExport extern void 
TViconTrackEulerPluginSupport_destroy_data_w_params(
    TViconTrackEuler *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TViconTrackEulerPluginSupport_destroy_data_ex(
    TViconTrackEuler *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TViconTrackEulerPluginSupport_destroy_data(
    TViconTrackEuler *sample);

NDDSUSERDllExport extern void 
TViconTrackEulerPluginSupport_print_data(
    const TViconTrackEuler *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TViconTrackEuler*
TViconTrackEulerPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TViconTrackEuler*
TViconTrackEulerPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TViconTrackEulerPluginSupport_destroy_key_ex(
    TViconTrackEulerKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TViconTrackEulerPluginSupport_destroy_key(
    TViconTrackEulerKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TViconTrackEulerPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TViconTrackEulerPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TViconTrackEulerPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TViconTrackEulerPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TViconTrackEulerPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEuler *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEuler *out,
    const TViconTrackEuler *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TViconTrackEuler *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEuler *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEuler **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TViconTrackEulerPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TViconTrackEulerPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TViconTrackEulerPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TViconTrackEulerPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TViconTrackEuler * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TViconTrackEulerPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TViconTrackEulerPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TViconTrackEuler *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEuler * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEuler ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TViconTrackEulerPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEuler *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEulerKeyHolder *key, 
    const TViconTrackEuler *instance);

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackEuler *instance, 
    const TViconTrackEulerKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TViconTrackEuler *instance);

NDDSUSERDllExport extern RTIBool 
TViconTrackEulerPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TViconTrackEulerPlugin_new(void);

NDDSUSERDllExport extern void
TViconTrackEulerPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TViconTrackQuaternion.
 *
 * By default, this type is struct TViconTrackQuaternion
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TViconTrackQuaternion)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TViconTrackQuaternion, the
 * following restriction applies: the key of struct
 * TViconTrackQuaternion must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TViconTrackQuaternion.
*/
typedef  class TViconTrackQuaternion TViconTrackQuaternionKeyHolder;


#define TViconTrackQuaternionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TViconTrackQuaternionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TViconTrackQuaternionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TViconTrackQuaternionPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TViconTrackQuaternionPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TViconTrackQuaternionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TViconTrackQuaternionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TViconTrackQuaternion*
TViconTrackQuaternionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TViconTrackQuaternion*
TViconTrackQuaternionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TViconTrackQuaternion*
TViconTrackQuaternionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPluginSupport_copy_data(
    TViconTrackQuaternion *out,
    const TViconTrackQuaternion *in);

NDDSUSERDllExport extern void 
TViconTrackQuaternionPluginSupport_destroy_data_w_params(
    TViconTrackQuaternion *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TViconTrackQuaternionPluginSupport_destroy_data_ex(
    TViconTrackQuaternion *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TViconTrackQuaternionPluginSupport_destroy_data(
    TViconTrackQuaternion *sample);

NDDSUSERDllExport extern void 
TViconTrackQuaternionPluginSupport_print_data(
    const TViconTrackQuaternion *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TViconTrackQuaternion*
TViconTrackQuaternionPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TViconTrackQuaternion*
TViconTrackQuaternionPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TViconTrackQuaternionPluginSupport_destroy_key_ex(
    TViconTrackQuaternionKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TViconTrackQuaternionPluginSupport_destroy_key(
    TViconTrackQuaternionKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TViconTrackQuaternionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TViconTrackQuaternionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TViconTrackQuaternionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TViconTrackQuaternionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TViconTrackQuaternionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternion *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternion *out,
    const TViconTrackQuaternion *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TViconTrackQuaternion *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternion *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternion **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TViconTrackQuaternionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TViconTrackQuaternionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TViconTrackQuaternionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TViconTrackQuaternionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TViconTrackQuaternion * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TViconTrackQuaternionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TViconTrackQuaternionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TViconTrackQuaternion *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternion * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternion ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TViconTrackQuaternionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternion *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternionKeyHolder *key, 
    const TViconTrackQuaternion *instance);

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackQuaternion *instance, 
    const TViconTrackQuaternionKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TViconTrackQuaternion *instance);

NDDSUSERDllExport extern RTIBool 
TViconTrackQuaternionPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TViconTrackQuaternionPlugin_new(void);

NDDSUSERDllExport extern void
TViconTrackQuaternionPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TVehicleCommand.
 *
 * By default, this type is struct TVehicleCommand
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TVehicleCommand)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TVehicleCommand, the
 * following restriction applies: the key of struct
 * TVehicleCommand must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TVehicleCommand.
*/
typedef  class TVehicleCommand TVehicleCommandKeyHolder;


#define TVehicleCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TVehicleCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TVehicleCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TVehicleCommandPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TVehicleCommandPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TVehicleCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TVehicleCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TVehicleCommand*
TVehicleCommandPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TVehicleCommand*
TVehicleCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TVehicleCommand*
TVehicleCommandPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPluginSupport_copy_data(
    TVehicleCommand *out,
    const TVehicleCommand *in);

NDDSUSERDllExport extern void 
TVehicleCommandPluginSupport_destroy_data_w_params(
    TVehicleCommand *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TVehicleCommandPluginSupport_destroy_data_ex(
    TVehicleCommand *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TVehicleCommandPluginSupport_destroy_data(
    TVehicleCommand *sample);

NDDSUSERDllExport extern void 
TVehicleCommandPluginSupport_print_data(
    const TVehicleCommand *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TVehicleCommand*
TVehicleCommandPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TVehicleCommand*
TVehicleCommandPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TVehicleCommandPluginSupport_destroy_key_ex(
    TVehicleCommandKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TVehicleCommandPluginSupport_destroy_key(
    TVehicleCommandKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TVehicleCommandPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TVehicleCommandPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TVehicleCommandPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TVehicleCommandPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TVehicleCommandPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommand *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommand *out,
    const TVehicleCommand *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TVehicleCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommand *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommand **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TVehicleCommandPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TVehicleCommandPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TVehicleCommandPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TVehicleCommandPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TVehicleCommand * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TVehicleCommandPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TVehicleCommandPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TVehicleCommand *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommand * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommand ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TVehicleCommandPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommandKeyHolder *key, 
    const TVehicleCommand *instance);

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleCommand *instance, 
    const TVehicleCommandKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TVehicleCommand *instance);

NDDSUSERDllExport extern RTIBool 
TVehicleCommandPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TVehicleCommandPlugin_new(void);

NDDSUSERDllExport extern void
TVehicleCommandPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TVehicleStatus.
 *
 * By default, this type is struct TVehicleStatus
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TVehicleStatus)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TVehicleStatus, the
 * following restriction applies: the key of struct
 * TVehicleStatus must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TVehicleStatus.
*/
typedef  class TVehicleStatus TVehicleStatusKeyHolder;


#define TVehicleStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TVehicleStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TVehicleStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TVehicleStatusPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TVehicleStatusPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TVehicleStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TVehicleStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TVehicleStatus*
TVehicleStatusPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TVehicleStatus*
TVehicleStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TVehicleStatus*
TVehicleStatusPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPluginSupport_copy_data(
    TVehicleStatus *out,
    const TVehicleStatus *in);

NDDSUSERDllExport extern void 
TVehicleStatusPluginSupport_destroy_data_w_params(
    TVehicleStatus *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TVehicleStatusPluginSupport_destroy_data_ex(
    TVehicleStatus *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TVehicleStatusPluginSupport_destroy_data(
    TVehicleStatus *sample);

NDDSUSERDllExport extern void 
TVehicleStatusPluginSupport_print_data(
    const TVehicleStatus *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TVehicleStatus*
TVehicleStatusPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TVehicleStatus*
TVehicleStatusPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TVehicleStatusPluginSupport_destroy_key_ex(
    TVehicleStatusKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TVehicleStatusPluginSupport_destroy_key(
    TVehicleStatusKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TVehicleStatusPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TVehicleStatusPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TVehicleStatusPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TVehicleStatusPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TVehicleStatusPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatus *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatus *out,
    const TVehicleStatus *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TVehicleStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatus *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatus **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TVehicleStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TVehicleStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TVehicleStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TVehicleStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TVehicleStatus * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TVehicleStatusPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TVehicleStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TVehicleStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatus * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatus ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TVehicleStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatusKeyHolder *key, 
    const TVehicleStatus *instance);

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleStatus *instance, 
    const TVehicleStatusKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TVehicleStatus *instance);

NDDSUSERDllExport extern RTIBool 
TVehicleStatusPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TVehicleStatusPlugin_new(void);

NDDSUSERDllExport extern void
TVehicleStatusPlugin_delete(struct PRESTypePlugin *);


#define TPosePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TPosePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TPosePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TPosePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TPosePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TPose*
TPosePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TPose*
TPosePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TPose*
TPosePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TPosePluginSupport_copy_data(
    TPose *out,
    const TPose *in);

NDDSUSERDllExport extern void 
TPosePluginSupport_destroy_data_w_params(
    TPose *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TPosePluginSupport_destroy_data_ex(
    TPose *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TPosePluginSupport_destroy_data(
    TPose *sample);

NDDSUSERDllExport extern void 
TPosePluginSupport_print_data(
    const TPose *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TPosePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TPosePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TPosePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TPosePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TPosePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPose *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TPosePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPose *out,
    const TPose *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TPosePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TPose *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TPosePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPose *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TPosePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TPose **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TPosePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TPosePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TPosePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TPosePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TPose * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TPosePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TPosePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TPosePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TPose *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TPosePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPose * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TPosePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TPose ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TPosePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TPose *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TPosePlugin_new(void);

NDDSUSERDllExport extern void
TPosePlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TPath.
 *
 * By default, this type is struct TPath
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TPath)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TPath, the
 * following restriction applies: the key of struct
 * TPath must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TPath.
*/
typedef  class TPath TPathKeyHolder;


#define TPathPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TPathPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TPathPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TPathPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TPathPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TPathPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TPathPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TPath*
TPathPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TPath*
TPathPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TPath*
TPathPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TPathPluginSupport_copy_data(
    TPath *out,
    const TPath *in);

NDDSUSERDllExport extern void 
TPathPluginSupport_destroy_data_w_params(
    TPath *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TPathPluginSupport_destroy_data_ex(
    TPath *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TPathPluginSupport_destroy_data(
    TPath *sample);

NDDSUSERDllExport extern void 
TPathPluginSupport_print_data(
    const TPath *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TPath*
TPathPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TPath*
TPathPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TPathPluginSupport_destroy_key_ex(
    TPathKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TPathPluginSupport_destroy_key(
    TPathKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TPathPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TPathPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TPathPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TPathPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TPathPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPath *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TPathPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPath *out,
    const TPath *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TPathPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TPath *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TPathPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPath *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TPathPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TPath **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TPathPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TPathPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TPathPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TPathPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TPath * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TPathPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TPathPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TPathPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TPath *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TPathPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPath * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TPathPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TPath ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TPathPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TPath *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TPathPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TPathKeyHolder *key, 
    const TPath *instance);

NDDSUSERDllExport extern RTIBool 
TPathPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TPath *instance, 
    const TPathKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TPathPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TPath *instance);

NDDSUSERDllExport extern RTIBool 
TPathPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TPathPlugin_new(void);

NDDSUSERDllExport extern void
TPathPlugin_delete(struct PRESTypePlugin *);

} /* namespace test */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* TestMessagesPlugin_1081376032_h */
