#pragma once

// Defines
#define DEFAULT_QOS_LIBRARY "BasicAEONProfile"
#define DEFAULT_QOS_PROFILE "MaxTransportThroughput"

// Includes
#include <map>
#include <string>
#include <functional>
#include <vector>
#include <exception>

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include "DDSTypeWrapper.h"
#include "OSAPI.h"

#include "../../../Utility/Utility.h"

namespace aeondds
{

typedef std::function<void()> TCallbackFunction;

// Function that is used to unregister types from the DomainParticipant.
// Types are automatically registered when you create the topic, and unregistered at shutdown.
typedef DDS_ReturnCode_t (*unregister_fn)( DDSDomainParticipant *, const char * );

// UnregisterInfo:
// This structure maintains a mapping between a data type and its unregister
// function, which can be used at shutdown when cleaning up the the
// DomainParticipant and all of its registered data types.
struct UnregisterInfo
{
  std::string typeName;
  unregister_fn unregisterFunction;
};

// Typedef for an unregister map
typedef std::map<std::string, UnregisterInfo> TUnregisterMap;

}
