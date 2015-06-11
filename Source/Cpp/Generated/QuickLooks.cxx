
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QuickLooks.idl using "rtiddsgen".
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



#include "QuickLooks.h"


namespace aeondds{

namespace quicklooks{
/* ========================================================================= */
const char *TSensorReportTYPENAME = "aeondds::quicklooks::TSensorReport";

DDS_TypeCode* TSensorReport_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TSensorReport_g_tc_members[43]=
    {
        {
            (char *)"start_utc",/* Member name */
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
            (char *)"stop_utc",/* Member name */
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
            (char *)"mid_utc",/* Member name */
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
            (char *)"longitude",/* Member name */
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
            (char *)"latitude",/* Member name */
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
            (char *)"pressure",/* Member name */
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
            (char *)"altitude",/* Member name */
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
            (char *)"temperature",/* Member name */
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
            (char *)"relHumidity",/* Member name */
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
            (char *)"o3_ppbv",/* Member name */
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
            (char *)"co_ppbv",/* Member name */
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
            (char *)"so2_ppbv",/* Member name */
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
            (char *)"no2_ppbv",/* Member name */
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
        },
        {
            (char *)"bscat450",/* Member name */
            {
                13,/* Representation ID */
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
            (char *)"bscat550",/* Member name */
            {
                14,/* Representation ID */
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
            (char *)"bscat700",/* Member name */
            {
                15,/* Representation ID */
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
            (char *)"bkscat450",/* Member name */
            {
                16,/* Representation ID */
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
            (char *)"bkscat550",/* Member name */
            {
                17,/* Representation ID */
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
            (char *)"bkscat700",/* Member name */
            {
                18,/* Representation ID */
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
            (char *)"pCounts",/* Member name */
            {
                19,/* Representation ID */
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
            (char *)"nDp03_0_4",/* Member name */
            {
                20,/* Representation ID */
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
            (char *)"nDp04_0_491",/* Member name */
            {
                21,/* Representation ID */
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
            (char *)"nDp0491_0_6",/* Member name */
            {
                22,/* Representation ID */
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
            (char *)"nDp06_0_7",/* Member name */
            {
                23,/* Representation ID */
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
            (char *)"dDp0700_0_8",/* Member name */
            {
                24,/* Representation ID */
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
            (char *)"dDp08_plus",/* Member name */
            {
                25,/* Representation ID */
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
            (char *)"BC_370",/* Member name */
            {
                26,/* Representation ID */
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
            (char *)"BC_470",/* Member name */
            {
                27,/* Representation ID */
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
            (char *)"BC_520",/* Member name */
            {
                28,/* Representation ID */
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
            (char *)"BC_590",/* Member name */
            {
                29,/* Representation ID */
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
            (char *)"BC_660",/* Member name */
            {
                30,/* Representation ID */
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
            (char *)"BC_880",/* Member name */
            {
                31,/* Representation ID */
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
            (char *)"BC_950",/* Member name */
            {
                32,/* Representation ID */
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
            (char *)"flight",/* Member name */
            {
                33,/* Representation ID */
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
            (char *)"spiral",/* Member name */
            {
                34,/* Representation ID */
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
            (char *)"raw_temperature",/* Member name */
            {
                35,/* Representation ID */
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
            (char *)"raw_relHumidity",/* Member name */
            {
                36,/* Representation ID */
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
            (char *)"raw_bscat450",/* Member name */
            {
                37,/* Representation ID */
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
            (char *)"raw_bscat550",/* Member name */
            {
                38,/* Representation ID */
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
            (char *)"raw_bscat700",/* Member name */
            {
                39,/* Representation ID */
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
            (char *)"raw_bkscat450",/* Member name */
            {
                40,/* Representation ID */
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
            (char *)"raw_bkscat550",/* Member name */
            {
                41,/* Representation ID */
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
            (char *)"raw_bkscat700",/* Member name */
            {
                42,/* Representation ID */
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

    static DDS_TypeCode TSensorReport_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::quicklooks::TSensorReport", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        43, /* Number of members */
        TSensorReport_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TSensorReport*/

    if (is_initialized) {
        return &TSensorReport_g_tc;
    }


    TSensorReport_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[31]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[32]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[33]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[34]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[35]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[36]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[37]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[38]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[39]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[40]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[41]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TSensorReport_g_tc_members[42]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TSensorReport_g_tc;
}


RTIBool TSensorReport_initialize(
    TSensorReport* sample) {
  return ::aeondds::quicklooks::TSensorReport_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TSensorReport_initialize_ex(
    TSensorReport* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::quicklooks::TSensorReport_initialize_w_params(
        sample,&allocParams);
}

RTIBool TSensorReport_initialize_w_params(
        TSensorReport* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initDouble(&sample->start_utc)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->stop_utc)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->mid_utc)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->longitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->latitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->pressure)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->altitude)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->temperature)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->relHumidity)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->o3_ppbv)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->co_ppbv)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->so2_ppbv)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->no2_ppbv)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->bscat450)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->bscat550)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->bscat700)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->bkscat450)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->bkscat550)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->bkscat700)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->pCounts)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->nDp03_0_4)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->nDp04_0_491)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->nDp0491_0_6)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->nDp06_0_7)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->dDp0700_0_8)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->dDp08_plus)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BC_370)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BC_470)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BC_520)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BC_590)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BC_660)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BC_880)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BC_950)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->flight)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->spiral)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->raw_temperature)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->raw_relHumidity)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->raw_bscat450)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->raw_bscat550)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->raw_bscat700)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->raw_bkscat450)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->raw_bkscat550)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->raw_bkscat700)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TSensorReport_finalize(
    TSensorReport* sample)
{
    ::aeondds::quicklooks::TSensorReport_finalize_ex(sample,RTI_TRUE);
}
        
