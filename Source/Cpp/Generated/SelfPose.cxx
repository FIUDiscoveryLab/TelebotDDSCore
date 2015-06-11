
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SelfPose.idl using "rtiddsgen".
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



#include "SelfPose.h"


namespace aeondds{

namespace selfpose{
/* ========================================================================= */
const char *TSelfPoseTYPENAME = "aeondds::selfpose::TSelfPose";

DDS_TypeCode* TSelfPose_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TSelfPose_g_tc_members[12]=
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
            (char *)"timestampMs",/* Member name */
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
            (char *)"x",/* Member name */
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
            (char *)"y",/* Member name */
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
            (char *)"z",/* Member name */
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
        },
        {
            (char *)"q1",/* Member name */
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
            (char *)"q2",/* Member name */
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
            (char *)"q3",/* Member name */
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
            (char *)"q4",/* Member name */
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
        }
    };

    static DDS_TypeCode TSelfPose_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::selfpose::TSelfPose", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        12, /* Number of members */
        TSelfPose_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TSelfPose*/

    if (is_initialized) {
        return &TSelfPose_g_tc;
    }


    TSelfPose_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TSelfPose_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TSelfPose_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSelfPose_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TSelfPose_g_tc;
}


RTIBool TSelfPose_initialize(
    TSelfPose* sample) {
  return ::aeondds::selfpose::TSelfPose_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TSelfPose_initialize_ex(
    TSelfPose* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::selfpose::TSelfPose_initialize_w_params(
        sample,&allocParams);
}

RTIBool TSelfPose_initialize_w_params(
        TSelfPose* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->vehicleId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->timestampMs)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->x)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->y)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->z)) {
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
            

    if (!RTICdrType_initDouble(&sample->q1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->q2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->q3)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->q4)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TSelfPose_finalize(
    TSelfPose* sample)
{
    ::aeondds::selfpose::TSelfPose_finalize_ex(sample,RTI_TRUE);
}
        
void TSelfPose_finalize_ex(
    TSelfPose* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::selfpose::TSelfPose_finalize_w_params(
        sample,&deallocParams);
}

void TSelfPose_finalize_w_params(
        TSelfPose* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */














}

void TSelfPose_finalize_optional_members(
    TSelfPose* sample, RTIBool deletePointers)
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

RTIBool TSelfPose_copy(
    TSelfPose* dst,
    const TSelfPose* src)
{

    if (!RTICdrType_copyLong(
        &dst->vehicleId, &src->vehicleId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->timestampMs, &src->timestampMs)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->x, &src->x)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->y, &src->y)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->z, &src->z)) {
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
            

    if (!RTICdrType_copyDouble(
        &dst->q4, &src->q4)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TSelfPose' sequence class.
 */
#define T TSelfPose
#define TSeq TSelfPoseSeq
#define T_initialize_w_params ::aeondds::selfpose::TSelfPose_initialize_w_params
#define T_finalize_w_params   ::aeondds::selfpose::TSelfPose_finalize_w_params
#define T_copy       ::aeondds::selfpose::TSelfPose_copy

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


} /* namespace selfpose */

} /* namespace aeondds */
