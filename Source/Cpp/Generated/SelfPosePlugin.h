
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SelfPose.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SelfPosePlugin_1893211664_h
#define SelfPosePlugin_1893211664_h

#include "SelfPose.h"



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

namespace selfpose{

/* The type used to store keys for instances of type struct
 * TSelfPose.
 *
 * By default, this type is struct TSelfPose
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TSelfPose)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TSelfPose, the
 * following restriction applies: the key of struct
 * TSelfPose must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TSelfPose.
*/
typedef  class TSelfPose TSelfPoseKeyHolder;


#define TSelfPosePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TSelfPosePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TSelfPosePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TSelfPosePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TSelfPosePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TSelfPosePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TSelfPosePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TSelfPose*
TSelfPosePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TSelfPose*
TSelfPosePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TSelfPose*
TSelfPosePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TSelfPosePluginSupport_copy_data(
    TSelfPose *out,
    const TSelfPose *in);

NDDSUSERDllExport extern void 
TSelfPosePluginSupport_destroy_data_w_params(
    TSelfPose *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TSelfPosePluginSupport_destroy_data_ex(
    TSelfPose *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TSelfPosePluginSupport_destroy_data(
    TSelfPose *sample);

NDDSUSERDllExport extern void 
TSelfPosePluginSupport_print_data(
    const TSelfPose *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TSelfPose*
TSelfPosePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TSelfPose*
TSelfPosePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TSelfPosePluginSupport_destroy_key_ex(
    TSelfPoseKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TSelfPosePluginSupport_destroy_key(
    TSelfPoseKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TSelfPosePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TSelfPosePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TSelfPosePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TSelfPosePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TSelfPosePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPose *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPose *out,
    const TSelfPose *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TSelfPose *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPose *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPose **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TSelfPosePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TSelfPosePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TSelfPosePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TSelfPosePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TSelfPose * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TSelfPosePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TSelfPosePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TSelfPose *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPose * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPose ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TSelfPosePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPose *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPoseKeyHolder *key, 
    const TSelfPose *instance);

NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TSelfPose *instance, 
    const TSelfPoseKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TSelfPose *instance);

NDDSUSERDllExport extern RTIBool 
TSelfPosePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TSelfPosePlugin_new(void);

NDDSUSERDllExport extern void
TSelfPosePlugin_delete(struct PRESTypePlugin *);

} /* namespace selfpose */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SelfPosePlugin_1893211664_h */
