
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommanderToNavigator.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommanderToNavigatorPlugin_1956912759_h
#define CommanderToNavigatorPlugin_1956912759_h

#include "CommanderToNavigator.h"



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

namespace CmdrAndNav{


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
ENavigatorModesPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ENavigatorModes *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ENavigatorModesPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorModes *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ENavigatorModesPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ENavigatorModesPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ENavigatorModesPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ENavigatorModesPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ENavigatorModes * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ENavigatorModesPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ENavigatorModes *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ENavigatorModesPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorModes *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ENavigatorModesPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ENavigatorModesPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorModes *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ENavigatorModesPluginSupport_print_data(
    const ENavigatorModes *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
ECommanderMessageTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ECommanderMessageType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ECommanderMessageTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ECommanderMessageType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ECommanderMessageTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ECommanderMessageTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ECommanderMessageTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ECommanderMessageTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ECommanderMessageType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ECommanderMessageTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ECommanderMessageType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ECommanderMessageTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ECommanderMessageType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ECommanderMessageTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ECommanderMessageTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ECommanderMessageType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ECommanderMessageTypePluginSupport_print_data(
    const ECommanderMessageType *sample, const char *desc, int indent_level);



#define TCommanderToNavigatorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TCommanderToNavigatorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TCommanderToNavigatorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TCommanderToNavigatorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TCommanderToNavigatorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TCommanderToNavigator*
TCommanderToNavigatorPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TCommanderToNavigator*
TCommanderToNavigatorPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TCommanderToNavigator*
TCommanderToNavigatorPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TCommanderToNavigatorPluginSupport_copy_data(
    TCommanderToNavigator *out,
    const TCommanderToNavigator *in);

NDDSUSERDllExport extern void 
TCommanderToNavigatorPluginSupport_destroy_data_w_params(
    TCommanderToNavigator *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TCommanderToNavigatorPluginSupport_destroy_data_ex(
    TCommanderToNavigator *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TCommanderToNavigatorPluginSupport_destroy_data(
    TCommanderToNavigator *sample);

NDDSUSERDllExport extern void 
TCommanderToNavigatorPluginSupport_print_data(
    const TCommanderToNavigator *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TCommanderToNavigatorPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TCommanderToNavigatorPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TCommanderToNavigatorPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TCommanderToNavigatorPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TCommanderToNavigatorPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TCommanderToNavigator *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TCommanderToNavigatorPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TCommanderToNavigator *out,
    const TCommanderToNavigator *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TCommanderToNavigatorPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TCommanderToNavigator *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TCommanderToNavigatorPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TCommanderToNavigator *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TCommanderToNavigatorPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TCommanderToNavigator **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TCommanderToNavigatorPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TCommanderToNavigatorPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TCommanderToNavigatorPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TCommanderToNavigatorPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TCommanderToNavigator * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TCommanderToNavigatorPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TCommanderToNavigatorPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TCommanderToNavigatorPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TCommanderToNavigator *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TCommanderToNavigatorPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TCommanderToNavigator * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TCommanderToNavigatorPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TCommanderToNavigator ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TCommanderToNavigatorPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TCommanderToNavigator *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TCommanderToNavigatorPlugin_new(void);

NDDSUSERDllExport extern void
TCommanderToNavigatorPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TJsonMissionFile.
 *
 * By default, this type is struct TJsonMissionFile
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TJsonMissionFile)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TJsonMissionFile, the
 * following restriction applies: the key of struct
 * TJsonMissionFile must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TJsonMissionFile.
*/
typedef  class TJsonMissionFile TJsonMissionFileKeyHolder;


#define TJsonMissionFilePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TJsonMissionFilePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TJsonMissionFilePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TJsonMissionFilePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TJsonMissionFilePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TJsonMissionFilePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TJsonMissionFilePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TJsonMissionFile*
TJsonMissionFilePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TJsonMissionFile*
TJsonMissionFilePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TJsonMissionFile*
TJsonMissionFilePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePluginSupport_copy_data(
    TJsonMissionFile *out,
    const TJsonMissionFile *in);

NDDSUSERDllExport extern void 
TJsonMissionFilePluginSupport_destroy_data_w_params(
    TJsonMissionFile *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TJsonMissionFilePluginSupport_destroy_data_ex(
    TJsonMissionFile *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TJsonMissionFilePluginSupport_destroy_data(
    TJsonMissionFile *sample);

NDDSUSERDllExport extern void 
TJsonMissionFilePluginSupport_print_data(
    const TJsonMissionFile *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TJsonMissionFile*
TJsonMissionFilePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TJsonMissionFile*
TJsonMissionFilePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TJsonMissionFilePluginSupport_destroy_key_ex(
    TJsonMissionFileKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TJsonMissionFilePluginSupport_destroy_key(
    TJsonMissionFileKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TJsonMissionFilePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TJsonMissionFilePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TJsonMissionFilePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TJsonMissionFilePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TJsonMissionFilePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFile *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFile *out,
    const TJsonMissionFile *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TJsonMissionFile *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFile *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFile **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TJsonMissionFilePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TJsonMissionFilePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TJsonMissionFilePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TJsonMissionFilePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TJsonMissionFile * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TJsonMissionFilePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TJsonMissionFilePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TJsonMissionFile *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFile * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFile ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TJsonMissionFilePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFile *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFileKeyHolder *key, 
    const TJsonMissionFile *instance);

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TJsonMissionFile *instance, 
    const TJsonMissionFileKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TJsonMissionFile *instance);

NDDSUSERDllExport extern RTIBool 
TJsonMissionFilePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TJsonMissionFilePlugin_new(void);

NDDSUSERDllExport extern void
TJsonMissionFilePlugin_delete(struct PRESTypePlugin *);


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
ENavigatorMessageTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ENavigatorMessageType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ENavigatorMessageTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorMessageType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ENavigatorMessageTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ENavigatorMessageTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ENavigatorMessageTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ENavigatorMessageTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ENavigatorMessageType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ENavigatorMessageTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ENavigatorMessageType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ENavigatorMessageTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorMessageType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ENavigatorMessageTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ENavigatorMessageTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorMessageType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ENavigatorMessageTypePluginSupport_print_data(
    const ENavigatorMessageType *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EStatusPluginSupport_print_data(
    const EStatus *sample, const char *desc, int indent_level);



#define TNavigatorToCommanderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavigatorToCommanderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavigatorToCommanderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavigatorToCommanderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavigatorToCommanderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavigatorToCommander*
TNavigatorToCommanderPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavigatorToCommander*
TNavigatorToCommanderPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavigatorToCommander*
TNavigatorToCommanderPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavigatorToCommanderPluginSupport_copy_data(
    TNavigatorToCommander *out,
    const TNavigatorToCommander *in);

NDDSUSERDllExport extern void 
TNavigatorToCommanderPluginSupport_destroy_data_w_params(
    TNavigatorToCommander *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavigatorToCommanderPluginSupport_destroy_data_ex(
    TNavigatorToCommander *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavigatorToCommanderPluginSupport_destroy_data(
    TNavigatorToCommander *sample);

NDDSUSERDllExport extern void 
TNavigatorToCommanderPluginSupport_print_data(
    const TNavigatorToCommander *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavigatorToCommanderPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavigatorToCommanderPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavigatorToCommanderPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavigatorToCommanderPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavigatorToCommanderPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavigatorToCommander *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavigatorToCommanderPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavigatorToCommander *out,
    const TNavigatorToCommander *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavigatorToCommanderPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavigatorToCommander *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavigatorToCommanderPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavigatorToCommander *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavigatorToCommanderPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavigatorToCommander **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavigatorToCommanderPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavigatorToCommanderPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavigatorToCommanderPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavigatorToCommanderPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavigatorToCommander * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavigatorToCommanderPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavigatorToCommanderPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavigatorToCommanderPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavigatorToCommander *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavigatorToCommanderPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavigatorToCommander * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavigatorToCommanderPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavigatorToCommander ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavigatorToCommanderPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavigatorToCommander *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavigatorToCommanderPlugin_new(void);

NDDSUSERDllExport extern void
TNavigatorToCommanderPlugin_delete(struct PRESTypePlugin *);

} /* namespace CmdrAndNav */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* CommanderToNavigatorPlugin_1956912759_h */
