
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ArInterface.idl using "rtiddsgen".
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



#include "ArInterface.h"


namespace aeondds{

namespace arinterface{
/* ========================================================================= */
const char *TVec3fTYPENAME = "aeondds::arinterface::TVec3f";

DDS_TypeCode* TVec3f_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TVec3f_g_tc_members[3]=
    {
        {
            (char *)"x",/* Member name */
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
            (char *)"y",/* Member name */
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
            (char *)"z",/* Member name */
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

    static DDS_TypeCode TVec3f_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TVec3f", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TVec3f_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TVec3f*/

    if (is_initialized) {
        return &TVec3f_g_tc;
    }


    TVec3f_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TVec3f_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TVec3f_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &TVec3f_g_tc;
}


RTIBool TVec3f_initialize(
    TVec3f* sample) {
  return ::aeondds::arinterface::TVec3f_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TVec3f_initialize_ex(
    TVec3f* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TVec3f_initialize_w_params(
        sample,&allocParams);
}

RTIBool TVec3f_initialize_w_params(
        TVec3f* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->x)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->y)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->z)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TVec3f_finalize(
    TVec3f* sample)
{
    ::aeondds::arinterface::TVec3f_finalize_ex(sample,RTI_TRUE);
}
        
void TVec3f_finalize_ex(
    TVec3f* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TVec3f_finalize_w_params(
        sample,&deallocParams);
}

void TVec3f_finalize_w_params(
        TVec3f* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void TVec3f_finalize_optional_members(
    TVec3f* sample, RTIBool deletePointers)
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

RTIBool TVec3f_copy(
    TVec3f* dst,
    const TVec3f* src)
{

    if (!RTICdrType_copyFloat(
        &dst->x, &src->x)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->y, &src->y)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->z, &src->z)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TVec3f' sequence class.
 */
#define T TVec3f
#define TSeq TVec3fSeq
#define T_initialize_w_params ::aeondds::arinterface::TVec3f_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TVec3f_finalize_w_params
#define T_copy       ::aeondds::arinterface::TVec3f_copy

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
const char *TNavdataDemoTYPENAME = "aeondds::arinterface::TNavdataDemo";

DDS_TypeCode* TNavdataDemo_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TNavdataDemo_g_tc_members[9]=
    {
        {
            (char *)"controlState",/* Member name */
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
            (char *)"batteryPercentage",/* Member name */
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
            (char *)"theta",/* Member name */
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
            (char *)"phi",/* Member name */
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
            (char *)"psi",/* Member name */
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
            (char *)"altitude",/* Member name */
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
            (char *)"vx",/* Member name */
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
            (char *)"vy",/* Member name */
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
            (char *)"vz",/* Member name */
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

    static DDS_TypeCode TNavdataDemo_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TNavdataDemo", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        9, /* Number of members */
        TNavdataDemo_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavdataDemo*/

    if (is_initialized) {
        return &TNavdataDemo_g_tc;
    }


    TNavdataDemo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    TNavdataDemo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    TNavdataDemo_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TNavdataDemo_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TNavdataDemo_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TNavdataDemo_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TNavdataDemo_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TNavdataDemo_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TNavdataDemo_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &TNavdataDemo_g_tc;
}


RTIBool TNavdataDemo_initialize(
    TNavdataDemo* sample) {
  return ::aeondds::arinterface::TNavdataDemo_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavdataDemo_initialize_ex(
    TNavdataDemo* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TNavdataDemo_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavdataDemo_initialize_w_params(
        TNavdataDemo* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedLong(&sample->controlState)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->batteryPercentage)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->theta)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->phi)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->psi)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->altitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->vx)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->vy)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->vz)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TNavdataDemo_finalize(
    TNavdataDemo* sample)
{
    ::aeondds::arinterface::TNavdataDemo_finalize_ex(sample,RTI_TRUE);
}
        
void TNavdataDemo_finalize_ex(
    TNavdataDemo* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TNavdataDemo_finalize_w_params(
        sample,&deallocParams);
}

void TNavdataDemo_finalize_w_params(
        TNavdataDemo* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */











}

void TNavdataDemo_finalize_optional_members(
    TNavdataDemo* sample, RTIBool deletePointers)
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

