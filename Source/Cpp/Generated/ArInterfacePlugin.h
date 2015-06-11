
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ArInterface.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ArInterfacePlugin_1278635152_h
#define ArInterfacePlugin_1278635152_h

#include "ArInterface.h"



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

namespace arinterface{


#define TVec3fPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TVec3fPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TVec3fPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TVec3fPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TVec3fPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TVec3f*
TVec3fPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TVec3f*
TVec3fPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TVec3f*
TVec3fPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TVec3fPluginSupport_copy_data(
    TVec3f *out,
    const TVec3f *in);

NDDSUSERDllExport extern void 
TVec3fPluginSupport_destroy_data_w_params(
    TVec3f *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TVec3fPluginSupport_destroy_data_ex(
    TVec3f *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TVec3fPluginSupport_destroy_data(
    TVec3f *sample);

NDDSUSERDllExport extern void 
TVec3fPluginSupport_print_data(
    const TVec3f *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TVec3fPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TVec3fPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TVec3fPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TVec3fPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TVec3fPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVec3f *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TVec3fPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVec3f *out,
    const TVec3f *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TVec3fPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TVec3f *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TVec3fPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVec3f *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVec3fPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TVec3f **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TVec3fPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TVec3fPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TVec3fPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TVec3fPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TVec3f * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TVec3fPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TVec3fPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TVec3fPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TVec3f *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TVec3fPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TVec3f * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TVec3fPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TVec3f ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TVec3fPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TVec3f *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TVec3fPlugin_new(void);

NDDSUSERDllExport extern void
TVec3fPlugin_delete(struct PRESTypePlugin *);


#define TNavdataDemoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavdataDemoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavdataDemoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavdataDemoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavdataDemoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavdataDemo*
TNavdataDemoPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavdataDemo*
TNavdataDemoPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavdataDemo*
TNavdataDemoPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavdataDemoPluginSupport_copy_data(
    TNavdataDemo *out,
    const TNavdataDemo *in);

NDDSUSERDllExport extern void 
TNavdataDemoPluginSupport_destroy_data_w_params(
    TNavdataDemo *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavdataDemoPluginSupport_destroy_data_ex(
    TNavdataDemo *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavdataDemoPluginSupport_destroy_data(
    TNavdataDemo *sample);

NDDSUSERDllExport extern void 
TNavdataDemoPluginSupport_print_data(
    const TNavdataDemo *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavdataDemoPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavdataDemoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavdataDemoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavdataDemoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavdataDemoPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataDemo *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavdataDemoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataDemo *out,
    const TNavdataDemo *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavdataDemoPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataDemo *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataDemoPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataDemo *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataDemoPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataDemo **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavdataDemoPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavdataDemoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavdataDemoPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavdataDemoPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavdataDemo * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavdataDemoPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavdataDemoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavdataDemoPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataDemo *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataDemoPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataDemo * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataDemoPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataDemo ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavdataDemoPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataDemo *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavdataDemoPlugin_new(void);

NDDSUSERDllExport extern void
TNavdataDemoPlugin_delete(struct PRESTypePlugin *);


#define TNavdataTimePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavdataTimePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavdataTimePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavdataTimePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavdataTimePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavdataTime*
TNavdataTimePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavdataTime*
TNavdataTimePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavdataTime*
TNavdataTimePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavdataTimePluginSupport_copy_data(
    TNavdataTime *out,
    const TNavdataTime *in);

NDDSUSERDllExport extern void 
TNavdataTimePluginSupport_destroy_data_w_params(
    TNavdataTime *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavdataTimePluginSupport_destroy_data_ex(
    TNavdataTime *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavdataTimePluginSupport_destroy_data(
    TNavdataTime *sample);

NDDSUSERDllExport extern void 
TNavdataTimePluginSupport_print_data(
    const TNavdataTime *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavdataTimePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavdataTimePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavdataTimePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavdataTimePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavdataTimePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataTime *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavdataTimePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataTime *out,
    const TNavdataTime *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavdataTimePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataTime *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataTimePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataTime *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataTimePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataTime **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavdataTimePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavdataTimePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavdataTimePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavdataTimePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavdataTime * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavdataTimePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavdataTimePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavdataTimePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataTime *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataTimePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataTime * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataTimePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataTime ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavdataTimePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataTime *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavdataTimePlugin_new(void);

NDDSUSERDllExport extern void
TNavdataTimePlugin_delete(struct PRESTypePlugin *);


#define TNavdataRawMeasuresPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavdataRawMeasuresPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavdataRawMeasuresPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavdataRawMeasuresPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavdataRawMeasuresPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavdataRawMeasures*
TNavdataRawMeasuresPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavdataRawMeasures*
TNavdataRawMeasuresPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavdataRawMeasures*
TNavdataRawMeasuresPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavdataRawMeasuresPluginSupport_copy_data(
    TNavdataRawMeasures *out,
    const TNavdataRawMeasures *in);

NDDSUSERDllExport extern void 
TNavdataRawMeasuresPluginSupport_destroy_data_w_params(
    TNavdataRawMeasures *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavdataRawMeasuresPluginSupport_destroy_data_ex(
    TNavdataRawMeasures *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavdataRawMeasuresPluginSupport_destroy_data(
    TNavdataRawMeasures *sample);

NDDSUSERDllExport extern void 
TNavdataRawMeasuresPluginSupport_print_data(
    const TNavdataRawMeasures *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavdataRawMeasuresPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavdataRawMeasuresPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavdataRawMeasuresPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavdataRawMeasuresPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavdataRawMeasuresPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataRawMeasures *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavdataRawMeasuresPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataRawMeasures *out,
    const TNavdataRawMeasures *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavdataRawMeasuresPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataRawMeasures *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataRawMeasuresPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataRawMeasures *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataRawMeasuresPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataRawMeasures **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavdataRawMeasuresPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavdataRawMeasuresPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavdataRawMeasuresPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavdataRawMeasuresPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavdataRawMeasures * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavdataRawMeasuresPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavdataRawMeasuresPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavdataRawMeasuresPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataRawMeasures *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataRawMeasuresPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataRawMeasures * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataRawMeasuresPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataRawMeasures ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavdataRawMeasuresPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataRawMeasures *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavdataRawMeasuresPlugin_new(void);

NDDSUSERDllExport extern void
TNavdataRawMeasuresPlugin_delete(struct PRESTypePlugin *);


#define TNavdataPwmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavdataPwmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavdataPwmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavdataPwmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavdataPwmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavdataPwm*
TNavdataPwmPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavdataPwm*
TNavdataPwmPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavdataPwm*
TNavdataPwmPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavdataPwmPluginSupport_copy_data(
    TNavdataPwm *out,
    const TNavdataPwm *in);

NDDSUSERDllExport extern void 
TNavdataPwmPluginSupport_destroy_data_w_params(
    TNavdataPwm *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavdataPwmPluginSupport_destroy_data_ex(
    TNavdataPwm *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavdataPwmPluginSupport_destroy_data(
    TNavdataPwm *sample);

NDDSUSERDllExport extern void 
TNavdataPwmPluginSupport_print_data(
    const TNavdataPwm *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavdataPwmPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavdataPwmPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavdataPwmPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavdataPwmPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavdataPwmPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPwm *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavdataPwmPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPwm *out,
    const TNavdataPwm *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavdataPwmPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataPwm *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataPwmPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPwm *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataPwmPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPwm **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavdataPwmPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavdataPwmPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavdataPwmPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavdataPwmPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavdataPwm * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavdataPwmPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavdataPwmPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavdataPwmPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataPwm *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataPwmPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPwm * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataPwmPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPwm ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavdataPwmPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPwm *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavdataPwmPlugin_new(void);

NDDSUSERDllExport extern void
TNavdataPwmPlugin_delete(struct PRESTypePlugin *);


#define TNavdataAltitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavdataAltitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavdataAltitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavdataAltitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavdataAltitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavdataAltitude*
TNavdataAltitudePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavdataAltitude*
TNavdataAltitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavdataAltitude*
TNavdataAltitudePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavdataAltitudePluginSupport_copy_data(
    TNavdataAltitude *out,
    const TNavdataAltitude *in);

NDDSUSERDllExport extern void 
TNavdataAltitudePluginSupport_destroy_data_w_params(
    TNavdataAltitude *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavdataAltitudePluginSupport_destroy_data_ex(
    TNavdataAltitude *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavdataAltitudePluginSupport_destroy_data(
    TNavdataAltitude *sample);

NDDSUSERDllExport extern void 
TNavdataAltitudePluginSupport_print_data(
    const TNavdataAltitude *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavdataAltitudePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavdataAltitudePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavdataAltitudePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavdataAltitudePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavdataAltitudePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataAltitude *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavdataAltitudePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataAltitude *out,
    const TNavdataAltitude *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavdataAltitudePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataAltitude *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataAltitudePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataAltitude *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataAltitudePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataAltitude **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavdataAltitudePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavdataAltitudePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavdataAltitudePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavdataAltitudePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavdataAltitude * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavdataAltitudePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavdataAltitudePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavdataAltitudePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataAltitude *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataAltitudePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataAltitude * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataAltitudePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataAltitude ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavdataAltitudePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataAltitude *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavdataAltitudePlugin_new(void);

NDDSUSERDllExport extern void
TNavdataAltitudePlugin_delete(struct PRESTypePlugin *);


#define TNavdataPressureRawPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavdataPressureRawPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavdataPressureRawPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavdataPressureRawPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavdataPressureRawPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavdataPressureRaw*
TNavdataPressureRawPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavdataPressureRaw*
TNavdataPressureRawPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavdataPressureRaw*
TNavdataPressureRawPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavdataPressureRawPluginSupport_copy_data(
    TNavdataPressureRaw *out,
    const TNavdataPressureRaw *in);

NDDSUSERDllExport extern void 
TNavdataPressureRawPluginSupport_destroy_data_w_params(
    TNavdataPressureRaw *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavdataPressureRawPluginSupport_destroy_data_ex(
    TNavdataPressureRaw *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavdataPressureRawPluginSupport_destroy_data(
    TNavdataPressureRaw *sample);

NDDSUSERDllExport extern void 
TNavdataPressureRawPluginSupport_print_data(
    const TNavdataPressureRaw *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavdataPressureRawPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavdataPressureRawPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavdataPressureRawPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavdataPressureRawPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavdataPressureRawPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPressureRaw *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavdataPressureRawPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPressureRaw *out,
    const TNavdataPressureRaw *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavdataPressureRawPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataPressureRaw *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataPressureRawPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPressureRaw *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataPressureRawPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPressureRaw **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavdataPressureRawPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavdataPressureRawPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavdataPressureRawPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavdataPressureRawPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavdataPressureRaw * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavdataPressureRawPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavdataPressureRawPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavdataPressureRawPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataPressureRaw *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataPressureRawPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPressureRaw * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataPressureRawPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPressureRaw ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavdataPressureRawPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataPressureRaw *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavdataPressureRawPlugin_new(void);

NDDSUSERDllExport extern void
TNavdataPressureRawPlugin_delete(struct PRESTypePlugin *);


#define TNavdataMagnetoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavdataMagnetoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavdataMagnetoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavdataMagnetoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavdataMagnetoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavdataMagneto*
TNavdataMagnetoPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavdataMagneto*
TNavdataMagnetoPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavdataMagneto*
TNavdataMagnetoPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavdataMagnetoPluginSupport_copy_data(
    TNavdataMagneto *out,
    const TNavdataMagneto *in);

NDDSUSERDllExport extern void 
TNavdataMagnetoPluginSupport_destroy_data_w_params(
    TNavdataMagneto *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavdataMagnetoPluginSupport_destroy_data_ex(
    TNavdataMagneto *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavdataMagnetoPluginSupport_destroy_data(
    TNavdataMagneto *sample);

NDDSUSERDllExport extern void 
TNavdataMagnetoPluginSupport_print_data(
    const TNavdataMagneto *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavdataMagnetoPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavdataMagnetoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavdataMagnetoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavdataMagnetoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavdataMagnetoPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataMagneto *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavdataMagnetoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataMagneto *out,
    const TNavdataMagneto *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavdataMagnetoPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataMagneto *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataMagnetoPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataMagneto *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataMagnetoPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataMagneto **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavdataMagnetoPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavdataMagnetoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavdataMagnetoPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavdataMagnetoPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavdataMagneto * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavdataMagnetoPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavdataMagnetoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavdataMagnetoPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataMagneto *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataMagnetoPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataMagneto * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataMagnetoPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataMagneto ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavdataMagnetoPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataMagneto *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavdataMagnetoPlugin_new(void);

NDDSUSERDllExport extern void
TNavdataMagnetoPlugin_delete(struct PRESTypePlugin *);


#define TNavdataWifiPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TNavdataWifiPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TNavdataWifiPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TNavdataWifiPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TNavdataWifiPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TNavdataWifi*
TNavdataWifiPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TNavdataWifi*
TNavdataWifiPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TNavdataWifi*
TNavdataWifiPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TNavdataWifiPluginSupport_copy_data(
    TNavdataWifi *out,
    const TNavdataWifi *in);

NDDSUSERDllExport extern void 
TNavdataWifiPluginSupport_destroy_data_w_params(
    TNavdataWifi *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TNavdataWifiPluginSupport_destroy_data_ex(
    TNavdataWifi *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TNavdataWifiPluginSupport_destroy_data(
    TNavdataWifi *sample);

NDDSUSERDllExport extern void 
TNavdataWifiPluginSupport_print_data(
    const TNavdataWifi *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TNavdataWifiPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TNavdataWifiPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TNavdataWifiPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TNavdataWifiPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TNavdataWifiPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataWifi *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TNavdataWifiPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataWifi *out,
    const TNavdataWifi *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TNavdataWifiPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataWifi *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataWifiPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataWifi *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataWifiPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataWifi **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TNavdataWifiPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TNavdataWifiPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TNavdataWifiPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TNavdataWifiPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TNavdataWifi * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TNavdataWifiPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TNavdataWifiPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TNavdataWifiPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TNavdataWifi *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TNavdataWifiPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataWifi * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TNavdataWifiPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataWifi ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TNavdataWifiPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TNavdataWifi *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TNavdataWifiPlugin_new(void);

NDDSUSERDllExport extern void
TNavdataWifiPlugin_delete(struct PRESTypePlugin *);

} /* namespace arinterface */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ArInterfacePlugin_1278635152_h */
