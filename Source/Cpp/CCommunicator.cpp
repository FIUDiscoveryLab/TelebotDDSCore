/*********************************************************************************************
(c) 2005-2013 Copyright, Real-Time Innovations, Inc.  All rights reserved.    	                             
RTI grants Licensee a license to use, modify, compile, and create derivative works 
of the Software.  Licensee has the right to distribute object form only for use with RTI 
products.  The Software is provided �as is�, with no warranty of any type, including 
any warranty for fitness for any purpose. RTI is under no obligation to maintain or 
support the Software.  RTI shall not be liable for any incidental or consequential 
damages arising out of the use or inability to use the software.
**********************************************************************************************/
#include "CCommunicator.h"

using namespace DDS;
using namespace aeondds;

CCommunicator::CCommunicator() : m_pParticipant( nullptr )
{

}

CCommunicator::~CCommunicator() 
{
}

void CCommunicator::Cleanup()
{
	// This needs to be called on ALL communicators existing in the program before the communicator is destroyed

	LOG( INFO ) << "Cleaning up communicator...";

	if( m_pParticipant != nullptr )
	{
		// Delete DataWriters, DataReaders, Topics, Subscribers, and Publishers created by this DomainParticipant.
		m_pParticipant->delete_contained_entities();

		// Unregister all the data types registered with this DomainParticipant
		for( std::map<std::string, UnregisterInfo>::iterator it = m_mapTypeCleanupFunctions.begin(); it != m_mapTypeCleanupFunctions.end(); it++ )
		{
			(*it).second.unregisterFunction( m_pParticipant, (*it).first.c_str() );
		}

		// Delete the DomainParticipant
		TheParticipantFactory->delete_participant( m_pParticipant );
	}

	LOG( INFO ) << "Communicator cleaned up.";
}

// --- Creating a DomainParticipant --- 

// A DomainParticipant starts the DDS discovery process.  It creates
// several threads, sends and receives discovery information over one or 
// more transports, and maintains an in-memory discovery database of 
// remote DomainParticipants, remote DataWriters, and remote DataReaders

// Quality of Service can be applied on the level of the DomainParticipant.  
// This QoS controls the characteristics of:	
// 1. Transport properties such as which type of network (UDPv4, UDPv6, 
//    shared memory) or which network interfaces it is allowed to use
// 2. Which applications this discovers.  By default, apps will discover
//    other DDS applications over multicast, loopback, and shared memory.
// 3. Resource limits for the DomainParticipant
//
// For more information on participant QoS, see the USER_QOS_PROFILES.xml
// file

// ------------------------------------------------------------------------- //
// Creating a DomainParticipant with a specified domain ID  
DomainParticipant* CCommunicator::CreateParticipant( long domainIn )
{
	m_pParticipant = TheParticipantFactory->create_participant( domainIn, PARTICIPANT_QOS_DEFAULT, nullptr, STATUS_MASK_NONE );

	// Check for failure
	if( m_pParticipant == nullptr )
	{
		LOG( ERROR ) << "DDS CreateParticipant(): Failed to create DomainParticipant object.";
	} 

	return m_pParticipant;
}

// ------------------------------------------------------------------------- //
// Creating a DomainParticipant with a domain ID of zero
DomainParticipant* CCommunicator::CreateParticipant() 
{
	m_pParticipant = TheParticipantFactory->create_participant( 0, PARTICIPANT_QOS_DEFAULT, nullptr, STATUS_MASK_NONE );

	// Check for failure
	if( m_pParticipant == nullptr )
	{
		LOG( ERROR ) << "DDS CreateParticipant(): Failed to create DomainParticipant object.";
	} 

	return m_pParticipant;
}


DDS::DomainParticipant* CCommunicator::GetParticipant()
{
	return m_pParticipant;
}

// ------------------------------------------------------------------------- //
// Creating a DomainParticipant with a specified domain ID and specified QoS 
DomainParticipant* CCommunicator::CreateParticipant(
	long domain, 
	const std::string &participantQosLibrary, 
	const std::string &participantQosProfile )
{
	m_pParticipant = 
		TheParticipantFactory->create_participant_with_profile(
									domain, 
									participantQosLibrary.c_str(), 
									participantQosProfile.c_str(), 
									nullptr,
									STATUS_MASK_NONE);

	if( m_pParticipant == nullptr )
	{
		LOG( ERROR ) << "DDS CreateParticipant(): Failed to create DomainParticipant object";
	} 

	return m_pParticipant;
}