RTIBool TNavdataDemo_copy(
    TNavdataDemo* dst,
    const TNavdataDemo* src)
{

    if (!RTICdrType_copyUnsignedLong(
        &dst->controlState, &src->controlState)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->batteryPercentage, &src->batteryPercentage)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->theta, &src->theta)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->phi, &src->phi)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->psi, &src->psi)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->altitude, &src->altitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->vx, &src->vx)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->vy, &src->vy)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->vz, &src->vz)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavdataDemo' sequence class.
 */
#define T TNavdataDemo
#define TSeq TNavdataDemoSeq
#define T_initialize_w_params ::aeondds::arinterface::TNavdataDemo_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TNavdataDemo_finalize_w_params
#define T_copy       ::aeondds::arinterface::TNavdataDemo_copy

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
const char *TNavdataTimeTYPENAME = "aeondds::arinterface::TNavdataTime";

DDS_TypeCode* TNavdataTime_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TNavdataTime_g_tc_members[1]=
    {
        {
            (char *)"timestamp",/* Member name */
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

    static DDS_TypeCode TNavdataTime_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TNavdataTime", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TNavdataTime_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavdataTime*/

    if (is_initialized) {
        return &TNavdataTime_g_tc;
    }


    TNavdataTime_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &TNavdataTime_g_tc;
}


RTIBool TNavdataTime_initialize(
    TNavdataTime* sample) {
  return ::aeondds::arinterface::TNavdataTime_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavdataTime_initialize_ex(
    TNavdataTime* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TNavdataTime_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavdataTime_initialize_w_params(
        TNavdataTime* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedLong(&sample->timestamp)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TNavdataTime_finalize(
    TNavdataTime* sample)
{
    ::aeondds::arinterface::TNavdataTime_finalize_ex(sample,RTI_TRUE);
}
        
void TNavdataTime_finalize_ex(
    TNavdataTime* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TNavdataTime_finalize_w_params(
        sample,&deallocParams);
}

void TNavdataTime_finalize_w_params(
        TNavdataTime* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



}

void TNavdataTime_finalize_optional_members(
    TNavdataTime* sample, RTIBool deletePointers)
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

RTIBool TNavdataTime_copy(
    TNavdataTime* dst,
    const TNavdataTime* src)
{

    if (!RTICdrType_copyUnsignedLong(
        &dst->timestamp, &src->timestamp)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavdataTime' sequence class.
 */
#define T TNavdataTime
#define TSeq TNavdataTimeSeq
#define T_initialize_w_params ::aeondds::arinterface::TNavdataTime_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TNavdataTime_finalize_w_params
#define T_copy       ::aeondds::arinterface::TNavdataTime_copy

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
const char *TNavdataRawMeasuresTYPENAME = "aeondds::arinterface::TNavdataRawMeasures";

DDS_TypeCode* TNavdataRawMeasures_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TNavdataRawMeasures_g_tc_rawAccelerometer_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(3,NULL);
    static DDS_TypeCode TNavdataRawMeasures_g_tc_rawGyros_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(3,NULL);
    static DDS_TypeCode TNavdataRawMeasures_g_tc_rawGyros_xy110_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(2,NULL);

    static DDS_TypeCode_Member TNavdataRawMeasures_g_tc_members[4]=
    {
        {
            (char *)"rawAccelerometer",/* Member name */
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
            (char *)"rawGyros",/* Member name */
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
            (char *)"rawGyros_xy110",/* Member name */
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
            (char *)"rawBatteryVoltage",/* Member name */
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

    static DDS_TypeCode TNavdataRawMeasures_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TNavdataRawMeasures", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TNavdataRawMeasures_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavdataRawMeasures*/

    if (is_initialized) {
        return &TNavdataRawMeasures_g_tc;
    }

    TNavdataRawMeasures_g_tc_rawAccelerometer_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TNavdataRawMeasures_g_tc_rawGyros_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    TNavdataRawMeasures_g_tc_rawGyros_xy110_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    TNavdataRawMeasures_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&TNavdataRawMeasures_g_tc_rawAccelerometer_sequence;
    TNavdataRawMeasures_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&TNavdataRawMeasures_g_tc_rawGyros_sequence;
    TNavdataRawMeasures_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&TNavdataRawMeasures_g_tc_rawGyros_xy110_sequence;
    TNavdataRawMeasures_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &TNavdataRawMeasures_g_tc;
}


RTIBool TNavdataRawMeasures_initialize(
    TNavdataRawMeasures* sample) {
  return ::aeondds::arinterface::TNavdataRawMeasures_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavdataRawMeasures_initialize_ex(
    TNavdataRawMeasures* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TNavdataRawMeasures_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavdataRawMeasures_initialize_w_params(
        TNavdataRawMeasures* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        DDS_UnsignedShortSeq_initialize(&sample->rawAccelerometer);
        if (!DDS_UnsignedShortSeq_set_maximum(&sample->rawAccelerometer,
                (3))) {
            return RTI_FALSE;
        }
    } else {
        DDS_UnsignedShortSeq_set_length(&sample->rawAccelerometer, 0); 
    }
            

    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(&sample->rawGyros);
        if (!DDS_ShortSeq_set_maximum(&sample->rawGyros,
                (3))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(&sample->rawGyros, 0); 
    }
            

    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(&sample->rawGyros_xy110);
        if (!DDS_ShortSeq_set_maximum(&sample->rawGyros_xy110,
                (2))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(&sample->rawGyros_xy110, 0); 
    }
            

    if (!RTICdrType_initUnsignedLong(&sample->rawBatteryVoltage)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TNavdataRawMeasures_finalize(
    TNavdataRawMeasures* sample)
{
    ::aeondds::arinterface::TNavdataRawMeasures_finalize_ex(sample,RTI_TRUE);
}
        
void TNavdataRawMeasures_finalize_ex(
    TNavdataRawMeasures* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TNavdataRawMeasures_finalize_w_params(
        sample,&deallocParams);
}

void TNavdataRawMeasures_finalize_w_params(
        TNavdataRawMeasures* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    DDS_UnsignedShortSeq_finalize(&sample->rawAccelerometer);
            

    DDS_ShortSeq_finalize(&sample->rawGyros);
            

    DDS_ShortSeq_finalize(&sample->rawGyros_xy110);
            


}

void TNavdataRawMeasures_finalize_optional_members(
    TNavdataRawMeasures* sample, RTIBool deletePointers)
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

RTIBool TNavdataRawMeasures_copy(
    TNavdataRawMeasures* dst,
    const TNavdataRawMeasures* src)
{

    if (!DDS_UnsignedShortSeq_copy(&dst->rawAccelerometer,
                                          &src->rawAccelerometer)) {
        return RTI_FALSE;
    }
            

    if (!DDS_ShortSeq_copy(&dst->rawGyros,
                                          &src->rawGyros)) {
        return RTI_FALSE;
    }
            

    if (!DDS_ShortSeq_copy(&dst->rawGyros_xy110,
                                          &src->rawGyros_xy110)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->rawBatteryVoltage, &src->rawBatteryVoltage)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavdataRawMeasures' sequence class.
 */
#define T TNavdataRawMeasures
#define TSeq TNavdataRawMeasuresSeq
#define T_initialize_w_params ::aeondds::arinterface::TNavdataRawMeasures_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TNavdataRawMeasures_finalize_w_params
#define T_copy       ::aeondds::arinterface::TNavdataRawMeasures_copy

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
const char *TNavdataPwmTYPENAME = "aeondds::arinterface::TNavdataPwm";

DDS_TypeCode* TNavdataPwm_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TNavdataPwm_g_tc_members[12]=
    {
        {
            (char *)"motor1",/* Member name */
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
            (char *)"motor2",/* Member name */
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
            (char *)"motor3",/* Member name */
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
            (char *)"motor4",/* Member name */
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
            (char *)"satMotor1",/* Member name */
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
            (char *)"satMotor2",/* Member name */
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
            (char *)"satMotor3",/* Member name */
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
            (char *)"satMotor4",/* Member name */
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
            (char *)"currentMotor1",/* Member name */
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
            (char *)"currentMotor2",/* Member name */
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
            (char *)"currentMotor3",/* Member name */
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
            (char *)"currentMotor4",/* Member name */
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

    static DDS_TypeCode TNavdataPwm_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TNavdataPwm", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        12, /* Number of members */
        TNavdataPwm_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavdataPwm*/

    if (is_initialized) {
        return &TNavdataPwm_g_tc;
    }


    TNavdataPwm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TNavdataPwm_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TNavdataPwm_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TNavdataPwm_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TNavdataPwm_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TNavdataPwm_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TNavdataPwm_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TNavdataPwm_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TNavdataPwm_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TNavdataPwm_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TNavdataPwm_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TNavdataPwm_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    is_initialized = RTI_TRUE;

    return &TNavdataPwm_g_tc;
}


RTIBool TNavdataPwm_initialize(
    TNavdataPwm* sample) {
  return ::aeondds::arinterface::TNavdataPwm_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavdataPwm_initialize_ex(
    TNavdataPwm* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TNavdataPwm_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavdataPwm_initialize_w_params(
        TNavdataPwm* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initOctet(&sample->motor1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->motor2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->motor3)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->motor4)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->satMotor1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->satMotor2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->satMotor3)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->satMotor4)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->currentMotor1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->currentMotor2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->currentMotor3)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->currentMotor4)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TNavdataPwm_finalize(
    TNavdataPwm* sample)
{
    ::aeondds::arinterface::TNavdataPwm_finalize_ex(sample,RTI_TRUE);
}
        
void TNavdataPwm_finalize_ex(
    TNavdataPwm* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TNavdataPwm_finalize_w_params(
        sample,&deallocParams);
}

void TNavdataPwm_finalize_w_params(
        TNavdataPwm* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */














}

void TNavdataPwm_finalize_optional_members(
    TNavdataPwm* sample, RTIBool deletePointers)
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

RTIBool TNavdataPwm_copy(
    TNavdataPwm* dst,
    const TNavdataPwm* src)
{

    if (!RTICdrType_copyOctet(
        &dst->motor1, &src->motor1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->motor2, &src->motor2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->motor3, &src->motor3)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->motor4, &src->motor4)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->satMotor1, &src->satMotor1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->satMotor2, &src->satMotor2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->satMotor3, &src->satMotor3)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->satMotor4, &src->satMotor4)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->currentMotor1, &src->currentMotor1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->currentMotor2, &src->currentMotor2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->currentMotor3, &src->currentMotor3)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->currentMotor4, &src->currentMotor4)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavdataPwm' sequence class.
 */
#define T TNavdataPwm
#define TSeq TNavdataPwmSeq
#define T_initialize_w_params ::aeondds::arinterface::TNavdataPwm_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TNavdataPwm_finalize_w_params
#define T_copy       ::aeondds::arinterface::TNavdataPwm_copy

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
const char *TNavdataAltitudeTYPENAME = "aeondds::arinterface::TNavdataAltitude";

DDS_TypeCode* TNavdataAltitude_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TNavdataAltitude_g_tc_members[4]=
    {
        {
            (char *)"altitudeVision",/* Member name */
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
            (char *)"altitudeVz",/* Member name */
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
            (char *)"altitudeRef",/* Member name */
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
            (char *)"altitudeRaw",/* Member name */
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

    static DDS_TypeCode TNavdataAltitude_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TNavdataAltitude", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TNavdataAltitude_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavdataAltitude*/

    if (is_initialized) {
        return &TNavdataAltitude_g_tc;
    }


    TNavdataAltitude_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TNavdataAltitude_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TNavdataAltitude_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TNavdataAltitude_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TNavdataAltitude_g_tc;
}


RTIBool TNavdataAltitude_initialize(
    TNavdataAltitude* sample) {
  return ::aeondds::arinterface::TNavdataAltitude_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavdataAltitude_initialize_ex(
    TNavdataAltitude* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TNavdataAltitude_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavdataAltitude_initialize_w_params(
        TNavdataAltitude* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->altitudeVision)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->altitudeVz)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->altitudeRef)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->altitudeRaw)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TNavdataAltitude_finalize(
    TNavdataAltitude* sample)
{
    ::aeondds::arinterface::TNavdataAltitude_finalize_ex(sample,RTI_TRUE);
}
        
void TNavdataAltitude_finalize_ex(
    TNavdataAltitude* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TNavdataAltitude_finalize_w_params(
        sample,&deallocParams);
}

void TNavdataAltitude_finalize_w_params(
        TNavdataAltitude* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void TNavdataAltitude_finalize_optional_members(
    TNavdataAltitude* sample, RTIBool deletePointers)
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

RTIBool TNavdataAltitude_copy(
    TNavdataAltitude* dst,
    const TNavdataAltitude* src)
{

    if (!RTICdrType_copyLong(
        &dst->altitudeVision, &src->altitudeVision)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->altitudeVz, &src->altitudeVz)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->altitudeRef, &src->altitudeRef)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->altitudeRaw, &src->altitudeRaw)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavdataAltitude' sequence class.
 */
#define T TNavdataAltitude
#define TSeq TNavdataAltitudeSeq
#define T_initialize_w_params ::aeondds::arinterface::TNavdataAltitude_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TNavdataAltitude_finalize_w_params
#define T_copy       ::aeondds::arinterface::TNavdataAltitude_copy

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
const char *TNavdataPressureRawTYPENAME = "aeondds::arinterface::TNavdataPressureRaw";

DDS_TypeCode* TNavdataPressureRaw_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TNavdataPressureRaw_g_tc_members[4]=
    {
        {
            (char *)"uP",/* Member name */
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
            (char *)"uT",/* Member name */
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
            (char *)"temperatureMeas",/* Member name */
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
            (char *)"pressureMeas",/* Member name */
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

    static DDS_TypeCode TNavdataPressureRaw_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TNavdataPressureRaw", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TNavdataPressureRaw_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavdataPressureRaw*/

    if (is_initialized) {
        return &TNavdataPressureRaw_g_tc;
    }


    TNavdataPressureRaw_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    TNavdataPressureRaw_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TNavdataPressureRaw_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    TNavdataPressureRaw_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &TNavdataPressureRaw_g_tc;
}


RTIBool TNavdataPressureRaw_initialize(
    TNavdataPressureRaw* sample) {
  return ::aeondds::arinterface::TNavdataPressureRaw_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavdataPressureRaw_initialize_ex(
    TNavdataPressureRaw* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TNavdataPressureRaw_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavdataPressureRaw_initialize_w_params(
        TNavdataPressureRaw* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedLong(&sample->uP)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->uT)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->temperatureMeas)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->pressureMeas)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TNavdataPressureRaw_finalize(
    TNavdataPressureRaw* sample)
{
    ::aeondds::arinterface::TNavdataPressureRaw_finalize_ex(sample,RTI_TRUE);
}
        
void TNavdataPressureRaw_finalize_ex(
    TNavdataPressureRaw* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TNavdataPressureRaw_finalize_w_params(
        sample,&deallocParams);
}

void TNavdataPressureRaw_finalize_w_params(
        TNavdataPressureRaw* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void TNavdataPressureRaw_finalize_optional_members(
    TNavdataPressureRaw* sample, RTIBool deletePointers)
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

RTIBool TNavdataPressureRaw_copy(
    TNavdataPressureRaw* dst,
    const TNavdataPressureRaw* src)
{

    if (!RTICdrType_copyUnsignedLong(
        &dst->uP, &src->uP)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->uT, &src->uT)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->temperatureMeas, &src->temperatureMeas)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->pressureMeas, &src->pressureMeas)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavdataPressureRaw' sequence class.
 */
#define T TNavdataPressureRaw
#define TSeq TNavdataPressureRawSeq
#define T_initialize_w_params ::aeondds::arinterface::TNavdataPressureRaw_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TNavdataPressureRaw_finalize_w_params
#define T_copy       ::aeondds::arinterface::TNavdataPressureRaw_copy

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
const char *TNavdataMagnetoTYPENAME = "aeondds::arinterface::TNavdataMagneto";

DDS_TypeCode* TNavdataMagneto_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TNavdataMagneto_g_tc_members[6]=
    {
        {
            (char *)"mx",/* Member name */
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
            (char *)"my",/* Member name */
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
            (char *)"mz",/* Member name */
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
            (char *)"raw",/* Member name */
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
            (char *)"rectified",/* Member name */
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
            (char *)"offset",/* Member name */
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

    static DDS_TypeCode TNavdataMagneto_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TNavdataMagneto", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        TNavdataMagneto_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavdataMagneto*/

    if (is_initialized) {
        return &TNavdataMagneto_g_tc;
    }


    TNavdataMagneto_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    TNavdataMagneto_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    TNavdataMagneto_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    TNavdataMagneto_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)aeondds::arinterface::TVec3f_get_typecode();
    TNavdataMagneto_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)aeondds::arinterface::TVec3f_get_typecode();
    TNavdataMagneto_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)aeondds::arinterface::TVec3f_get_typecode();

    is_initialized = RTI_TRUE;

    return &TNavdataMagneto_g_tc;
}


RTIBool TNavdataMagneto_initialize(
    TNavdataMagneto* sample) {
  return ::aeondds::arinterface::TNavdataMagneto_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavdataMagneto_initialize_ex(
    TNavdataMagneto* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TNavdataMagneto_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavdataMagneto_initialize_w_params(
        TNavdataMagneto* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initShort(&sample->mx)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->my)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->mz)) {
        return RTI_FALSE;
    }                
            

    if (!aeondds::arinterface::TVec3f_initialize_w_params(&sample->raw,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::arinterface::TVec3f_initialize_w_params(&sample->rectified,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::arinterface::TVec3f_initialize_w_params(&sample->offset,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TNavdataMagneto_finalize(
    TNavdataMagneto* sample)
{
    ::aeondds::arinterface::TNavdataMagneto_finalize_ex(sample,RTI_TRUE);
}
        
void TNavdataMagneto_finalize_ex(
    TNavdataMagneto* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TNavdataMagneto_finalize_w_params(
        sample,&deallocParams);
}

void TNavdataMagneto_finalize_w_params(
        TNavdataMagneto* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





    aeondds::arinterface::TVec3f_finalize_w_params(&sample->raw, deallocParams);
            

    aeondds::arinterface::TVec3f_finalize_w_params(&sample->rectified, deallocParams);
            

    aeondds::arinterface::TVec3f_finalize_w_params(&sample->offset, deallocParams);
            

}

void TNavdataMagneto_finalize_optional_members(
    TNavdataMagneto* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             




    aeondds::arinterface::TVec3f_finalize_optional_members(&sample->raw, deallocParams->delete_pointers);
            

    aeondds::arinterface::TVec3f_finalize_optional_members(&sample->rectified, deallocParams->delete_pointers);
            

    aeondds::arinterface::TVec3f_finalize_optional_members(&sample->offset, deallocParams->delete_pointers);
            

}

RTIBool TNavdataMagneto_copy(
    TNavdataMagneto* dst,
    const TNavdataMagneto* src)
{

    if (!RTICdrType_copyShort(
        &dst->mx, &src->mx)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->my, &src->my)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->mz, &src->mz)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::arinterface::TVec3f_copy(
        &dst->raw, &src->raw)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::arinterface::TVec3f_copy(
        &dst->rectified, &src->rectified)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::arinterface::TVec3f_copy(
        &dst->offset, &src->offset)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavdataMagneto' sequence class.
 */
#define T TNavdataMagneto
#define TSeq TNavdataMagnetoSeq
#define T_initialize_w_params ::aeondds::arinterface::TNavdataMagneto_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TNavdataMagneto_finalize_w_params
#define T_copy       ::aeondds::arinterface::TNavdataMagneto_copy

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
const char *TNavdataWifiTYPENAME = "aeondds::arinterface::TNavdataWifi";

DDS_TypeCode* TNavdataWifi_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TNavdataWifi_g_tc_members[1]=
    {
        {
            (char *)"linkQuality",/* Member name */
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

    static DDS_TypeCode TNavdataWifi_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::arinterface::TNavdataWifi", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TNavdataWifi_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TNavdataWifi*/

    if (is_initialized) {
        return &TNavdataWifi_g_tc;
    }


    TNavdataWifi_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &TNavdataWifi_g_tc;
}


RTIBool TNavdataWifi_initialize(
    TNavdataWifi* sample) {
  return ::aeondds::arinterface::TNavdataWifi_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TNavdataWifi_initialize_ex(
    TNavdataWifi* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::arinterface::TNavdataWifi_initialize_w_params(
        sample,&allocParams);
}

RTIBool TNavdataWifi_initialize_w_params(
        TNavdataWifi* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedLong(&sample->linkQuality)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TNavdataWifi_finalize(
    TNavdataWifi* sample)
{
    ::aeondds::arinterface::TNavdataWifi_finalize_ex(sample,RTI_TRUE);
}
        
void TNavdataWifi_finalize_ex(
    TNavdataWifi* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::arinterface::TNavdataWifi_finalize_w_params(
        sample,&deallocParams);
}

void TNavdataWifi_finalize_w_params(
        TNavdataWifi* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



}

void TNavdataWifi_finalize_optional_members(
    TNavdataWifi* sample, RTIBool deletePointers)
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

RTIBool TNavdataWifi_copy(
    TNavdataWifi* dst,
    const TNavdataWifi* src)
{

    if (!RTICdrType_copyUnsignedLong(
        &dst->linkQuality, &src->linkQuality)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TNavdataWifi' sequence class.
 */
#define T TNavdataWifi
#define TSeq TNavdataWifiSeq
#define T_initialize_w_params ::aeondds::arinterface::TNavdataWifi_initialize_w_params
#define T_finalize_w_params   ::aeondds::arinterface::TNavdataWifi_finalize_w_params
#define T_copy       ::aeondds::arinterface::TNavdataWifi_copy

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


} /* namespace arinterface */

} /* namespace aeondds */
