
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Navigation.idl using "rtiddsgen".
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



#include "Navigation.h"


namespace aeondds{

namespace navigation{
/* ========================================================================= */
const char *TWaypointTYPENAME = "aeondds::navigation::TWaypoint";

DDS_TypeCode* TWaypoint_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TWaypoint_g_tc_members[5]=
    {
        {
            (char *)"longitude",/* Member name */
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
            (char *)"latitude",/* Member name */
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
            (char *)"alt_m",/* Member name */
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
            (char *)"heading_rads",/* Member name */
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
            (char *)"acceptanceRadius_m",/* Member name */
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

    static DDS_TypeCode TWaypoint_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::navigation::TWaypoint", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        TWaypoint_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TWaypoint*/

    if (is_initialized) {
        return &TWaypoint_g_tc;
    }


    TWaypoint_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TWaypoint_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TWaypoint_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TWaypoint_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TWaypoint_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TWaypoint_g_tc;
}


RTIBool TWaypoint_initialize(
    TWaypoint* sample) {
  return ::aeondds::navigation::TWaypoint_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TWaypoint_initialize_ex(
    TWaypoint* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::navigation::TWaypoint_initialize_w_params(
        sample,&allocParams);
}

RTIBool TWaypoint_initialize_w_params(
        TWaypoint* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initDouble(&sample->longitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->latitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->alt_m)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->heading_rads)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->acceptanceRadius_m)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TWaypoint_finalize(
    TWaypoint* sample)
{
    ::aeondds::navigation::TWaypoint_finalize_ex(sample,RTI_TRUE);
}
        
void TWaypoint_finalize_ex(
    TWaypoint* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::navigation::TWaypoint_finalize_w_params(
        sample,&deallocParams);
}

void TWaypoint_finalize_w_params(
        TWaypoint* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */







}

void TWaypoint_finalize_optional_members(
    TWaypoint* sample, RTIBool deletePointers)
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

RTIBool TWaypoint_copy(
    TWaypoint* dst,
    const TWaypoint* src)
{

    if (!RTICdrType_copyDouble(
        &dst->longitude, &src->longitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->latitude, &src->latitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->alt_m, &src->alt_m)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->heading_rads, &src->heading_rads)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->acceptanceRadius_m, &src->acceptanceRadius_m)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TWaypoint' sequence class.
 */
#define T TWaypoint
#define TSeq TWaypointSeq
#define T_initialize_w_params ::aeondds::navigation::TWaypoint_initialize_w_params
#define T_finalize_w_params   ::aeondds::navigation::TWaypoint_finalize_w_params
#define T_copy       ::aeondds::navigation::TWaypoint_copy

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
const char *TWaypointCourseTYPENAME = "aeondds::navigation::TWaypointCourse";

DDS_TypeCode* TWaypointCourse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TWaypointCourse_g_tc_courseId_string = DDS_INITIALIZE_STRING_TYPECODE((aeondds::navigation::MAX_COURSE_ID_LENGTH));
    static DDS_TypeCode TWaypointCourse_g_tc_waypoints_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((aeondds::navigation::MAX_WAYPOINTS),NULL);

    static DDS_TypeCode_Member TWaypointCourse_g_tc_members[3]=
    {
        {
            (char *)"courseId",/* Member name */
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
            (char *)"currentWaypoint",/* Member name */
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
            (char *)"waypoints",/* Member name */
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
        }
    };

    static DDS_TypeCode TWaypointCourse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::navigation::TWaypointCourse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TWaypointCourse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TWaypointCourse*/

    if (is_initialized) {
        return &TWaypointCourse_g_tc;
    }

    TWaypointCourse_g_tc_waypoints_sequence._data._typeCode = (RTICdrTypeCode *)aeondds::navigation::TWaypoint_get_typecode();

    TWaypointCourse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&TWaypointCourse_g_tc_courseId_string;
    TWaypointCourse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TWaypointCourse_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&TWaypointCourse_g_tc_waypoints_sequence;

    is_initialized = RTI_TRUE;

    return &TWaypointCourse_g_tc;
}


RTIBool TWaypointCourse_initialize(
    TWaypointCourse* sample) {
  return ::aeondds::navigation::TWaypointCourse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TWaypointCourse_initialize_ex(
    TWaypointCourse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::navigation::TWaypointCourse_initialize_w_params(
        sample,&allocParams);
}

RTIBool TWaypointCourse_initialize_w_params(
        TWaypointCourse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        sample->courseId = DDS_String_alloc(((aeondds::navigation::MAX_COURSE_ID_LENGTH)));
        if (sample->courseId == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->courseId != NULL) { 
            sample->courseId[0] = '\0';
        }
    }
            

    if (!RTICdrType_initLong(&sample->currentWaypoint)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        aeondds::navigation::TWaypointSeq_initialize(&sample->waypoints);
        aeondds::navigation::TWaypointSeq_set_element_allocation_params(&sample->waypoints,allocParams);
        if (!aeondds::navigation::TWaypointSeq_set_maximum(&sample->waypoints,
                                           ((aeondds::navigation::MAX_WAYPOINTS)))) {
            return RTI_FALSE;
        }
    } else {
        aeondds::navigation::TWaypointSeq_set_length(&sample->waypoints,0);
    }
            


    return RTI_TRUE;
}

void TWaypointCourse_finalize(
    TWaypointCourse* sample)
{
    ::aeondds::navigation::TWaypointCourse_finalize_ex(sample,RTI_TRUE);
}
        
void TWaypointCourse_finalize_ex(
    TWaypointCourse* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::navigation::TWaypointCourse_finalize_w_params(
        sample,&deallocParams);
}

void TWaypointCourse_finalize_w_params(
        TWaypointCourse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    if (sample->courseId != NULL) {    
        DDS_String_free(sample->courseId);
        sample->courseId = NULL;
    }
            


    aeondds::navigation::TWaypointSeq_set_element_deallocation_params(&sample->waypoints,deallocParams);
    aeondds::navigation::TWaypointSeq_finalize(&sample->waypoints);
            

}

void TWaypointCourse_finalize_optional_members(
    TWaypointCourse* sample, RTIBool deletePointers)
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
        length = aeondds::navigation::TWaypointSeq_get_length(
            &sample->waypoints);

