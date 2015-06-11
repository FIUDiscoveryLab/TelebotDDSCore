#pragma once

// Includes
#include "CWriterListener.hpp"

namespace aeondds
{

template <class Type> class CWriter
{
public:
	// Static factory function
	static CWriter<Type>* CreateWriter( DDS::Publisher *publisherIn, DDS::Topic *topicIn, const std::string &qosLibraryIn, const std::string &qosProfileIn );

	// Pointers
	typename Type::DataWriter *m_pWriter;

	// Attributes
	CWriterListener	m_listener;
	DDS::StatusMask m_statusMask;

	// Methods
	CWriter();
	virtual ~CWriter();

	bool Exists();
	void Write( const Type &messageIn );
	void SetStatusMask( DDS::StatusMask maskIn );
};


template <class Type>
CWriter<Type>* CWriter<Type>::CreateWriter( DDS::Publisher *publisherIn, DDS::Topic *topicIn, const std::string &qosLibraryIn = DEFAULT_QOS_LIBRARY, const std::string &qosProfileIn = DEFAULT_QOS_PROFILE )
{
	// Make sure publisher exists
	if( publisherIn == nullptr )
	{
		LOG( ERROR ) << "Publisher does not exist.";
		return nullptr;
	}

	// Make sure topic exists
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

	DDS::DataWriter *dataWriter = publisherIn->create_datawriter( topicIn, writerQos, nullptr, DDS::STATUS_MASK_NONE );

	if( dataWriter == nullptr )
	{
		LOG( ERROR ) << "CreateWriter(): Failure to create writer. Inconsistent Qos?";
		return nullptr;
	}

	typename Type::DataWriter *narrowedWriter = Type::DataWriter::narrow( dataWriter );

	if( !narrowedWriter )
	{
		LOG( ERROR ) << "Error Creating Writer: Unknown error.";
		return nullptr;
	}

	// Create a new CWriter
	CWriter<Type> *writer = new CWriter<Type>();

	// Set its data writer to the one we created
	writer->m_pWriter = narrowedWriter;

	// Set the listener for the writer, by default doesn't act on anything
	writer->m_pWriter->set_listener( &writer->m_listener, writer->m_statusMask );

	return writer;
}


template <class Type>
CWriter<Type>::CWriter()
{
	// Init pointers
	m_pWriter = nullptr;

	// Init attributes
	m_statusMask = DDS::STATUS_MASK_NONE;
}

template <class Type>
CWriter<Type>::~CWriter()
{

}

template <class Type>
bool CWriter<Type>::Exists()
{
	return ( m_pWriter != nullptr );
}

template <class Type>
void CWriter<Type>::Write( const Type &messageIn )
{
	if( !m_pWriter )
	{
		LOG( ERROR ) << "Writer not properly initialized!";
		return;
	}

	// Register instance handle
	DDS::InstanceHandle_t handle = m_pWriter->register_instance( messageIn );

	m_pWriter->write( messageIn, handle );
}

template <class Type>
void CWriter<Type>::SetStatusMask( DDS::StatusMask maskIn )
{
	if( !m_pWriter )
	{
		LOG( ERROR ) << "SetStatusMask(): Reader not properly initialized!";
		return;
	}

	// Set the status mask
	m_statusMask = maskIn;

	// Apply the mask
	m_pWriter->set_listener( &m_listener, m_statusMask );
}

}
