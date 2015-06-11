
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommanderToNavigator.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommanderToNavigatorSupport_1956912759_h
#define CommanderToNavigatorSupport_1956912759_h

/* Uses */
#include "CommanderToNavigator.h"



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

namespace CmdrAndNav{
        

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

DDS_TYPESUPPORT_CPP(TCommanderToNavigatorTypeSupport, TCommanderToNavigator);

DDS_DATAWRITER_CPP(TCommanderToNavigatorDataWriter, TCommanderToNavigator);
DDS_DATAREADER_CPP(TCommanderToNavigatorDataReader, TCommanderToNavigatorSeq, TCommanderToNavigator);


#else

DDS_TYPESUPPORT_C(TCommanderToNavigatorTypeSupport, TCommanderToNavigator);
DDS_DATAWRITER_C(TCommanderToNavigatorDataWriter, TCommanderToNavigator);
DDS_DATAREADER_C(TCommanderToNavigatorDataReader, TCommanderToNavigatorSeq, TCommanderToNavigator);

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

DDS_TYPESUPPORT_CPP(TJsonMissionFileTypeSupport, TJsonMissionFile);

DDS_DATAWRITER_CPP(TJsonMissionFileDataWriter, TJsonMissionFile);
DDS_DATAREADER_CPP(TJsonMissionFileDataReader, TJsonMissionFileSeq, TJsonMissionFile);


#else

DDS_TYPESUPPORT_C(TJsonMissionFileTypeSupport, TJsonMissionFile);
DDS_DATAWRITER_C(TJsonMissionFileDataWriter, TJsonMissionFile);
DDS_DATAREADER_C(TJsonMissionFileDataReader, TJsonMissionFileSeq, TJsonMissionFile);

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

DDS_TYPESUPPORT_CPP(TNavigatorToCommanderTypeSupport, TNavigatorToCommander);

DDS_DATAWRITER_CPP(TNavigatorToCommanderDataWriter, TNavigatorToCommander);
DDS_DATAREADER_CPP(TNavigatorToCommanderDataReader, TNavigatorToCommanderSeq, TNavigatorToCommander);


#else

DDS_TYPESUPPORT_C(TNavigatorToCommanderTypeSupport, TNavigatorToCommander);
DDS_DATAWRITER_C(TNavigatorToCommanderDataWriter, TNavigatorToCommander);
DDS_DATAREADER_C(TNavigatorToCommanderDataReader, TNavigatorToCommanderSeq, TNavigatorToCommander);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace CmdrAndNav */

} /* namespace aeondds */


#endif  /* CommanderToNavigatorSupport_1956912759_h */
