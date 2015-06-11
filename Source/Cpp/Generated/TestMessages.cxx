
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TestMessages.idl using "rtiddsgen".
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



#include "TestMessages.h"


namespace aeondds{

namespace test{
/* ========================================================================= */
const char *EObjectTypeTYPENAME = "aeondds::test::EObjectType";

DDS_TypeCode* EObjectType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EObjectType_g_tc_members[2] =
    {
        {
            (char *)"VEHICLE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"OBSTACLE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            OBSTACLE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EObjectType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::test::EObjectType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of enumerators */
        EObjectType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EObjectType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EObjectType_g_tc;
}
 

RTIBool EObjectType_initialize(
    EObjectType* sample)
{
    *sample = VEHICLE;
    return RTI_TRUE;
}
        
RTIBool EObjectType_initialize_ex(
    EObjectType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = VEHICLE;
    return RTI_TRUE;
}

RTIBool EObjectType_initialize_w_params(
        EObjectType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = VEHICLE;
    return RTI_TRUE;
}

void EObjectType_finalize(
    EObjectType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EObjectType_finalize_ex(
    EObjectType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EObjectType_finalize_w_params(
        EObjectType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EObjectType_copy(
    EObjectType* dst,
    const EObjectType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EObjectType_getValues(EObjectTypeSeq * values) 
    
{
    int i = 0;
    EObjectType * buffer;


    if (!values->maximum(2)) {
        return RTI_FALSE;
    }

    if (!values->length(2)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = VEHICLE;
    i++;
    
    buffer[i] = OBSTACLE;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EObjectType' sequence class.
 */
#define T EObjectType
#define TSeq EObjectTypeSeq
#define T_initialize_w_params EObjectType_initialize_w_params
#define T_finalize_w_params   EObjectType_finalize_w_params
#define T_copy       EObjectType_copy

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
const char *EVehicleCommandTypeTYPENAME = "aeondds::test::EVehicleCommandType";

DDS_TypeCode* EVehicleCommandType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EVehicleCommandType_g_tc_members[13] =
    {
        {
            (char *)"TAKEOFF",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            TAKEOFF, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"LAND",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            LAND, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"HOVER",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            HOVER, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RETURN",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RETURN, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GOTOWAYPOINT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GOTOWAYPOINT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GOTOTAG",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GOTOTAG, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ENABLEPID",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ENABLEPID, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"DISABLEPID",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            DISABLEPID, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ENABLEFILTER",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ENABLEFILTER, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"DISABLEFILTER",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            DISABLEFILTER, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ENABLEWANDMODE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ENABLEWANDMODE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"DISABLEWANDMODE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            DISABLEWANDMODE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PASSTHROUGH",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PASSTHROUGH, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EVehicleCommandType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::test::EVehicleCommandType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        13, /* Number of enumerators */
        EVehicleCommandType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EVehicleCommandType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EVehicleCommandType_g_tc;
}
 

RTIBool EVehicleCommandType_initialize(
    EVehicleCommandType* sample)
{
    *sample = TAKEOFF;
    return RTI_TRUE;
}
        
RTIBool EVehicleCommandType_initialize_ex(
    EVehicleCommandType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = TAKEOFF;
    return RTI_TRUE;
}

RTIBool EVehicleCommandType_initialize_w_params(
        EVehicleCommandType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = TAKEOFF;
    return RTI_TRUE;
}

void EVehicleCommandType_finalize(
    EVehicleCommandType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EVehicleCommandType_finalize_ex(
    EVehicleCommandType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EVehicleCommandType_finalize_w_params(
        EVehicleCommandType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EVehicleCommandType_copy(
    EVehicleCommandType* dst,
    const EVehicleCommandType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EVehicleCommandType_getValues(EVehicleCommandTypeSeq * values) 
    
{
    int i = 0;
    EVehicleCommandType * buffer;


    if (!values->maximum(13)) {
        return RTI_FALSE;
    }

    if (!values->length(13)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = TAKEOFF;
    i++;
    
    buffer[i] = LAND;
    i++;
    
    buffer[i] = HOVER;
    i++;
    
    buffer[i] = RETURN;
    i++;
    
    buffer[i] = GOTOWAYPOINT;
    i++;
    
    buffer[i] = GOTOTAG;
    i++;
    
    buffer[i] = ENABLEPID;
    i++;
    
    buffer[i] = DISABLEPID;
    i++;
    
    buffer[i] = ENABLEFILTER;
    i++;
    
    buffer[i] = DISABLEFILTER;
    i++;
    
    buffer[i] = ENABLEWANDMODE;
    i++;
    
    buffer[i] = DISABLEWANDMODE;
    i++;
    
    buffer[i] = PASSTHROUGH;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EVehicleCommandType' sequence class.
 */
#define T EVehicleCommandType
#define TSeq EVehicleCommandTypeSeq
#define T_initialize_w_params EVehicleCommandType_initialize_w_params
#define T_finalize_w_params   EVehicleCommandType_finalize_w_params
#define T_copy       EVehicleCommandType_copy

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
const char *EVehicleStateTYPENAME = "aeondds::test::EVehicleState";

DDS_TypeCode* EVehicleState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EVehicleState_g_tc_members[4] =
    {
        {
            (char *)"DISCONNECTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            DISCONNECTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"LANDED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            LANDED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"FLYING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FLYING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"EMERGENCY",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            EMERGENCY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EVehicleState_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::test::EVehicleState", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of enumerators */
        EVehicleState_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EVehicleState_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EVehicleState_g_tc;
}
 

RTIBool EVehicleState_initialize(
    EVehicleState* sample)
{
    *sample = DISCONNECTED;
    return RTI_TRUE;
}
        
RTIBool EVehicleState_initialize_ex(
    EVehicleState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = DISCONNECTED;
    return RTI_TRUE;
}

RTIBool EVehicleState_initialize_w_params(
        EVehicleState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = DISCONNECTED;
    return RTI_TRUE;
}

void EVehicleState_finalize(
    EVehicleState* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EVehicleState_finalize_ex(
    EVehicleState* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EVehicleState_finalize_w_params(
        EVehicleState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EVehicleState_copy(
    EVehicleState* dst,
    const EVehicleState* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EVehicleState_getValues(EVehicleStateSeq * values) 
    
{
    int i = 0;
    EVehicleState * buffer;


    if (!values->maximum(4)) {
        return RTI_FALSE;
    }

    if (!values->length(4)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = DISCONNECTED;
    i++;
    
    buffer[i] = LANDED;
    i++;
    
    buffer[i] = FLYING;
    i++;
    
    buffer[i] = EMERGENCY;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EVehicleState' sequence class.
 */
#define T EVehicleState
#define TSeq EVehicleStateSeq
#define T_initialize_w_params EVehicleState_initialize_w_params
#define T_finalize_w_params   EVehicleState_finalize_w_params
#define T_copy       EVehicleState_copy

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
const char *EMissionStateTYPENAME = "aeondds::test::EMissionState";

DDS_TypeCode* EMissionState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EMissionState_g_tc_members[3] =
    {
        {
            (char *)"IDLE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            IDLE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACTIVE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACTIVE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"COMPLETE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            COMPLETE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EMissionState_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::test::EMissionState", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        EMissionState_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EMissionState_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EMissionState_g_tc;
}
 

RTIBool EMissionState_initialize(
    EMissionState* sample)
{
    *sample = IDLE;
    return RTI_TRUE;
}
        
RTIBool EMissionState_initialize_ex(
    EMissionState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = IDLE;
    return RTI_TRUE;
}

RTIBool EMissionState_initialize_w_params(
        EMissionState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = IDLE;
    return RTI_TRUE;
}

void EMissionState_finalize(
    EMissionState* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EMissionState_finalize_ex(
    EMissionState* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EMissionState_finalize_w_params(
        EMissionState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EMissionState_copy(
    EMissionState* dst,
    const EMissionState* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EMissionState_getValues(EMissionStateSeq * values) 
    
{
    int i = 0;
    EMissionState * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = IDLE;
    i++;
    
    buffer[i] = ACTIVE;
    i++;
    
    buffer[i] = COMPLETE;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EMissionState' sequence class.
 */
#define T EMissionState
#define TSeq EMissionStateSeq
#define T_initialize_w_params EMissionState_initialize_w_params
#define T_finalize_w_params   EMissionState_finalize_w_params
#define T_copy       EMissionState_copy

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
const char *TTagPoseTYPENAME = "aeondds::test::TTagPose";

DDS_TypeCode* TTagPose_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TTagPose_g_tc_members[7]=
    {
        {
            (char *)"objectId",/* Member name */
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
            (char *)"x_m",/* Member name */
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
            (char *)"y_m",/* Member name */
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
            (char *)"z_m",/* Member name */
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
            (char *)"phi_rad",/* Member name */
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
        },
        {
            (char *)"theta_rad",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"psi_rad",/* Member name */
            {
                6,/* Representation ID */
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

    static DDS_TypeCode TTagPose_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::test::TTagPose", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        TTagPose_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TTagPose*/

    if (is_initialized) {
        return &TTagPose_g_tc;
    }


    TTagPose_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TTagPose_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TTagPose_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TTagPose_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TTagPose_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TTagPose_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TTagPose_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TTagPose_g_tc;
}


RTIBool TTagPose_initialize(
    TTagPose* sample) {
  return ::aeondds::test::TTagPose_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TTagPose_initialize_ex(
    TTagPose* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::test::TTagPose_initialize_w_params(
        sample,&allocParams);
}

RTIBool TTagPose_initialize_w_params(
        TTagPose* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->objectId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->x_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->y_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->z_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->phi_rad)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->theta_rad)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->psi_rad)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TTagPose_finalize(
    TTagPose* sample)
{
    ::aeondds::test::TTagPose_finalize_ex(sample,RTI_TRUE);
}
        
void TTagPose_finalize_ex(
    TTagPose* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::test::TTagPose_finalize_w_params(
        sample,&deallocParams);
}

void TTagPose_finalize_w_params(
        TTagPose* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */









}

void TTagPose_finalize_optional_members(
    TTagPose* sample, RTIBool deletePointers)
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

RTIBool TTagPose_copy(
    TTagPose* dst,
    const TTagPose* src)
{

    if (!RTICdrType_copyLong(
        &dst->objectId, &src->objectId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->x_m, &src->x_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->y_m, &src->y_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->z_m, &src->z_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->phi_rad, &src->phi_rad)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->theta_rad, &src->theta_rad)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->psi_rad, &src->psi_rad)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TTagPose' sequence class.
 */
#define T TTagPose
#define TSeq TTagPoseSeq
#define T_initialize_w_params ::aeondds::test::TTagPose_initialize_w_params
#define T_finalize_w_params   ::aeondds::test::TTagPose_finalize_w_params
#define T_copy       ::aeondds::test::TTagPose_copy

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
const char *TObjectTrackTYPENAME = "aeondds::test::TObjectTrack";

DDS_TypeCode* TObjectTrack_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TObjectTrack_g_tc_objectId_string = DDS_INITIALIZE_STRING_TYPECODE((aeondds::test::OBJECT_ID_LENGTH));

    static DDS_TypeCode_Member TObjectTrack_g_tc_members[8]=
    {
        {
            (char *)"objectId",/* Member name */
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
            (char *)"objectType",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"x_m",/* Member name */
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
            (char *)"y_m",/* Member name */
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
            (char *)"z_m",/* Member name */
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
        },
        {
            (char *)"phi_rad",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"theta_rad",/* Member name */
            {
                6,/* Representation ID */
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
            (char *)"psi_rad",/* Member name */
            {
                7,/* Representation ID */
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

    static DDS_TypeCode TObjectTrack_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::test::TObjectTrack", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of members */
        TObjectTrack_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TObjectTrack*/

    if (is_initialized) {
        return &TObjectTrack_g_tc;
    }


    TObjectTrack_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&TObjectTrack_g_tc_objectId_string;
    TObjectTrack_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::test::EObjectType_get_typecode();
    TObjectTrack_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TObjectTrack_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TObjectTrack_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TObjectTrack_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TObjectTrack_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TObjectTrack_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TObjectTrack_g_tc;
}


RTIBool TObjectTrack_initialize(
    TObjectTrack* sample) {
  return ::aeondds::test::TObjectTrack_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TObjectTrack_initialize_ex(
    TObjectTrack* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::test::TObjectTrack_initialize_w_params(
        sample,&allocParams);
}

RTIBool TObjectTrack_initialize_w_params(
        TObjectTrack* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        sample->objectId = DDS_String_alloc(((aeondds::test::OBJECT_ID_LENGTH)));
        if (sample->objectId == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->objectId != NULL) { 
            sample->objectId[0] = '\0';
        }
    }
            

    if (!aeondds::test::EObjectType_initialize_w_params(&sample->objectType,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initDouble(&sample->x_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->y_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->z_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->phi_rad)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->theta_rad)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->psi_rad)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TObjectTrack_finalize(
    TObjectTrack* sample)
{
    ::aeondds::test::TObjectTrack_finalize_ex(sample,RTI_TRUE);
}
        
void TObjectTrack_finalize_ex(
    TObjectTrack* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::test::TObjectTrack_finalize_w_params(
        sample,&deallocParams);
}

void TObjectTrack_finalize_w_params(
        TObjectTrack* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    if (sample->objectId != NULL) {    
        DDS_String_free(sample->objectId);
        sample->objectId = NULL;
    }
            

    aeondds::test::EObjectType_finalize_w_params(&sample->objectType, deallocParams);
            







}

void TObjectTrack_finalize_optional_members(
    TObjectTrack* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::test::EObjectType_finalize_w_params(&sample->objectType, deallocParams);
            







}

RTIBool TObjectTrack_copy(
    TObjectTrack* dst,
    const TObjectTrack* src)
{

    if (!RTICdrType_copyString(
        dst->objectId, src->objectId, ((aeondds::test::OBJECT_ID_LENGTH)) + 1)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::test::EObjectType_copy(
        &dst->objectType, &src->objectType)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->x_m, &src->x_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->y_m, &src->y_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->z_m, &src->z_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->phi_rad, &src->phi_rad)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->theta_rad, &src->theta_rad)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->psi_rad, &src->psi_rad)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TObjectTrack' sequence class.
 */
#define T TObjectTrack
#define TSeq TObjectTrackSeq
#define T_initialize_w_params ::aeondds::test::TObjectTrack_initialize_w_params
#define T_finalize_w_params   ::aeondds::test::TObjectTrack_finalize_w_params
#define T_copy       ::aeondds::test::TObjectTrack_copy

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
const char *TViconTrackEulerTYPENAME = "aeondds::test::TViconTrackEuler";

DDS_TypeCode* TViconTrackEuler_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TViconTrackEuler_g_tc_objectId_string = DDS_INITIALIZE_STRING_TYPECODE((aeondds::test::OBJECT_ID_LENGTH));

    static DDS_TypeCode_Member TViconTrackEuler_g_tc_members[9]=
    {
        {
            (char *)"objectId",/* Member name */
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
            (char *)"objectType",/* Member name */
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
            (char *)"timestampMs",/* Member name */
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
            (char *)"x_m",/* Member name */
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
            (char *)"y_m",/* Member name */
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
        },
        {
            (char *)"z_m",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"phi_rad",/* Member name */
            {
                6,/* Representation ID */
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
            (char *)"theta_rad",/* Member name */
            {
                7,/* Representation ID */
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
            (char *)"psi_rad",/* Member name */
            {
                8,/* Representation ID */
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

    static DDS_TypeCode TViconTrackEuler_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::test::TViconTrackEuler", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        9, /* Number of members */
        TViconTrackEuler_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TViconTrackEuler*/

    if (is_initialized) {
        return &TViconTrackEuler_g_tc;
    }


    TViconTrackEuler_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&TViconTrackEuler_g_tc_objectId_string;
    TViconTrackEuler_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::test::EObjectType_get_typecode();
    TViconTrackEuler_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    TViconTrackEuler_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackEuler_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackEuler_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackEuler_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackEuler_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackEuler_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TViconTrackEuler_g_tc;
}


RTIBool TViconTrackEuler_initialize(
    TViconTrackEuler* sample) {
  return ::aeondds::test::TViconTrackEuler_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TViconTrackEuler_initialize_ex(
    TViconTrackEuler* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::test::TViconTrackEuler_initialize_w_params(
        sample,&allocParams);
}

RTIBool TViconTrackEuler_initialize_w_params(
        TViconTrackEuler* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        sample->objectId = DDS_String_alloc(((aeondds::test::OBJECT_ID_LENGTH)));
        if (sample->objectId == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->objectId != NULL) { 
            sample->objectId[0] = '\0';
        }
    }
            

    if (!aeondds::test::EObjectType_initialize_w_params(&sample->objectType,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedLongLong(&sample->timestampMs)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->x_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->y_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->z_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->phi_rad)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->theta_rad)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->psi_rad)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TViconTrackEuler_finalize(
    TViconTrackEuler* sample)
{
    ::aeondds::test::TViconTrackEuler_finalize_ex(sample,RTI_TRUE);
}
        
void TViconTrackEuler_finalize_ex(
    TViconTrackEuler* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::test::TViconTrackEuler_finalize_w_params(
        sample,&deallocParams);
}

void TViconTrackEuler_finalize_w_params(
        TViconTrackEuler* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    if (sample->objectId != NULL) {    
        DDS_String_free(sample->objectId);
        sample->objectId = NULL;
    }
            

    aeondds::test::EObjectType_finalize_w_params(&sample->objectType, deallocParams);
            








}

void TViconTrackEuler_finalize_optional_members(
    TViconTrackEuler* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::test::EObjectType_finalize_w_params(&sample->objectType, deallocParams);
            








}

RTIBool TViconTrackEuler_copy(
    TViconTrackEuler* dst,
    const TViconTrackEuler* src)
{

    if (!RTICdrType_copyString(
        dst->objectId, src->objectId, ((aeondds::test::OBJECT_ID_LENGTH)) + 1)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::test::EObjectType_copy(
        &dst->objectType, &src->objectType)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLongLong(
        &dst->timestampMs, &src->timestampMs)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->x_m, &src->x_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->y_m, &src->y_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->z_m, &src->z_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->phi_rad, &src->phi_rad)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->theta_rad, &src->theta_rad)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->psi_rad, &src->psi_rad)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TViconTrackEuler' sequence class.
 */
#define T TViconTrackEuler
#define TSeq TViconTrackEulerSeq
#define T_initialize_w_params ::aeondds::test::TViconTrackEuler_initialize_w_params
#define T_finalize_w_params   ::aeondds::test::TViconTrackEuler_finalize_w_params
#define T_copy       ::aeondds::test::TViconTrackEuler_copy

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
const char *TViconTrackQuaternionTYPENAME = "aeondds::test::TViconTrackQuaternion";

DDS_TypeCode* TViconTrackQuaternion_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TViconTrackQuaternion_g_tc_objectId_string = DDS_INITIALIZE_STRING_TYPECODE((aeondds::test::OBJECT_ID_LENGTH));

    static DDS_TypeCode_Member TViconTrackQuaternion_g_tc_members[10]=
    {
        {
            (char *)"objectId",/* Member name */
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
            (char *)"objectType",/* Member name */
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
            (char *)"timestampMs",/* Member name */
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
            (char *)"x_m",/* Member name */
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
            (char *)"y_m",/* Member name */
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
        },
        {
            (char *)"z_m",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"q0",/* Member name */
            {
                6,/* Representation ID */
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
            (char *)"q1",/* Member name */
            {
                7,/* Representation ID */
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
            (char *)"q2",/* Member name */
            {
                8,/* Representation ID */
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
            (char *)"q3",/* Member name */
            {
                9,/* Representation ID */
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

    static DDS_TypeCode TViconTrackQuaternion_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::test::TViconTrackQuaternion", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        10, /* Number of members */
        TViconTrackQuaternion_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TViconTrackQuaternion*/

    if (is_initialized) {
        return &TViconTrackQuaternion_g_tc;
    }


    TViconTrackQuaternion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&TViconTrackQuaternion_g_tc_objectId_string;
    TViconTrackQuaternion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::test::EObjectType_get_typecode();
    TViconTrackQuaternion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    TViconTrackQuaternion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackQuaternion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackQuaternion_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackQuaternion_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackQuaternion_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackQuaternion_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrackQuaternion_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TViconTrackQuaternion_g_tc;
}


RTIBool TViconTrackQuaternion_initialize(
    TViconTrackQuaternion* sample) {
  return ::aeondds::test::TViconTrackQuaternion_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TViconTrackQuaternion_initialize_ex(
    TViconTrackQuaternion* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::test::TViconTrackQuaternion_initialize_w_params(
        sample,&allocParams);
}

RTIBool TViconTrackQuaternion_initialize_w_params(
        TViconTrackQuaternion* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        sample->objectId = DDS_String_alloc(((aeondds::test::OBJECT_ID_LENGTH)));
        if (sample->objectId == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->objectId != NULL) { 
            sample->objectId[0] = '\0';
        }
    }
            

    if (!aeondds::test::EObjectType_initialize_w_params(&sample->objectType,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedLongLong(&sample->timestampMs)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->x_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->y_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->z_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->q0)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->q1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->q2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->q3)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TViconTrackQuaternion_finalize(
    TViconTrackQuaternion* sample)
{
    ::aeondds::test::TViconTrackQuaternion_finalize_ex(sample,RTI_TRUE);
}
        
void TViconTrackQuaternion_finalize_ex(
    TViconTrackQuaternion* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::test::TViconTrackQuaternion_finalize_w_params(
        sample,&deallocParams);
}

void TViconTrackQuaternion_finalize_w_params(
        TViconTrackQuaternion* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    if (sample->objectId != NULL) {    
        DDS_String_free(sample->objectId);
        sample->objectId = NULL;
    }
            

    aeondds::test::EObjectType_finalize_w_params(&sample->objectType, deallocParams);
            









}

void TViconTrackQuaternion_finalize_optional_members(
    TViconTrackQuaternion* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::test::EObjectType_finalize_w_params(&sample->objectType, deallocParams);
            









}

RTIBool TViconTrackQuaternion_copy(
    TViconTrackQuaternion* dst,
    const TViconTrackQuaternion* src)
{

    if (!RTICdrType_copyString(
        dst->objectId, src->objectId, ((aeondds::test::OBJECT_ID_LENGTH)) + 1)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::test::EObjectType_copy(
        &dst->objectType, &src->objectType)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLongLong(
        &dst->timestampMs, &src->timestampMs)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->x_m, &src->x_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->y_m, &src->y_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->z_m, &src->z_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->q0, &src->q0)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->q1, &src->q1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->q2, &src->q2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->q3, &src->q3)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TViconTrackQuaternion' sequence class.
 */
#define T TViconTrackQuaternion
#define TSeq TViconTrackQuaternionSeq
#define T_initialize_w_params ::aeondds::test::TViconTrackQuaternion_initialize_w_params
#define T_finalize_w_params   ::aeondds::test::TViconTrackQuaternion_finalize_w_params
#define T_copy       ::aeondds::test::TViconTrackQuaternion_copy

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
const char *TVehicleCommandTYPENAME = "aeondds::test::TVehicleCommand";

DDS_TypeCode* TVehicleCommand_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TVehicleCommand_g_tc_members[7]=
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
            (char *)"commandType",/* Member name */
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
            (char *)"p1",/* Member name */
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
            (char *)"p2",/* Member name */
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
            (char *)"p3",/* Member name */
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
        },
        {
            (char *)"p4",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"p5",/* Member name */
            {
                6,/* Representation ID */
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

    static DDS_TypeCode TVehicleCommand_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::test::TVehicleCommand", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        TVehicleCommand_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TVehicleCommand*/

    if (is_initialized) {
        return &TVehicleCommand_g_tc;
    }


    TVehicleCommand_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TVehicleCommand_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::test::EVehicleCommandType_get_typecode();
    TVehicleCommand_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleCommand_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleCommand_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleCommand_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleCommand_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TVehicleCommand_g_tc;
}


RTIBool TVehicleCommand_initialize(
    TVehicleCommand* sample) {
  return ::aeondds::test::TVehicleCommand_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TVehicleCommand_initialize_ex(
    TVehicleCommand* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::test::TVehicleCommand_initialize_w_params(
        sample,&allocParams);
}

RTIBool TVehicleCommand_initialize_w_params(
        TVehicleCommand* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->systemId)) {
        return RTI_FALSE;
    }                
            

    if (!aeondds::test::EVehicleCommandType_initialize_w_params(&sample->commandType,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initDouble(&sample->p1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->p2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->p3)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->p4)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->p5)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TVehicleCommand_finalize(
    TVehicleCommand* sample)
{
    ::aeondds::test::TVehicleCommand_finalize_ex(sample,RTI_TRUE);
}
        
void TVehicleCommand_finalize_ex(
    TVehicleCommand* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::test::TVehicleCommand_finalize_w_params(
        sample,&deallocParams);
}

void TVehicleCommand_finalize_w_params(
        TVehicleCommand* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    aeondds::test::EVehicleCommandType_finalize_w_params(&sample->commandType, deallocParams);
            






}

void TVehicleCommand_finalize_optional_members(
    TVehicleCommand* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::test::EVehicleCommandType_finalize_w_params(&sample->commandType, deallocParams);
            






}

RTIBool TVehicleCommand_copy(
    TVehicleCommand* dst,
    const TVehicleCommand* src)
{

    if (!RTICdrType_copyLong(
        &dst->systemId, &src->systemId)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::test::EVehicleCommandType_copy(
        &dst->commandType, &src->commandType)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->p1, &src->p1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->p2, &src->p2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->p3, &src->p3)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->p4, &src->p4)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->p5, &src->p5)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TVehicleCommand' sequence class.
 */
#define T TVehicleCommand
#define TSeq TVehicleCommandSeq
#define T_initialize_w_params ::aeondds::test::TVehicleCommand_initialize_w_params
#define T_finalize_w_params   ::aeondds::test::TVehicleCommand_finalize_w_params
#define T_copy       ::aeondds::test::TVehicleCommand_copy

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
const char *TVehicleStatusTYPENAME = "aeondds::test::TVehicleStatus";

DDS_TypeCode* TVehicleStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TVehicleStatus_g_tc_vehicleName_string = DDS_INITIALIZE_STRING_TYPECODE((aeondds::test::OBJECT_ID_LENGTH));

    static DDS_TypeCode_Member TVehicleStatus_g_tc_members[13]=
    {
        {
            (char *)"vehicleId",/* Member name */
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
            (char *)"vehicleName",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"longitude",/* Member name */
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
            (char *)"latitude",/* Member name */
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
            (char *)"altitude",/* Member name */
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
        },
        {
            (char *)"roll",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"pitch",/* Member name */
            {
                6,/* Representation ID */
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
            (char *)"yaw",/* Member name */
            {
                7,/* Representation ID */
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
            (char *)"batteryLevel",/* Member name */
            {
                8,/* Representation ID */
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
            (char *)"goalLat",/* Member name */
            {
                9,/* Representation ID */
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
            (char *)"goalLong",/* Member name */
            {
                10,/* Representation ID */
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
            (char *)"goalAltitude",/* Member name */
            {
                11,/* Representation ID */
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
            (char *)"goalYaw",/* Member name */
            {
                12,/* Representation ID */
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

    static DDS_TypeCode TVehicleStatus_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::test::TVehicleStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        13, /* Number of members */
        TVehicleStatus_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TVehicleStatus*/

    if (is_initialized) {
        return &TVehicleStatus_g_tc;
    }


    TVehicleStatus_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TVehicleStatus_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&TVehicleStatus_g_tc_vehicleName_string;
    TVehicleStatus_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TVehicleStatus_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TVehicleStatus_g_tc;
}


RTIBool TVehicleStatus_initialize(
    TVehicleStatus* sample) {
  return ::aeondds::test::TVehicleStatus_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TVehicleStatus_initialize_ex(
    TVehicleStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::test::TVehicleStatus_initialize_w_params(
        sample,&allocParams);
}

RTIBool TVehicleStatus_initialize_w_params(
        TVehicleStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->vehicleId)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        sample->vehicleName = DDS_String_alloc(((aeondds::test::OBJECT_ID_LENGTH)));
        if (sample->vehicleName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->vehicleName != NULL) { 
            sample->vehicleName[0] = '\0';
        }
    }
            

    if (!RTICdrType_initDouble(&sample->longitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->latitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->altitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->roll)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->pitch)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->yaw)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->batteryLevel)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->goalLat)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->goalLong)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->goalAltitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->goalYaw)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TVehicleStatus_finalize(
    TVehicleStatus* sample)
{
    ::aeondds::test::TVehicleStatus_finalize_ex(sample,RTI_TRUE);
}
        
void TVehicleStatus_finalize_ex(
    TVehicleStatus* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::test::TVehicleStatus_finalize_w_params(
        sample,&deallocParams);
}

void TVehicleStatus_finalize_w_params(
        TVehicleStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    if (sample->vehicleName != NULL) {    
        DDS_String_free(sample->vehicleName);
        sample->vehicleName = NULL;
    }
            












}

void TVehicleStatus_finalize_optional_members(
    TVehicleStatus* sample, RTIBool deletePointers)
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

RTIBool TVehicleStatus_copy(
    TVehicleStatus* dst,
    const TVehicleStatus* src)
{

    if (!RTICdrType_copyLong(
        &dst->vehicleId, &src->vehicleId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->vehicleName, src->vehicleName, ((aeondds::test::OBJECT_ID_LENGTH)) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->longitude, &src->longitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->latitude, &src->latitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->altitude, &src->altitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->roll, &src->roll)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->pitch, &src->pitch)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->yaw, &src->yaw)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->batteryLevel, &src->batteryLevel)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->goalLat, &src->goalLat)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->goalLong, &src->goalLong)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->goalAltitude, &src->goalAltitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->goalYaw, &src->goalYaw)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TVehicleStatus' sequence class.
 */
#define T TVehicleStatus
#define TSeq TVehicleStatusSeq
#define T_initialize_w_params ::aeondds::test::TVehicleStatus_initialize_w_params
#define T_finalize_w_params   ::aeondds::test::TVehicleStatus_finalize_w_params
#define T_copy       ::aeondds::test::TVehicleStatus_copy

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
const char *TPoseTYPENAME = "aeondds::test::TPose";

DDS_TypeCode* TPose_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TPose_g_tc_members[6]=
    {
        {
            (char *)"x_m",/* Member name */
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
            (char *)"y_m",/* Member name */
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
            (char *)"z_m",/* Member name */
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
            (char *)"phi_rad",/* Member name */
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
            (char *)"theta_rad",/* Member name */
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
        },
        {
            (char *)"psi_rad",/* Member name */
            {
                5,/* Representation ID */
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

    static DDS_TypeCode TPose_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::test::TPose", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        TPose_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TPose*/

    if (is_initialized) {
        return &TPose_g_tc;
    }


    TPose_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TPose_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TPose_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TPose_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TPose_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TPose_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TPose_g_tc;
}


RTIBool TPose_initialize(
    TPose* sample) {
  return ::aeondds::test::TPose_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TPose_initialize_ex(
    TPose* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::test::TPose_initialize_w_params(
        sample,&allocParams);
}

RTIBool TPose_initialize_w_params(
        TPose* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initDouble(&sample->x_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->y_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->z_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->phi_rad)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->theta_rad)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->psi_rad)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TPose_finalize(
    TPose* sample)
{
    ::aeondds::test::TPose_finalize_ex(sample,RTI_TRUE);
}
        
void TPose_finalize_ex(
    TPose* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::test::TPose_finalize_w_params(
        sample,&deallocParams);
}

void TPose_finalize_w_params(
        TPose* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */








}

void TPose_finalize_optional_members(
    TPose* sample, RTIBool deletePointers)
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

RTIBool TPose_copy(
    TPose* dst,
    const TPose* src)
{

    if (!RTICdrType_copyDouble(
        &dst->x_m, &src->x_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->y_m, &src->y_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->z_m, &src->z_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->phi_rad, &src->phi_rad)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->theta_rad, &src->theta_rad)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->psi_rad, &src->psi_rad)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TPose' sequence class.
 */
#define T TPose
#define TSeq TPoseSeq
#define T_initialize_w_params ::aeondds::test::TPose_initialize_w_params
#define T_finalize_w_params   ::aeondds::test::TPose_finalize_w_params
#define T_copy       ::aeondds::test::TPose_copy

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
const char *TPathTYPENAME = "aeondds::test::TPath";

DDS_TypeCode* TPath_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TPath_g_tc_waypoints_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((aeondds::test::MAX_POSES),NULL);

    static DDS_TypeCode_Member TPath_g_tc_members[2]=
    {
        {
            (char *)"vehicleId",/* Member name */
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
            (char *)"waypoints",/* Member name */
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

    static DDS_TypeCode TPath_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::test::TPath", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TPath_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TPath*/

    if (is_initialized) {
        return &TPath_g_tc;
    }

    TPath_g_tc_waypoints_sequence._data._typeCode = (RTICdrTypeCode *)aeondds::test::TPose_get_typecode();

    TPath_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TPath_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&TPath_g_tc_waypoints_sequence;

    is_initialized = RTI_TRUE;

    return &TPath_g_tc;
}


RTIBool TPath_initialize(
    TPath* sample) {
  return ::aeondds::test::TPath_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TPath_initialize_ex(
    TPath* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::test::TPath_initialize_w_params(
        sample,&allocParams);
}

RTIBool TPath_initialize_w_params(
        TPath* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->vehicleId)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        aeondds::test::TPoseSeq_initialize(&sample->waypoints);
        aeondds::test::TPoseSeq_set_element_allocation_params(&sample->waypoints,allocParams);
        if (!aeondds::test::TPoseSeq_set_maximum(&sample->waypoints,
                                           ((aeondds::test::MAX_POSES)))) {
            return RTI_FALSE;
        }
    } else {
        aeondds::test::TPoseSeq_set_length(&sample->waypoints,0);
    }
            


    return RTI_TRUE;
}

void TPath_finalize(
    TPath* sample)
{
    ::aeondds::test::TPath_finalize_ex(sample,RTI_TRUE);
}
        
void TPath_finalize_ex(
    TPath* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::test::TPath_finalize_w_params(
        sample,&deallocParams);
}

void TPath_finalize_w_params(
        TPath* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    aeondds::test::TPoseSeq_set_element_deallocation_params(&sample->waypoints,deallocParams);
    aeondds::test::TPoseSeq_finalize(&sample->waypoints);
            

}

void TPath_finalize_optional_members(
    TPath* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    {
        DDS_UnsignedLong i, length;
        length = aeondds::test::TPoseSeq_get_length(
            &sample->waypoints);

        for (i = 0; i < length; i++) {
            aeondds::test::TPose_finalize_optional_members(
                aeondds::test::TPoseSeq_get_reference(
                    &sample->waypoints, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool TPath_copy(
    TPath* dst,
    const TPath* src)
{

    if (!RTICdrType_copyLong(
        &dst->vehicleId, &src->vehicleId)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::test::TPoseSeq_copy(&dst->waypoints,
                                          &src->waypoints)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TPath' sequence class.
 */
#define T TPath
#define TSeq TPathSeq
#define T_initialize_w_params ::aeondds::test::TPath_initialize_w_params
#define T_finalize_w_params   ::aeondds::test::TPath_finalize_w_params
#define T_copy       ::aeondds::test::TPath_copy

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


} /* namespace test */

} /* namespace aeondds */
