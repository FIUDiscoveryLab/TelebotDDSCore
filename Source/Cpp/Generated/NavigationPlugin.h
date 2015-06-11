
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Navigation.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NavigationPlugin_832035966_h
#define NavigationPlugin_832035966_h

#include "Navigation.h"



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

namespace navigation{


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

} /* namespace navigation */

} /* namespace aeondds */

namespace aeondds{

namespace cmdrnav{


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EModeTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EModeType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EModeTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EModeType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EModeTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EModeTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EModeTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EModeTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EModeType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EModeTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EModeType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EModeTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EModeType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EModeTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EModeTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EModeType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EModeTypePluginSupport_print_data(
    const EModeType *sample, const char *desc, int indent_level);



#define TModeChangePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TModeChangePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TModeChangePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TModeChangePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TModeChangePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TModeChange*
TModeChangePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TModeChange*
TModeChangePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TModeChange*
TModeChangePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TModeChangePluginSupport_copy_data(
    TModeChange *out,
    const TModeChange *in);

NDDSUSERDllExport extern void 
TModeChangePluginSupport_destroy_data_w_params(
    TModeChange *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TModeChangePluginSupport_destroy_data_ex(
    TModeChange *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TModeChangePluginSupport_destroy_data(
    TModeChange *sample);

NDDSUSERDllExport extern void 
TModeChangePluginSupport_print_data(
    const TModeChange *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TModeChangePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TModeChangePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TModeChangePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TModeChangePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TModeChangePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TModeChange *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TModeChangePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TModeChange *out,
    const TModeChange *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TModeChangePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TModeChange *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TModeChangePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TModeChange *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TModeChangePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TModeChange **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TModeChangePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TModeChangePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TModeChangePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TModeChangePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TModeChange * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TModeChangePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TModeChangePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TModeChangePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TModeChange *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TModeChangePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TModeChange * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TModeChangePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TModeChange ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TModeChangePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TModeChange *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TModeChangePlugin_new(void);

NDDSUSERDllExport extern void
TModeChangePlugin_delete(struct PRESTypePlugin *);


#define TRegisterCoursePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TRegisterCoursePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TRegisterCoursePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TRegisterCoursePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TRegisterCoursePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TRegisterCourse*
TRegisterCoursePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TRegisterCourse*
TRegisterCoursePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TRegisterCourse*
TRegisterCoursePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TRegisterCoursePluginSupport_copy_data(
    TRegisterCourse *out,
    const TRegisterCourse *in);

NDDSUSERDllExport extern void 
TRegisterCoursePluginSupport_destroy_data_w_params(
    TRegisterCourse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TRegisterCoursePluginSupport_destroy_data_ex(
    TRegisterCourse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TRegisterCoursePluginSupport_destroy_data(
    TRegisterCourse *sample);

NDDSUSERDllExport extern void 
TRegisterCoursePluginSupport_print_data(
    const TRegisterCourse *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TRegisterCoursePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TRegisterCoursePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TRegisterCoursePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TRegisterCoursePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TRegisterCoursePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TRegisterCourse *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TRegisterCoursePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TRegisterCourse *out,
    const TRegisterCourse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TRegisterCoursePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TRegisterCourse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TRegisterCoursePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TRegisterCourse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TRegisterCoursePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TRegisterCourse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TRegisterCoursePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TRegisterCoursePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TRegisterCoursePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TRegisterCoursePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TRegisterCourse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TRegisterCoursePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TRegisterCoursePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TRegisterCoursePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TRegisterCourse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TRegisterCoursePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TRegisterCourse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TRegisterCoursePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TRegisterCourse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TRegisterCoursePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TRegisterCourse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TRegisterCoursePlugin_new(void);

NDDSUSERDllExport extern void
TRegisterCoursePlugin_delete(struct PRESTypePlugin *);


#define TSetCoursePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TSetCoursePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TSetCoursePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TSetCoursePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TSetCoursePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TSetCourse*
TSetCoursePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TSetCourse*
TSetCoursePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TSetCourse*
TSetCoursePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TSetCoursePluginSupport_copy_data(
    TSetCourse *out,
    const TSetCourse *in);

NDDSUSERDllExport extern void 
TSetCoursePluginSupport_destroy_data_w_params(
    TSetCourse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TSetCoursePluginSupport_destroy_data_ex(
    TSetCourse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TSetCoursePluginSupport_destroy_data(
    TSetCourse *sample);

NDDSUSERDllExport extern void 
TSetCoursePluginSupport_print_data(
    const TSetCourse *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TSetCoursePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TSetCoursePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TSetCoursePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TSetCoursePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TSetCoursePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSetCourse *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TSetCoursePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSetCourse *out,
    const TSetCourse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TSetCoursePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TSetCourse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TSetCoursePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSetCourse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSetCoursePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TSetCourse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TSetCoursePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TSetCoursePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TSetCoursePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TSetCoursePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TSetCourse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TSetCoursePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TSetCoursePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TSetCoursePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TSetCourse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TSetCoursePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSetCourse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSetCoursePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TSetCourse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TSetCoursePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TSetCourse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TSetCoursePlugin_new(void);

NDDSUSERDllExport extern void
TSetCoursePlugin_delete(struct PRESTypePlugin *);


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
EReportTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EReportType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EReportTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EReportType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
EReportTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
EReportTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EReportTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EReportTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EReportType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
EReportTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EReportType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EReportTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EReportType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EReportTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
EReportTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EReportType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
EReportTypePluginSupport_print_data(
    const EReportType *sample, const char *desc, int indent_level);



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



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
ENavigatorSubsystemsPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ENavigatorSubsystems *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ENavigatorSubsystemsPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorSubsystems *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ENavigatorSubsystemsPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ENavigatorSubsystemsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ENavigatorSubsystemsPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ENavigatorSubsystemsPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ENavigatorSubsystems * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ENavigatorSubsystemsPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ENavigatorSubsystems *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ENavigatorSubsystemsPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorSubsystems *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ENavigatorSubsystemsPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ENavigatorSubsystemsPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENavigatorSubsystems *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ENavigatorSubsystemsPluginSupport_print_data(
    const ENavigatorSubsystems *sample, const char *desc, int indent_level);



#define TReportCourseCompletionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TReportCourseCompletionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TReportCourseCompletionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TReportCourseCompletionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TReportCourseCompletionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TReportCourseCompletion*
TReportCourseCompletionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TReportCourseCompletion*
TReportCourseCompletionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TReportCourseCompletion*
TReportCourseCompletionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TReportCourseCompletionPluginSupport_copy_data(
    TReportCourseCompletion *out,
    const TReportCourseCompletion *in);

NDDSUSERDllExport extern void 
TReportCourseCompletionPluginSupport_destroy_data_w_params(
    TReportCourseCompletion *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TReportCourseCompletionPluginSupport_destroy_data_ex(
    TReportCourseCompletion *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TReportCourseCompletionPluginSupport_destroy_data(
    TReportCourseCompletion *sample);

NDDSUSERDllExport extern void 
TReportCourseCompletionPluginSupport_print_data(
    const TReportCourseCompletion *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TReportCourseCompletionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TReportCourseCompletionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TReportCourseCompletionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TReportCourseCompletionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TReportCourseCompletionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportCourseCompletion *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TReportCourseCompletionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportCourseCompletion *out,
    const TReportCourseCompletion *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TReportCourseCompletionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TReportCourseCompletion *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportCourseCompletionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportCourseCompletion *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportCourseCompletionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TReportCourseCompletion **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TReportCourseCompletionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TReportCourseCompletionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TReportCourseCompletionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TReportCourseCompletionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TReportCourseCompletion * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TReportCourseCompletionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TReportCourseCompletionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TReportCourseCompletionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TReportCourseCompletion *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportCourseCompletionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportCourseCompletion * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportCourseCompletionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportCourseCompletion ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TReportCourseCompletionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportCourseCompletion *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TReportCourseCompletionPlugin_new(void);

NDDSUSERDllExport extern void
TReportCourseCompletionPlugin_delete(struct PRESTypePlugin *);


#define TReportWaypointReachedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TReportWaypointReachedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TReportWaypointReachedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TReportWaypointReachedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TReportWaypointReachedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TReportWaypointReached*
TReportWaypointReachedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TReportWaypointReached*
TReportWaypointReachedPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TReportWaypointReached*
TReportWaypointReachedPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TReportWaypointReachedPluginSupport_copy_data(
    TReportWaypointReached *out,
    const TReportWaypointReached *in);

NDDSUSERDllExport extern void 
TReportWaypointReachedPluginSupport_destroy_data_w_params(
    TReportWaypointReached *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TReportWaypointReachedPluginSupport_destroy_data_ex(
    TReportWaypointReached *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TReportWaypointReachedPluginSupport_destroy_data(
    TReportWaypointReached *sample);

NDDSUSERDllExport extern void 
TReportWaypointReachedPluginSupport_print_data(
    const TReportWaypointReached *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TReportWaypointReachedPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TReportWaypointReachedPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TReportWaypointReachedPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TReportWaypointReachedPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TReportWaypointReachedPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportWaypointReached *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TReportWaypointReachedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportWaypointReached *out,
    const TReportWaypointReached *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TReportWaypointReachedPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TReportWaypointReached *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportWaypointReachedPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportWaypointReached *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportWaypointReachedPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TReportWaypointReached **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TReportWaypointReachedPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TReportWaypointReachedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TReportWaypointReachedPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TReportWaypointReachedPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TReportWaypointReached * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TReportWaypointReachedPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TReportWaypointReachedPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TReportWaypointReachedPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TReportWaypointReached *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportWaypointReachedPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportWaypointReached * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportWaypointReachedPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportWaypointReached ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TReportWaypointReachedPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportWaypointReached *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TReportWaypointReachedPlugin_new(void);

NDDSUSERDllExport extern void
TReportWaypointReachedPlugin_delete(struct PRESTypePlugin *);


#define TReportModeShiftPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TReportModeShiftPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TReportModeShiftPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TReportModeShiftPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TReportModeShiftPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TReportModeShift*
TReportModeShiftPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TReportModeShift*
TReportModeShiftPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TReportModeShift*
TReportModeShiftPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TReportModeShiftPluginSupport_copy_data(
    TReportModeShift *out,
    const TReportModeShift *in);

NDDSUSERDllExport extern void 
TReportModeShiftPluginSupport_destroy_data_w_params(
    TReportModeShift *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TReportModeShiftPluginSupport_destroy_data_ex(
    TReportModeShift *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TReportModeShiftPluginSupport_destroy_data(
    TReportModeShift *sample);

NDDSUSERDllExport extern void 
TReportModeShiftPluginSupport_print_data(
    const TReportModeShift *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TReportModeShiftPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TReportModeShiftPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TReportModeShiftPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TReportModeShiftPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TReportModeShiftPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportModeShift *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TReportModeShiftPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportModeShift *out,
    const TReportModeShift *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TReportModeShiftPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TReportModeShift *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportModeShiftPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportModeShift *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportModeShiftPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TReportModeShift **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TReportModeShiftPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TReportModeShiftPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TReportModeShiftPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TReportModeShiftPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TReportModeShift * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TReportModeShiftPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TReportModeShiftPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TReportModeShiftPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TReportModeShift *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportModeShiftPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportModeShift * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportModeShiftPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportModeShift ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TReportModeShiftPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportModeShift *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TReportModeShiftPlugin_new(void);

NDDSUSERDllExport extern void
TReportModeShiftPlugin_delete(struct PRESTypePlugin *);


#define TReportSystemFailurePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TReportSystemFailurePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TReportSystemFailurePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TReportSystemFailurePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TReportSystemFailurePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TReportSystemFailure*
TReportSystemFailurePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TReportSystemFailure*
TReportSystemFailurePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TReportSystemFailure*
TReportSystemFailurePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TReportSystemFailurePluginSupport_copy_data(
    TReportSystemFailure *out,
    const TReportSystemFailure *in);

NDDSUSERDllExport extern void 
TReportSystemFailurePluginSupport_destroy_data_w_params(
    TReportSystemFailure *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TReportSystemFailurePluginSupport_destroy_data_ex(
    TReportSystemFailure *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TReportSystemFailurePluginSupport_destroy_data(
    TReportSystemFailure *sample);

NDDSUSERDllExport extern void 
TReportSystemFailurePluginSupport_print_data(
    const TReportSystemFailure *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TReportSystemFailurePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TReportSystemFailurePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TReportSystemFailurePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TReportSystemFailurePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TReportSystemFailurePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportSystemFailure *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TReportSystemFailurePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportSystemFailure *out,
    const TReportSystemFailure *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TReportSystemFailurePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TReportSystemFailure *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportSystemFailurePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportSystemFailure *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportSystemFailurePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TReportSystemFailure **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TReportSystemFailurePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TReportSystemFailurePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TReportSystemFailurePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TReportSystemFailurePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TReportSystemFailure * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TReportSystemFailurePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TReportSystemFailurePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TReportSystemFailurePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TReportSystemFailure *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportSystemFailurePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportSystemFailure * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportSystemFailurePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportSystemFailure ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TReportSystemFailurePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportSystemFailure *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TReportSystemFailurePlugin_new(void);

NDDSUSERDllExport extern void
TReportSystemFailurePlugin_delete(struct PRESTypePlugin *);


#define TReportStatusResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TReportStatusResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TReportStatusResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TReportStatusResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TReportStatusResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TReportStatusResponse*
TReportStatusResponsePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TReportStatusResponse*
TReportStatusResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TReportStatusResponse*
TReportStatusResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TReportStatusResponsePluginSupport_copy_data(
    TReportStatusResponse *out,
    const TReportStatusResponse *in);

NDDSUSERDllExport extern void 
TReportStatusResponsePluginSupport_destroy_data_w_params(
    TReportStatusResponse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TReportStatusResponsePluginSupport_destroy_data_ex(
    TReportStatusResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TReportStatusResponsePluginSupport_destroy_data(
    TReportStatusResponse *sample);

NDDSUSERDllExport extern void 
TReportStatusResponsePluginSupport_print_data(
    const TReportStatusResponse *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TReportStatusResponsePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TReportStatusResponsePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TReportStatusResponsePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TReportStatusResponsePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TReportStatusResponsePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportStatusResponse *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TReportStatusResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportStatusResponse *out,
    const TReportStatusResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TReportStatusResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TReportStatusResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportStatusResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportStatusResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportStatusResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TReportStatusResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TReportStatusResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TReportStatusResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TReportStatusResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TReportStatusResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TReportStatusResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TReportStatusResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TReportStatusResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TReportStatusResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TReportStatusResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportStatusResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportStatusResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportStatusResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportStatusResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TReportStatusResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportStatusResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TReportStatusResponsePlugin_new(void);

NDDSUSERDllExport extern void
TReportStatusResponsePlugin_delete(struct PRESTypePlugin *);


#define TReportUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TReportUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TReportUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TReportUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TReportUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TReportUnion*
TReportUnionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TReportUnion*
TReportUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TReportUnion*
TReportUnionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TReportUnionPluginSupport_copy_data(
    TReportUnion *out,
    const TReportUnion *in);

NDDSUSERDllExport extern void 
TReportUnionPluginSupport_destroy_data_w_params(
    TReportUnion *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TReportUnionPluginSupport_destroy_data_ex(
    TReportUnion *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TReportUnionPluginSupport_destroy_data(
    TReportUnion *sample);

NDDSUSERDllExport extern void 
TReportUnionPluginSupport_print_data(
    const TReportUnion *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TReportUnionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TReportUnionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TReportUnionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TReportUnionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TReportUnionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportUnion *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TReportUnionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportUnion *out,
    const TReportUnion *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TReportUnionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TReportUnion *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportUnionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportUnion *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportUnionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TReportUnion **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TReportUnionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TReportUnionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TReportUnionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TReportUnionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TReportUnion * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TReportUnionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TReportUnionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TReportUnionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TReportUnion *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportUnionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReportUnion * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportUnionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportUnion ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TReportUnionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TReportUnion *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TReportUnionPlugin_new(void);

NDDSUSERDllExport extern void
TReportUnionPlugin_delete(struct PRESTypePlugin *);


#define TReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TReport*
TReportPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TReport*
TReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TReport*
TReportPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TReportPluginSupport_copy_data(
    TReport *out,
    const TReport *in);

NDDSUSERDllExport extern void 
TReportPluginSupport_destroy_data_w_params(
    TReport *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TReportPluginSupport_destroy_data_ex(
    TReport *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TReportPluginSupport_destroy_data(
    TReport *sample);

NDDSUSERDllExport extern void 
TReportPluginSupport_print_data(
    const TReport *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TReportPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TReportPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TReportPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TReportPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TReportPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReport *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TReportPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReport *out,
    const TReport *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TReportPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TReport *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReport *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TReport **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TReportPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TReportPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TReportPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TReportPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TReport * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TReportPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TReportPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TReportPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TReport *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TReportPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TReport * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TReportPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TReport ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TReportPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TReport *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TReportPlugin_new(void);

NDDSUSERDllExport extern void
TReportPlugin_delete(struct PRESTypePlugin *);

} /* namespace cmdrnav */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* NavigationPlugin_832035966_h */
