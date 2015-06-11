#pragma once

// Includes
#include "DDSUtil.h"

namespace aeondds
{

enum EReaderListenerCallbacks
{
	OnRequestedDeadlineMissed = 0,
	OnRequestedIncompatibleQos,
	OnSampleRejected,
	OnLivelinessChanged,
	OnSampleLost,
	OnSubscriptionMatched,
	OnDataAvailable
};

const unsigned int NUMBER_OF_READERLISTENER_CALLBACKS = 7;

class CReaderListener : public DDS::DataReaderListener
{
public:
	// Pointers
	std::array<TCallbackFunction, NUMBER_OF_READERLISTENER_CALLBACKS> m_pCallbacks;

	// Methods
	CReaderListener() : DDS::DataReaderListener()
	{
	}

	virtual ~CReaderListener()
	{
	}

	void RegisterCallback( TCallbackFunction callbackIn, EReaderListenerCallbacks callbackTypeIn )
	{
		m_pCallbacks[ callbackTypeIn ] = callbackIn;
	}

	void UnregisterCallback( EReaderListenerCallbacks callbackTypeIn )
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

	// DataReaderListener callbacks
    virtual void on_requested_deadline_missed( DDS::DataReader*, const DDS::RequestedDeadlineMissedStatus& )
    {
    	if( m_pCallbacks[ EReaderListenerCallbacks::OnRequestedDeadlineMissed ] )
		{
			m_pCallbacks[ EReaderListenerCallbacks::OnRequestedDeadlineMissed ]();
		}
    }
    virtual void on_requested_incompatible_qos( DDS::DataReader*, const DDS::RequestedIncompatibleQosStatus& )
    {
    	if( m_pCallbacks[ EReaderListenerCallbacks::OnRequestedIncompatibleQos ] )
		{
			m_pCallbacks[ EReaderListenerCallbacks::OnRequestedIncompatibleQos ]();
		}
    }
    virtual void on_sample_rejected( DDS::DataReader*, const DDS::SampleRejectedStatus& )
    {
    	if( m_pCallbacks[ EReaderListenerCallbacks::OnSampleRejected ] )
		{
			m_pCallbacks[ EReaderListenerCallbacks::OnSampleRejected ]();
		}
    }
    virtual void on_liveliness_changed( DDS::DataReader*, const DDS::LivelinessChangedStatus& )
    {
    	if( m_pCallbacks[ EReaderListenerCallbacks::OnLivelinessChanged ] )
		{
			m_pCallbacks[ EReaderListenerCallbacks::OnLivelinessChanged ]();
		}
    }
    virtual void on_sample_lost( DDS::DataReader*, const DDS::SampleLostStatus& )
    {
    	if( m_pCallbacks[ EReaderListenerCallbacks::OnSampleLost ] )
		{
			m_pCallbacks[ EReaderListenerCallbacks::OnSampleLost ]();
		}
    }
    virtual void on_subscription_matched( DDS::DataReader*, const DDS::SubscriptionMatchedStatus& )
    {
    	if( m_pCallbacks[ EReaderListenerCallbacks::OnSubscriptionMatched ] )
		{
			m_pCallbacks[ EReaderListenerCallbacks::OnSubscriptionMatched ]();
		}
    }
    virtual void on_data_available( DDS::DataReader* reader )
    {
    	if( m_pCallbacks[ EReaderListenerCallbacks::OnDataAvailable ] )
    	{
    		m_pCallbacks[ EReaderListenerCallbacks::OnDataAvailable ]();
    	}
    }
};

}