        for (i = 0; i < length; i++) {
            aeondds::navigation::TWaypoint_finalize_optional_members(
                aeondds::navigation::TWaypointSeq_get_reference(
                    &sample->waypoints, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool TWaypointCourse_copy(
    TWaypointCourse* dst,
    const TWaypointCourse* src)
{

    if (!RTICdrType_copyString(
        dst->courseId, src->courseId, ((aeondds::navigation::MAX_COURSE_ID_LENGTH)) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->currentWaypoint, &src->currentWaypoint)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::navigation::TWaypointSeq_copy(&dst->waypoints,
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
 * Configure and implement 'TWaypointCourse' sequence class.
 */
#define T TWaypointCourse
#define TSeq TWaypointCourseSeq
#define T_initialize_w_params ::aeondds::navigation::TWaypointCourse_initialize_w_params
#define T_finalize_w_params   ::aeondds::navigation::TWaypointCourse_finalize_w_params
#define T_copy       ::aeondds::navigation::TWaypointCourse_copy

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


} /* namespace navigation */

} /* namespace aeondds */

namespace aeondds{

namespace cmdrnav{
/* ========================================================================= */
const char *EModeTypeTYPENAME = "aeondds::cmdrnav::EModeType";

DDS_TypeCode* EModeType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EModeType_g_tc_members[4] =
    {
        {
            (char *)"AUTO",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            AUTO, /* Enumerator ordinal */
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
            (char *)"POSITIONHOLD",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            POSITIONHOLD, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EModeType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::cmdrnav::EModeType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of enumerators */
        EModeType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EModeType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EModeType_g_tc;
}
 

RTIBool EModeType_initialize(
    EModeType* sample)
{
    *sample = AUTO;
    return RTI_TRUE;
}
        
RTIBool EModeType_initialize_ex(
    EModeType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = AUTO;
    return RTI_TRUE;
}

RTIBool EModeType_initialize_w_params(
        EModeType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = AUTO;
    return RTI_TRUE;
}

void EModeType_finalize(
    EModeType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EModeType_finalize_ex(
    EModeType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EModeType_finalize_w_params(
        EModeType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EModeType_copy(
    EModeType* dst,
    const EModeType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EModeType_getValues(EModeTypeSeq * values) 
    
{
    int i = 0;
    EModeType * buffer;


    if (!values->maximum(4)) {
        return RTI_FALSE;
    }

    if (!values->length(4)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = AUTO;
    i++;
    
    buffer[i] = EMERGENCYSOFT;
    i++;
    
    buffer[i] = EMERGENCYHARD;
    i++;
    
    buffer[i] = POSITIONHOLD;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EModeType' sequence class.
 */
#define T EModeType
#define TSeq EModeTypeSeq
#define T_initialize_w_params EModeType_initialize_w_params
#define T_finalize_w_params   EModeType_finalize_w_params
#define T_copy       EModeType_copy

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
const char *TModeChangeTYPENAME = "aeondds::cmdrnav::TModeChange";

DDS_TypeCode* TModeChange_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TModeChange_g_tc_members[1]=
    {
        {
            (char *)"modeType",/* Member name */
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

    static DDS_TypeCode TModeChange_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TModeChange", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TModeChange_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TModeChange*/

    if (is_initialized) {
        return &TModeChange_g_tc;
    }


    TModeChange_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::EModeType_get_typecode();

    is_initialized = RTI_TRUE;

    return &TModeChange_g_tc;
}


RTIBool TModeChange_initialize(
    TModeChange* sample) {
  return ::aeondds::cmdrnav::TModeChange_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TModeChange_initialize_ex(
    TModeChange* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TModeChange_initialize_w_params(
        sample,&allocParams);
}

RTIBool TModeChange_initialize_w_params(
        TModeChange* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::cmdrnav::EModeType_initialize_w_params(&sample->modeType,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TModeChange_finalize(
    TModeChange* sample)
{
    ::aeondds::cmdrnav::TModeChange_finalize_ex(sample,RTI_TRUE);
}
        
void TModeChange_finalize_ex(
    TModeChange* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TModeChange_finalize_w_params(
        sample,&deallocParams);
}

void TModeChange_finalize_w_params(
        TModeChange* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::cmdrnav::EModeType_finalize_w_params(&sample->modeType, deallocParams);
            

}

void TModeChange_finalize_optional_members(
    TModeChange* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::cmdrnav::EModeType_finalize_w_params(&sample->modeType, deallocParams);
            

}

RTIBool TModeChange_copy(
    TModeChange* dst,
    const TModeChange* src)
{

    if (!aeondds::cmdrnav::EModeType_copy(
        &dst->modeType, &src->modeType)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TModeChange' sequence class.
 */
#define T TModeChange
#define TSeq TModeChangeSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TModeChange_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TModeChange_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TModeChange_copy

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
const char *TRegisterCourseTYPENAME = "aeondds::cmdrnav::TRegisterCourse";

DDS_TypeCode* TRegisterCourse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TRegisterCourse_g_tc_members[2]=
    {
        {
            (char *)"courseId",/* Member name */
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
            (char *)"course",/* Member name */
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

    static DDS_TypeCode TRegisterCourse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TRegisterCourse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TRegisterCourse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TRegisterCourse*/

    if (is_initialized) {
        return &TRegisterCourse_g_tc;
    }


    TRegisterCourse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TRegisterCourse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::navigation::TWaypointCourse_get_typecode();

    is_initialized = RTI_TRUE;

    return &TRegisterCourse_g_tc;
}


RTIBool TRegisterCourse_initialize(
    TRegisterCourse* sample) {
  return ::aeondds::cmdrnav::TRegisterCourse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TRegisterCourse_initialize_ex(
    TRegisterCourse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TRegisterCourse_initialize_w_params(
        sample,&allocParams);
}

RTIBool TRegisterCourse_initialize_w_params(
        TRegisterCourse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->courseId)) {
        return RTI_FALSE;
    }                
            

    if (!aeondds::navigation::TWaypointCourse_initialize_w_params(&sample->course,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TRegisterCourse_finalize(
    TRegisterCourse* sample)
{
    ::aeondds::cmdrnav::TRegisterCourse_finalize_ex(sample,RTI_TRUE);
}
        
void TRegisterCourse_finalize_ex(
    TRegisterCourse* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TRegisterCourse_finalize_w_params(
        sample,&deallocParams);
}

void TRegisterCourse_finalize_w_params(
        TRegisterCourse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    aeondds::navigation::TWaypointCourse_finalize_w_params(&sample->course, deallocParams);
            

}

void TRegisterCourse_finalize_optional_members(
    TRegisterCourse* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::navigation::TWaypointCourse_finalize_optional_members(&sample->course, deallocParams->delete_pointers);
            

}

RTIBool TRegisterCourse_copy(
    TRegisterCourse* dst,
    const TRegisterCourse* src)
{

    if (!RTICdrType_copyLong(
        &dst->courseId, &src->courseId)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::navigation::TWaypointCourse_copy(
        &dst->course, &src->course)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TRegisterCourse' sequence class.
 */
#define T TRegisterCourse
#define TSeq TRegisterCourseSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TRegisterCourse_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TRegisterCourse_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TRegisterCourse_copy

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
const char *TSetCourseTYPENAME = "aeondds::cmdrnav::TSetCourse";

DDS_TypeCode* TSetCourse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TSetCourse_g_tc_members[2]=
    {
        {
            (char *)"courseId",/* Member name */
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
            (char *)"startIndex",/* Member name */
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

    static DDS_TypeCode TSetCourse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TSetCourse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TSetCourse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TSetCourse*/

    if (is_initialized) {
        return &TSetCourse_g_tc;
    }


    TSetCourse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TSetCourse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TSetCourse_g_tc;
}


RTIBool TSetCourse_initialize(
    TSetCourse* sample) {
  return ::aeondds::cmdrnav::TSetCourse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TSetCourse_initialize_ex(
    TSetCourse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TSetCourse_initialize_w_params(
        sample,&allocParams);
}

RTIBool TSetCourse_initialize_w_params(
        TSetCourse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->courseId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->startIndex)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TSetCourse_finalize(
    TSetCourse* sample)
{
    ::aeondds::cmdrnav::TSetCourse_finalize_ex(sample,RTI_TRUE);
}
        
void TSetCourse_finalize_ex(
    TSetCourse* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TSetCourse_finalize_w_params(
        sample,&deallocParams);
}

void TSetCourse_finalize_w_params(
        TSetCourse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void TSetCourse_finalize_optional_members(
    TSetCourse* sample, RTIBool deletePointers)
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

RTIBool TSetCourse_copy(
    TSetCourse* dst,
    const TSetCourse* src)
{

    if (!RTICdrType_copyLong(
        &dst->courseId, &src->courseId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->startIndex, &src->startIndex)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TSetCourse' sequence class.
 */
#define T TSetCourse
#define TSeq TSetCourseSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TSetCourse_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TSetCourse_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TSetCourse_copy

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
const char *EReportTypeTYPENAME = "aeondds::cmdrnav::EReportType";

DDS_TypeCode* EReportType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EReportType_g_tc_members[5] =
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

    static DDS_TypeCode EReportType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::cmdrnav::EReportType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of enumerators */
        EReportType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EReportType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EReportType_g_tc;
}
 

RTIBool EReportType_initialize(
    EReportType* sample)
{
    *sample = COURSECOMPLETION;
    return RTI_TRUE;
}
        
RTIBool EReportType_initialize_ex(
    EReportType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = COURSECOMPLETION;
    return RTI_TRUE;
}

RTIBool EReportType_initialize_w_params(
        EReportType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = COURSECOMPLETION;
    return RTI_TRUE;
}

void EReportType_finalize(
    EReportType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EReportType_finalize_ex(
    EReportType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EReportType_finalize_w_params(
        EReportType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EReportType_copy(
    EReportType* dst,
    const EReportType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EReportType_getValues(EReportTypeSeq * values) 
    
{
    int i = 0;
    EReportType * buffer;


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
 * Configure and implement 'EReportType' sequence class.
 */
#define T EReportType
#define TSeq EReportTypeSeq
#define T_initialize_w_params EReportType_initialize_w_params
#define T_finalize_w_params   EReportType_finalize_w_params
#define T_copy       EReportType_copy

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
const char *EStatusTYPENAME = "aeondds::cmdrnav::EStatus";

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
        (char *)"aeondds::cmdrnav::EStatus", /* Name */
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
const char *ENavigatorSubsystemsTYPENAME = "aeondds::cmdrnav::ENavigatorSubsystems";

DDS_TypeCode* ENavigatorSubsystems_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ENavigatorSubsystems_g_tc_members[3] =
    {
        {
            (char *)"AUTOPILOT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            AUTOPILOT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CONTROLLER",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CONTROLLER, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"HARDWARE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            HARDWARE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ENavigatorSubsystems_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::cmdrnav::ENavigatorSubsystems", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        ENavigatorSubsystems_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ENavigatorSubsystems_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ENavigatorSubsystems_g_tc;
}
 

RTIBool ENavigatorSubsystems_initialize(
    ENavigatorSubsystems* sample)
{
    *sample = AUTOPILOT;
    return RTI_TRUE;
}
        
RTIBool ENavigatorSubsystems_initialize_ex(
    ENavigatorSubsystems* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = AUTOPILOT;
    return RTI_TRUE;
}

RTIBool ENavigatorSubsystems_initialize_w_params(
        ENavigatorSubsystems* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = AUTOPILOT;
    return RTI_TRUE;
}

void ENavigatorSubsystems_finalize(
    ENavigatorSubsystems* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ENavigatorSubsystems_finalize_ex(
    ENavigatorSubsystems* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ENavigatorSubsystems_finalize_w_params(
        ENavigatorSubsystems* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ENavigatorSubsystems_copy(
    ENavigatorSubsystems* dst,
    const ENavigatorSubsystems* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ENavigatorSubsystems_getValues(ENavigatorSubsystemsSeq * values) 
    
{
    int i = 0;
    ENavigatorSubsystems * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = AUTOPILOT;
    i++;
    
    buffer[i] = CONTROLLER;
    i++;
    
    buffer[i] = HARDWARE;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ENavigatorSubsystems' sequence class.
 */
#define T ENavigatorSubsystems
#define TSeq ENavigatorSubsystemsSeq
#define T_initialize_w_params ENavigatorSubsystems_initialize_w_params
#define T_finalize_w_params   ENavigatorSubsystems_finalize_w_params
#define T_copy       ENavigatorSubsystems_copy

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
const char *TReportCourseCompletionTYPENAME = "aeondds::cmdrnav::TReportCourseCompletion";

DDS_TypeCode* TReportCourseCompletion_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TReportCourseCompletion_g_tc_members[2]=
    {
        {
            (char *)"status",/* Member name */
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
            (char *)"courseId",/* Member name */
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

    static DDS_TypeCode TReportCourseCompletion_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TReportCourseCompletion", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TReportCourseCompletion_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TReportCourseCompletion*/

    if (is_initialized) {
        return &TReportCourseCompletion_g_tc;
    }


    TReportCourseCompletion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::EStatus_get_typecode();
    TReportCourseCompletion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TReportCourseCompletion_g_tc;
}


RTIBool TReportCourseCompletion_initialize(
    TReportCourseCompletion* sample) {
  return ::aeondds::cmdrnav::TReportCourseCompletion_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TReportCourseCompletion_initialize_ex(
    TReportCourseCompletion* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TReportCourseCompletion_initialize_w_params(
        sample,&allocParams);
}

RTIBool TReportCourseCompletion_initialize_w_params(
        TReportCourseCompletion* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::cmdrnav::EStatus_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->courseId)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TReportCourseCompletion_finalize(
    TReportCourseCompletion* sample)
{
    ::aeondds::cmdrnav::TReportCourseCompletion_finalize_ex(sample,RTI_TRUE);
}
        
void TReportCourseCompletion_finalize_ex(
    TReportCourseCompletion* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TReportCourseCompletion_finalize_w_params(
        sample,&deallocParams);
}

void TReportCourseCompletion_finalize_w_params(
        TReportCourseCompletion* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::cmdrnav::EStatus_finalize_w_params(&sample->status, deallocParams);
            


}

void TReportCourseCompletion_finalize_optional_members(
    TReportCourseCompletion* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::cmdrnav::EStatus_finalize_w_params(&sample->status, deallocParams);
            


}

RTIBool TReportCourseCompletion_copy(
    TReportCourseCompletion* dst,
    const TReportCourseCompletion* src)
{

    if (!aeondds::cmdrnav::EStatus_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->courseId, &src->courseId)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TReportCourseCompletion' sequence class.
 */
#define T TReportCourseCompletion
#define TSeq TReportCourseCompletionSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TReportCourseCompletion_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TReportCourseCompletion_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TReportCourseCompletion_copy

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
const char *TReportWaypointReachedTYPENAME = "aeondds::cmdrnav::TReportWaypointReached";

DDS_TypeCode* TReportWaypointReached_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TReportWaypointReached_g_tc_members[2]=
    {
        {
            (char *)"courseId",/* Member name */
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
            (char *)"waypointIndex",/* Member name */
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

    static DDS_TypeCode TReportWaypointReached_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TReportWaypointReached", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TReportWaypointReached_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TReportWaypointReached*/

    if (is_initialized) {
        return &TReportWaypointReached_g_tc;
    }


    TReportWaypointReached_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TReportWaypointReached_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TReportWaypointReached_g_tc;
}


RTIBool TReportWaypointReached_initialize(
    TReportWaypointReached* sample) {
  return ::aeondds::cmdrnav::TReportWaypointReached_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TReportWaypointReached_initialize_ex(
    TReportWaypointReached* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TReportWaypointReached_initialize_w_params(
        sample,&allocParams);
}

RTIBool TReportWaypointReached_initialize_w_params(
        TReportWaypointReached* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->courseId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->waypointIndex)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TReportWaypointReached_finalize(
    TReportWaypointReached* sample)
{
    ::aeondds::cmdrnav::TReportWaypointReached_finalize_ex(sample,RTI_TRUE);
}
        
void TReportWaypointReached_finalize_ex(
    TReportWaypointReached* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TReportWaypointReached_finalize_w_params(
        sample,&deallocParams);
}

void TReportWaypointReached_finalize_w_params(
        TReportWaypointReached* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void TReportWaypointReached_finalize_optional_members(
    TReportWaypointReached* sample, RTIBool deletePointers)
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

RTIBool TReportWaypointReached_copy(
    TReportWaypointReached* dst,
    const TReportWaypointReached* src)
{

    if (!RTICdrType_copyLong(
        &dst->courseId, &src->courseId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->waypointIndex, &src->waypointIndex)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TReportWaypointReached' sequence class.
 */
#define T TReportWaypointReached
#define TSeq TReportWaypointReachedSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TReportWaypointReached_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TReportWaypointReached_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TReportWaypointReached_copy

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
const char *TReportModeShiftTYPENAME = "aeondds::cmdrnav::TReportModeShift";

DDS_TypeCode* TReportModeShift_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TReportModeShift_g_tc_members[1]=
    {
        {
            (char *)"modeType",/* Member name */
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

    static DDS_TypeCode TReportModeShift_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TReportModeShift", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TReportModeShift_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TReportModeShift*/

    if (is_initialized) {
        return &TReportModeShift_g_tc;
    }


    TReportModeShift_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::EModeType_get_typecode();

    is_initialized = RTI_TRUE;

    return &TReportModeShift_g_tc;
}


RTIBool TReportModeShift_initialize(
    TReportModeShift* sample) {
  return ::aeondds::cmdrnav::TReportModeShift_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TReportModeShift_initialize_ex(
    TReportModeShift* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TReportModeShift_initialize_w_params(
        sample,&allocParams);
}

RTIBool TReportModeShift_initialize_w_params(
        TReportModeShift* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::cmdrnav::EModeType_initialize_w_params(&sample->modeType,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TReportModeShift_finalize(
    TReportModeShift* sample)
{
    ::aeondds::cmdrnav::TReportModeShift_finalize_ex(sample,RTI_TRUE);
}
        
void TReportModeShift_finalize_ex(
    TReportModeShift* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TReportModeShift_finalize_w_params(
        sample,&deallocParams);
}

void TReportModeShift_finalize_w_params(
        TReportModeShift* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::cmdrnav::EModeType_finalize_w_params(&sample->modeType, deallocParams);
            

}

void TReportModeShift_finalize_optional_members(
    TReportModeShift* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::cmdrnav::EModeType_finalize_w_params(&sample->modeType, deallocParams);
            

}

RTIBool TReportModeShift_copy(
    TReportModeShift* dst,
    const TReportModeShift* src)
{

    if (!aeondds::cmdrnav::EModeType_copy(
        &dst->modeType, &src->modeType)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TReportModeShift' sequence class.
 */
#define T TReportModeShift
#define TSeq TReportModeShiftSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TReportModeShift_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TReportModeShift_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TReportModeShift_copy

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
const char *TReportSystemFailureTYPENAME = "aeondds::cmdrnav::TReportSystemFailure";

DDS_TypeCode* TReportSystemFailure_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TReportSystemFailure_g_tc_members[2]=
    {
        {
            (char *)"subsystem",/* Member name */
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
            (char *)"isRecoverable",/* Member name */
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

    static DDS_TypeCode TReportSystemFailure_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TReportSystemFailure", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TReportSystemFailure_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TReportSystemFailure*/

    if (is_initialized) {
        return &TReportSystemFailure_g_tc;
    }


    TReportSystemFailure_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::ENavigatorSubsystems_get_typecode();
    TReportSystemFailure_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &TReportSystemFailure_g_tc;
}


RTIBool TReportSystemFailure_initialize(
    TReportSystemFailure* sample) {
  return ::aeondds::cmdrnav::TReportSystemFailure_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TReportSystemFailure_initialize_ex(
    TReportSystemFailure* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TReportSystemFailure_initialize_w_params(
        sample,&allocParams);
}

RTIBool TReportSystemFailure_initialize_w_params(
        TReportSystemFailure* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::cmdrnav::ENavigatorSubsystems_initialize_w_params(&sample->subsystem,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initBoolean(&sample->isRecoverable)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TReportSystemFailure_finalize(
    TReportSystemFailure* sample)
{
    ::aeondds::cmdrnav::TReportSystemFailure_finalize_ex(sample,RTI_TRUE);
}
        
void TReportSystemFailure_finalize_ex(
    TReportSystemFailure* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TReportSystemFailure_finalize_w_params(
        sample,&deallocParams);
}

void TReportSystemFailure_finalize_w_params(
        TReportSystemFailure* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::cmdrnav::ENavigatorSubsystems_finalize_w_params(&sample->subsystem, deallocParams);
            


}

void TReportSystemFailure_finalize_optional_members(
    TReportSystemFailure* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::cmdrnav::ENavigatorSubsystems_finalize_w_params(&sample->subsystem, deallocParams);
            


}

RTIBool TReportSystemFailure_copy(
    TReportSystemFailure* dst,
    const TReportSystemFailure* src)
{

    if (!aeondds::cmdrnav::ENavigatorSubsystems_copy(
        &dst->subsystem, &src->subsystem)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->isRecoverable, &src->isRecoverable)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TReportSystemFailure' sequence class.
 */
#define T TReportSystemFailure
#define TSeq TReportSystemFailureSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TReportSystemFailure_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TReportSystemFailure_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TReportSystemFailure_copy

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
const char *TReportStatusResponseTYPENAME = "aeondds::cmdrnav::TReportStatusResponse";

DDS_TypeCode* TReportStatusResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TReportStatusResponse_g_tc_members[1]=
    {
        {
            (char *)"statusResponse",/* Member name */
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

    static DDS_TypeCode TReportStatusResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TReportStatusResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TReportStatusResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TReportStatusResponse*/

    if (is_initialized) {
        return &TReportStatusResponse_g_tc;
    }


    TReportStatusResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::EStatus_get_typecode();

    is_initialized = RTI_TRUE;

    return &TReportStatusResponse_g_tc;
}


RTIBool TReportStatusResponse_initialize(
    TReportStatusResponse* sample) {
  return ::aeondds::cmdrnav::TReportStatusResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TReportStatusResponse_initialize_ex(
    TReportStatusResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TReportStatusResponse_initialize_w_params(
        sample,&allocParams);
}

RTIBool TReportStatusResponse_initialize_w_params(
        TReportStatusResponse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::cmdrnav::EStatus_initialize_w_params(&sample->statusResponse,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TReportStatusResponse_finalize(
    TReportStatusResponse* sample)
{
    ::aeondds::cmdrnav::TReportStatusResponse_finalize_ex(sample,RTI_TRUE);
}
        
void TReportStatusResponse_finalize_ex(
    TReportStatusResponse* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TReportStatusResponse_finalize_w_params(
        sample,&deallocParams);
}

void TReportStatusResponse_finalize_w_params(
        TReportStatusResponse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::cmdrnav::EStatus_finalize_w_params(&sample->statusResponse, deallocParams);
            

}

void TReportStatusResponse_finalize_optional_members(
    TReportStatusResponse* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::cmdrnav::EStatus_finalize_w_params(&sample->statusResponse, deallocParams);
            

}

RTIBool TReportStatusResponse_copy(
    TReportStatusResponse* dst,
    const TReportStatusResponse* src)
{

    if (!aeondds::cmdrnav::EStatus_copy(
        &dst->statusResponse, &src->statusResponse)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TReportStatusResponse' sequence class.
 */
#define T TReportStatusResponse
#define TSeq TReportStatusResponseSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TReportStatusResponse_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TReportStatusResponse_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TReportStatusResponse_copy

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
const char *TReportUnionTYPENAME = "aeondds::cmdrnav::TReportUnion";

DDS_TypeCode* TReportUnion_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TReportUnion_g_tc_members[5]=
    {
        {
            (char *)"courseCompletionReport",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (aeondds::cmdrnav::COURSECOMPLETION), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"waypointReachedReport",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (aeondds::cmdrnav::WAYPOINTREACHED), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"modeShiftReport",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (aeondds::cmdrnav::MODESHIFT), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"systemFailureReport",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (aeondds::cmdrnav::SYSTEMFAILURE), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"statusResponseReport",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (aeondds::cmdrnav::STATUSRESPONSE), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TReportUnion_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"aeondds::cmdrnav::TReportUnion", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        TReportUnion_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TReportUnion*/

    if (is_initialized) {
        return &TReportUnion_g_tc;
    }


    TReportUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::TReportCourseCompletion_get_typecode();
    TReportUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::TReportWaypointReached_get_typecode();
    TReportUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::TReportModeShift_get_typecode();
    TReportUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::TReportSystemFailure_get_typecode();
    TReportUnion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::TReportStatusResponse_get_typecode();

    TReportUnion_g_tc._data._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::EReportType_get_typecode(); /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &TReportUnion_g_tc;
}


RTIBool TReportUnion_isCaseHandled(aeondds::cmdrnav::EReportType value) 
{

    if (value == (aeondds::cmdrnav::COURSECOMPLETION)) return RTI_TRUE;

    if (value == (aeondds::cmdrnav::WAYPOINTREACHED)) return RTI_TRUE;

    if (value == (aeondds::cmdrnav::MODESHIFT)) return RTI_TRUE;

    if (value == (aeondds::cmdrnav::SYSTEMFAILURE)) return RTI_TRUE;

    if (value == (aeondds::cmdrnav::STATUSRESPONSE)) return RTI_TRUE;

    return RTI_FALSE;
}

aeondds::cmdrnav::EReportType TReportUnion_getDefaultDiscriminator()
{
    int i;
    aeondds::cmdrnav::EReportType tmp = (aeondds::cmdrnav::COURSECOMPLETION);
    for (i =0; i < 5; ++i) {
    
        if (tmp > (aeondds::cmdrnav::COURSECOMPLETION)) tmp = (aeondds::cmdrnav::COURSECOMPLETION);
    
        if (tmp > (aeondds::cmdrnav::WAYPOINTREACHED)) tmp = (aeondds::cmdrnav::WAYPOINTREACHED);
    
        if (tmp > (aeondds::cmdrnav::MODESHIFT)) tmp = (aeondds::cmdrnav::MODESHIFT);
    
        if (tmp > (aeondds::cmdrnav::SYSTEMFAILURE)) tmp = (aeondds::cmdrnav::SYSTEMFAILURE);
    
        if (tmp > (aeondds::cmdrnav::STATUSRESPONSE)) tmp = (aeondds::cmdrnav::STATUSRESPONSE);
    
    }
    return tmp;

}
        

RTIBool TReportUnion_initialize(
    TReportUnion* sample) {
  return ::aeondds::cmdrnav::TReportUnion_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TReportUnion_initialize_ex(
    TReportUnion* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TReportUnion_initialize_w_params(
        sample,&allocParams);
}

RTIBool TReportUnion_initialize_w_params(
        TReportUnion* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = TReportUnion_getDefaultDiscriminator();

    if (!aeondds::cmdrnav::TReportCourseCompletion_initialize_w_params(&sample->_u.courseCompletionReport,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::cmdrnav::TReportWaypointReached_initialize_w_params(&sample->_u.waypointReachedReport,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::cmdrnav::TReportModeShift_initialize_w_params(&sample->_u.modeShiftReport,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::cmdrnav::TReportSystemFailure_initialize_w_params(&sample->_u.systemFailureReport,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::cmdrnav::TReportStatusResponse_initialize_w_params(&sample->_u.statusResponseReport,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TReportUnion_finalize(
    TReportUnion* sample)
{
    ::aeondds::cmdrnav::TReportUnion_finalize_ex(sample,RTI_TRUE);
}
        
void TReportUnion_finalize_ex(
    TReportUnion* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TReportUnion_finalize_w_params(
        sample,&deallocParams);
}

void TReportUnion_finalize_w_params(
        TReportUnion* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::cmdrnav::TReportCourseCompletion_finalize_w_params(&sample->_u.courseCompletionReport, deallocParams);
            

    aeondds::cmdrnav::TReportWaypointReached_finalize_w_params(&sample->_u.waypointReachedReport, deallocParams);
            

    aeondds::cmdrnav::TReportModeShift_finalize_w_params(&sample->_u.modeShiftReport, deallocParams);
            

    aeondds::cmdrnav::TReportSystemFailure_finalize_w_params(&sample->_u.systemFailureReport, deallocParams);
            

    aeondds::cmdrnav::TReportStatusResponse_finalize_w_params(&sample->_u.statusResponseReport, deallocParams);
            

}

void TReportUnion_finalize_optional_members(
    TReportUnion* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    switch(sample->_d) {
          case (aeondds::cmdrnav::COURSECOMPLETION):
        {                                    
        
    aeondds::cmdrnav::TReportCourseCompletion_finalize_optional_members(&sample->_u.courseCompletionReport, deallocParams->delete_pointers);
            

        } break;
      case (aeondds::cmdrnav::WAYPOINTREACHED):
        {                                    
        
    aeondds::cmdrnav::TReportWaypointReached_finalize_optional_members(&sample->_u.waypointReachedReport, deallocParams->delete_pointers);
            

        } break;
      case (aeondds::cmdrnav::MODESHIFT):
        {                                    
        
    aeondds::cmdrnav::TReportModeShift_finalize_optional_members(&sample->_u.modeShiftReport, deallocParams->delete_pointers);
            

        } break;
      case (aeondds::cmdrnav::SYSTEMFAILURE):
        {                                    
        
    aeondds::cmdrnav::TReportSystemFailure_finalize_optional_members(&sample->_u.systemFailureReport, deallocParams->delete_pointers);
            

        } break;
      case (aeondds::cmdrnav::STATUSRESPONSE):
        {                                    
        
    aeondds::cmdrnav::TReportStatusResponse_finalize_optional_members(&sample->_u.statusResponseReport, deallocParams->delete_pointers);
            

        } break;
              
    }
      
}

RTIBool TReportUnion_copy(
    TReportUnion* dst,
    const TReportUnion* src)
{

    if (!aeondds::cmdrnav::EReportType_copy(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case (aeondds::cmdrnav::COURSECOMPLETION):
        {                                    
        
    if (!aeondds::cmdrnav::TReportCourseCompletion_copy(
        &dst->_u.courseCompletionReport, &src->_u.courseCompletionReport)) {
        return RTI_FALSE;
    }
            

        } break;
      case (aeondds::cmdrnav::WAYPOINTREACHED):
        {                                    
        
    if (!aeondds::cmdrnav::TReportWaypointReached_copy(
        &dst->_u.waypointReachedReport, &src->_u.waypointReachedReport)) {
        return RTI_FALSE;
    }
            

        } break;
      case (aeondds::cmdrnav::MODESHIFT):
        {                                    
        
    if (!aeondds::cmdrnav::TReportModeShift_copy(
        &dst->_u.modeShiftReport, &src->_u.modeShiftReport)) {
        return RTI_FALSE;
    }
            

        } break;
      case (aeondds::cmdrnav::SYSTEMFAILURE):
        {                                    
        
    if (!aeondds::cmdrnav::TReportSystemFailure_copy(
        &dst->_u.systemFailureReport, &src->_u.systemFailureReport)) {
        return RTI_FALSE;
    }
            

        } break;
      case (aeondds::cmdrnav::STATUSRESPONSE):
        {                                    
        
    if (!aeondds::cmdrnav::TReportStatusResponse_copy(
        &dst->_u.statusResponseReport, &src->_u.statusResponseReport)) {
        return RTI_FALSE;
    }
            

        } break;
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TReportUnion' sequence class.
 */
#define T TReportUnion
#define TSeq TReportUnionSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TReportUnion_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TReportUnion_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TReportUnion_copy

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
const char *TReportTYPENAME = "aeondds::cmdrnav::TReport";

DDS_TypeCode* TReport_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TReport_g_tc_members[1]=
    {
        {
            (char *)"report",/* Member name */
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

    static DDS_TypeCode TReport_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::cmdrnav::TReport", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TReport_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TReport*/

    if (is_initialized) {
        return &TReport_g_tc;
    }


    TReport_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::cmdrnav::TReportUnion_get_typecode();

    is_initialized = RTI_TRUE;

    return &TReport_g_tc;
}


RTIBool TReport_initialize(
    TReport* sample) {
  return ::aeondds::cmdrnav::TReport_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TReport_initialize_ex(
    TReport* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::cmdrnav::TReport_initialize_w_params(
        sample,&allocParams);
}

RTIBool TReport_initialize_w_params(
        TReport* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::cmdrnav::TReportUnion_initialize_w_params(&sample->report,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TReport_finalize(
    TReport* sample)
{
    ::aeondds::cmdrnav::TReport_finalize_ex(sample,RTI_TRUE);
}
        
void TReport_finalize_ex(
    TReport* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::cmdrnav::TReport_finalize_w_params(
        sample,&deallocParams);
}

void TReport_finalize_w_params(
        TReport* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::cmdrnav::TReportUnion_finalize_w_params(&sample->report, deallocParams);
            

}

void TReport_finalize_optional_members(
    TReport* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::cmdrnav::TReportUnion_finalize_optional_members(&sample->report, deallocParams->delete_pointers);
            

}

RTIBool TReport_copy(
    TReport* dst,
    const TReport* src)
{

    if (!aeondds::cmdrnav::TReportUnion_copy(
        &dst->report, &src->report)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TReport' sequence class.
 */
#define T TReport
#define TSeq TReportSeq
#define T_initialize_w_params ::aeondds::cmdrnav::TReport_initialize_w_params
#define T_finalize_w_params   ::aeondds::cmdrnav::TReport_finalize_w_params
#define T_copy       ::aeondds::cmdrnav::TReport_copy

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


} /* namespace cmdrnav */

} /* namespace aeondds */
