
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensors.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Sensors_1082809193_h
#define Sensors_1082809193_h

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

namespace sensors{
             
static const DDS_Short OBJECT_ID_LENGTH = 32;             
static const char * TOPIC_VICON_TRACK = "ViconTrack"; 
typedef enum EObjectType
{
    VEHICLE,
    OBSTACLE
} EObjectType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EObjectType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EObjectTypeSeq, EObjectType);
        
NDDSUSERDllExport
RTIBool EObjectType_initialize(
        EObjectType* self);
        
NDDSUSERDllExport
RTIBool EObjectType_initialize_ex(
        EObjectType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EObjectType_initialize_w_params(
        EObjectType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EObjectType_finalize(
        EObjectType* self);
                        
NDDSUSERDllExport
void EObjectType_finalize_ex(
        EObjectType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void EObjectType_finalize_w_params(
        EObjectType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EObjectType_finalize_optional_members(
        EObjectType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool EObjectType_copy(
        EObjectType* dst,
        const EObjectType* src);


NDDSUSERDllExport
RTIBool EObjectType_getValues(EObjectTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_sensors_TViconTrack_LAST_MEMBER_ID 12
        
extern const char *TViconTrackTYPENAME;
        


#ifdef __cplusplus
    struct TViconTrackSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TViconTrackTypeSupport;
    class TViconTrackDataWriter;
    class TViconTrackDataReader;
#endif

#endif

            
    
class TViconTrack                                        
{
public:            
#ifdef __cplusplus
    typedef struct TViconTrackSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TViconTrackTypeSupport TypeSupport;
    typedef TViconTrackDataWriter DataWriter;
    typedef TViconTrackDataReader DataReader;
#endif

#endif
    
    char*  objectId; /* maximum length = ((aeondds::sensors::OBJECT_ID_LENGTH)) */

    aeondds::sensors::EObjectType  objectType;

    DDS_UnsignedLongLong  timestampMs;

    DDS_Double  x_m;

    DDS_Double  y_m;

    DDS_Double  z_m;

    DDS_Double  phi_rad;

    DDS_Double  theta_rad;

    DDS_Double  psi_rad;

    DDS_Double  q0;

    DDS_Double  q1;

    DDS_Double  q2;

    DDS_Double  q3;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TViconTrack_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TViconTrackSeq, TViconTrack);
        
NDDSUSERDllExport
RTIBool TViconTrack_initialize(
        TViconTrack* self);
        
NDDSUSERDllExport
RTIBool TViconTrack_initialize_ex(
        TViconTrack* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TViconTrack_initialize_w_params(
        TViconTrack* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TViconTrack_finalize(
        TViconTrack* self);
                        
NDDSUSERDllExport
void TViconTrack_finalize_ex(
        TViconTrack* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TViconTrack_finalize_w_params(
        TViconTrack* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TViconTrack_finalize_optional_members(
        TViconTrack* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TViconTrack_copy(
        TViconTrack* dst,
        const TViconTrack* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace sensors */

} /* namespace aeondds */


#endif /* Sensors_1082809193_h */
