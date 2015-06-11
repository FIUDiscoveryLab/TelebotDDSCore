#pragma once

// Includes
#include "CReaderListener.hpp"

namespace aeondds
{

template <class Type> class CReader
{
public:
	// Static factory function
	static CReader<Type>* CreateReader( DDS::Subscriber *subscriberIn, DDS::Topic *topicIn, const std::string &qosLibraryIn, const std::string &qosProfileIn );

	// Pointers
	typename Type::DataReader *m_pReader;

	// Attributes
	CReaderListener	m_listener;
	DDS::StatusMask m_statusMask;

	// Methods
	CReader();
	virtual ~CReader();

	bool Exists();
	bool TakeLatest( Type &messageOut );
	void SetStatusMask( DDS::StatusMask maskIn );
};

template <class Type>
CReader<Type>* CReader<Type>::CreateReader( DDS::Subscriber *subscriberIn, DDS::Topic *topicIn, const std::string &qosLibraryIn = DEFAULT_QOS_LIBRARY, const std::string &qosProfileIn = DEFAULT_QOS_PROFILE )
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

	DDS::DataReader *dataReader = subscriberIn->create_datareader( topicIn, readerQos, nullptr, DDS::STATUS_MASK_NONE );

	if( dataReader == nullptr )
	{
		LOG( ERROR ) << "CreateReader(): Failure to create reader. Inconsistent Qos?";
		return nullptr;
	}

	typename Type::DataReader *narrowedReader = Type::DataReader::narrow( dataReader );

	if( !narrowedReader )
	{
		LOG( ERROR ) << "Error Creating Reader: Unknown error.";
		return nullptr;
	}

	// Create a new CReader
	CReader<Type> *reader = new CReader<Type>();

	// Set its data reader to the one we created
	reader->m_pReader = narrowedReader;

	// Set the listener for the reader, by default doesn't act on anything
	reader->m_pReader->set_listener( &reader->m_listener, reader->m_statusMask );

	return reader;
}

template <class Type>
CReader<Type>::CReader()
{
	// Init pointers
	m_pReader 			= nullptr;

	// Init attributes
	m_statusMask 		= DDS::STATUS_MASK_NONE;
}

template <class Type>
CReader<Type>::~CReader()
{

}

template <class Type>
bool CReader<Type>::Exists()
{
	return ( m_pReader != nullptr );
}

template <class Type>
bool CReader<Type>::TakeLatest( Type& messageOut )
{
	if( !m_pReader )
	{
		LOG( ERROR ) << "Take(): Reader not properly initialized!";
		return false;
	}

	typename Type::Seq seq;
	DDS::SampleInfoSeq infoSeq;

	m_pReader->take( seq, infoSeq );

	// Make sure there is data before trying to read
	if( seq.length() != 0 )
	{
		size_t lastElement = seq.length() - 1;

		if( infoSeq[ lastElement ].valid_data )
		{
			messageOut = seq[ lastElement ];
			m_pReader->return_loan( seq, infoSeq );
			return true;
		}
		else
		{
			m_pReader->return_loan( seq, infoSeq );
			return false;
		}
	}
	else
	{
		m_pReader->return_loan( seq, infoSeq );
		return false;
	}
}

template <class Type>
void CReader<Type>::SetStatusMask( DDS::StatusMask maskIn )
{
	if( !m_pReader )
	{
		LOG( ERROR ) << "SetStatusMask(): Reader not properly initialized!";
		return;
	}

	// Set the status mask
	m_statusMask = maskIn;

	// Apply the mask
	m_pReader->set_listener( &m_listener, m_statusMask );
}

}
