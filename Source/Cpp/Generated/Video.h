
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Video.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Video_959185661_h
#define Video_959185661_h

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

namespace video{
             
static const DDS_Long MAX_FRAME_SIZE = 1048576;             
static const DDS_Long SMALL_INFRARED_STEAM_SIZE = 480;
#define aeondds_video_TSmallInfraredStream_LAST_MEMBER_ID 3
        
extern const char *TSmallInfraredStreamTYPENAME;
        


#ifdef __cplusplus
    struct TSmallInfraredStreamSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TSmallInfraredStreamTypeSupport;
    class TSmallInfraredStreamDataWriter;
    class TSmallInfraredStreamDataReader;
#endif

#endif

            
    
class TSmallInfraredStream                                        
{
public:            
#ifdef __cplusplus
    typedef struct TSmallInfraredStreamSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TSmallInfraredStreamTypeSupport TypeSupport;
    typedef TSmallInfraredStreamDataWriter DataWriter;
    typedef TSmallInfraredStreamDataReader DataReader;
#endif

#endif
    
    DDS_Long  streamId;

    DDS_UnsignedLong  flags;

    DDS_UnsignedLong  sequenceNumber;

     DDS_OctetSeq  frame;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TSmallInfraredStream_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TSmallInfraredStreamSeq, TSmallInfraredStream);
        
NDDSUSERDllExport
RTIBool TSmallInfraredStream_initialize(
        TSmallInfraredStream* self);
        
NDDSUSERDllExport
RTIBool TSmallInfraredStream_initialize_ex(
        TSmallInfraredStream* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TSmallInfraredStream_initialize_w_params(
        TSmallInfraredStream* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TSmallInfraredStream_finalize(
        TSmallInfraredStream* self);
                        
NDDSUSERDllExport
void TSmallInfraredStream_finalize_ex(
        TSmallInfraredStream* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TSmallInfraredStream_finalize_w_params(
        TSmallInfraredStream* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TSmallInfraredStream_finalize_optional_members(
        TSmallInfraredStream* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TSmallInfraredStream_copy(
        TSmallInfraredStream* dst,
        const TSmallInfraredStream* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define aeondds_video_TGenericVideoFrame_LAST_MEMBER_ID 1
        
extern const char *TGenericVideoFrameTYPENAME;
        


#ifdef __cplusplus
    struct TGenericVideoFrameSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TGenericVideoFrameTypeSupport;
    class TGenericVideoFrameDataWriter;
    class TGenericVideoFrameDataReader;
#endif

#endif

            
    
class TGenericVideoFrame                                        
{
public:            
#ifdef __cplusplus
    typedef struct TGenericVideoFrameSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TGenericVideoFrameTypeSupport TypeSupport;
    typedef TGenericVideoFrameDataWriter DataWriter;
    typedef TGenericVideoFrameDataReader DataReader;
#endif

#endif
    
    DDS_Long  streamId;

     DDS_OctetSeq  frame;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TGenericVideoFrame_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TGenericVideoFrameSeq, TGenericVideoFrame);
        
NDDSUSERDllExport
RTIBool TGenericVideoFrame_initialize(
        TGenericVideoFrame* self);
        
NDDSUSERDllExport
RTIBool TGenericVideoFrame_initialize_ex(
        TGenericVideoFrame* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TGenericVideoFrame_initialize_w_params(
        TGenericVideoFrame* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TGenericVideoFrame_finalize(
        TGenericVideoFrame* self);
                        
NDDSUSERDllExport
void TGenericVideoFrame_finalize_ex(
        TGenericVideoFrame* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TGenericVideoFrame_finalize_w_params(
        TGenericVideoFrame* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TGenericVideoFrame_finalize_optional_members(
        TGenericVideoFrame* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TGenericVideoFrame_copy(
        TGenericVideoFrame* dst,
        const TGenericVideoFrame* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace video */

} /* namespace aeondds */


#endif /* Video_959185661_h */
