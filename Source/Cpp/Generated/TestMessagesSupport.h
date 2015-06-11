
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TestMessages.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TestMessagesSupport_1081376032_h
#define TestMessagesSupport_1081376032_h

/* Uses */
#include "TestMessages.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif


namespace aeondds{

namespace test{
        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TTagPoseTypeSupport, TTagPose);

DDS_DATAWRITER_CPP(TTagPoseDataWriter, TTagPose);
DDS_DATAREADER_CPP(TTagPoseDataReader, TTagPoseSeq, TTagPose);


#else

DDS_TYPESUPPORT_C(TTagPoseTypeSupport, TTagPose);
DDS_DATAWRITER_C(TTagPoseDataWriter, TTagPose);
DDS_DATAREADER_C(TTagPoseDataReader, TTagPoseSeq, TTagPose);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TObjectTrackTypeSupport, TObjectTrack);

DDS_DATAWRITER_CPP(TObjectTrackDataWriter, TObjectTrack);
DDS_DATAREADER_CPP(TObjectTrackDataReader, TObjectTrackSeq, TObjectTrack);


#else

DDS_TYPESUPPORT_C(TObjectTrackTypeSupport, TObjectTrack);
DDS_DATAWRITER_C(TObjectTrackDataWriter, TObjectTrack);
DDS_DATAREADER_C(TObjectTrackDataReader, TObjectTrackSeq, TObjectTrack);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TViconTrackEulerTypeSupport, TViconTrackEuler);

DDS_DATAWRITER_CPP(TViconTrackEulerDataWriter, TViconTrackEuler);
DDS_DATAREADER_CPP(TViconTrackEulerDataReader, TViconTrackEulerSeq, TViconTrackEuler);


#else

DDS_TYPESUPPORT_C(TViconTrackEulerTypeSupport, TViconTrackEuler);
DDS_DATAWRITER_C(TViconTrackEulerDataWriter, TViconTrackEuler);
DDS_DATAREADER_C(TViconTrackEulerDataReader, TViconTrackEulerSeq, TViconTrackEuler);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TViconTrackQuaternionTypeSupport, TViconTrackQuaternion);

DDS_DATAWRITER_CPP(TViconTrackQuaternionDataWriter, TViconTrackQuaternion);
DDS_DATAREADER_CPP(TViconTrackQuaternionDataReader, TViconTrackQuaternionSeq, TViconTrackQuaternion);


#else

DDS_TYPESUPPORT_C(TViconTrackQuaternionTypeSupport, TViconTrackQuaternion);
DDS_DATAWRITER_C(TViconTrackQuaternionDataWriter, TViconTrackQuaternion);
DDS_DATAREADER_C(TViconTrackQuaternionDataReader, TViconTrackQuaternionSeq, TViconTrackQuaternion);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TVehicleCommandTypeSupport, TVehicleCommand);

DDS_DATAWRITER_CPP(TVehicleCommandDataWriter, TVehicleCommand);
DDS_DATAREADER_CPP(TVehicleCommandDataReader, TVehicleCommandSeq, TVehicleCommand);


#else

DDS_TYPESUPPORT_C(TVehicleCommandTypeSupport, TVehicleCommand);
DDS_DATAWRITER_C(TVehicleCommandDataWriter, TVehicleCommand);
DDS_DATAREADER_C(TVehicleCommandDataReader, TVehicleCommandSeq, TVehicleCommand);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TVehicleStatusTypeSupport, TVehicleStatus);

DDS_DATAWRITER_CPP(TVehicleStatusDataWriter, TVehicleStatus);
DDS_DATAREADER_CPP(TVehicleStatusDataReader, TVehicleStatusSeq, TVehicleStatus);


#else

DDS_TYPESUPPORT_C(TVehicleStatusTypeSupport, TVehicleStatus);
DDS_DATAWRITER_C(TVehicleStatusDataWriter, TVehicleStatus);
DDS_DATAREADER_C(TVehicleStatusDataReader, TVehicleStatusSeq, TVehicleStatus);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TPoseTypeSupport, TPose);

DDS_DATAWRITER_CPP(TPoseDataWriter, TPose);
DDS_DATAREADER_CPP(TPoseDataReader, TPoseSeq, TPose);


#else

DDS_TYPESUPPORT_C(TPoseTypeSupport, TPose);
DDS_DATAWRITER_C(TPoseDataWriter, TPose);
DDS_DATAREADER_C(TPoseDataReader, TPoseSeq, TPose);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TPathTypeSupport, TPath);

DDS_DATAWRITER_CPP(TPathDataWriter, TPath);
DDS_DATAREADER_CPP(TPathDataReader, TPathSeq, TPath);


#else

DDS_TYPESUPPORT_C(TPathTypeSupport, TPath);
DDS_DATAWRITER_C(TPathDataWriter, TPath);
DDS_DATAREADER_C(TPathDataReader, TPathSeq, TPath);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace test */

} /* namespace aeondds */


#endif  /* TestMessagesSupport_1081376032_h */
