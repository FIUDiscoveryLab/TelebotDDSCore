
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Common.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Common_1118136415_h
#define Common_1118136415_h

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

namespace common{
 
typedef enum ESignalType
{
    NONE,
    INITIALIZATION,
    SHUTDOWN,
    RESET
} ESignalType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ESignalType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ESignalTypeSeq, ESignalType);
        
NDDSUSERDllExport
RTIBool ESignalType_initialize(
        ESignalType* self);
        
NDDSUSERDllExport
RTIBool ESignalType_initialize_ex(
        ESignalType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ESignalType_initialize_w_params(
        ESignalType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ESignalType_finalize(
        ESignalType* self);
                        
NDDSUSERDllExport
void ESignalType_finalize_ex(
        ESignalType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ESignalType_finalize_w_params(
        ESignalType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ESignalType_finalize_optional_members(
        ESignalType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ESignalType_copy(
        ESignalType* dst,
        const ESignalType* src);


NDDSUSERDllExport
RTIBool ESignalType_getValues(ESignalTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_common_TSignal_LAST_MEMBER_ID 0
        
extern const char *TSignalTYPENAME;
        


#ifdef __cplusplus
    struct TSignalSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TSignalTypeSupport;
    class TSignalDataWriter;
    class TSignalDataReader;
#endif

#endif

            
    
class TSignal                                        
{
public:            
#ifdef __cplusplus
    typedef struct TSignalSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TSignalTypeSupport TypeSupport;
    typedef TSignalDataWriter DataWriter;
    typedef TSignalDataReader DataReader;
#endif

#endif
    
    aeondds::common::ESignalType  signalType;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TSignal_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TSignalSeq, TSignal);
        
NDDSUSERDllExport
RTIBool TSignal_initialize(
        TSignal* self);
        
NDDSUSERDllExport
RTIBool TSignal_initialize_ex(
        TSignal* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TSignal_initialize_w_params(
        TSignal* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TSignal_finalize(
        TSignal* self);
                        
NDDSUSERDllExport
void TSignal_finalize_ex(
        TSignal* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TSignal_finalize_w_params(
        TSignal* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TSignal_finalize_optional_members(
        TSignal* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TSignal_copy(
        TSignal* dst,
        const TSignal* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace common */

} /* namespace aeondds */


#endif /* Common_1118136415_h */
