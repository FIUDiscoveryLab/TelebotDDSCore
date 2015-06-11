#pragma once

// Includes
#include <ndds/ndds_requestreply_cpp.h>

#include "DDSUtil.h"
#include <stdexcept>

namespace aeondds
{

template <class RequestType, class ReplyType> class CReplier
{
public:
	// Static factory function
	static CReplier<RequestType, ReplyType>* CreateReplier( DDS::DomainParticipant *participantIn, std::string serviceNameIn );
	static CReplier<RequestType, ReplyType>* CreateReplier( DDS::Subscriber *subscriberIn, DDS::Publisher *publisherIn, std::string serviceNameIn );
	static CReplier<RequestType, ReplyType>* CreateReplier( const connext::ReplierParams<RequestType, ReplyType> &paramsIn );

	// Pointers
	connext::Replier<RequestType, ReplyType> *m_pReplier;

	// Methods
	CReplier();
	virtual ~CReplier();

	connext::LoanedSamples<RequestType> WaitReadAllRequests( uint32_t waitDurationMillisecsIn );
	connext::LoanedSamples<RequestType> WaitTakeAllRequests( uint32_t waitDurationMillisecsIn );
	bool TryTakeAllRequests( connext::LoanedSamples<RequestType> &samplesOut );
	void SendReply( const connext::SampleIdentity_t &requestIdentityIn, const ReplyType &replyIn );
};

template <class RequestType, class ReplyType>
CReplier<RequestType, ReplyType>::CReplier()
{
	m_pReplier = nullptr;
}

template <class RequestType, class ReplyType>
CReplier<RequestType, ReplyType>::~CReplier()
{

}

// Default creation method
template <class RequestType, class ReplyType>
CReplier<RequestType, ReplyType>* CReplier<RequestType, ReplyType>::CreateReplier( DDS::DomainParticipant *participantIn, std::string serviceNameIn )
{
	// Attempt to create a replier with the supplied parameters
	try
	{
		connext::Replier<RequestType, ReplyType> *replier =	new connext::Replier<RequestType, ReplyType>( participantIn, serviceNameIn.c_str() );

		// Create CReplier and set its internal replier pointer
		CReplier<RequestType, ReplyType> *replierOut = new CReplier<RequestType, ReplyType>();

		replierOut->m_pReplier = replier;

		// Successfully created requester
		return replierOut;
	}
	catch( std::exception &ex )
	{
		LOG( ERROR ) << "Error creating Replier: " << ex.what();
		return nullptr;
	}
}

// Creation by specifying any parameters you want
template <class RequestType, class ReplyType>
CReplier<RequestType, ReplyType>* CReplier<RequestType, ReplyType>::CreateReplier( const connext::ReplierParams<RequestType, ReplyType> &paramsIn )
{
	// Attempt to create a replier with the supplied parameters
	try
	{
		connext::Replier<RequestType, ReplyType> *replier =	new connext::Replier<RequestType, ReplyType>( paramsIn );

		// Create CReplier and set its internal replier pointer
		CReplier<RequestType, ReplyType> *replierOut = new CReplier<RequestType, ReplyType>();

		replierOut->m_pReplier = replier;

		// Successfully created requester
		return replierOut;
	}
	catch( std::exception &ex )
	{
		LOG( ERROR ) << "Error creating Replier: " << ex.what();
		return nullptr;
	}
}

//
template <class RequestType, class ReplyType>
CReplier<RequestType, ReplyType>* CReplier<RequestType, ReplyType>::CreateReplier( DDS::Subscriber *subscriberIn, DDS::Publisher *publisherIn, std::string serviceNameIn )
{
	// Attempt to create a replier with the supplied parameters
	try
	{
		connext::ReplierParams<RequestType, ReplyType> params( subscriberIn->get_participant() );
		params.service_name( serviceNameIn );
		params.subscriber( subscriberIn );
		params.publisher( publisherIn );

		connext::Replier<RequestType, ReplyType> *replier =	new connext::Replier<RequestType, ReplyType>( params );

		// Create CReplier and set its internal replier pointer
		CReplier<RequestType, ReplyType> *replierOut = new CReplier<RequestType, ReplyType>();

		replierOut->m_pReplier = replier;

		// Successfully created requester
		return replierOut;
	}
	catch( std::exception &ex )
	{
		LOG( ERROR ) << "Error creating Replier: " << ex.what();
		return nullptr;
	}
}

template <class RequestType, class ReplyType>
connext::LoanedSamples<RequestType> CReplier<RequestType, ReplyType>::WaitTakeAllRequests( uint32_t waitDurationMillisecsIn )
{
	// Wait for and take any requests received from the middleware queue
	return m_pReplier->receive_requests( DDS::Duration_t::from_millis( waitDurationMillisecsIn ) );
}

template <class RequestType, class ReplyType>
void CReplier<RequestType, ReplyType>::SendReply( const connext::SampleIdentity_t &requestIdentityIn, const ReplyType &replyIn )
{
	// Send the reply associated with the specified request identity
	m_pReplier->send_reply( replyIn, requestIdentityIn );
}

}
