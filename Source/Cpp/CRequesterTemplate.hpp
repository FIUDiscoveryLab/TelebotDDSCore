#pragma once

// Includes
#include <ndds/ndds_requestreply_cpp.h>

#include "DDSUtil.h"
#include <stdexcept>

namespace aeondds
{

template <class RequestType, class ReplyType> class CRequester
{
public:
	// Static factory function
	static CRequester<RequestType, ReplyType>* CreateRequester( DDS::DomainParticipant *participantIn, std::string serviceNameIn );
	static CRequester<RequestType, ReplyType>* CreateRequester( DDS::Subscriber *subscriberIn, DDS::Publisher *publisherIn, std::string serviceNameIn );
	static CRequester<RequestType, ReplyType>* CreateRequester( const connext::RequesterParams &paramsIn );

	// Pointers
	connext::Requester<RequestType, ReplyType> *m_pRequester;

	// Methods
	CRequester();
	virtual ~CRequester();

	connext::LoanedSamples<ReplyType> WaitReadAllReplies( uint32_t waitDurationMillisecsIn );
	connext::LoanedSamples<ReplyType> WaitTakeAllReplies( uint32_t waitDurationMillisecsIn );
	bool TryTakeAllReplies( connext::LoanedSamples<ReplyType> &replySamplesOut );
	void SendRequest( const RequestType &requestIn );
};

template <class RequestType, class ReplyType>
CRequester<RequestType, ReplyType>::CRequester()
{
	m_pRequester = nullptr;
}

template <class RequestType, class ReplyType>
CRequester<RequestType, ReplyType>::~CRequester()
{

}

// Default creation method
template <class RequestType, class ReplyType>
CRequester<RequestType, ReplyType>* CRequester<RequestType, ReplyType>::CreateRequester( DDS::DomainParticipant *participantIn, std::string serviceNameIn )
{
	// Attempt to create a requester with the supplied parameters
	try
	{
		connext::Requester<RequestType, ReplyType> *requester =	new connext::Requester<RequestType, ReplyType>( participantIn, serviceNameIn.c_str() );

		// Create CRequester and set its internal requester pointer
		CRequester<RequestType, ReplyType> *requesterOut = new CRequester<RequestType, ReplyType>();

		requesterOut->m_pRequester = requester;

		// Successfully created requester
		return requesterOut;
	}
	catch( std::exception &ex )
	{
		LOG( ERROR ) << "Error creating Requester: " << ex.what();
		return nullptr;
	}
}

// Creation by specifying any parameters you want
template <class RequestType, class ReplyType>
CRequester<RequestType, ReplyType>* CRequester<RequestType, ReplyType>::CreateRequester( const connext::RequesterParams &paramsIn )
{
	// Attempt to create a requester with the supplied parameters
	try
	{
		connext::Requester<RequestType, ReplyType> *requester =	new connext::Requester<RequestType, ReplyType>( paramsIn );

		// Create CRequester and set its internal requester pointer
		CRequester<RequestType, ReplyType> *requesterOut = new CRequester<RequestType, ReplyType>();

		requesterOut->m_pRequester = requester;

		// Successfully created requester
		return requesterOut;
	}
	catch( std::exception &ex )
	{
		LOG( ERROR ) << "Error creating Requester: " << ex.what();
		return nullptr;
	}
}

//
template <class RequestType, class ReplyType>
CRequester<RequestType, ReplyType>* CRequester<RequestType, ReplyType>::CreateRequester( DDS::Subscriber *subscriberIn, DDS::Publisher *publisherIn, std::string serviceNameIn )
{
	// Attempt to create a requester with the supplied parameters
	try
	{
		connext::RequesterParams params( subscriberIn->get_participant() );
		params.service_name( serviceNameIn );
		params.subscriber( subscriberIn );
		params.publisher( publisherIn );

		connext::Requester<RequestType, ReplyType> *requester =	new connext::Requester<RequestType, ReplyType>( params );

		// Create CRequester and set its internal requester pointer
		CRequester<RequestType, ReplyType> *requesterOut = new CRequester<RequestType, ReplyType>();

		requesterOut->m_pRequester = requester;

		// Successfully created requester
		return requesterOut;
	}
	catch( std::exception &ex )
	{
		LOG( ERROR ) << "Error creating Requester: " << ex.what();
		return nullptr;
	}
}

template <class RequestType, class ReplyType>
connext::LoanedSamples<ReplyType> CRequester<RequestType, ReplyType>::WaitReadAllReplies( uint32_t waitDurationMillisecsIn )
{
	return m_pRequester->read_replies();
}

template <class RequestType, class ReplyType>
connext::LoanedSamples<ReplyType> CRequester<RequestType, ReplyType>::WaitTakeAllReplies( uint32_t waitDurationMillisecsIn )
{
	// Wait for and take any replies received from the middleware queue
	return m_pRequester->receive_replies( DDS::Duration_t::from_millis( waitDurationMillisecsIn ) );
}

template <class RequestType, class ReplyType>
bool CRequester<RequestType, ReplyType>::TryTakeAllReplies( connext::LoanedSamples<ReplyType> &replySamplesOut )
{
	// TODO
	return false;
}

template <class RequestType, class ReplyType>
void CRequester<RequestType, ReplyType>::SendRequest( const RequestType &requestIn )
{
	m_pRequester->send_request( requestIn );
}


}
