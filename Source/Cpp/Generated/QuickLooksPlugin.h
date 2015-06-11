
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QuickLooks.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef QuickLooksPlugin_198687349_h
#define QuickLooksPlugin_198687349_h

#include "QuickLooks.h"



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

namespace quicklooks{


#define TSensorReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TSensorReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TSensorReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TSensorReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TSensorReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TSensorReport*
TSensorReportPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TSensorReport*
TSensorReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TSensorReport*
TSensorReportPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TSensorReportPluginSupport_copy_data(
    TSensorReport *out,
    const TSensorReport *in);

NDDSUSERDllExport extern void 
TSensorReportPluginSupport_destroy_data_w_params(
    TSensorReport *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TSensorReportPluginSupport_destroy_data_ex(
    TSensorReport *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TSensorReportPluginSupport_destroy_data(
    TSensorReport *sample);

NDDSUSERDllExport extern void 
TSensorReportPluginSupport_print_data(
    const TSensorReport *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TSensorReportPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TSensorReportPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TSensorReportPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TSensorReportPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TSensorReportPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSensorReport *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TSensorReportPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSensorReport *out,
    const TSensorReport *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TSensorReportPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TSensorReport *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TSensorReportPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSensorReport *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSensorReportPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TSensorReport **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TSensorReportPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TSensorReportPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TSensorReportPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TSensorReportPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TSensorReport * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TSensorReportPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TSensorReportPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TSensorReportPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TSensorReport *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TSensorReportPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TSensorReport * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TSensorReportPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TSensorReport ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TSensorReportPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TSensorReport *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TSensorReportPlugin_new(void);

NDDSUSERDllExport extern void
TSensorReportPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TDiscoverAQReport.
 *
 * By default, this type is struct TDiscoverAQReport
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TDiscoverAQReport)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TDiscoverAQReport, the
 * following restriction applies: the key of struct
 * TDiscoverAQReport must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TDiscoverAQReport.
*/
typedef  class TDiscoverAQReport TDiscoverAQReportKeyHolder;


#define TDiscoverAQReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TDiscoverAQReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TDiscoverAQReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TDiscoverAQReportPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TDiscoverAQReportPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TDiscoverAQReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TDiscoverAQReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TDiscoverAQReport*
TDiscoverAQReportPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TDiscoverAQReport*
TDiscoverAQReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TDiscoverAQReport*
TDiscoverAQReportPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPluginSupport_copy_data(
    TDiscoverAQReport *out,
    const TDiscoverAQReport *in);

NDDSUSERDllExport extern void 
TDiscoverAQReportPluginSupport_destroy_data_w_params(
    TDiscoverAQReport *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TDiscoverAQReportPluginSupport_destroy_data_ex(
    TDiscoverAQReport *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TDiscoverAQReportPluginSupport_destroy_data(
    TDiscoverAQReport *sample);

NDDSUSERDllExport extern void 
TDiscoverAQReportPluginSupport_print_data(
    const TDiscoverAQReport *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TDiscoverAQReport*
TDiscoverAQReportPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TDiscoverAQReport*
TDiscoverAQReportPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TDiscoverAQReportPluginSupport_destroy_key_ex(
    TDiscoverAQReportKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TDiscoverAQReportPluginSupport_destroy_key(
    TDiscoverAQReportKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TDiscoverAQReportPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TDiscoverAQReportPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TDiscoverAQReportPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TDiscoverAQReportPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TDiscoverAQReportPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReport *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReport *out,
    const TDiscoverAQReport *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TDiscoverAQReport *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReport *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReport **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TDiscoverAQReportPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TDiscoverAQReportPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TDiscoverAQReportPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TDiscoverAQReportPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TDiscoverAQReport * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TDiscoverAQReportPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TDiscoverAQReportPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TDiscoverAQReport *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReport * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReport ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TDiscoverAQReportPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReport *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReportKeyHolder *key, 
    const TDiscoverAQReport *instance);

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TDiscoverAQReport *instance, 
    const TDiscoverAQReportKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TDiscoverAQReport *instance);

NDDSUSERDllExport extern RTIBool 
TDiscoverAQReportPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TDiscoverAQReportPlugin_new(void);

NDDSUSERDllExport extern void
TDiscoverAQReportPlugin_delete(struct PRESTypePlugin *);

} /* namespace quicklooks */

} /* namespace aeondds */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* QuickLooksPlugin_198687349_h */
