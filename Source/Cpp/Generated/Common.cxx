
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Common.idl using "rtiddsgen".
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



#include "Common.h"


namespace aeondds{

namespace common{
/* ========================================================================= */
const char *ESignalTypeTYPENAME = "aeondds::common::ESignalType";

DDS_TypeCode* ESignalType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ESignalType_g_tc_members[4] =
    {
        {
            (char *)"NONE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            NONE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"INITIALIZATION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            INITIALIZATION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SHUTDOWN",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SHUTDOWN, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RESET",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RESET, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ESignalType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::common::ESignalType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of enumerators */
        ESignalType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ESignalType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ESignalType_g_tc;
}
 

RTIBool ESignalType_initialize(
    ESignalType* sample)
{
    *sample = NONE;
    return RTI_TRUE;
}
        
RTIBool ESignalType_initialize_ex(
    ESignalType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = NONE;
    return RTI_TRUE;
}

RTIBool ESignalType_initialize_w_params(
        ESignalType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = NONE;
    return RTI_TRUE;
}

void ESignalType_finalize(
    ESignalType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ESignalType_finalize_ex(
    ESignalType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ESignalType_finalize_w_params(
        ESignalType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ESignalType_copy(
    ESignalType* dst,
    const ESignalType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ESignalType_getValues(ESignalTypeSeq * values) 
    
{
    int i = 0;
    ESignalType * buffer;


    if (!values->maximum(4)) {
        return RTI_FALSE;
    }

    if (!values->length(4)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = NONE;
    i++;
    
    buffer[i] = INITIALIZATION;
    i++;
    
    buffer[i] = SHUTDOWN;
    i++;
    
    buffer[i] = RESET;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ESignalType' sequence class.
 */
#define T ESignalType
#define TSeq ESignalTypeSeq
#define T_initialize_w_params ESignalType_initialize_w_params
#define T_finalize_w_params   ESignalType_finalize_w_params
#define T_copy       ESignalType_copy

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
const char *TSignalTYPENAME = "aeondds::common::TSignal";

DDS_TypeCode* TSignal_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TSignal_g_tc_members[1]=
    {
        {
            (char *)"signalType",/* Member name */
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
        }
    };

    static DDS_TypeCode TSignal_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::common::TSignal", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TSignal_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TSignal*/

    if (is_initialized) {
        return &TSignal_g_tc;
    }


    TSignal_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::common::ESignalType_get_typecode();

    is_initialized = RTI_TRUE;

    return &TSignal_g_tc;
}


RTIBool TSignal_initialize(
    TSignal* sample) {
  return ::aeondds::common::TSignal_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TSignal_initialize_ex(
    TSignal* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::common::TSignal_initialize_w_params(
        sample,&allocParams);
}

RTIBool TSignal_initialize_w_params(
        TSignal* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::common::ESignalType_initialize_w_params(&sample->signalType,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TSignal_finalize(
    TSignal* sample)
{
    ::aeondds::common::TSignal_finalize_ex(sample,RTI_TRUE);
}
        
void TSignal_finalize_ex(
    TSignal* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::common::TSignal_finalize_w_params(
        sample,&deallocParams);
}

void TSignal_finalize_w_params(
        TSignal* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::common::ESignalType_finalize_w_params(&sample->signalType, deallocParams);
            

}

void TSignal_finalize_optional_members(
    TSignal* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::common::ESignalType_finalize_w_params(&sample->signalType, deallocParams);
            

}

RTIBool TSignal_copy(
    TSignal* dst,
    const TSignal* src)
{

    if (!aeondds::common::ESignalType_copy(
        &dst->signalType, &src->signalType)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TSignal' sequence class.
 */
#define T TSignal
#define TSeq TSignalSeq
#define T_initialize_w_params ::aeondds::common::TSignal_initialize_w_params
#define T_finalize_w_params   ::aeondds::common::TSignal_finalize_w_params
#define T_copy       ::aeondds::common::TSignal_copy

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


} /* namespace common */

} /* namespace aeondds */
