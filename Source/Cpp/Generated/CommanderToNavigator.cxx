
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommanderToNavigator.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "CommanderToNavigator.h"


namespace aeondds{

namespace CmdrAndNav{
/* ========================================================================= */
const char *ENavigatorModesTYPENAME = "aeondds::CmdrAndNav::ENavigatorModes";

DDS_TypeCode* ENavigatorModes_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ENavigatorModes_g_tc_members[8] =
    {
        {
            (char *)"INITILIZE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            INITILIZE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAITFORMISSION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAITFORMISSION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"FOLLOWWAYPOINTS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FOLLOWWAYPOINTS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"EMERGENCYSOFT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            EMERGENCYSOFT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"EMERGENCYHARD",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            EMERGENCYHARD, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PACKAGEPICKUP",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PACKAGEPICKUP, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"DROPOFFPACKAGE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            DROPOFFPACKAGE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SHUTDOWNNOW",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SHUTDOWNNOW, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ENavigatorModes_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::CmdrAndNav::ENavigatorModes", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of enumerators */
        ENavigatorModes_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ENavigatorModes_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ENavigatorModes_g_tc;
}
 

RTIBool ENavigatorModes_initialize(
    ENavigatorModes* sample)
{
    *sample = INITILIZE;
    return RTI_TRUE;
}
        
RTIBool ENavigatorModes_initialize_ex(
    ENavigatorModes* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = INITILIZE;
    return RTI_TRUE;
}

RTIBool ENavigatorModes_initialize_w_params(
        ENavigatorModes* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = INITILIZE;
    return RTI_TRUE;
}

void ENavigatorModes_finalize(
    ENavigatorModes* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ENavigatorModes_finalize_ex(
    ENavigatorModes* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ENavigatorModes_finalize_w_params(
        ENavigatorModes* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ENavigatorModes_copy(
    ENavigatorModes* dst,
    const ENavigatorModes* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ENavigatorModes_getValues(ENavigatorModesSeq * values) 
    
{
    int i = 0;
    ENavigatorModes * buffer;


    if (!values->maximum(8)) {
        return RTI_FALSE;
    }

    if (!values->length(8)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = INITILIZE;
    i++;
    
    buffer[i] = WAITFORMISSION;
    i++;
    
    buffer[i] = FOLLOWWAYPOINTS;
    i++;
    
    buffer[i] = EMERGENCYSOFT;
    i++;
    
    buffer[i] = EMERGENCYHARD;
    i++;
    
    buffer[i] = PACKAGEPICKUP;
    i++;
    
    buffer[i] = DROPOFFPACKAGE;
    i++;
    
    buffer[i] = SHUTDOWNNOW;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ENavigatorModes' sequence class.
 */
#define T ENavigatorModes
#define TSeq ENavigatorModesSeq
#define T_initialize_w_params ENavigatorModes_initialize_w_params
#define T_finalize_w_params   ENavigatorModes_finalize_w_params
#define T_copy       ENavigatorModes_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T
/* ========================================================================= */
const char *ECommanderMessageTypeTYPENAME = "aeondds::CmdrAndNav::ECommanderMessageType";

DDS_TypeCode* ECommanderMessageType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ECommanderMessageType_g_tc_members[2] =
    {
        {
            (char *)"CHANGEMODE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CHANGEMODE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SetCourse",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SetCourse, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ECommanderMessageType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::CmdrAndNav::ECommanderMessageType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of enumerators */
        ECommanderMessageType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ECommanderMessageType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ECommanderMessageType_g_tc;
}
 

RTIBool ECommanderMessageType_initialize(
    ECommanderMessageType* sample)
{
    *sample = CHANGEMODE;
    return RTI_TRUE;
}
        
RTIBool ECommanderMessageType_initialize_ex(
    ECommanderMessageType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = CHANGEMODE;
    return RTI_TRUE;
}

RTIBool ECommanderMessageType_initialize_w_params(
        ECommanderMessageType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = CHANGEMODE;
    return RTI_TRUE;
}

void ECommanderMessageType_finalize(
    ECommanderMessageType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ECommanderMessageType_finalize_ex(
    ECommanderMessageType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ECommanderMessageType_finalize_w_params(
        ECommanderMessageType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ECommanderMessageType_copy(
    ECommanderMessageType* dst,
    const ECommanderMessageType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ECommanderMessageType_getValues(ECommanderMessageTypeSeq * values) 
    
{
    int i = 0;
    ECommanderMessageType * buffer;


    if (!values->maximum(2)) {
        return RTI_FALSE;
    }

    if (!values->length(2)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = CHANGEMODE;
    i++;
    
    buffer[i] = SetCourse;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ECommanderMessageType' sequence class.
 */
#define T ECommanderMessageType
#define TSeq ECommanderMessageTypeSeq
#define T_initialize_w_params ECommanderMessageType_initialize_w_params
#define T_finalize_w_params   ECommanderMessageType_finalize_w_params
#define T_copy       ECommanderMessageType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T
/* ========================================================================= */
const char *TCommanderToNavigatorTYPENAME = "aeondds::CmdrAndNav::TCommanderToNavigator";

DDS_TypeCode* TCommanderToNavigator_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TCommanderToNavigator_g_tc_members[4]=
    {
        {
            (char *)"Command",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"eRequestedMode",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"nCourseIndex",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"nCourseToWaypoint",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TCommanderToNavigator_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::CmdrAndNav::TCommanderToNavigator", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TCommanderToNavigator_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TCommanderToNavigator*/

    if (is_initialized) {
        return &TCommanderToNavigator_g_tc;
    }


    TCommanderToNavigator_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::CmdrAndNav::ECommanderMessageType_get_typecode();
    TCommanderToNavigator_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::CmdrAndNav::ENavigatorModes_get_typecode();
    TCommanderToNavigator_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TCommanderToNavigator_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TCommanderToNavigator_g_tc;
}


RTIBool TCommanderToNavigator_initialize(
    TCommanderToNavigator* sample) {
  return ::aeondds::CmdrAndNav::TCommanderToNavigator_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TCommanderToNavigator_initialize_ex(
    TCommanderToNavigator* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::CmdrAndNav::TCommanderToNavigator_initialize_w_params(
        sample,&allocParams);
}

RTIBool TCommanderToNavigator_initialize_w_params(
        TCommanderToNavigator* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::CmdrAndNav::ECommanderMessageType_initialize_w_params(&sample->Command,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::CmdrAndNav::ENavigatorModes_initialize_w_params(&sample->eRequestedMode,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->nCourseIndex)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->nCourseToWaypoint)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TCommanderToNavigator_finalize(
    TCommanderToNavigator* sample)
{
    ::aeondds::CmdrAndNav::TCommanderToNavigator_finalize_ex(sample,RTI_TRUE);
}
        
void TCommanderToNavigator_finalize_ex(
    TCommanderToNavigator* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::CmdrAndNav::TCommanderToNavigator_finalize_w_params(
        sample,&deallocParams);
}

void TCommanderToNavigator_finalize_w_params(
        TCommanderToNavigator* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::CmdrAndNav::ECommanderMessageType_finalize_w_params(&sample->Command, deallocParams);
            

    aeondds::CmdrAndNav::ENavigatorModes_finalize_w_params(&sample->eRequestedMode, deallocParams);
            



}

void TCommanderToNavigator_finalize_optional_members(
    TCommanderToNavigator* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::CmdrAndNav::ECommanderMessageType_finalize_w_params(&sample->Command, deallocParams);
            

    aeondds::CmdrAndNav::ENavigatorModes_finalize_w_params(&sample->eRequestedMode, deallocParams);
            



}

RTIBool TCommanderToNavigator_copy(
    TCommanderToNavigator* dst,
    const TCommanderToNavigator* src)
{

    if (!aeondds::CmdrAndNav::ECommanderMessageType_copy(
        &dst->Command, &src->Command)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::CmdrAndNav::ENavigatorModes_copy(
        &dst->eRequestedMode, &src->eRequestedMode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->nCourseIndex, &src->nCourseIndex)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->nCourseToWaypoint, &src->nCourseToWaypoint)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TCommanderToNavigator' sequence class.
 */
#define T TCommanderToNavigator
#define TSeq TCommanderToNavigatorSeq
#define T_initialize_w_params ::aeondds::CmdrAndNav::TCommanderToNavigator_initialize_w_params
#define T_finalize_w_params   ::aeondds::CmdrAndNav::TCommanderToNavigator_finalize_w_params
#define T_copy       ::aeondds::CmdrAndNav::TCommanderToNavigator_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *TJsonMissionFileTYPENAME = "aeondds::CmdrAndNav::TJsonMissionFile";

DDS_TypeCode* TJsonMissionFile_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TJsonMissionFile_g_tc_jsonFile_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((aeondds::CmdrAndNav::MAX_OCTETS_JSON_FILE),NULL);

    static DDS_TypeCode_Member TJsonMissionFile_g_tc_members[2]=
    {
        {
            (char *)"systemId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"jsonFile",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TJsonMissionFile_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::CmdrAndNav::TJsonMissionFile", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TJsonMissionFile_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TJsonMissionFile*/

    if (is_initialized) {
        return &TJsonMissionFile_g_tc;
    }

    TJsonMissionFile_g_tc_jsonFile_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    TJsonMissionFile_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TJsonMissionFile_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&TJsonMissionFile_g_tc_jsonFile_sequence;

    is_initialized = RTI_TRUE;

    return &TJsonMissionFile_g_tc;
}


RTIBool TJsonMissionFile_initialize(
    TJsonMissionFile* sample) {
  return ::aeondds::CmdrAndNav::TJsonMissionFile_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TJsonMissionFile_initialize_ex(
    TJsonMissionFile* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::CmdrAndNav::TJsonMissionFile_initialize_w_params(
        sample,&allocParams);
}

RTIBool TJsonMissionFile_initialize_w_params(
        TJsonMissionFile* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->systemId)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->jsonFile);
        if (!DDS_OctetSeq_set_maximum(&sample->jsonFile,
                ((aeondds::CmdrAndNav::MAX_OCTETS_JSON_FILE)))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(&sample->jsonFile, 0); 
    }
            


    return RTI_TRUE;
}

void TJsonMissionFile_finalize(
    TJsonMissionFile* sample)
{
    ::aeondds::CmdrAndNav::TJsonMissionFile_finalize_ex(sample,RTI_TRUE);
}
        
void TJsonMissionFile_finalize_ex(
    TJsonMissionFile* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::CmdrAndNav::TJsonMissionFile_finalize_w_params(
        sample,&deallocParams);
}

void TJsonMissionFile_finalize_w_params(
        TJsonMissionFile* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    DDS_OctetSeq_finalize(&sample->jsonFile);
            

}

void TJsonMissionFile_finalize_optional_members(
    TJsonMissionFile* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             



}

RTIBool TJsonMissionFile_copy(
    TJsonMissionFile* dst,
    const TJsonMissionFile* src)
{

    if (!RTICdrType_copyLong(
        &dst->systemId, &src->systemId)) {
        return RTI_FALSE;
    }
            

    if (!DDS_OctetSeq_copy(&dst->jsonFile,
                                          &src->jsonFile)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TJsonMissionFile' sequence class.
 */
#define T TJsonMissionFile
#define TSeq TJsonMissionFileSeq
#define T_initialize_w_params ::aeondds::CmdrAndNav::TJsonMissionFile_initialize_w_params
#define T_finalize_w_params   ::aeondds::CmdrAndNav::TJsonMissionFile_finalize_w_params
#define T_copy       ::aeondds::CmdrAndNav::TJsonMissionFile_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *ENavigatorMessageTypeTYPENAME = "aeondds::CmdrAndNav::ENavigatorMessageType";

DDS_TypeCode* ENavigatorMessageType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ENavigatorMessageType_g_tc_members[5] =
    {
        {
            (char *)"COURSECOMPLETION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            COURSECOMPLETION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINTREACHED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINTREACHED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODESHIFT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODESHIFT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SYSTEMFAILURE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SYSTEMFAILURE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"STATUSRESPONSE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            STATUSRESPONSE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ENavigatorMessageType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::CmdrAndNav::ENavigatorMessageType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of enumerators */
        ENavigatorMessageType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ENavigatorMessageType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ENavigatorMessageType_g_tc;
}
 

RTIBool ENavigatorMessageType_initialize(
    ENavigatorMessageType* sample)
{
    *sample = COURSECOMPLETION;
    return RTI_TRUE;
}
        
RTIBool ENavigatorMessageType_initialize_ex(
    ENavigatorMessageType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = COURSECOMPLETION;
    return RTI_TRUE;
}

RTIBool ENavigatorMessageType_initialize_w_params(
        ENavigatorMessageType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = COURSECOMPLETION;
    return RTI_TRUE;
}

void ENavigatorMessageType_finalize(
    ENavigatorMessageType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ENavigatorMessageType_finalize_ex(
    ENavigatorMessageType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ENavigatorMessageType_finalize_w_params(
        ENavigatorMessageType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ENavigatorMessageType_copy(
    ENavigatorMessageType* dst,
    const ENavigatorMessageType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ENavigatorMessageType_getValues(ENavigatorMessageTypeSeq * values) 
    
{
    int i = 0;
    ENavigatorMessageType * buffer;


    if (!values->maximum(5)) {
        return RTI_FALSE;
    }

    if (!values->length(5)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = COURSECOMPLETION;
    i++;
    
    buffer[i] = WAYPOINTREACHED;
    i++;
    
    buffer[i] = MODESHIFT;
    i++;
    
    buffer[i] = SYSTEMFAILURE;
    i++;
    
    buffer[i] = STATUSRESPONSE;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ENavigatorMessageType' sequence class.
 */
#define T ENavigatorMessageType
#define TSeq ENavigatorMessageTypeSeq
#define T_initialize_w_params ENavigatorMessageType_initialize_w_params
#define T_finalize_w_params   ENavigatorMessageType_finalize_w_params
#define T_copy       ENavigatorMessageType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T
/* ========================================================================= */
const char *EStatusTYPENAME = "aeondds::CmdrAndNav::EStatus";

DDS_TypeCode* EStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EStatus_g_tc_members[2] =
    {
        {
            (char *)"FAILURE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FAILURE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SUCCESS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SUCCESS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::CmdrAndNav::EStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of enumerators */
        EStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EStatus_g_tc;
}
 

RTIBool EStatus_initialize(
    EStatus* sample)
{
    *sample = FAILURE;
    return RTI_TRUE;
}
        
RTIBool EStatus_initialize_ex(
    EStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = FAILURE;
    return RTI_TRUE;
}

RTIBool EStatus_initialize_w_params(
        EStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = FAILURE;
    return RTI_TRUE;
}

void EStatus_finalize(
    EStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EStatus_finalize_ex(
    EStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EStatus_finalize_w_params(
        EStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EStatus_copy(
    EStatus* dst,
    const EStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EStatus_getValues(EStatusSeq * values) 
    
{
    int i = 0;
    EStatus * buffer;


    if (!values->maximum(2)) {
        return RTI_FALSE;
    }

    if (!values->length(2)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = FAILURE;
    i++;
    
    buffer[i] = SUCCESS;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EStatus' sequence class.
 */
#define T EStatus
#define TSeq EStatusSeq
#define T_initialize_w_params EStatus_initialize_w_params
#define T_finalize_w_params   EStatus_finalize_w_params
#define T_copy       EStatus_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T
/* ========================================================================= */
const char *TNavigatorToCommanderTYPENAME = "aeondds::CmdrAndNav::TNavigatorToCommander";

DDS_TypeCode* TNavigatorToCommander_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TNavigatorToCommander_g_tc_members[5]=
    {
        {
            (char *)"eType",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"eSuccess",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"eCurrentMode",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"nCourseNumber",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"nWaypointNumber",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TNavigatorToCommander_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::CmdrAndNav::TNavigatorToCommander", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        TNavigatorToCommander_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavigatorToCommander*/

    if (is_initialized) {
        return &TNavigatorToCommander_g_tc;
    }


    TNavigatorToCommander_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::CmdrAndNav::ENavigatorMessageType_get_typecode();
    TNavigatorToCommander_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::CmdrAndNav::EStatus_get_typecode();
    TNavigatorToCommander_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)aeondds::CmdrAndNav::ENavigatorModes_get_typecode();
    TNavigatorToCommander_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TNavigatorToCommander_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TNavigatorToCommander_g_tc;
}


RTIBool TNavigatorToCommander_initialize(
    TNavigatorToCommander* sample) {
  return ::aeondds::CmdrAndNav::TNavigatorToCommander_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavigatorToCommander_initialize_ex(
    TNavigatorToCommander* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::CmdrAndNav::TNavigatorToCommander_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavigatorToCommander_initialize_w_params(
        TNavigatorToCommander* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::CmdrAndNav::ENavigatorMessageType_initialize_w_params(&sample->eType,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::CmdrAndNav::EStatus_initialize_w_params(&sample->eSuccess,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::CmdrAndNav::ENavigatorModes_initialize_w_params(&sample->eCurrentMode,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->nCourseNumber)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->nWaypointNumber)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TNavigatorToCommander_finalize(
    TNavigatorToCommander* sample)
{
    ::aeondds::CmdrAndNav::TNavigatorToCommander_finalize_ex(sample,RTI_TRUE);
}
        
void TNavigatorToCommander_finalize_ex(
    TNavigatorToCommander* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::CmdrAndNav::TNavigatorToCommander_finalize_w_params(
        sample,&deallocParams);
}

void TNavigatorToCommander_finalize_w_params(
        TNavigatorToCommander* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::CmdrAndNav::ENavigatorMessageType_finalize_w_params(&sample->eType, deallocParams);
            

    aeondds::CmdrAndNav::EStatus_finalize_w_params(&sample->eSuccess, deallocParams);
            

    aeondds::CmdrAndNav::ENavigatorModes_finalize_w_params(&sample->eCurrentMode, deallocParams);
            



}

void TNavigatorToCommander_finalize_optional_members(
    TNavigatorToCommander* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::CmdrAndNav::ENavigatorMessageType_finalize_w_params(&sample->eType, deallocParams);
            

    aeondds::CmdrAndNav::EStatus_finalize_w_params(&sample->eSuccess, deallocParams);
            

    aeondds::CmdrAndNav::ENavigatorModes_finalize_w_params(&sample->eCurrentMode, deallocParams);
            



}

RTIBool TNavigatorToCommander_copy(
    TNavigatorToCommander* dst,
    const TNavigatorToCommander* src)
{

    if (!aeondds::CmdrAndNav::ENavigatorMessageType_copy(
        &dst->eType, &src->eType)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::CmdrAndNav::EStatus_copy(
        &dst->eSuccess, &src->eSuccess)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::CmdrAndNav::ENavigatorModes_copy(
        &dst->eCurrentMode, &src->eCurrentMode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->nCourseNumber, &src->nCourseNumber)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->nWaypointNumber, &src->nWaypointNumber)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavigatorToCommander' sequence class.
 */
#define T TNavigatorToCommander
#define TSeq TNavigatorToCommanderSeq
#define T_initialize_w_params ::aeondds::CmdrAndNav::TNavigatorToCommander_initialize_w_params
#define T_finalize_w_params   ::aeondds::CmdrAndNav::TNavigatorToCommander_finalize_w_params
#define T_copy       ::aeondds::CmdrAndNav::TNavigatorToCommander_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T


} /* namespace CmdrAndNav */

} /* namespace aeondds */
