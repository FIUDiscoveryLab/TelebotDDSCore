#pragma once

// Includes
#include "DDSUtil.h"

namespace aeondds
{

enum EWriterListenerCallbacks
{
	OnOfferedDeadlineMissed = 0,
	OnLivelinessLost,
	OnOfferedIncompatibleQos,
	OnPublicationMatched,
	OnReliableWriterCacheChanged,
	OnReliableReaderActivityChanged
};

const unsigned int NUMBER_OF_WRITERLISTENER_CALLBACKS = 6;

class CWriterListener : public DDS::DataWriterListener
{
public:
	// Pointers
	std::array<aeondds::TCallbackFunction, NUMBER_OF_WRITERLISTENER_CALLBACKS> m_pCallbacks;

	// Methods
	CWriterListener() : DDS::DataWriterListener()
	{
	}

	virtual ~CWriterListener()
	{
	}

	void RegisterCallback( TCallbackFunction callbackIn, EWriterListenerCallbacks callbackTypeIn )
	{
		m_pCallbacks[ callbackTypeIn ] = callbackIn;
	}

	void UnregisterCallback( EWriterListenerCallbacks callbackTypeIn )
	{
		m_pCallbacks[ callbackTypeIn ] = nullptr;
	}

	void UnregisterAllCallbacks()
	{
		for( auto &callback : m_pCallbacks )
		{
			callback = nullptr;
		}
	}

	// Data writer listener callbacks
	virtual void on_offered_deadline_missed( DDSDataWriter* writer, const DDS::OfferedDeadlineMissedStatus& status )
	{
		if( m_pCallbacks[ EWriterListenerCallbacks::OnOfferedDeadlineMissed ] )
		{
			m_pCallbacks[ EWriterListenerCallbacks::OnOfferedDeadlineMissed ]();
		}
	}
	virtual void on_liveliness_lost( DDSDataWriter* writer, const DDS::LivelinessLostStatus& status )
	{
		if( m_pCallbacks[ EWriterListenerCallbacks::OnLivelinessLost ] )
		{
			m_pCallbacks[ EWriterListenerCallbacks::OnLivelinessLost ]();
		}
	}
	virtual void on_offered_incompatible_qos( DDSDataWriter* writer, const DDS::OfferedIncompatibleQosStatus& status )
	{
		if( m_pCallbacks[ EWriterListenerCallbacks::OnOfferedIncompatibleQos ] )
		{
			m_pCallbacks[ EWriterListenerCallbacks::OnOfferedIncompatibleQos ]();
		}
	}
	virtual void on_publication_matched( DDSDataWriter* writer, const DDS::PublicationMatchedStatus& status )
	{
		if( m_pCallbacks[ EWriterListenerCallbacks::OnPublicationMatched ] )
		{
			m_pCallbacks[ EWriterListenerCallbacks::OnPublicationMatched ]();
		}
	}
	virtual void on_reliable_writer_cache_changed( DDSDataWriter* writer, const DDS::ReliableWriterCacheChangedStatus& status )
	{
		if( m_pCallbacks[ EWriterListenerCallbacks::OnReliableWriterCacheChanged ] )
		{
			m_pCallbacks[ EWriterListenerCallbacks::OnReliableWriterCacheChanged ]();
		}
	}
	virtual void on_reliable_reader_activity_changed( DDSDataWriter* writer, const DDS::ReliableReaderActivityChangedStatus& status )
	{
		if( m_pCallbacks[ EWriterListenerCallbacks::OnReliableReaderActivityChanged ] )
		{
			m_pCallbacks[ EWriterListenerCallbacks::OnReliableReaderActivityChanged ]();
		}
	}

	// TODO: Not sure how or why these should be implemented
	//virtual void on_destination_unreachable( DDSDataWriter* writer, const DDS_InstanceHandle_t& handle, const DDS_Locator_t& destination );
	//virtual void* on_data_request( DDSDataWriter* writer, const DDS_Cookie_t& cookie );
	//virtual void on_data_return( DDSDataWriter* writer, void* instance_data, const DDS_Cookie_t& cookie );
	//virtual void on_sample_removed( DDSDataWriter* writer, const DDS_Cookie_t& cookie );
	//virtual void on_instance_replaced( DDSDataWriter* writer, const DDS_InstanceHandle_t& handle );
	//virtual void on_application_acknowledgment( DDSDataWriter* writer, const DDS_AcknowledgmentInfo& info );
};

}