void TSensorReport_finalize_ex(
    TSensorReport* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::quicklooks::TSensorReport_finalize_w_params(
        sample,&deallocParams);
}

void TSensorReport_finalize_w_params(
        TSensorReport* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */













































}

void TSensorReport_finalize_optional_members(
    TSensorReport* sample, RTIBool deletePointers)
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

RTIBool TSensorReport_copy(
    TSensorReport* dst,
    const TSensorReport* src)
{

    if (!RTICdrType_copyDouble(
        &dst->start_utc, &src->start_utc)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->stop_utc, &src->stop_utc)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->mid_utc, &src->mid_utc)) {
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
        &dst->pressure, &src->pressure)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->altitude, &src->altitude)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->temperature, &src->temperature)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->relHumidity, &src->relHumidity)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->o3_ppbv, &src->o3_ppbv)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->co_ppbv, &src->co_ppbv)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->so2_ppbv, &src->so2_ppbv)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->no2_ppbv, &src->no2_ppbv)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->bscat450, &src->bscat450)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->bscat550, &src->bscat550)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->bscat700, &src->bscat700)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->bkscat450, &src->bkscat450)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->bkscat550, &src->bkscat550)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->bkscat700, &src->bkscat700)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->pCounts, &src->pCounts)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->nDp03_0_4, &src->nDp03_0_4)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->nDp04_0_491, &src->nDp04_0_491)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->nDp0491_0_6, &src->nDp0491_0_6)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->nDp06_0_7, &src->nDp06_0_7)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->dDp0700_0_8, &src->dDp0700_0_8)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->dDp08_plus, &src->dDp08_plus)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BC_370, &src->BC_370)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BC_470, &src->BC_470)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BC_520, &src->BC_520)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BC_590, &src->BC_590)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BC_660, &src->BC_660)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BC_880, &src->BC_880)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BC_950, &src->BC_950)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->flight, &src->flight)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->spiral, &src->spiral)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->raw_temperature, &src->raw_temperature)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->raw_relHumidity, &src->raw_relHumidity)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->raw_bscat450, &src->raw_bscat450)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->raw_bscat550, &src->raw_bscat550)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->raw_bscat700, &src->raw_bscat700)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->raw_bkscat450, &src->raw_bkscat450)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->raw_bkscat550, &src->raw_bkscat550)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->raw_bkscat700, &src->raw_bkscat700)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TSensorReport' sequence class.
 */
