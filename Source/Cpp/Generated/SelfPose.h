
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SelfPose.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SelfPose_1893211664_h
#define SelfPose_1893211664_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


namespace aeondds{

namespace selfpose{
             
static const char * TOPIC_VEHICLE_SELF_POSE = "vehicleSelfPose";
#define aeondds_selfpose_TSelfPose_LAST_MEMBER_ID 11
        
extern const char *TSelfPoseTYPENAME;
        


#ifdef __cplusplus
    struct TSelfPoseSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TSelfPoseTypeSupport;
    class TSelfPoseDataWriter;
    class TSelfPoseDataReader;
#endif

#endif

            
    
class TSelfPose                                        
{
public:            
#ifdef __cplusplus
    typedef struct TSelfPoseSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TSelfPoseTypeSupport TypeSupport;
    typedef TSelfPoseDataWriter DataWriter;
    typedef TSelfPoseDataReader DataReader;
#endif

#endif
    
    DDS_Long  vehicleId;

    DDS_Long  timestampMs;

    DDS_Double  x;

    DDS_Double  y;

    DDS_Double  z;

    DDS_Double  phi_rad;

    DDS_Double  theta_rad;

    DDS_Double  psi_rad;

    DDS_Double  q1;

    DDS_Double  q2;

    DDS_Double  q3;

    DDS_Double  q4;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TSelfPose_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TSelfPoseSeq, TSelfPose);
        
NDDSUSERDllExport
RTIBool TSelfPose_initialize(
        TSelfPose* self);
        
NDDSUSERDllExport
RTIBool TSelfPose_initialize_ex(
        TSelfPose* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TSelfPose_initialize_w_params(
        TSelfPose* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TSelfPose_finalize(
        TSelfPose* self);
                        
NDDSUSERDllExport
void TSelfPose_finalize_ex(
        TSelfPose* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TSelfPose_finalize_w_params(
        TSelfPose* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TSelfPose_finalize_optional_members(
        TSelfPose* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TSelfPose_copy(
        TSelfPose* dst,
        const TSelfPose* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace selfpose */

} /* namespace aeondds */


#endif /* SelfPose_1893211664_h */
