
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Control.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ControlPlugin_48527799_h
#define ControlPlugin_48527799_h

#include "Control.h"



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

namespace control{


#define TARStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TARStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TARStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TARStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TARStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TARState*
TARStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TARState*
TARStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TARState*
TARStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TARStatePluginSupport_copy_data(
    TARState *out,
    const TARState *in);

NDDSUSERDllExport extern void 
TARStatePluginSupport_destroy_data_w_params(
    TARState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TARStatePluginSupport_destroy_data_ex(
    TARState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TARStatePluginSupport_destroy_data(
    TARState *sample);

NDDSUSERDllExport extern void 
TARStatePluginSupport_print_data(
    const TARState *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TARStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TARStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TARStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TARStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TARStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TARStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARState *out,
    const TARState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TARStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TARState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TARStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TARStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TARState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TARStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TARStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TARStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TARStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TARState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TARStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TARStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TARStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TARState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TARStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TARStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TARState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TARStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TARState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TARStatePlugin_new(void);

NDDSUSERDllExport extern void
TARStatePlugin_delete(struct PRESTypePlugin *);


#define TVehicleStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TVehicleStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TVehicleStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TVehicleStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TVehicleStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TVehicleState*
TVehicleStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TVehicleState*
TVehicleStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TVehicleState*
TVehicleStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TVehicleStatePluginSupport_copy_data(
    TVehicleState *out,
    const TVehicleState *in);

NDDSUSERDllExport extern void 
TVehicleStatePluginSupport_destroy_data_w_params(
    TVehicleState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TVehicleStatePluginSupport_destroy_data_ex(
    TVehicleState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TVehicleStatePluginSupport_destroy_data(
    TVehicleState *sample);

NDDSUSERDllExport extern void 
TVehicleStatePluginSupport_print_data(
    const TVehicleState *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TVehicleStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TVehicleStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TVehicleStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TVehicleStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TVehicleStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TVehicleStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleState *out,
    const TVehicleState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TVehicleStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TVehicleState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TVehicleStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVehicleStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TVehicleStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TVehicleStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TVehicleStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TVehicleStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TVehicleState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TVehicleStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TVehicleStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TVehicleStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TVehicleState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TVehicleStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVehicleStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TVehicleStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TVehicleState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TVehicleStatePlugin_new(void);

NDDSUSERDllExport extern void
TVehicleStatePlugin_delete(struct PRESTypePlugin *);


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EWaypointStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EWaypointStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EWaypointStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EWaypointStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EWaypointStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EWaypointStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EWaypointStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EWaypointStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EWaypointStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EWaypointStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EWaypointStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EWaypointStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EWaypointStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EWaypointStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EWaypointStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EWaypointStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EWaypointStatusPluginSupport_print_data(
    const EWaypointStatus *sample, const char *desc, int indent_level);



#define TWaypointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TWaypointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TWaypointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TWaypointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TWaypointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TWaypoint*
TWaypointPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TWaypoint*
TWaypointPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TWaypoint*
TWaypointPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TWaypointPluginSupport_copy_data(
    TWaypoint *out,
    const TWaypoint *in);

NDDSUSERDllExport extern void 
TWaypointPluginSupport_destroy_data_w_params(
    TWaypoint *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TWaypointPluginSupport_destroy_data_ex(
    TWaypoint *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TWaypointPluginSupport_destroy_data(
    TWaypoint *sample);

NDDSUSERDllExport extern void 
TWaypointPluginSupport_print_data(
    const TWaypoint *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TWaypointPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TWaypointPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TWaypointPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TWaypointPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TWaypointPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TWaypoint *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TWaypointPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TWaypoint *out,
    const TWaypoint *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TWaypointPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TWaypoint *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TWaypointPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TWaypoint *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TWaypointPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TWaypoint **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TWaypointPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TWaypointPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TWaypointPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TWaypointPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TWaypoint * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TWaypointPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TWaypointPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TWaypointPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TWaypoint *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TWaypointPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TWaypoint * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TWaypointPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TWaypoint ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TWaypointPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TWaypoint *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TWaypointPlugin_new(void);

NDDSUSERDllExport extern void
TWaypointPlugin_delete(struct PRESTypePlugin *);


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EPathPlanningStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EPathPlanningStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EPathPlanningStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EPathPlanningStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EPathPlanningStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EPathPlanningStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EPathPlanningStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EPathPlanningStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EPathPlanningStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EPathPlanningStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EPathPlanningStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EPathPlanningStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EPathPlanningStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EPathPlanningStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EPathPlanningStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EPathPlanningStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EPathPlanningStatusPluginSupport_print_data(
    const EPathPlanningStatus *sample, const char *desc, int indent_level);



#define TPathPlanningRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TPathPlanningRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TPathPlanningRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TPathPlanningRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TPathPlanningRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TPathPlanningRequest*
TPathPlanningRequestPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TPathPlanningRequest*
TPathPlanningRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TPathPlanningRequest*
TPathPlanningRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TPathPlanningRequestPluginSupport_copy_data(
    TPathPlanningRequest *out,
    const TPathPlanningRequest *in);

NDDSUSERDllExport extern void 
TPathPlanningRequestPluginSupport_destroy_data_w_params(
    TPathPlanningRequest *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TPathPlanningRequestPluginSupport_destroy_data_ex(
    TPathPlanningRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TPathPlanningRequestPluginSupport_destroy_data(
    TPathPlanningRequest *sample);

NDDSUSERDllExport extern void 
TPathPlanningRequestPluginSupport_print_data(
    const TPathPlanningRequest *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TPathPlanningRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TPathPlanningRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TPathPlanningRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TPathPlanningRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TPathPlanningRequestPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPathPlanningRequest *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TPathPlanningRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPathPlanningRequest *out,
    const TPathPlanningRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TPathPlanningRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TPathPlanningRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TPathPlanningRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPathPlanningRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TPathPlanningRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TPathPlanningRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TPathPlanningRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TPathPlanningRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TPathPlanningRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TPathPlanningRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TPathPlanningRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TPathPlanningRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TPathPlanningRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TPathPlanningRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TPathPlanningRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TPathPlanningRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TPathPlanningRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TPathPlanningRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TPathPlanningRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TPathPlanningRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TPathPlanningRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TPathPlanningRequestPlugin_new(void);

NDDSUSERDllExport extern void
TPathPlanningRequestPlugin_delete(struct PRESTypePlugin *);


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EWaypointCourseStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EWaypointCourseStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EWaypointCourseStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EWaypointCourseStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EWaypointCourseStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EWaypointCourseStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EWaypointCourseStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EWaypointCourseStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EWaypointCourseStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EWaypointCourseStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EWaypointCourseStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EWaypointCourseStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EWaypointCourseStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EWaypointCourseStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EWaypointCourseStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EWaypointCourseStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EWaypointCourseStatusPluginSupport_print_data(
    const EWaypointCourseStatus *sample, const char *desc, int indent_level);



#define TWaypointCoursePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TWaypointCoursePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TWaypointCoursePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TWaypointCoursePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TWaypointCoursePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TWaypointCourse*
TWaypointCoursePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TWaypointCourse*
TWaypointCoursePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TWaypointCourse*
TWaypointCoursePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TWaypointCoursePluginSupport_copy_data(
    TWaypointCourse *out,
    const TWaypointCourse *in);

NDDSUSERDllExport extern void 
TWaypointCoursePluginSupport_destroy_data_w_params(
    TWaypointCourse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TWaypointCoursePluginSupport_destroy_data_ex(
    TWaypointCourse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TWaypointCoursePluginSupport_destroy_data(
    TWaypointCourse *sample);

NDDSUSERDllExport extern void 
TWaypointCoursePluginSupport_print_data(
    const TWaypointCourse *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TWaypointCoursePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TWaypointCoursePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TWaypointCoursePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TWaypointCoursePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TWaypointCoursePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TWaypointCourse *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TWaypointCoursePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TWaypointCourse *out,
    const TWaypointCourse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TWaypointCoursePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TWaypointCourse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TWaypointCoursePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TWaypointCourse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TWaypointCoursePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TWaypointCourse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TWaypointCoursePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TWaypointCoursePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TWaypointCoursePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TWaypointCoursePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TWaypointCourse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TWaypointCoursePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TWaypointCoursePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TWaypointCoursePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TWaypointCourse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TWaypointCoursePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TWaypointCourse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TWaypointCoursePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TWaypointCourse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TWaypointCoursePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TWaypointCourse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TWaypointCoursePlugin_new(void);

NDDSUSERDllExport extern void
TWaypointCoursePlugin_delete(struct PRESTypePlugin *);


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EVehicleCommandStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EVehicleCommandStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EVehicleCommandStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleCommandStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EVehicleCommandStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EVehicleCommandStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EVehicleCommandStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EVehicleCommandStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EVehicleCommandStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EVehicleCommandStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EVehicleCommandStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EVehicleCommandStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleCommandStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EVehicleCommandStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EVehicleCommandStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EVehicleCommandStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EVehicleCommandStatusPluginSupport_print_data(
    const EVehicleCommandStatus *sample, const char *desc, int indent_level);



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



#define TVehicleCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TVehicleCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TVehicleCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

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

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TVehicleCommandPlugin_new(void);

NDDSUSERDllExport extern void
TVehicleCommandPlugin_delete(struct PRESTypePlugin *);


#define TAttitudeCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TAttitudeCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TAttitudeCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TAttitudeCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TAttitudeCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TAttitudeCommand*
TAttitudeCommandPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TAttitudeCommand*
TAttitudeCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TAttitudeCommand*
TAttitudeCommandPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TAttitudeCommandPluginSupport_copy_data(
    TAttitudeCommand *out,
    const TAttitudeCommand *in);

NDDSUSERDllExport extern void 
TAttitudeCommandPluginSupport_destroy_data_w_params(
    TAttitudeCommand *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TAttitudeCommandPluginSupport_destroy_data_ex(
    TAttitudeCommand *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TAttitudeCommandPluginSupport_destroy_data(
    TAttitudeCommand *sample);

NDDSUSERDllExport extern void 
TAttitudeCommandPluginSupport_print_data(
    const TAttitudeCommand *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TAttitudeCommandPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TAttitudeCommandPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TAttitudeCommandPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TAttitudeCommandPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TAttitudeCommandPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TAttitudeCommand *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TAttitudeCommandPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TAttitudeCommand *out,
    const TAttitudeCommand *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TAttitudeCommandPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TAttitudeCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TAttitudeCommandPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TAttitudeCommand *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TAttitudeCommandPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TAttitudeCommand **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TAttitudeCommandPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TAttitudeCommandPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TAttitudeCommandPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TAttitudeCommandPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TAttitudeCommand * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TAttitudeCommandPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TAttitudeCommandPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TAttitudeCommandPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TAttitudeCommand *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TAttitudeCommandPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TAttitudeCommand * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TAttitudeCommandPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TAttitudeCommand ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TAttitudeCommandPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TAttitudeCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TAttitudeCommandPlugin_new(void);

NDDSUSERDllExport extern void
TAttitudeCommandPlugin_delete(struct PRESTypePlugin *);


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EControlSolicitationResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EControlSolicitationResponse *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EControlSolicitationResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EControlSolicitationResponse *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EControlSolicitationResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EControlSolicitationResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EControlSolicitationResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EControlSolicitationResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EControlSolicitationResponse * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EControlSolicitationResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EControlSolicitationResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EControlSolicitationResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EControlSolicitationResponse *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EControlSolicitationResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EControlSolicitationResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EControlSolicitationResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EControlSolicitationResponsePluginSupport_print_data(
    const EControlSolicitationResponse *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EControlSwitchResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EControlSwitchResponse *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EControlSwitchResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EControlSwitchResponse *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EControlSwitchResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EControlSwitchResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EControlSwitchResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EControlSwitchResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EControlSwitchResponse * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EControlSwitchResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EControlSwitchResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EControlSwitchResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EControlSwitchResponse *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EControlSwitchResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EControlSwitchResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EControlSwitchResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EControlSwitchResponsePluginSupport_print_data(
    const EControlSwitchResponse *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EControlSignalPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EControlSignal *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EControlSignalPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EControlSignal *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EControlSignalPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EControlSignalPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EControlSignalPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EControlSignalPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EControlSignal * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EControlSignalPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EControlSignal *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EControlSignalPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EControlSignal *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EControlSignalPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EControlSignalPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EControlSignal *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EControlSignalPluginSupport_print_data(
    const EControlSignal *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * TControlSolicitationRequest.
 *
 * By default, this type is struct TControlSolicitationRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TControlSolicitationRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TControlSolicitationRequest, the
 * following restriction applies: the key of struct
 * TControlSolicitationRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TControlSolicitationRequest.
*/
typedef  class TControlSolicitationRequest TControlSolicitationRequestKeyHolder;


#define TControlSolicitationRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TControlSolicitationRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TControlSolicitationRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TControlSolicitationRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TControlSolicitationRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TControlSolicitationRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TControlSolicitationRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TControlSolicitationRequest*
TControlSolicitationRequestPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TControlSolicitationRequest*
TControlSolicitationRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSolicitationRequest*
TControlSolicitationRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPluginSupport_copy_data(
    TControlSolicitationRequest *out,
    const TControlSolicitationRequest *in);

NDDSUSERDllExport extern void 
TControlSolicitationRequestPluginSupport_destroy_data_w_params(
    TControlSolicitationRequest *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TControlSolicitationRequestPluginSupport_destroy_data_ex(
    TControlSolicitationRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSolicitationRequestPluginSupport_destroy_data(
    TControlSolicitationRequest *sample);

NDDSUSERDllExport extern void 
TControlSolicitationRequestPluginSupport_print_data(
    const TControlSolicitationRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TControlSolicitationRequest*
TControlSolicitationRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSolicitationRequest*
TControlSolicitationRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TControlSolicitationRequestPluginSupport_destroy_key_ex(
    TControlSolicitationRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSolicitationRequestPluginSupport_destroy_key(
    TControlSolicitationRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TControlSolicitationRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TControlSolicitationRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TControlSolicitationRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TControlSolicitationRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TControlSolicitationRequestPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequest *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequest *out,
    const TControlSolicitationRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSolicitationRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TControlSolicitationRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TControlSolicitationRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TControlSolicitationRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TControlSolicitationRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TControlSolicitationRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TControlSolicitationRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TControlSolicitationRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSolicitationRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TControlSolicitationRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequestKeyHolder *key, 
    const TControlSolicitationRequest *instance);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationRequest *instance, 
    const TControlSolicitationRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TControlSolicitationRequest *instance);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TControlSolicitationRequestPlugin_new(void);

NDDSUSERDllExport extern void
TControlSolicitationRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TControlSolicitationResponse.
 *
 * By default, this type is struct TControlSolicitationResponse
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TControlSolicitationResponse)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TControlSolicitationResponse, the
 * following restriction applies: the key of struct
 * TControlSolicitationResponse must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TControlSolicitationResponse.
*/
typedef  class TControlSolicitationResponse TControlSolicitationResponseKeyHolder;


#define TControlSolicitationResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TControlSolicitationResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TControlSolicitationResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TControlSolicitationResponsePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TControlSolicitationResponsePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TControlSolicitationResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TControlSolicitationResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TControlSolicitationResponse*
TControlSolicitationResponsePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TControlSolicitationResponse*
TControlSolicitationResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSolicitationResponse*
TControlSolicitationResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePluginSupport_copy_data(
    TControlSolicitationResponse *out,
    const TControlSolicitationResponse *in);

NDDSUSERDllExport extern void 
TControlSolicitationResponsePluginSupport_destroy_data_w_params(
    TControlSolicitationResponse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TControlSolicitationResponsePluginSupport_destroy_data_ex(
    TControlSolicitationResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSolicitationResponsePluginSupport_destroy_data(
    TControlSolicitationResponse *sample);

NDDSUSERDllExport extern void 
TControlSolicitationResponsePluginSupport_print_data(
    const TControlSolicitationResponse *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TControlSolicitationResponse*
TControlSolicitationResponsePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSolicitationResponse*
TControlSolicitationResponsePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TControlSolicitationResponsePluginSupport_destroy_key_ex(
    TControlSolicitationResponseKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSolicitationResponsePluginSupport_destroy_key(
    TControlSolicitationResponseKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TControlSolicitationResponsePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TControlSolicitationResponsePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TControlSolicitationResponsePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TControlSolicitationResponsePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TControlSolicitationResponsePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponse *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponse *out,
    const TControlSolicitationResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSolicitationResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TControlSolicitationResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TControlSolicitationResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TControlSolicitationResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TControlSolicitationResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TControlSolicitationResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TControlSolicitationResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TControlSolicitationResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSolicitationResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TControlSolicitationResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponseKeyHolder *key, 
    const TControlSolicitationResponse *instance);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TControlSolicitationResponse *instance, 
    const TControlSolicitationResponseKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TControlSolicitationResponse *instance);

NDDSUSERDllExport extern RTIBool 
TControlSolicitationResponsePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TControlSolicitationResponsePlugin_new(void);

NDDSUSERDllExport extern void
TControlSolicitationResponsePlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TControlSwitchRequest.
 *
 * By default, this type is struct TControlSwitchRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TControlSwitchRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TControlSwitchRequest, the
 * following restriction applies: the key of struct
 * TControlSwitchRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TControlSwitchRequest.
*/
typedef  class TControlSwitchRequest TControlSwitchRequestKeyHolder;


#define TControlSwitchRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TControlSwitchRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TControlSwitchRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TControlSwitchRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TControlSwitchRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TControlSwitchRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TControlSwitchRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TControlSwitchRequest*
TControlSwitchRequestPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TControlSwitchRequest*
TControlSwitchRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSwitchRequest*
TControlSwitchRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPluginSupport_copy_data(
    TControlSwitchRequest *out,
    const TControlSwitchRequest *in);

NDDSUSERDllExport extern void 
TControlSwitchRequestPluginSupport_destroy_data_w_params(
    TControlSwitchRequest *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TControlSwitchRequestPluginSupport_destroy_data_ex(
    TControlSwitchRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSwitchRequestPluginSupport_destroy_data(
    TControlSwitchRequest *sample);

NDDSUSERDllExport extern void 
TControlSwitchRequestPluginSupport_print_data(
    const TControlSwitchRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TControlSwitchRequest*
TControlSwitchRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSwitchRequest*
TControlSwitchRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TControlSwitchRequestPluginSupport_destroy_key_ex(
    TControlSwitchRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSwitchRequestPluginSupport_destroy_key(
    TControlSwitchRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TControlSwitchRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TControlSwitchRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TControlSwitchRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TControlSwitchRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TControlSwitchRequestPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequest *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequest *out,
    const TControlSwitchRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSwitchRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TControlSwitchRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TControlSwitchRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TControlSwitchRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TControlSwitchRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TControlSwitchRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TControlSwitchRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TControlSwitchRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSwitchRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TControlSwitchRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequestKeyHolder *key, 
    const TControlSwitchRequest *instance);

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchRequest *instance, 
    const TControlSwitchRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TControlSwitchRequest *instance);

NDDSUSERDllExport extern RTIBool 
TControlSwitchRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TControlSwitchRequestPlugin_new(void);

NDDSUSERDllExport extern void
TControlSwitchRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TControlSwitchResponse.
 *
 * By default, this type is struct TControlSwitchResponse
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TControlSwitchResponse)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TControlSwitchResponse, the
 * following restriction applies: the key of struct
 * TControlSwitchResponse must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TControlSwitchResponse.
*/
typedef  class TControlSwitchResponse TControlSwitchResponseKeyHolder;


#define TControlSwitchResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TControlSwitchResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TControlSwitchResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TControlSwitchResponsePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TControlSwitchResponsePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TControlSwitchResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TControlSwitchResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TControlSwitchResponse*
TControlSwitchResponsePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TControlSwitchResponse*
TControlSwitchResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSwitchResponse*
TControlSwitchResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePluginSupport_copy_data(
    TControlSwitchResponse *out,
    const TControlSwitchResponse *in);

NDDSUSERDllExport extern void 
TControlSwitchResponsePluginSupport_destroy_data_w_params(
    TControlSwitchResponse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TControlSwitchResponsePluginSupport_destroy_data_ex(
    TControlSwitchResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSwitchResponsePluginSupport_destroy_data(
    TControlSwitchResponse *sample);

NDDSUSERDllExport extern void 
TControlSwitchResponsePluginSupport_print_data(
    const TControlSwitchResponse *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TControlSwitchResponse*
TControlSwitchResponsePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSwitchResponse*
TControlSwitchResponsePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TControlSwitchResponsePluginSupport_destroy_key_ex(
    TControlSwitchResponseKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSwitchResponsePluginSupport_destroy_key(
    TControlSwitchResponseKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TControlSwitchResponsePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TControlSwitchResponsePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TControlSwitchResponsePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TControlSwitchResponsePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TControlSwitchResponsePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponse *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponse *out,
    const TControlSwitchResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSwitchResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TControlSwitchResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TControlSwitchResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TControlSwitchResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TControlSwitchResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TControlSwitchResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TControlSwitchResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TControlSwitchResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSwitchResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TControlSwitchResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponseKeyHolder *key, 
    const TControlSwitchResponse *instance);

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TControlSwitchResponse *instance, 
    const TControlSwitchResponseKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TControlSwitchResponse *instance);

NDDSUSERDllExport extern RTIBool 
TControlSwitchResponsePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TControlSwitchResponsePlugin_new(void);

NDDSUSERDllExport extern void
TControlSwitchResponsePlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TControlSignal.
 *
 * By default, this type is struct TControlSignal
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TControlSignal)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TControlSignal, the
 * following restriction applies: the key of struct
 * TControlSignal must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TControlSignal.
*/
typedef  class TControlSignal TControlSignalKeyHolder;


#define TControlSignalPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TControlSignalPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TControlSignalPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TControlSignalPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TControlSignalPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TControlSignalPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TControlSignalPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TControlSignal*
TControlSignalPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TControlSignal*
TControlSignalPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSignal*
TControlSignalPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TControlSignalPluginSupport_copy_data(
    TControlSignal *out,
    const TControlSignal *in);

NDDSUSERDllExport extern void 
TControlSignalPluginSupport_destroy_data_w_params(
    TControlSignal *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TControlSignalPluginSupport_destroy_data_ex(
    TControlSignal *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSignalPluginSupport_destroy_data(
    TControlSignal *sample);

NDDSUSERDllExport extern void 
TControlSignalPluginSupport_print_data(
    const TControlSignal *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TControlSignal*
TControlSignalPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TControlSignal*
TControlSignalPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TControlSignalPluginSupport_destroy_key_ex(
    TControlSignalKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TControlSignalPluginSupport_destroy_key(
    TControlSignalKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TControlSignalPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TControlSignalPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TControlSignalPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TControlSignalPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TControlSignalPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignal *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignal *out,
    const TControlSignal *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSignal *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignal *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignal **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TControlSignalPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TControlSignalPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TControlSignalPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TControlSignalPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TControlSignal * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TControlSignalPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TControlSignalPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TControlSignal *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignal * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignal ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TControlSignalPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignal *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignalKeyHolder *key, 
    const TControlSignal *instance);

NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TControlSignal *instance, 
    const TControlSignalKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TControlSignal *instance);

NDDSUSERDllExport extern RTIBool 
TControlSignalPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TControlSignalPlugin_new(void);

NDDSUSERDllExport extern void
TControlSignalPlugin_delete(struct PRESTypePlugin *);

} /* namespace control */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ControlPlugin_48527799_h */
