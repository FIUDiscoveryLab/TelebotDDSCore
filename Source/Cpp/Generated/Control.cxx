
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Control.idl using "rtiddsgen".
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



#include "Control.h"


namespace aeondds{

namespace control{
/* ========================================================================= */
const char *TARStateTYPENAME = "aeondds::control::TARState";

DDS_TypeCode* TARState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TARState_g_tc_members[4]=
    {
        {
            (char *)"isFlying",/* Member name */
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
            (char *)"isBatteryLow",/* Member name */
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
            (char *)"isInEmergency",/* Member name */
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
            (char *)"isControlWatchdogTriggered",/* Member name */
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

    static DDS_TypeCode TARState_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TARState", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TARState_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TARState*/

    if (is_initialized) {
        return &TARState_g_tc;
    }


    TARState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    TARState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    TARState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    TARState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &TARState_g_tc;
}


RTIBool TARState_initialize(
    TARState* sample) {
  return ::aeondds::control::TARState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TARState_initialize_ex(
    TARState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TARState_initialize_w_params(
        sample,&allocParams);
}

RTIBool TARState_initialize_w_params(
        TARState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initBoolean(&sample->isFlying)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->isBatteryLow)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->isInEmergency)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->isControlWatchdogTriggered)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TARState_finalize(
    TARState* sample)
{
    ::aeondds::control::TARState_finalize_ex(sample,RTI_TRUE);
}
        
void TARState_finalize_ex(
    TARState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TARState_finalize_w_params(
        sample,&deallocParams);
}

void TARState_finalize_w_params(
        TARState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void TARState_finalize_optional_members(
    TARState* sample, RTIBool deletePointers)
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

RTIBool TARState_copy(
    TARState* dst,
    const TARState* src)
{

    if (!RTICdrType_copyBoolean(
        &dst->isFlying, &src->isFlying)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->isBatteryLow, &src->isBatteryLow)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->isInEmergency, &src->isInEmergency)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->isControlWatchdogTriggered, &src->isControlWatchdogTriggered)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TARState' sequence class.
 */
#define T TARState
#define TSeq TARStateSeq
#define T_initialize_w_params ::aeondds::control::TARState_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TARState_finalize_w_params
#define T_copy       ::aeondds::control::TARState_copy

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
const char *TVehicleStateTYPENAME = "aeondds::control::TVehicleState";

DDS_TypeCode* TVehicleState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TVehicleState_g_tc_members[9]=
    {
        {
            (char *)"batteryPercentage",/* Member name */
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
            (char *)"theta",/* Member name */
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
            (char *)"phi",/* Member name */
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
            (char *)"psi",/* Member name */
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
            (char *)"vx",/* Member name */
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
            (char *)"vy",/* Member name */
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
            (char *)"vz",/* Member name */
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
            (char *)"arState",/* Member name */
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

    static DDS_TypeCode TVehicleState_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TVehicleState", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        9, /* Number of members */
        TVehicleState_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TVehicleState*/

    if (is_initialized) {
        return &TVehicleState_g_tc;
    }


    TVehicleState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TVehicleState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TVehicleState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TVehicleState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TVehicleState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TVehicleState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TVehicleState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TVehicleState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TVehicleState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::TARState_get_typecode();

    is_initialized = RTI_TRUE;

    return &TVehicleState_g_tc;
}


RTIBool TVehicleState_initialize(
    TVehicleState* sample) {
  return ::aeondds::control::TVehicleState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TVehicleState_initialize_ex(
    TVehicleState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TVehicleState_initialize_w_params(
        sample,&allocParams);
}

RTIBool TVehicleState_initialize_w_params(
        TVehicleState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->batteryPercentage)) {
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
            

    if (!aeondds::control::TARState_initialize_w_params(&sample->arState,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TVehicleState_finalize(
    TVehicleState* sample)
{
    ::aeondds::control::TVehicleState_finalize_ex(sample,RTI_TRUE);
}
        
void TVehicleState_finalize_ex(
    TVehicleState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TVehicleState_finalize_w_params(
        sample,&deallocParams);
}

void TVehicleState_finalize_w_params(
        TVehicleState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */










    aeondds::control::TARState_finalize_w_params(&sample->arState, deallocParams);
            

}

void TVehicleState_finalize_optional_members(
    TVehicleState* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             









    aeondds::control::TARState_finalize_optional_members(&sample->arState, deallocParams->delete_pointers);
            

}

RTIBool TVehicleState_copy(
    TVehicleState* dst,
    const TVehicleState* src)
{

    if (!RTICdrType_copyLong(
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
            

    if (!aeondds::control::TARState_copy(
        &dst->arState, &src->arState)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TVehicleState' sequence class.
 */
#define T TVehicleState
#define TSeq TVehicleStateSeq
#define T_initialize_w_params ::aeondds::control::TVehicleState_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TVehicleState_finalize_w_params
#define T_copy       ::aeondds::control::TVehicleState_copy

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
const char *EWaypointStatusTYPENAME = "aeondds::control::EWaypointStatus";

DDS_TypeCode* EWaypointStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EWaypointStatus_g_tc_members[5] =
    {
        {
            (char *)"WAYPOINT_REQUESTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINT_REQUESTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINT_CANCELLED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINT_CANCELLED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINT_DENIED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINT_DENIED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINT_TRACKING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINT_TRACKING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINT_ARRIVED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINT_ARRIVED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EWaypointStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::control::EWaypointStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of enumerators */
        EWaypointStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EWaypointStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EWaypointStatus_g_tc;
}
 

RTIBool EWaypointStatus_initialize(
    EWaypointStatus* sample)
{
    *sample = WAYPOINT_REQUESTED;
    return RTI_TRUE;
}
        
RTIBool EWaypointStatus_initialize_ex(
    EWaypointStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = WAYPOINT_REQUESTED;
    return RTI_TRUE;
}

RTIBool EWaypointStatus_initialize_w_params(
        EWaypointStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = WAYPOINT_REQUESTED;
    return RTI_TRUE;
}

void EWaypointStatus_finalize(
    EWaypointStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EWaypointStatus_finalize_ex(
    EWaypointStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EWaypointStatus_finalize_w_params(
        EWaypointStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EWaypointStatus_copy(
    EWaypointStatus* dst,
    const EWaypointStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EWaypointStatus_getValues(EWaypointStatusSeq * values) 
    
{
    int i = 0;
    EWaypointStatus * buffer;


    if (!values->maximum(5)) {
        return RTI_FALSE;
    }

    if (!values->length(5)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = WAYPOINT_REQUESTED;
    i++;
    
    buffer[i] = WAYPOINT_CANCELLED;
    i++;
    
    buffer[i] = WAYPOINT_DENIED;
    i++;
    
    buffer[i] = WAYPOINT_TRACKING;
    i++;
    
    buffer[i] = WAYPOINT_ARRIVED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EWaypointStatus' sequence class.
 */
#define T EWaypointStatus
#define TSeq EWaypointStatusSeq
#define T_initialize_w_params EWaypointStatus_initialize_w_params
#define T_finalize_w_params   EWaypointStatus_finalize_w_params
#define T_copy       EWaypointStatus_copy

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
const char *TWaypointTYPENAME = "aeondds::control::TWaypoint";

DDS_TypeCode* TWaypoint_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TWaypoint_g_tc_members[5]=
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
        },
        {
            (char *)"yaw",/* Member name */
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
            (char *)"status",/* Member name */
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
        (char *)"aeondds::control::TWaypoint", /* Name */
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


    TWaypoint_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TWaypoint_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TWaypoint_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TWaypoint_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TWaypoint_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::EWaypointStatus_get_typecode();

    is_initialized = RTI_TRUE;

    return &TWaypoint_g_tc;
}


RTIBool TWaypoint_initialize(
    TWaypoint* sample) {
  return ::aeondds::control::TWaypoint_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TWaypoint_initialize_ex(
    TWaypoint* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TWaypoint_initialize_w_params(
        sample,&allocParams);
}

RTIBool TWaypoint_initialize_w_params(
        TWaypoint* sample,
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
            

    if (!RTICdrType_initFloat(&sample->yaw)) {
        return RTI_FALSE;
    }                
            

    if (!aeondds::control::EWaypointStatus_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TWaypoint_finalize(
    TWaypoint* sample)
{
    ::aeondds::control::TWaypoint_finalize_ex(sample,RTI_TRUE);
}
        
void TWaypoint_finalize_ex(
    TWaypoint* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TWaypoint_finalize_w_params(
        sample,&deallocParams);
}

void TWaypoint_finalize_w_params(
        TWaypoint* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






    aeondds::control::EWaypointStatus_finalize_w_params(&sample->status, deallocParams);
            

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
             





    aeondds::control::EWaypointStatus_finalize_w_params(&sample->status, deallocParams);
            

}

RTIBool TWaypoint_copy(
    TWaypoint* dst,
    const TWaypoint* src)
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
            

    if (!RTICdrType_copyFloat(
        &dst->yaw, &src->yaw)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::EWaypointStatus_copy(
        &dst->status, &src->status)) {
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
#define T_initialize_w_params ::aeondds::control::TWaypoint_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TWaypoint_finalize_w_params
#define T_copy       ::aeondds::control::TWaypoint_copy

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
const char *EPathPlanningStatusTYPENAME = "aeondds::control::EPathPlanningStatus";

DDS_TypeCode* EPathPlanningStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EPathPlanningStatus_g_tc_members[6] =
    {
        {
            (char *)"PATHPLANNING_REQUESTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PATHPLANNING_REQUESTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PATHPLANNING_CANCELLED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PATHPLANNING_CANCELLED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PATHPLANNING_DENIED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PATHPLANNING_DENIED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PATHPLANNING_PROCESSING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PATHPLANNING_PROCESSING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PATHPLANNING_COMPLETE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PATHPLANNING_COMPLETE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PATHPLANNING_FAILED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PATHPLANNING_FAILED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EPathPlanningStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::control::EPathPlanningStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of enumerators */
        EPathPlanningStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EPathPlanningStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EPathPlanningStatus_g_tc;
}
 

RTIBool EPathPlanningStatus_initialize(
    EPathPlanningStatus* sample)
{
    *sample = PATHPLANNING_REQUESTED;
    return RTI_TRUE;
}
        
RTIBool EPathPlanningStatus_initialize_ex(
    EPathPlanningStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = PATHPLANNING_REQUESTED;
    return RTI_TRUE;
}

RTIBool EPathPlanningStatus_initialize_w_params(
        EPathPlanningStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = PATHPLANNING_REQUESTED;
    return RTI_TRUE;
}

void EPathPlanningStatus_finalize(
    EPathPlanningStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EPathPlanningStatus_finalize_ex(
    EPathPlanningStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EPathPlanningStatus_finalize_w_params(
        EPathPlanningStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EPathPlanningStatus_copy(
    EPathPlanningStatus* dst,
    const EPathPlanningStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EPathPlanningStatus_getValues(EPathPlanningStatusSeq * values) 
    
{
    int i = 0;
    EPathPlanningStatus * buffer;


    if (!values->maximum(6)) {
        return RTI_FALSE;
    }

    if (!values->length(6)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = PATHPLANNING_REQUESTED;
    i++;
    
    buffer[i] = PATHPLANNING_CANCELLED;
    i++;
    
    buffer[i] = PATHPLANNING_DENIED;
    i++;
    
    buffer[i] = PATHPLANNING_PROCESSING;
    i++;
    
    buffer[i] = PATHPLANNING_COMPLETE;
    i++;
    
    buffer[i] = PATHPLANNING_FAILED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EPathPlanningStatus' sequence class.
 */
#define T EPathPlanningStatus
#define TSeq EPathPlanningStatusSeq
#define T_initialize_w_params EPathPlanningStatus_initialize_w_params
#define T_finalize_w_params   EPathPlanningStatus_finalize_w_params
#define T_copy       EPathPlanningStatus_copy

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
const char *TPathPlanningRequestTYPENAME = "aeondds::control::TPathPlanningRequest";

DDS_TypeCode* TPathPlanningRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TPathPlanningRequest_g_tc_members[3]=
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
            (char *)"goalPoint",/* Member name */
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
            (char *)"errorId",/* Member name */
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

    static DDS_TypeCode TPathPlanningRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TPathPlanningRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TPathPlanningRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TPathPlanningRequest*/

    if (is_initialized) {
        return &TPathPlanningRequest_g_tc;
    }


    TPathPlanningRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::EPathPlanningStatus_get_typecode();
    TPathPlanningRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::TWaypoint_get_typecode();
    TPathPlanningRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TPathPlanningRequest_g_tc;
}


RTIBool TPathPlanningRequest_initialize(
    TPathPlanningRequest* sample) {
  return ::aeondds::control::TPathPlanningRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TPathPlanningRequest_initialize_ex(
    TPathPlanningRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TPathPlanningRequest_initialize_w_params(
        sample,&allocParams);
}

RTIBool TPathPlanningRequest_initialize_w_params(
        TPathPlanningRequest* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::control::EPathPlanningStatus_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::TWaypoint_initialize_w_params(&sample->goalPoint,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->errorId)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TPathPlanningRequest_finalize(
    TPathPlanningRequest* sample)
{
    ::aeondds::control::TPathPlanningRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TPathPlanningRequest_finalize_ex(
    TPathPlanningRequest* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TPathPlanningRequest_finalize_w_params(
        sample,&deallocParams);
}

void TPathPlanningRequest_finalize_w_params(
        TPathPlanningRequest* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::control::EPathPlanningStatus_finalize_w_params(&sample->status, deallocParams);
            

    aeondds::control::TWaypoint_finalize_w_params(&sample->goalPoint, deallocParams);
            


}

void TPathPlanningRequest_finalize_optional_members(
    TPathPlanningRequest* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    aeondds::control::EPathPlanningStatus_finalize_w_params(&sample->status, deallocParams);
            

    aeondds::control::TWaypoint_finalize_optional_members(&sample->goalPoint, deallocParams->delete_pointers);
            


}

RTIBool TPathPlanningRequest_copy(
    TPathPlanningRequest* dst,
    const TPathPlanningRequest* src)
{

    if (!aeondds::control::EPathPlanningStatus_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::TWaypoint_copy(
        &dst->goalPoint, &src->goalPoint)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->errorId, &src->errorId)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TPathPlanningRequest' sequence class.
 */
#define T TPathPlanningRequest
#define TSeq TPathPlanningRequestSeq
#define T_initialize_w_params ::aeondds::control::TPathPlanningRequest_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TPathPlanningRequest_finalize_w_params
#define T_copy       ::aeondds::control::TPathPlanningRequest_copy

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
const char *EWaypointCourseStatusTYPENAME = "aeondds::control::EWaypointCourseStatus";

DDS_TypeCode* EWaypointCourseStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EWaypointCourseStatus_g_tc_members[5] =
    {
        {
            (char *)"WAYPOINTCOURSE_REQUESTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINTCOURSE_REQUESTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINTCOURSE_CANCELLED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINTCOURSE_CANCELLED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINTCOURSE_DENIED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINTCOURSE_DENIED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINTCOURSE_NAVIGATING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINTCOURSE_NAVIGATING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"WAYPOINTCOURSE_COMPLETE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            WAYPOINTCOURSE_COMPLETE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EWaypointCourseStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::control::EWaypointCourseStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of enumerators */
        EWaypointCourseStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EWaypointCourseStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EWaypointCourseStatus_g_tc;
}
 

RTIBool EWaypointCourseStatus_initialize(
    EWaypointCourseStatus* sample)
{
    *sample = WAYPOINTCOURSE_REQUESTED;
    return RTI_TRUE;
}
        
RTIBool EWaypointCourseStatus_initialize_ex(
    EWaypointCourseStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = WAYPOINTCOURSE_REQUESTED;
    return RTI_TRUE;
}

RTIBool EWaypointCourseStatus_initialize_w_params(
        EWaypointCourseStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = WAYPOINTCOURSE_REQUESTED;
    return RTI_TRUE;
}

void EWaypointCourseStatus_finalize(
    EWaypointCourseStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EWaypointCourseStatus_finalize_ex(
    EWaypointCourseStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EWaypointCourseStatus_finalize_w_params(
        EWaypointCourseStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EWaypointCourseStatus_copy(
    EWaypointCourseStatus* dst,
    const EWaypointCourseStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EWaypointCourseStatus_getValues(EWaypointCourseStatusSeq * values) 
    
{
    int i = 0;
    EWaypointCourseStatus * buffer;


    if (!values->maximum(5)) {
        return RTI_FALSE;
    }

    if (!values->length(5)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = WAYPOINTCOURSE_REQUESTED;
    i++;
    
    buffer[i] = WAYPOINTCOURSE_CANCELLED;
    i++;
    
    buffer[i] = WAYPOINTCOURSE_DENIED;
    i++;
    
    buffer[i] = WAYPOINTCOURSE_NAVIGATING;
    i++;
    
    buffer[i] = WAYPOINTCOURSE_COMPLETE;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EWaypointCourseStatus' sequence class.
 */
#define T EWaypointCourseStatus
#define TSeq EWaypointCourseStatusSeq
#define T_initialize_w_params EWaypointCourseStatus_initialize_w_params
#define T_finalize_w_params   EWaypointCourseStatus_finalize_w_params
#define T_copy       EWaypointCourseStatus_copy

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
const char *TWaypointCourseTYPENAME = "aeondds::control::TWaypointCourse";

DDS_TypeCode* TWaypointCourse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TWaypointCourse_g_tc_waypoints_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((aeondds::control::MAX_WAYPOINTS),NULL);

    static DDS_TypeCode_Member TWaypointCourse_g_tc_members[3]=
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
        },
        {
            (char *)"currentWaypoint",/* Member name */
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
        (char *)"aeondds::control::TWaypointCourse", /* Name */
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

    TWaypointCourse_g_tc_waypoints_sequence._data._typeCode = (RTICdrTypeCode *)aeondds::control::TWaypoint_get_typecode();

    TWaypointCourse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::EWaypointCourseStatus_get_typecode();
    TWaypointCourse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&TWaypointCourse_g_tc_waypoints_sequence;
    TWaypointCourse_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TWaypointCourse_g_tc;
}


RTIBool TWaypointCourse_initialize(
    TWaypointCourse* sample) {
  return ::aeondds::control::TWaypointCourse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TWaypointCourse_initialize_ex(
    TWaypointCourse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TWaypointCourse_initialize_w_params(
        sample,&allocParams);
}

RTIBool TWaypointCourse_initialize_w_params(
        TWaypointCourse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::control::EWaypointCourseStatus_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            

    if (allocParams->allocate_memory) {
        aeondds::control::TWaypointSeq_initialize(&sample->waypoints);
        aeondds::control::TWaypointSeq_set_element_allocation_params(&sample->waypoints,allocParams);
        if (!aeondds::control::TWaypointSeq_set_maximum(&sample->waypoints,
                                           ((aeondds::control::MAX_WAYPOINTS)))) {
            return RTI_FALSE;
        }
    } else {
        aeondds::control::TWaypointSeq_set_length(&sample->waypoints,0);
    }
            

    if (!RTICdrType_initLong(&sample->currentWaypoint)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TWaypointCourse_finalize(
    TWaypointCourse* sample)
{
    ::aeondds::control::TWaypointCourse_finalize_ex(sample,RTI_TRUE);
}
        
void TWaypointCourse_finalize_ex(
    TWaypointCourse* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TWaypointCourse_finalize_w_params(
        sample,&deallocParams);
}

void TWaypointCourse_finalize_w_params(
        TWaypointCourse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::control::EWaypointCourseStatus_finalize_w_params(&sample->status, deallocParams);
            

    aeondds::control::TWaypointSeq_set_element_deallocation_params(&sample->waypoints,deallocParams);
    aeondds::control::TWaypointSeq_finalize(&sample->waypoints);
            


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
             

    aeondds::control::EWaypointCourseStatus_finalize_w_params(&sample->status, deallocParams);
            

    {
        DDS_UnsignedLong i, length;
        length = aeondds::control::TWaypointSeq_get_length(
            &sample->waypoints);

        for (i = 0; i < length; i++) {
            aeondds::control::TWaypoint_finalize_optional_members(
                aeondds::control::TWaypointSeq_get_reference(
                    &sample->waypoints, i), deallocParams->delete_pointers);
        }
    }         
            


}

RTIBool TWaypointCourse_copy(
    TWaypointCourse* dst,
    const TWaypointCourse* src)
{

    if (!aeondds::control::EWaypointCourseStatus_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::TWaypointSeq_copy(&dst->waypoints,
                                          &src->waypoints)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->currentWaypoint, &src->currentWaypoint)) {
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
#define T_initialize_w_params ::aeondds::control::TWaypointCourse_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TWaypointCourse_finalize_w_params
#define T_copy       ::aeondds::control::TWaypointCourse_copy

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
const char *EVehicleCommandStatusTYPENAME = "aeondds::control::EVehicleCommandStatus";

DDS_TypeCode* EVehicleCommandStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EVehicleCommandStatus_g_tc_members[6] =
    {
        {
            (char *)"VEHICLECOMMAND_REQUESTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMAND_REQUESTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"VEHICLECOMMAND_CANCELLED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMAND_CANCELLED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"VEHICLECOMMAND_DENIED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMAND_DENIED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"VEHICLECOMMAND_PROCESSING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMAND_PROCESSING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"VEHICLECOMMAND_COMPLETE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMAND_COMPLETE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"VEHICLECOMMAND_FAILED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMAND_FAILED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EVehicleCommandStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::control::EVehicleCommandStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of enumerators */
        EVehicleCommandStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EVehicleCommandStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EVehicleCommandStatus_g_tc;
}
 

RTIBool EVehicleCommandStatus_initialize(
    EVehicleCommandStatus* sample)
{
    *sample = VEHICLECOMMAND_REQUESTED;
    return RTI_TRUE;
}
        
RTIBool EVehicleCommandStatus_initialize_ex(
    EVehicleCommandStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = VEHICLECOMMAND_REQUESTED;
    return RTI_TRUE;
}

RTIBool EVehicleCommandStatus_initialize_w_params(
        EVehicleCommandStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = VEHICLECOMMAND_REQUESTED;
    return RTI_TRUE;
}

void EVehicleCommandStatus_finalize(
    EVehicleCommandStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EVehicleCommandStatus_finalize_ex(
    EVehicleCommandStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EVehicleCommandStatus_finalize_w_params(
        EVehicleCommandStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EVehicleCommandStatus_copy(
    EVehicleCommandStatus* dst,
    const EVehicleCommandStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EVehicleCommandStatus_getValues(EVehicleCommandStatusSeq * values) 
    
{
    int i = 0;
    EVehicleCommandStatus * buffer;


    if (!values->maximum(6)) {
        return RTI_FALSE;
    }

    if (!values->length(6)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = VEHICLECOMMAND_REQUESTED;
    i++;
    
    buffer[i] = VEHICLECOMMAND_CANCELLED;
    i++;
    
    buffer[i] = VEHICLECOMMAND_DENIED;
    i++;
    
    buffer[i] = VEHICLECOMMAND_PROCESSING;
    i++;
    
    buffer[i] = VEHICLECOMMAND_COMPLETE;
    i++;
    
    buffer[i] = VEHICLECOMMAND_FAILED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EVehicleCommandStatus' sequence class.
 */
#define T EVehicleCommandStatus
#define TSeq EVehicleCommandStatusSeq
#define T_initialize_w_params EVehicleCommandStatus_initialize_w_params
#define T_finalize_w_params   EVehicleCommandStatus_finalize_w_params
#define T_copy       EVehicleCommandStatus_copy

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
const char *EVehicleCommandTypeTYPENAME = "aeondds::control::EVehicleCommandType";

DDS_TypeCode* EVehicleCommandType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EVehicleCommandType_g_tc_members[4] =
    {
        {
            (char *)"VEHICLECOMMANDTYPE_TAKEOFF",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMANDTYPE_TAKEOFF, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"VEHICLECOMMANDTYPE_LAND",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMANDTYPE_LAND, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"VEHICLECOMMANDTYPE_EMERGENCY",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMANDTYPE_EMERGENCY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"VEHICLECOMMANDTYPE_ANIMATION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            VEHICLECOMMANDTYPE_ANIMATION, /* Enumerator ordinal */
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
        (char *)"aeondds::control::EVehicleCommandType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of enumerators */
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
    *sample = VEHICLECOMMANDTYPE_TAKEOFF;
    return RTI_TRUE;
}
        
RTIBool EVehicleCommandType_initialize_ex(
    EVehicleCommandType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = VEHICLECOMMANDTYPE_TAKEOFF;
    return RTI_TRUE;
}

RTIBool EVehicleCommandType_initialize_w_params(
        EVehicleCommandType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = VEHICLECOMMANDTYPE_TAKEOFF;
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


    if (!values->maximum(4)) {
        return RTI_FALSE;
    }

    if (!values->length(4)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = VEHICLECOMMANDTYPE_TAKEOFF;
    i++;
    
    buffer[i] = VEHICLECOMMANDTYPE_LAND;
    i++;
    
    buffer[i] = VEHICLECOMMANDTYPE_EMERGENCY;
    i++;
    
    buffer[i] = VEHICLECOMMANDTYPE_ANIMATION;
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
const char *TVehicleCommandTYPENAME = "aeondds::control::TVehicleCommand";

DDS_TypeCode* TVehicleCommand_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TVehicleCommand_g_tc_members[4]=
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
            (char *)"type",/* Member name */
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
            (char *)"parameter",/* Member name */
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
            (char *)"errorId",/* Member name */
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

    static DDS_TypeCode TVehicleCommand_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TVehicleCommand", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TVehicleCommand_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TVehicleCommand*/

    if (is_initialized) {
        return &TVehicleCommand_g_tc;
    }


    TVehicleCommand_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::EVehicleCommandStatus_get_typecode();
    TVehicleCommand_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::EVehicleCommandType_get_typecode();
    TVehicleCommand_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TVehicleCommand_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TVehicleCommand_g_tc;
}


RTIBool TVehicleCommand_initialize(
    TVehicleCommand* sample) {
  return ::aeondds::control::TVehicleCommand_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TVehicleCommand_initialize_ex(
    TVehicleCommand* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TVehicleCommand_initialize_w_params(
        sample,&allocParams);
}

RTIBool TVehicleCommand_initialize_w_params(
        TVehicleCommand* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!aeondds::control::EVehicleCommandStatus_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::EVehicleCommandType_initialize_w_params(&sample->type,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->parameter)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->errorId)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TVehicleCommand_finalize(
    TVehicleCommand* sample)
{
    ::aeondds::control::TVehicleCommand_finalize_ex(sample,RTI_TRUE);
}
        
void TVehicleCommand_finalize_ex(
    TVehicleCommand* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TVehicleCommand_finalize_w_params(
        sample,&deallocParams);
}

void TVehicleCommand_finalize_w_params(
        TVehicleCommand* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    aeondds::control::EVehicleCommandStatus_finalize_w_params(&sample->status, deallocParams);
            

    aeondds::control::EVehicleCommandType_finalize_w_params(&sample->type, deallocParams);
            



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
             

    aeondds::control::EVehicleCommandStatus_finalize_w_params(&sample->status, deallocParams);
            

    aeondds::control::EVehicleCommandType_finalize_w_params(&sample->type, deallocParams);
            



}

RTIBool TVehicleCommand_copy(
    TVehicleCommand* dst,
    const TVehicleCommand* src)
{

    if (!aeondds::control::EVehicleCommandStatus_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::EVehicleCommandType_copy(
        &dst->type, &src->type)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->parameter, &src->parameter)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->errorId, &src->errorId)) {
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
#define T_initialize_w_params ::aeondds::control::TVehicleCommand_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TVehicleCommand_finalize_w_params
#define T_copy       ::aeondds::control::TVehicleCommand_copy

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
const char *TAttitudeCommandTYPENAME = "aeondds::control::TAttitudeCommand";

DDS_TypeCode* TAttitudeCommand_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TAttitudeCommand_g_tc_members[4]=
    {
        {
            (char *)"roll",/* Member name */
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
            (char *)"pitch",/* Member name */
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
            (char *)"dAltitude",/* Member name */
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
            (char *)"dYaw",/* Member name */
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

    static DDS_TypeCode TAttitudeCommand_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TAttitudeCommand", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TAttitudeCommand_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TAttitudeCommand*/

    if (is_initialized) {
        return &TAttitudeCommand_g_tc;
    }


    TAttitudeCommand_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TAttitudeCommand_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TAttitudeCommand_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TAttitudeCommand_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &TAttitudeCommand_g_tc;
}


RTIBool TAttitudeCommand_initialize(
    TAttitudeCommand* sample) {
  return ::aeondds::control::TAttitudeCommand_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TAttitudeCommand_initialize_ex(
    TAttitudeCommand* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TAttitudeCommand_initialize_w_params(
        sample,&allocParams);
}

RTIBool TAttitudeCommand_initialize_w_params(
        TAttitudeCommand* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->roll)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->pitch)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->dAltitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->dYaw)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TAttitudeCommand_finalize(
    TAttitudeCommand* sample)
{
    ::aeondds::control::TAttitudeCommand_finalize_ex(sample,RTI_TRUE);
}
        
void TAttitudeCommand_finalize_ex(
    TAttitudeCommand* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TAttitudeCommand_finalize_w_params(
        sample,&deallocParams);
}

void TAttitudeCommand_finalize_w_params(
        TAttitudeCommand* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void TAttitudeCommand_finalize_optional_members(
    TAttitudeCommand* sample, RTIBool deletePointers)
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

RTIBool TAttitudeCommand_copy(
    TAttitudeCommand* dst,
    const TAttitudeCommand* src)
{

    if (!RTICdrType_copyFloat(
        &dst->roll, &src->roll)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->pitch, &src->pitch)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->dAltitude, &src->dAltitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->dYaw, &src->dYaw)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TAttitudeCommand' sequence class.
 */
#define T TAttitudeCommand
#define TSeq TAttitudeCommandSeq
#define T_initialize_w_params ::aeondds::control::TAttitudeCommand_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TAttitudeCommand_finalize_w_params
#define T_copy       ::aeondds::control::TAttitudeCommand_copy

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
const char *EControlSolicitationResponseTYPENAME = "aeondds::control::EControlSolicitationResponse";

DDS_TypeCode* EControlSolicitationResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EControlSolicitationResponse_g_tc_members[2] =
    {
        {
            (char *)"REJECTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            REJECTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACCEPTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACCEPTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EControlSolicitationResponse_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::control::EControlSolicitationResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of enumerators */
        EControlSolicitationResponse_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EControlSolicitationResponse_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EControlSolicitationResponse_g_tc;
}
 

RTIBool EControlSolicitationResponse_initialize(
    EControlSolicitationResponse* sample)
{
    *sample = REJECTED;
    return RTI_TRUE;
}
        
RTIBool EControlSolicitationResponse_initialize_ex(
    EControlSolicitationResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = REJECTED;
    return RTI_TRUE;
}

RTIBool EControlSolicitationResponse_initialize_w_params(
        EControlSolicitationResponse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = REJECTED;
    return RTI_TRUE;
}

void EControlSolicitationResponse_finalize(
    EControlSolicitationResponse* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EControlSolicitationResponse_finalize_ex(
    EControlSolicitationResponse* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EControlSolicitationResponse_finalize_w_params(
        EControlSolicitationResponse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EControlSolicitationResponse_copy(
    EControlSolicitationResponse* dst,
    const EControlSolicitationResponse* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EControlSolicitationResponse_getValues(EControlSolicitationResponseSeq * values) 
    
{
    int i = 0;
    EControlSolicitationResponse * buffer;


    if (!values->maximum(2)) {
        return RTI_FALSE;
    }

    if (!values->length(2)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = REJECTED;
    i++;
    
    buffer[i] = ACCEPTED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EControlSolicitationResponse' sequence class.
 */
#define T EControlSolicitationResponse
#define TSeq EControlSolicitationResponseSeq
#define T_initialize_w_params EControlSolicitationResponse_initialize_w_params
#define T_finalize_w_params   EControlSolicitationResponse_finalize_w_params
#define T_copy       EControlSolicitationResponse_copy

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
const char *EControlSwitchResponseTYPENAME = "aeondds::control::EControlSwitchResponse";

DDS_TypeCode* EControlSwitchResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EControlSwitchResponse_g_tc_members[2] =
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

    static DDS_TypeCode EControlSwitchResponse_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::control::EControlSwitchResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of enumerators */
        EControlSwitchResponse_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EControlSwitchResponse_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EControlSwitchResponse_g_tc;
}
 

RTIBool EControlSwitchResponse_initialize(
    EControlSwitchResponse* sample)
{
    *sample = FAILURE;
    return RTI_TRUE;
}
        
RTIBool EControlSwitchResponse_initialize_ex(
    EControlSwitchResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = FAILURE;
    return RTI_TRUE;
}

RTIBool EControlSwitchResponse_initialize_w_params(
        EControlSwitchResponse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = FAILURE;
    return RTI_TRUE;
}

void EControlSwitchResponse_finalize(
    EControlSwitchResponse* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EControlSwitchResponse_finalize_ex(
    EControlSwitchResponse* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EControlSwitchResponse_finalize_w_params(
        EControlSwitchResponse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EControlSwitchResponse_copy(
    EControlSwitchResponse* dst,
    const EControlSwitchResponse* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EControlSwitchResponse_getValues(EControlSwitchResponseSeq * values) 
    
{
    int i = 0;
    EControlSwitchResponse * buffer;


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
 * Configure and implement 'EControlSwitchResponse' sequence class.
 */
#define T EControlSwitchResponse
#define TSeq EControlSwitchResponseSeq
#define T_initialize_w_params EControlSwitchResponse_initialize_w_params
#define T_finalize_w_params   EControlSwitchResponse_finalize_w_params
#define T_copy       EControlSwitchResponse_copy

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
const char *EControlSignalTYPENAME = "aeondds::control::EControlSignal";

DDS_TypeCode* EControlSignal_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member EControlSignal_g_tc_members[3] =
    {
        {
            (char *)"STOP",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            STOP, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"START",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            START, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ABORT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ABORT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EControlSignal_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"aeondds::control::EControlSignal", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        EControlSignal_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &EControlSignal_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &EControlSignal_g_tc;
}
 

RTIBool EControlSignal_initialize(
    EControlSignal* sample)
{
    *sample = STOP;
    return RTI_TRUE;
}
        
RTIBool EControlSignal_initialize_ex(
    EControlSignal* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = STOP;
    return RTI_TRUE;
}

RTIBool EControlSignal_initialize_w_params(
        EControlSignal* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = STOP;
    return RTI_TRUE;
}

void EControlSignal_finalize(
    EControlSignal* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void EControlSignal_finalize_ex(
    EControlSignal* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void EControlSignal_finalize_w_params(
        EControlSignal* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool EControlSignal_copy(
    EControlSignal* dst,
    const EControlSignal* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool EControlSignal_getValues(EControlSignalSeq * values) 
    
{
    int i = 0;
    EControlSignal * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = STOP;
    i++;
    
    buffer[i] = START;
    i++;
    
    buffer[i] = ABORT;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EControlSignal' sequence class.
 */
#define T EControlSignal
#define TSeq EControlSignalSeq
#define T_initialize_w_params EControlSignal_initialize_w_params
#define T_finalize_w_params   EControlSignal_finalize_w_params
#define T_copy       EControlSignal_copy

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
const char *TControlSolicitationRequestTYPENAME = "aeondds::control::TControlSolicitationRequest";

DDS_TypeCode* TControlSolicitationRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TControlSolicitationRequest_g_tc_members[1]=
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
        }
    };

    static DDS_TypeCode TControlSolicitationRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TControlSolicitationRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TControlSolicitationRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TControlSolicitationRequest*/

    if (is_initialized) {
        return &TControlSolicitationRequest_g_tc;
    }


    TControlSolicitationRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TControlSolicitationRequest_g_tc;
}


RTIBool TControlSolicitationRequest_initialize(
    TControlSolicitationRequest* sample) {
  return ::aeondds::control::TControlSolicitationRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TControlSolicitationRequest_initialize_ex(
    TControlSolicitationRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TControlSolicitationRequest_initialize_w_params(
        sample,&allocParams);
}

RTIBool TControlSolicitationRequest_initialize_w_params(
        TControlSolicitationRequest* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->systemId)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TControlSolicitationRequest_finalize(
    TControlSolicitationRequest* sample)
{
    ::aeondds::control::TControlSolicitationRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TControlSolicitationRequest_finalize_ex(
    TControlSolicitationRequest* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TControlSolicitationRequest_finalize_w_params(
        sample,&deallocParams);
}

void TControlSolicitationRequest_finalize_w_params(
        TControlSolicitationRequest* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



}

void TControlSolicitationRequest_finalize_optional_members(
    TControlSolicitationRequest* sample, RTIBool deletePointers)
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

RTIBool TControlSolicitationRequest_copy(
    TControlSolicitationRequest* dst,
    const TControlSolicitationRequest* src)
{

    if (!RTICdrType_copyLong(
        &dst->systemId, &src->systemId)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TControlSolicitationRequest' sequence class.
 */
#define T TControlSolicitationRequest
#define TSeq TControlSolicitationRequestSeq
#define T_initialize_w_params ::aeondds::control::TControlSolicitationRequest_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TControlSolicitationRequest_finalize_w_params
#define T_copy       ::aeondds::control::TControlSolicitationRequest_copy

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
const char *TControlSolicitationResponseTYPENAME = "aeondds::control::TControlSolicitationResponse";

DDS_TypeCode* TControlSolicitationResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TControlSolicitationResponse_g_tc_members[2]=
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
            (char *)"response",/* Member name */
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

    static DDS_TypeCode TControlSolicitationResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TControlSolicitationResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TControlSolicitationResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TControlSolicitationResponse*/

    if (is_initialized) {
        return &TControlSolicitationResponse_g_tc;
    }


    TControlSolicitationResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TControlSolicitationResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::EControlSolicitationResponse_get_typecode();

    is_initialized = RTI_TRUE;

    return &TControlSolicitationResponse_g_tc;
}


RTIBool TControlSolicitationResponse_initialize(
    TControlSolicitationResponse* sample) {
  return ::aeondds::control::TControlSolicitationResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TControlSolicitationResponse_initialize_ex(
    TControlSolicitationResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TControlSolicitationResponse_initialize_w_params(
        sample,&allocParams);
}

RTIBool TControlSolicitationResponse_initialize_w_params(
        TControlSolicitationResponse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->systemId)) {
        return RTI_FALSE;
    }                
            

    if (!aeondds::control::EControlSolicitationResponse_initialize_w_params(&sample->response,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TControlSolicitationResponse_finalize(
    TControlSolicitationResponse* sample)
{
    ::aeondds::control::TControlSolicitationResponse_finalize_ex(sample,RTI_TRUE);
}
        
void TControlSolicitationResponse_finalize_ex(
    TControlSolicitationResponse* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TControlSolicitationResponse_finalize_w_params(
        sample,&deallocParams);
}

void TControlSolicitationResponse_finalize_w_params(
        TControlSolicitationResponse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    aeondds::control::EControlSolicitationResponse_finalize_w_params(&sample->response, deallocParams);
            

}

void TControlSolicitationResponse_finalize_optional_members(
    TControlSolicitationResponse* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::control::EControlSolicitationResponse_finalize_w_params(&sample->response, deallocParams);
            

}

RTIBool TControlSolicitationResponse_copy(
    TControlSolicitationResponse* dst,
    const TControlSolicitationResponse* src)
{

    if (!RTICdrType_copyLong(
        &dst->systemId, &src->systemId)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::EControlSolicitationResponse_copy(
        &dst->response, &src->response)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TControlSolicitationResponse' sequence class.
 */
#define T TControlSolicitationResponse
#define TSeq TControlSolicitationResponseSeq
#define T_initialize_w_params ::aeondds::control::TControlSolicitationResponse_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TControlSolicitationResponse_finalize_w_params
#define T_copy       ::aeondds::control::TControlSolicitationResponse_copy

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
const char *TControlSwitchRequestTYPENAME = "aeondds::control::TControlSwitchRequest";

DDS_TypeCode* TControlSwitchRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TControlSwitchRequest_g_tc_members[1]=
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
        }
    };

    static DDS_TypeCode TControlSwitchRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TControlSwitchRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TControlSwitchRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TControlSwitchRequest*/

    if (is_initialized) {
        return &TControlSwitchRequest_g_tc;
    }


    TControlSwitchRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TControlSwitchRequest_g_tc;
}


RTIBool TControlSwitchRequest_initialize(
    TControlSwitchRequest* sample) {
  return ::aeondds::control::TControlSwitchRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TControlSwitchRequest_initialize_ex(
    TControlSwitchRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TControlSwitchRequest_initialize_w_params(
        sample,&allocParams);
}

RTIBool TControlSwitchRequest_initialize_w_params(
        TControlSwitchRequest* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->systemId)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TControlSwitchRequest_finalize(
    TControlSwitchRequest* sample)
{
    ::aeondds::control::TControlSwitchRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TControlSwitchRequest_finalize_ex(
    TControlSwitchRequest* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TControlSwitchRequest_finalize_w_params(
        sample,&deallocParams);
}

void TControlSwitchRequest_finalize_w_params(
        TControlSwitchRequest* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



}

void TControlSwitchRequest_finalize_optional_members(
    TControlSwitchRequest* sample, RTIBool deletePointers)
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

RTIBool TControlSwitchRequest_copy(
    TControlSwitchRequest* dst,
    const TControlSwitchRequest* src)
{

    if (!RTICdrType_copyLong(
        &dst->systemId, &src->systemId)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TControlSwitchRequest' sequence class.
 */
#define T TControlSwitchRequest
#define TSeq TControlSwitchRequestSeq
#define T_initialize_w_params ::aeondds::control::TControlSwitchRequest_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TControlSwitchRequest_finalize_w_params
#define T_copy       ::aeondds::control::TControlSwitchRequest_copy

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
const char *TControlSwitchResponseTYPENAME = "aeondds::control::TControlSwitchResponse";

DDS_TypeCode* TControlSwitchResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TControlSwitchResponse_g_tc_members[2]=
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
            (char *)"response",/* Member name */
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

    static DDS_TypeCode TControlSwitchResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TControlSwitchResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TControlSwitchResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TControlSwitchResponse*/

    if (is_initialized) {
        return &TControlSwitchResponse_g_tc;
    }


    TControlSwitchResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TControlSwitchResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::EControlSwitchResponse_get_typecode();

    is_initialized = RTI_TRUE;

    return &TControlSwitchResponse_g_tc;
}


RTIBool TControlSwitchResponse_initialize(
    TControlSwitchResponse* sample) {
  return ::aeondds::control::TControlSwitchResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TControlSwitchResponse_initialize_ex(
    TControlSwitchResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TControlSwitchResponse_initialize_w_params(
        sample,&allocParams);
}

RTIBool TControlSwitchResponse_initialize_w_params(
        TControlSwitchResponse* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->systemId)) {
        return RTI_FALSE;
    }                
            

    if (!aeondds::control::EControlSwitchResponse_initialize_w_params(&sample->response,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TControlSwitchResponse_finalize(
    TControlSwitchResponse* sample)
{
    ::aeondds::control::TControlSwitchResponse_finalize_ex(sample,RTI_TRUE);
}
        
void TControlSwitchResponse_finalize_ex(
    TControlSwitchResponse* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TControlSwitchResponse_finalize_w_params(
        sample,&deallocParams);
}

void TControlSwitchResponse_finalize_w_params(
        TControlSwitchResponse* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    aeondds::control::EControlSwitchResponse_finalize_w_params(&sample->response, deallocParams);
            

}

void TControlSwitchResponse_finalize_optional_members(
    TControlSwitchResponse* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::control::EControlSwitchResponse_finalize_w_params(&sample->response, deallocParams);
            

}

RTIBool TControlSwitchResponse_copy(
    TControlSwitchResponse* dst,
    const TControlSwitchResponse* src)
{

    if (!RTICdrType_copyLong(
        &dst->systemId, &src->systemId)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::EControlSwitchResponse_copy(
        &dst->response, &src->response)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TControlSwitchResponse' sequence class.
 */
#define T TControlSwitchResponse
#define TSeq TControlSwitchResponseSeq
#define T_initialize_w_params ::aeondds::control::TControlSwitchResponse_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TControlSwitchResponse_finalize_w_params
#define T_copy       ::aeondds::control::TControlSwitchResponse_copy

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
const char *TControlSignalTYPENAME = "aeondds::control::TControlSignal";

DDS_TypeCode* TControlSignal_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TControlSignal_g_tc_members[2]=
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
            (char *)"signal",/* Member name */
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

    static DDS_TypeCode TControlSignal_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::control::TControlSignal", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TControlSignal_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TControlSignal*/

    if (is_initialized) {
        return &TControlSignal_g_tc;
    }


    TControlSignal_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TControlSignal_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)aeondds::control::EControlSignal_get_typecode();

    is_initialized = RTI_TRUE;

    return &TControlSignal_g_tc;
}


RTIBool TControlSignal_initialize(
    TControlSignal* sample) {
  return ::aeondds::control::TControlSignal_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TControlSignal_initialize_ex(
    TControlSignal* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::control::TControlSignal_initialize_w_params(
        sample,&allocParams);
}

RTIBool TControlSignal_initialize_w_params(
        TControlSignal* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->systemId)) {
        return RTI_FALSE;
    }                
            

    if (!aeondds::control::EControlSignal_initialize_w_params(&sample->signal,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TControlSignal_finalize(
    TControlSignal* sample)
{
    ::aeondds::control::TControlSignal_finalize_ex(sample,RTI_TRUE);
}
        
void TControlSignal_finalize_ex(
    TControlSignal* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::control::TControlSignal_finalize_w_params(
        sample,&deallocParams);
}

void TControlSignal_finalize_w_params(
        TControlSignal* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    aeondds::control::EControlSignal_finalize_w_params(&sample->signal, deallocParams);
            

}

void TControlSignal_finalize_optional_members(
    TControlSignal* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    aeondds::control::EControlSignal_finalize_w_params(&sample->signal, deallocParams);
            

}

RTIBool TControlSignal_copy(
    TControlSignal* dst,
    const TControlSignal* src)
{

    if (!RTICdrType_copyLong(
        &dst->systemId, &src->systemId)) {
        return RTI_FALSE;
    }
            

    if (!aeondds::control::EControlSignal_copy(
        &dst->signal, &src->signal)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TControlSignal' sequence class.
 */
#define T TControlSignal
#define TSeq TControlSignalSeq
#define T_initialize_w_params ::aeondds::control::TControlSignal_initialize_w_params
#define T_finalize_w_params   ::aeondds::control::TControlSignal_finalize_w_params
#define T_copy       ::aeondds::control::TControlSignal_copy

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


} /* namespace control */

} /* namespace aeondds */
