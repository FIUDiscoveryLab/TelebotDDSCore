
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensors.idl using "rtiddsgen".
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



#include "Sensors.h"


namespace aeondds{

namespace sensors{
/* ========================================================================= */
const char *EObjectTypeTYPENAME = "aeondds::sensors::EObjectType";

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
        (char *)"aeondds::sensors::EObjectType", /* Name */
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
const char *TViconTrackTYPENAME = "aeondds::sensors::TViconTrack";

DDS_TypeCode* TViconTrack_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TViconTrack_g_tc_objectId_string = DDS_INITIALIZE_STRING_TYPECODE((aeondds::sensors::OBJECT_ID_LENGTH));

    static DDS_TypeCode_Member TViconTrack_g_tc_members[13]=
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
        },
        {
            (char *)"q0",/* Member name */
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
            (char *)"q1",/* Member name */
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
            (char *)"q2",/* Member name */
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
            (char *)"q3",/* Member name */
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

    static DDS_TypeCode TViconTrack_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::sensors::TViconTrack", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        13, /* Number of members */
        TViconTrack_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TViconTrack*/

    if (is_initialized) {
        return &TViconTrack_g_tc;
    }


    TViconTrack_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&TViconTrack_g_tc_objectId_string;
    TViconTrack_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::sensors::EObjectType_get_typecode();
    TViconTrack_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    TViconTrack_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TViconTrack_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TViconTrack_g_tc;
}


RTIBool TViconTrack_initialize(
    TViconTrack* sample) {
  return ::aeondds::sensors::TViconTrack_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TViconTrack_initialize_ex(
    TViconTrack* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::sensors::TViconTrack_initialize_w_params(
        sample,&allocParams);
}

RTIBool TViconTrack_initialize_w_params(
        TViconTrack* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        sample->objectId = DDS_String_alloc(((aeondds::sensors::OBJECT_ID_LENGTH)));
        if (sample->objectId == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->objectId != NULL) { 
            sample->objectId[0] = '\0';
        }
    }
            

    if (!aeondds::sensors::EObjectType_initialize_w_params(&sample->objectType,allocParams)) {
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

void TViconTrack_finalize(
    TViconTrack* sample)
{
    ::aeondds::sensors::TViconTrack_finalize_ex(sample,RTI_TRUE);
}
        
void TViconTrack_finalize_ex(
    TViconTrack* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::sensors::TViconTrack_finalize_w_params(
        sample,&deallocParams);
}

void TViconTrack_finalize_w_params(
        TViconTrack* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    if (sample->objectId != NULL) {    
        DDS_String_free(sample->objectId);
        sample->objectId = NULL;
    }
            

    aeondds::sensors::EObjectType_finalize_w_params(&sample->objectType, deallocParams);
            












}

void TViconTrack_finalize_optional_members(
    TViconTrack* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::sensors::EObjectType_finalize_w_params(&sample->objectType, deallocParams);
            












}

RTIBool TViconTrack_copy(
    TViconTrack* dst,
    const TViconTrack* src)
{

    if (!RTICdrType_copyString(
        dst->objectId, src->objectId, ((aeondds::sensors::OBJECT_ID_LENGTH)) + 1)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::sensors::EObjectType_copy(
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
 * Configure and implement 'TViconTrack' sequence class.
 */
#define T TViconTrack
#define TSeq TViconTrackSeq
#define T_initialize_w_params ::aeondds::sensors::TViconTrack_initialize_w_params
#define T_finalize_w_params   ::aeondds::sensors::TViconTrack_finalize_w_params
#define T_copy       ::aeondds::sensors::TViconTrack_copy

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


} /* namespace sensors */

} /* namespace aeondds */
