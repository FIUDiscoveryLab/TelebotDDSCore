
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Video.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef VideoPlugin_959185661_h
#define VideoPlugin_959185661_h

#include "Video.h"



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

namespace video{

/* The type used to store keys for instances of type struct
 * TSmallInfraredStream.
 *
 * By default, this type is struct TSmallInfraredStream
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TSmallInfraredStream)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TSmallInfraredStream, the
 * following restriction applies: the key of struct
 * TSmallInfraredStream must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TSmallInfraredStream.
*/
typedef  class TSmallInfraredStream TSmallInfraredStreamKeyHolder;


#define TSmallInfraredStreamPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TSmallInfraredStreamPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TSmallInfraredStreamPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TSmallInfraredStreamPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TSmallInfraredStreamPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TSmallInfraredStreamPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TSmallInfraredStreamPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TSmallInfraredStream*
TSmallInfraredStreamPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TSmallInfraredStream*
TSmallInfraredStreamPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TSmallInfraredStream*
TSmallInfraredStreamPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPluginSupport_copy_data(
    TSmallInfraredStream *out,
    const TSmallInfraredStream *in);

NDDSUSERDllExport extern void 
TSmallInfraredStreamPluginSupport_destroy_data_w_params(
    TSmallInfraredStream *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TSmallInfraredStreamPluginSupport_destroy_data_ex(
    TSmallInfraredStream *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TSmallInfraredStreamPluginSupport_destroy_data(
    TSmallInfraredStream *sample);

NDDSUSERDllExport extern void 
TSmallInfraredStreamPluginSupport_print_data(
    const TSmallInfraredStream *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TSmallInfraredStream*
TSmallInfraredStreamPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TSmallInfraredStream*
TSmallInfraredStreamPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TSmallInfraredStreamPluginSupport_destroy_key_ex(
    TSmallInfraredStreamKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TSmallInfraredStreamPluginSupport_destroy_key(
    TSmallInfraredStreamKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TSmallInfraredStreamPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TSmallInfraredStreamPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TSmallInfraredStreamPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TSmallInfraredStreamPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TSmallInfraredStreamPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStream *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStream *out,
    const TSmallInfraredStream *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TSmallInfraredStream *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStream *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStream **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TSmallInfraredStreamPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TSmallInfraredStreamPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TSmallInfraredStreamPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TSmallInfraredStreamPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TSmallInfraredStream * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TSmallInfraredStreamPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TSmallInfraredStreamPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TSmallInfraredStream *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStream * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStream ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TSmallInfraredStreamPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStream *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStreamKeyHolder *key, 
    const TSmallInfraredStream *instance);

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TSmallInfraredStream *instance, 
    const TSmallInfraredStreamKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TSmallInfraredStream *instance);

NDDSUSERDllExport extern RTIBool 
TSmallInfraredStreamPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TSmallInfraredStreamPlugin_new(void);

NDDSUSERDllExport extern void
TSmallInfraredStreamPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TGenericVideoFrame.
 *
 * By default, this type is struct TGenericVideoFrame
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TGenericVideoFrame)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TGenericVideoFrame, the
 * following restriction applies: the key of struct
 * TGenericVideoFrame must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TGenericVideoFrame.
*/
typedef  class TGenericVideoFrame TGenericVideoFrameKeyHolder;


#define TGenericVideoFramePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TGenericVideoFramePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TGenericVideoFramePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TGenericVideoFramePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TGenericVideoFramePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TGenericVideoFramePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TGenericVideoFramePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TGenericVideoFrame*
TGenericVideoFramePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TGenericVideoFrame*
TGenericVideoFramePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TGenericVideoFrame*
TGenericVideoFramePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePluginSupport_copy_data(
    TGenericVideoFrame *out,
    const TGenericVideoFrame *in);

NDDSUSERDllExport extern void 
TGenericVideoFramePluginSupport_destroy_data_w_params(
    TGenericVideoFrame *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TGenericVideoFramePluginSupport_destroy_data_ex(
    TGenericVideoFrame *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TGenericVideoFramePluginSupport_destroy_data(
    TGenericVideoFrame *sample);

NDDSUSERDllExport extern void 
TGenericVideoFramePluginSupport_print_data(
    const TGenericVideoFrame *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TGenericVideoFrame*
TGenericVideoFramePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TGenericVideoFrame*
TGenericVideoFramePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TGenericVideoFramePluginSupport_destroy_key_ex(
    TGenericVideoFrameKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TGenericVideoFramePluginSupport_destroy_key(
    TGenericVideoFrameKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TGenericVideoFramePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TGenericVideoFramePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TGenericVideoFramePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TGenericVideoFramePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TGenericVideoFramePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrame *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrame *out,
    const TGenericVideoFrame *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TGenericVideoFrame *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrame *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrame **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TGenericVideoFramePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TGenericVideoFramePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TGenericVideoFramePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TGenericVideoFramePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TGenericVideoFrame * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TGenericVideoFramePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TGenericVideoFramePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TGenericVideoFrame *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrame * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrame ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TGenericVideoFramePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrame *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrameKeyHolder *key, 
    const TGenericVideoFrame *instance);

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TGenericVideoFrame *instance, 
    const TGenericVideoFrameKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TGenericVideoFrame *instance);

NDDSUSERDllExport extern RTIBool 
TGenericVideoFramePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TGenericVideoFramePlugin_new(void);

NDDSUSERDllExport extern void
TGenericVideoFramePlugin_delete(struct PRESTypePlugin *);

} /* namespace video */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* VideoPlugin_959185661_h */