#define T TSensorReport
#define TSeq TSensorReportSeq
#define T_initialize_w_params ::aeondds::quicklooks::TSensorReport_initialize_w_params
#define T_finalize_w_params   ::aeondds::quicklooks::TSensorReport_finalize_w_params
#define T_copy       ::aeondds::quicklooks::TSensorReport_copy

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
const char *TDiscoverAQReportTYPENAME = "aeondds::quicklooks::TDiscoverAQReport";

DDS_TypeCode* TDiscoverAQReport_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TDiscoverAQReport_g_tc_members[6]=
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
            (char *)"timestamp",/* Member name */
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
            (char *)"data",/* Member name */
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

    static DDS_TypeCode TDiscoverAQReport_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"aeondds::quicklooks::TDiscoverAQReport", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        TDiscoverAQReport_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TDiscoverAQReport*/

    if (is_initialized) {
        return &TDiscoverAQReport_g_tc;
    }


    TDiscoverAQReport_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TDiscoverAQReport_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TDiscoverAQReport_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TDiscoverAQReport_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TDiscoverAQReport_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TDiscoverAQReport_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)aeondds::quicklooks::TSensorReport_get_typecode();

    is_initialized = RTI_TRUE;

    return &TDiscoverAQReport_g_tc;
}


RTIBool TDiscoverAQReport_initialize(
    TDiscoverAQReport* sample) {
  return ::aeondds::quicklooks::TDiscoverAQReport_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TDiscoverAQReport_initialize_ex(
    TDiscoverAQReport* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::aeondds::quicklooks::TDiscoverAQReport_initialize_w_params(
        sample,&allocParams);
}

RTIBool TDiscoverAQReport_initialize_w_params(
        TDiscoverAQReport* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->vehicleId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->timestamp)) {
        return RTI_FALSE;
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
            

    if (!aeondds::quicklooks::TSensorReport_initialize_w_params(&sample->data,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TDiscoverAQReport_finalize(
    TDiscoverAQReport* sample)
{
    ::aeondds::quicklooks::TDiscoverAQReport_finalize_ex(sample,RTI_TRUE);
}
        
void TDiscoverAQReport_finalize_ex(
    TDiscoverAQReport* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::aeondds::quicklooks::TDiscoverAQReport_finalize_w_params(
        sample,&deallocParams);
}

void TDiscoverAQReport_finalize_w_params(
        TDiscoverAQReport* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */







    aeondds::quicklooks::TSensorReport_finalize_w_params(&sample->data, deallocParams);
            

}

void TDiscoverAQReport_finalize_optional_members(
    TDiscoverAQReport* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             






    aeondds::quicklooks::TSensorReport_finalize_optional_members(&sample->data, deallocParams->delete_pointers);
            

}

RTIBool TDiscoverAQReport_copy(
    TDiscoverAQReport* dst,
    const TDiscoverAQReport* src)
{

    if (!RTICdrType_copyLong(
        &dst->vehicleId, &src->vehicleId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->timestamp, &src->timestamp)) {
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
            

    if (!aeondds::quicklooks::TSensorReport_copy(
        &dst->data, &src->data)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TDiscoverAQReport' sequence class.
 */
#define T TDiscoverAQReport
#define TSeq TDiscoverAQReportSeq
#define T_initialize_w_params ::aeondds::quicklooks::TDiscoverAQReport_initialize_w_params
#define T_finalize_w_params   ::aeondds::quicklooks::TDiscoverAQReport_finalize_w_params
#define T_copy       ::aeondds::quicklooks::TDiscoverAQReport_copy

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


} /* namespace quicklooks */

} /* namespace aeondds */
