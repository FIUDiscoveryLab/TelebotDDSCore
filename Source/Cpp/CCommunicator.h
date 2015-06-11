#pragma once

// Includes
#include "DDSUtil.h"
#include "CWriterTemplate.hpp"
#include "CReaderTemplate.hpp"
#include "CRequesterTemplate.hpp"
#include "CReplierTemplate.hpp"

namespace aeondds
{

// DDSCommunicator:
// This class is used by all RTI Connext DDS interfaces to create the core
// communication objects, such as a DomainParticipant, Publisher and/or Subscriber.
class CCommunicator 
{

public:
	// Methods
	CCommunicator();
	~CCommunicator();

	// Creates a DomainParticipant with default QoS in domain 0
	DDS::DomainParticipant* CreateParticipant();
	DDS::DomainParticipant* CreateParticipant( long domain );
	DDS::DomainParticipant* CreateParticipant( long domain, const std::string &participantQosLibrary, const std::string &participantQosProfile );
	DDS::DomainParticipant* CreateParticipant( long domain, std::vector<std::string>fileNames, const std::string &participantQosLibrary, const std::string &participantQosProfile ) ;

	// Returns the DomainParticipant created by the Communicator.
	DDS::DomainParticipant* GetParticipant();

	// Create a Publisher with default QoS
	DDS::Publisher* CreatePublisher();
	DDS::Publisher* CreatePublisher( const std::string &qosLibrary, const std::string &qosProfile );

	// Create a Subscriber with default QoS
	DDS::Subscriber* CreateSubscriber();
	DDS::Subscriber* CreateSubscriber( const std::string &qosLibrary, const std::string &qosProfile );

	// Create Reader
	// Create Writer

	void Cleanup();

	// Creates a Topic.  Templatized with the type name to allow storage and deletion of the data type at shutdown.
	template <typename T>
	DDS::Topic *CreateTopic( std::string topicName )
	{
		// Get the type name of the specified message type
		const char *typeName = T::TypeSupport::get_type_name();

		// Register the data type with the DomainParticipant - this tells the DomainParticipant how to create/destroy/serialize/deserialize this data type.
		DDS_ReturnCode_t retcode = T::TypeSupport::register_type( GetParticipant(), typeName );

		// Check to see if
		if( retcode != DDS_RETCODE_OK )
		{
			std::stringstream errss;
			LOG( ERROR ) << "DDS CreateTopic(): Failure to register type. Registered the same topic type+name twice?";
			return nullptr;
		}

		// Create the Topic object, using the associated data type that was registered above.
		DDS::Topic *topic = GetParticipant()->create_topic( topicName.c_str(), typeName, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE );

		if( topic == NULL )
		{
			std::stringstream errss;
			LOG( ERROR ) << "DDS CreateTopic(): Failure to register type. Registered twice?";
			return nullptr;
		}

		// Save the type unregister information for a clean shutdown.  This is not strictly necessary, but prevents what looks like a memory leak at shutdown.
		UnregisterInfo unregisterInfo;
		unregisterInfo.typeName 				= typeName;
		unregisterInfo.unregisterFunction 		= T::TypeSupport::unregister_type;
		m_mapTypeCleanupFunctions[ typeName ] 	= unregisterInfo;

		return topic;
	}

	// Creates a DataReader of the specified type
	template <typename T>
	DDS::DataReader *CreateReader( DDS::Subscriber *subscriberIn, DDS::Topic *topicIn, const std::string &qosLibraryIn, const std::string &qosProfileIn, DDS::DataReaderListener *listenerIn )
	{
		// Make sure subscriber exists
		if( subscriberIn == nullptr )
		{
			LOG( ERROR ) << "Subscriber does not exist.";
			return nullptr;
		}

		if( topicIn == nullptr )
		{
			LOG( ERROR ) << "Topic does not exist.";
			return nullptr;
		}

		DDS::DataReaderQos readerQos;

		// Fetch the qos policy for this reader
		int retcode = TheParticipantFactory->get_datareader_qos_from_profile( readerQos, qosLibraryIn.c_str(), qosProfileIn.c_str() );

		if( retcode != DDS::RETCODE_OK )
		{
			LOG( ERROR ) << "CreateReader(): Failure to get reader Qos. Bad names?";
			return nullptr;
		}

		readerQos.resource_limits.max_instances 	= 128;
		readerQos.resource_limits.max_samples 		= 128;

		LOG( INFO ) << "Creating data reader.";

		DDS::DataReader *reader = subscriberIn->create_datareader( topicIn, readerQos, listenerIn, DDS::STATUS_MASK_NONE );


		if( reader == nullptr )
		{
			LOG( ERROR ) << "CreateReader(): Failure to create reader. Inconsistent Qos?";
		}

		return reader;
	}

	// Creates a DataWriter of the specified type
	template <typename T>
	DDS::DataWriter *CreateWriter( DDS::Publisher *publisherIn, DDS::Topic *topicIn, std::string qosLibraryIn, std::string qosProfileIn )
	{
		// Make sure publisher exists
		if( publisherIn == nullptr )
		{
			LOG( ERROR ) << "Publisher does not exist.";
			return nullptr;
		}

		if( topicIn == nullptr )
		{
			LOG( ERROR ) << "Topic does not exist.";
			return nullptr;
		}

		DDS::DataWriterQos writerQos;

		// Fetch the qos policy for this writer
		int retcode = TheParticipantFactory->get_datawriter_qos_from_profile( writerQos, qosLibraryIn.c_str(), qosProfileIn.c_str() );

		if( retcode != DDS::RETCODE_OK )
		{
			LOG( ERROR ) << "CreateWriter(): Failure to get writer Qos. Bad names?";
			return nullptr;
		}

		writerQos.resource_limits.max_instances 	= 128;
		writerQos.resource_limits.max_samples 		= 128;

		DDS::DataWriter *writer = publisherIn->create_datawriter( topicIn, writerQos, nullptr, DDS::STATUS_MASK_NONE );


		if( writer == nullptr )
		{
			LOG( ERROR ) << "CreateWriter(): Failure to create writer. Inconsistent Qos?";
		}

		return writer;
	}

private:
	// Attributes
	DDS::DomainParticipant* m_pParticipant;

	// For keeping track of created publishers and subscribers
	std::vector<DDS::Publisher*> m_pPublishers;
	std::vector<DDS::Subscriber*> m_pSubscribers;

	// Map between type names and unregistration functions. This cleans up a small amount of memory that would otherwise appear as a memory leak at shutdown.
	TUnregisterMap m_mapTypeCleanupFunctions;
};

}
