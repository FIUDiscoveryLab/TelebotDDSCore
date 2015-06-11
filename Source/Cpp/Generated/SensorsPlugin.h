
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensors.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SensorsPlugin_1082809193_h
#define SensorsPlugin_1082809193_h

#include "Sensors.h"



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

namespace sensors{


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


/* The type used to store keys for instances of type struct
 * TViconTrack.
 *
 * By default, this type is struct TViconTrack
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TViconTrack)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TViconTrack, the
 * following restriction applies: the key of struct
 * TViconTrack must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TViconTrack.
*/
typedef  class TViconTrack TViconTrackKeyHolder;


#define TViconTrackPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TViconTrackPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TViconTrackPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TViconTrackPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TViconTrackPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TViconTrackPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TViconTrackPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TViconTrack*
TViconTrackPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TViconTrack*
TViconTrackPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TViconTrack*
TViconTrackPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TViconTrackPluginSupport_copy_data(
    TViconTrack *out,
    const TViconTrack *in);

NDDSUSERDllExport extern void 
TViconTrackPluginSupport_destroy_data_w_params(
    TViconTrack *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TViconTrackPluginSupport_destroy_data_ex(
    TViconTrack *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TViconTrackPluginSupport_destroy_data(
    TViconTrack *sample);

NDDSUSERDllExport extern void 
TViconTrackPluginSupport_print_data(
    const TViconTrack *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TViconTrack*
TViconTrackPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TViconTrack*
TViconTrackPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TViconTrackPluginSupport_destroy_key_ex(
    TViconTrackKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TViconTrackPluginSupport_destroy_key(
    TViconTrackKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TViconTrackPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TViconTrackPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TViconTrackPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TViconTrackPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TViconTrackPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrack *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrack *out,
    const TViconTrack *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TViconTrack *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrack *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrack **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TViconTrackPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TViconTrackPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TViconTrackPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TViconTrackPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TViconTrack * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TViconTrackPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TViconTrackPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TViconTrack *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrack * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrack ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TViconTrackPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrack *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrackKeyHolder *key, 
    const TViconTrack *instance);

NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TViconTrack *instance, 
    const TViconTrackKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TViconTrack *instance);

NDDSUSERDllExport extern RTIBool 
TViconTrackPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TViconTrackPlugin_new(void);

NDDSUSERDllExport extern void
TViconTrackPlugin_delete(struct PRESTypePlugin *);

} /* namespace sensors */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SensorsPlugin_1082809193_h */
