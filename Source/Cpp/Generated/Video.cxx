
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Video.idl using "rtiddsgen".
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



#include "Video.h"


namespace aeondds{

namespace video{
/* ========================================================================= */
const char *TSmallInfraredStreamTYPENAME = "aeondds::video::TSmallInfraredStream";

DDS_TypeCode* TSmallInfraredStream_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TSmallInfraredStream_g_tc_frame_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((aeondds::video::SMALL_INFRARED_STEAM_SIZE),NULL);

    static DDS_TypeCode_Member TSmallInfraredStream_g_tc_members[4]=
    {
        {
            (char *)"streamId",/* Member name */
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
            (char *)"flags",/* Member name */
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
            (char *)"sequenceNumber",/* Member name */
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
            (char *)"frame",/* Member name */
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

    static DDS_TypeCode TSmallInfraredStream_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::video::TSmallInfraredStream", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TSmallInfraredStream_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TSmallInfraredStream*/

    if (is_initialized) {
        return &TSmallInfraredStream_g_tc;
    }

    TSmallInfraredStream_g_tc_frame_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    TSmallInfraredStream_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TSmallInfraredStream_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    TSmallInfraredStream_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    TSmallInfraredStream_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&TSmallInfraredStream_g_tc_frame_sequence;

    is_initialized = RTI_TRUE;

    return &TSmallInfraredStream_g_tc;
}


RTIBool TSmallInfraredStream_initialize(
    TSmallInfraredStream* sample) {
  return ::aeondds::video::TSmallInfraredStream_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TSmallInfraredStream_initialize_ex(
    TSmallInfraredStream* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::video::TSmallInfraredStream_initialize_w_params(
        sample,&allocParams);
}

RTIBool TSmallInfraredStream_initialize_w_params(
        TSmallInfraredStream* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->streamId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->flags)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->sequenceNumber)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->frame);
        if (!DDS_OctetSeq_set_maximum(&sample->frame,
                ((aeondds::video::SMALL_INFRARED_STEAM_SIZE)))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(&sample->frame, 0); 
    }
            


    return RTI_TRUE;
}

void TSmallInfraredStream_finalize(
    TSmallInfraredStream* sample)
{
    ::aeondds::video::TSmallInfraredStream_finalize_ex(sample,RTI_TRUE);
}
        
void TSmallInfraredStream_finalize_ex(
    TSmallInfraredStream* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::video::TSmallInfraredStream_finalize_w_params(
        sample,&deallocParams);
}

void TSmallInfraredStream_finalize_w_params(
        TSmallInfraredStream* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





    DDS_OctetSeq_finalize(&sample->frame);
            

}

void TSmallInfraredStream_finalize_optional_members(
    TSmallInfraredStream* sample, RTIBool deletePointers)
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

RTIBool TSmallInfraredStream_copy(
    TSmallInfraredStream* dst,
    const TSmallInfraredStream* src)
{

    if (!RTICdrType_copyLong(
        &dst->streamId, &src->streamId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->flags, &src->flags)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->sequenceNumber, &src->sequenceNumber)) {
        return RTI_FALSE;
    }
            

    if (!DDS_OctetSeq_copy(&dst->frame,
                                          &src->frame)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TSmallInfraredStream' sequence class.
 */
#define T TSmallInfraredStream
#define TSeq TSmallInfraredStreamSeq
#define T_initialize_w_params ::aeondds::video::TSmallInfraredStream_initialize_w_params
#define T_finalize_w_params   ::aeondds::video::TSmallInfraredStream_finalize_w_params
#define T_copy       ::aeondds::video::TSmallInfraredStream_copy

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
const char *TGenericVideoFrameTYPENAME = "aeondds::video::TGenericVideoFrame";

DDS_TypeCode* TGenericVideoFrame_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TGenericVideoFrame_g_tc_frame_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((aeondds::video::MAX_FRAME_SIZE),NULL);

    static DDS_TypeCode_Member TGenericVideoFrame_g_tc_members[2]=
    {
        {
            (char *)"streamId",/* Member name */
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
            (char *)"frame",/* Member name */
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

    static DDS_TypeCode TGenericVideoFrame_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::video::TGenericVideoFrame", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TGenericVideoFrame_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TGenericVideoFrame*/

    if (is_initialized) {
        return &TGenericVideoFrame_g_tc;
    }

    TGenericVideoFrame_g_tc_frame_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    TGenericVideoFrame_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TGenericVideoFrame_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&TGenericVideoFrame_g_tc_frame_sequence;

    is_initialized = RTI_TRUE;

    return &TGenericVideoFrame_g_tc;
}


RTIBool TGenericVideoFrame_initialize(
    TGenericVideoFrame* sample) {
  return ::aeondds::video::TGenericVideoFrame_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TGenericVideoFrame_initialize_ex(
    TGenericVideoFrame* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::video::TGenericVideoFrame_initialize_w_params(
        sample,&allocParams);
}

RTIBool TGenericVideoFrame_initialize_w_params(
        TGenericVideoFrame* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->streamId)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->frame);
        if (!DDS_OctetSeq_set_maximum(&sample->frame,
                ((aeondds::video::MAX_FRAME_SIZE)))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(&sample->frame, 0); 
    }
            


    return RTI_TRUE;
}

void TGenericVideoFrame_finalize(
    TGenericVideoFrame* sample)
{
    ::aeondds::video::TGenericVideoFrame_finalize_ex(sample,RTI_TRUE);
}
        
void TGenericVideoFrame_finalize_ex(
    TGenericVideoFrame* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::video::TGenericVideoFrame_finalize_w_params(
        sample,&deallocParams);
}

void TGenericVideoFrame_finalize_w_params(
        TGenericVideoFrame* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    DDS_OctetSeq_finalize(&sample->frame);
            

}

void TGenericVideoFrame_finalize_optional_members(
    TGenericVideoFrame* sample, RTIBool deletePointers)
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

RTIBool TGenericVideoFrame_copy(
    TGenericVideoFrame* dst,
    const TGenericVideoFrame* src)
{

    if (!RTICdrType_copyLong(
        &dst->streamId, &src->streamId)) {
        return RTI_FALSE;
    }
            

    if (!DDS_OctetSeq_copy(&dst->frame,
                                          &src->frame)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TGenericVideoFrame' sequence class.
 */
#define T TGenericVideoFrame
#define TSeq TGenericVideoFrameSeq
#define T_initialize_w_params ::aeondds::video::TGenericVideoFrame_initialize_w_params
#define T_finalize_w_params   ::aeondds::video::TGenericVideoFrame_finalize_w_params
#define T_copy       ::aeondds::video::TGenericVideoFrame_copy

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


} /* namespace video */

} /* namespace aeondds */