// ------------------------------------------------------------------------- //
// Creating a DomainParticipant with a specified domain ID, specified QoS file names, and specified QoS
DomainParticipant* CCommunicator::CreateParticipant(
	long domain,
	std::vector<std::string>fileNames, 
	const std::string &participantQosLibrary, 
	const std::string &participantQosProfile )
{

	// Adding a list of explicit file names to the DomainParticipantFactory. This gives the middleware a set of places to search for the files
	DomainParticipantFactoryQos factoryQos;
	TheParticipantFactory->get_qos( factoryQos );

	// Resize the FactoryQos to be able to hold all of the specified files
	factoryQos.profile.url_profile.ensure_length( fileNames.size(), fileNames.size() );

	// Copy the filenames to the factory
	for( unsigned int i = 0; i < fileNames.size(); i++ )
	{
		// Note that we copy the file names here, so they cannot go out of scope
		factoryQos.profile.url_profile[ i ] = DDS_String_dup( fileNames[i].c_str() );
	}

	// Set the QOS for the participant factory to include all of the loaded files
	ReturnCode_t retcode = TheParticipantFactory->set_qos( factoryQos );
		
	if( retcode != RETCODE_OK )
	{
		LOG( ERROR ) << "DDS CreateParticipant(): set_qos() failed.";
		return nullptr;
	}

	// Create the domain participant with the specified QOS profile
	m_pParticipant = TheParticipantFactory->create_participant_with_profile(
									domain, 
									participantQosLibrary.c_str(), 
									participantQosProfile.c_str(), 
									nullptr,
									STATUS_MASK_NONE);

	if( m_pParticipant == nullptr )
	{
		LOG( ERROR ) << "DDS CreateParticipant(): Failed to create DomainParticipant object";
	} 

	return m_pParticipant;

}


// Creating a Publisher object.  This is used to create type-specific DataWriter objects in the application
Publisher* CCommunicator::CreatePublisher()
{
	if( GetParticipant() == nullptr )
	{
		LOG( ERROR ) << "DDS CreatePublisher(): DomainParticipant null - communicator not properly initialized.";
		return nullptr;
	}

	Publisher *publisher = nullptr;

	// Creating a Publisher. This object is used to create type-specific DataWriter objects that can actually send data.
	publisher = GetParticipant()->create_publisher( PUBLISHER_QOS_DEFAULT, nullptr, STATUS_MASK_NONE );

	if( publisher == nullptr )
	{
		LOG( ERROR ) << "DDS CreatePublisher(): Failed to create publisher";
	}
	else
	{
		m_pPublishers.push_back( publisher );
	}

	return publisher;
}

// ------------------------------------------------------------------------- //
// Creating a Publisher object with specified QoS.  This is used to create type-specific DataWriter objects in the application
Publisher* CCommunicator::CreatePublisher( const std::string &qosLibrary, const std::string &qosProfile )
{
	if( GetParticipant() == nullptr )
	{
		LOG( ERROR ) << "DDS CreatePublisher(): DomainParticipant null - communicator not properly initialized.";
		return nullptr;
	}

	Publisher *publisher = nullptr;

	// Creating a Publisher. This object is used to create type-specific DataWriter objects that can actually send data.
	publisher = GetParticipant()->create_publisher_with_profile( qosLibrary.c_str(), qosProfile.c_str(), nullptr, STATUS_MASK_NONE );

	if( publisher == nullptr )
	{
		LOG( ERROR ) << "DDS CreatePublisher(): Failed to create publisher";
	}
	else
	{
		m_pPublishers.push_back( publisher );
	}

	return publisher;
}


// ------------------------------------------------------------------------- //
// Creating a Subscriber object.  This is used to create type-specific 
// DataReader objects in the application
Subscriber* CCommunicator::CreateSubscriber()
{
	if( GetParticipant() == nullptr )
	{
		LOG( ERROR ) << "DDS CreateSubscriber(): DomainParticipant null - communicator not properly initialized.";
		return nullptr;
	}

	Subscriber *subscriber = nullptr;

	// Creating a Subscriber. This object is used to create type-specific DataReader objects that can actually send data.
	subscriber = GetParticipant()->create_subscriber( SUBSCRIBER_QOS_DEFAULT, nullptr, STATUS_MASK_NONE );

	if( subscriber == nullptr )
	{
		LOG( ERROR ) << "DDS CreateSubscriber(): Failed to create subscriber";
	}
	else
	{
		m_pSubscribers.push_back( subscriber );
	}

	return subscriber;
}

// ------------------------------------------------------------------------- //
// Creating a Subscriber object with specified QoS.  This is used to create type-specific DataReader objects in the application
Subscriber* CCommunicator::CreateSubscriber( const std::string &qosLibrary, const std::string &qosProfile )
{
	if( GetParticipant() == nullptr )
	{
		LOG( ERROR ) << "DDS CreateSubscriber(): DomainParticipant null - communicator not properly initialized.";
		return nullptr;
	}

	Subscriber *subscriber = nullptr;

	// Creating a Subscriber. This object is used to create type-specific DataReader objects that can actually send data.
	subscriber = GetParticipant()->create_subscriber_with_profile( qosLibrary.c_str(), qosProfile.c_str(), nullptr, STATUS_MASK_NONE );

	if( subscriber == nullptr )
	{
		LOG( ERROR ) << "DDS CreateSubscriber(): Failed to create subscriber";
	}
	else
	{
		m_pSubscribers.push_back( subscriber );
	}

	return subscriber;

}


