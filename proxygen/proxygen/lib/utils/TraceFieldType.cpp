// Copyright 2004-present Facebook. All Rights Reserved.
// ** AUTOGENERATED FILE. DO NOT HAND-EDIT **

#include "proxygen/lib/utils/TraceFieldType.h"

#include <stdexcept>

namespace proxygen { 

static const std::string kTraceFieldTypeErrorStage = "error_stage";
static const std::string kTraceFieldTypeError = "error_description";
static const std::string kTraceFieldTypeProxygenError = "proxygen_error";
static const std::string kTraceFieldTypeHTTPStatus = "http_status";
static const std::string kTraceFieldTypeDirectionError = "error_direction";
static const std::string kTraceFieldTypeCodecError = "codec_error";
static const std::string kTraceFieldTypeLastPingSentOffset = "last_ping_sent_time_offset";
static const std::string kTraceFieldTypeLastPingRecvOffset = "last_ping_recv_time_offset";
static const std::string kTraceFieldTypeRecentPingSentCount = "recent_ping_sent_count";
static const std::string kTraceFieldTypeRecentPingRecvCount = "recent_ping_recv_count";
static const std::string kTraceFieldTypeUri = "uri";
static const std::string kTraceFieldTypeIsSecure = "is_secure";
static const std::string kTraceFieldTypeUsingProxy = "using_proxy";
static const std::string kTraceFieldTypeStatusCode = "status_code";
static const std::string kTraceFieldTypeProtocol = "protocol";
static const std::string kTraceFieldTypeLocalAddr = "local_addr";
static const std::string kTraceFieldTypeLocalPort = "local_port";
static const std::string kTraceFieldTypeContentType = "content_type";
static const std::string kTraceFieldTypeUsingSpdy = "using_spdy";
static const std::string kTraceFieldTypeReqHeaderSize = "request_header_size";
static const std::string kTraceFieldTypeReqHeaderCompSize = "request_header_compressed_size";
static const std::string kTraceFieldTypeReqBodySize = "request_body_size";
static const std::string kTraceFieldTypeRspHeaderSize = "response_header_size";
static const std::string kTraceFieldTypeRspHeaderCompSize = "response_header_compressed_size";
static const std::string kTraceFieldTypeRedirectLocation = "redirect_location";
static const std::string kTraceFieldTypeNumRedirects = "num_redirects";
static const std::string kTraceFieldTypeRedirectResponseCode = "redirect_response_code";
static const std::string kTraceFieldTypeNumRetries = "num_retries";
static const std::string kTraceFieldTypePriorityChanges = "priority_changes";
static const std::string kTraceFieldTypeUsingHTTP2 = "using_http2";
static const std::string kTraceFieldTypeBodyGenerated = "body_generated";
static const std::string kTraceFieldTypeFirstBodyByteFlushed = "first_body_byte_flushed";
static const std::string kTraceFieldTypeLastBodyByteFlushed = "last_body_byte_flushed";
static const std::string kTraceFieldTypeHeaderGenerated = "header_generated";
static const std::string kTraceFieldTypeRspBodySize = "response_body_size";
static const std::string kTraceFieldTypeRspIntvlAvg = "response_interval_average";
static const std::string kTraceFieldTypeRspIntvlStdDev = "response_interval_stddev";
static const std::string kTraceFieldTypeRspNumOnBody = "response_number_on_body";
static const std::string kTraceFieldTypeServerQuality = "response_server_quality";
static const std::string kTraceFieldTypeServerRtt = "server_rtt";
static const std::string kTraceFieldTypeNewConnection = "new_connection";
static const std::string kTraceFieldTypeSessionManagerType = "sess_mgr_type";
static const std::string kTraceFieldTypeInFlightConns = "in_flight_conns";
static const std::string kTraceFieldTypeCachedSessions = "cached_sessions";
static const std::string kTraceFieldTypeConnsStarted = "conns_started";
static const std::string kTraceFieldTypeRequestsWaited = "requests_waited";
static const std::string kTraceFieldTypeTotalRequestsWaited = "total_requests_waited";
static const std::string kTraceFieldTypeTotalConnsStarted = "total_conns_started";
static const std::string kTraceFieldTypeSessionCacheHitType = "session_cache_hit_type";
static const std::string kTraceFieldTypeServerAddr = "server_address";
static const std::string kTraceFieldTypeServerPort = "server_port";
static const std::string kTraceFieldTypeCachedFamily = "cached_family";
static const std::string kTraceFieldTypeNewSession = "new_session";
static const std::string kTraceFieldTypeNumWaiting = "num_waiting";
static const std::string kTraceFieldTypeHostName = "host_name";
static const std::string kTraceFieldTypeIpAddr = "ip_address";
static const std::string kTraceFieldTypePort = "port";
static const std::string kTraceFieldTypeCNameRedirects = "cname_redirects";
static const std::string kTraceFieldTypeRedirectTime = "redirect_time";
static const std::string kTraceFieldTypeNumberResolvers = "number_resolvers";
static const std::string kTraceFieldTypeResolversSerialized = "resolvers_serialized";
static const std::string kTraceFieldTypeRequestFamily = "request_family";
static const std::string kTraceFieldTypeNumberAnswers = "number_answers";
static const std::string kTraceFieldTypeNumberRetries = "number_retries";
static const std::string kTraceFieldTypeResolvedSuccess = "resolved_success";
static const std::string kTraceFieldTypeDNSCacheHit = "dns_cache_hit";
static const std::string kTraceFieldTypeDNSCacheStale = "dns_cache_stale";
static const std::string kTraceFieldTypeDNSCacheInflight = "dns_cache_inflight";
static const std::string kTraceFieldTypeDNSCacheUseFallback = "dns_cache_fallback";
static const std::string kTraceFieldTypeTLSReused = "tls_reused";
static const std::string kTraceFieldTypeTLSCacheHit = "tls_cache_hit";
static const std::string kTraceFieldTypeCipherName = "cipher_name";
static const std::string kTraceFieldTypeTLSVersion = "ssl_version";
static const std::string kTraceFieldTypeOpenSSLVersion = "openssl_version";
static const std::string kTraceFieldTypeTLSCachePersistence = "tls_cache_persistence";
static const std::string kTraceFieldTypeCompressedSizeKey = "compressed_size";
static const std::string kTraceFieldTypeUncompressedSizeKey = "uncompressed_size";
static const std::string kTraceFieldTypeCompressionType = "compression_type";
static const std::string kTraceFieldTypeVerifiedSuccess = "verified_success";
static const std::string kTraceFieldTypeVerifiedChain = "verified_chain";
static const std::string kTraceFieldTypeVerifiedTime = "verified_time";
static const std::string kTraceFieldTypeVerifiedServerAddress = "verified_server_address";
static const std::string kTraceFieldTypeVerifiedProxyAddress = "verified_proxy_address";
static const std::string kTraceFieldTypeVerifiedError = "verified_error";
static const std::string kTraceFieldTypeVerifiedReason = "verified_reason";
static const std::string kTraceFieldTypeVerifiedHostname = "verified_hostname";
static const std::string kTraceFieldTypeVerifiedMatchedCommonName = "verified_matchedCommonName";
static const std::string kTraceFieldTypeVerifiedMatchedSubjectAltName = "verified_matchedSubjectAltName";
static const std::string kTraceFieldTypeVerifiedNameMatched = "verified_nameMatched";
static const std::string kTraceFieldTypeVerifiedHostnameFailMessage = "verified_hostnameFailMessage";
static const std::string kTraceFieldTypeVerifiedCertSuccess = "verified_cert_success";
static const std::string kTraceFieldTypePinningReason = "verified_pinning_reason";
static const std::string kTraceFieldTypePinningRequiredHash = "verified_pinning_required_hash";
static const std::string kTraceFieldTypePinningUserHash = "verified_pinning_user_hash";
static const std::string kTraceFieldTypePinningExcludedHash = "verified_pinning_excluded_hash";
static const std::string kTraceFieldTypePinningRequiredFound = "verified_pinning_required_found";
static const std::string kTraceFieldTypePinningUserInstalledFound = "verified_pinning_user_installed_found";
static const std::string kTraceFieldTypePinningUserInstalledCount = "verified_pinning_user_installed_count";
static const std::string kTraceFieldTypePinningExcludedFound = "verified_pinning_excluded_found";
static const std::string kTraceFieldTypePinningTimePin = "verified_pinning_time_pin";
static const std::string kTraceFieldTypePinningHost = "verified_pinning_host";
static const std::string kTraceFieldTypePinningSuccess = "verified_pinning_success";
static const std::string kTraceFieldTypeVerifiedTimeMerge = "verified_time_merge";
static const std::string kTraceFieldTypeRevokeReason = "verified_revoke_reason";
static const std::string kTraceFieldTypeRevokeSuccess = "verified_revoke_success";
static const std::string kTraceFieldTypeProxyHost = "proxy_host";
static const std::string kTraceFieldTypeProxyPort = "proxy_port";
static const std::string kTraceFieldTypeSchedulerType = "scheduler_type";
static const std::string kTraceFieldTypeInitialPriority = "initial_priority";
static const std::string kTraceFieldTypeSizeOfQueue = "size_of_queue";
static const std::string kTraceFieldTypePreviousState = "previous_state";
static const std::string kTraceFieldTypeCurrentState = "current_state";
static const std::string kTraceFieldTypeNetworkID = "network_id";
static const std::string kTraceFieldTypeNumConnAttempts = "number_conn_attempts";
static const std::string kTraceFieldTypeAttemptAddrs = "attempt_addresses";
static const std::string kTraceFieldTypeAttemptAddrFamily = "attempt_address_family";
static const std::string kTraceFieldTypeSucceededConnTime = "succeeded_conn_time";
static const std::string kTraceFieldTypeRequestID = "request_id";
static const std::string kTraceFieldTypeHumanReadableName = "human_readable_name";
static const std::string kTraceFieldTypeCurrentTransactions = "current_txns";
static const std::string kTraceFieldTypeHistoricalMaximumTransactions = "historical_max_txns";
static const std::string kTraceFieldTypePermittedMaximumTransactions = "permitted_max_txns";
static const std::string kTraceFieldTypeNumberTransactionsServed = "number_txns_served";
static const std::string kTraceFieldTypeTotalPingsSent = "total_pings_sent";
static const std::string kTraceFieldTypeTotalPingRepliesReceived = "total_ping_replies_received";
static const std::string kTraceFieldTypeLastPingTimeout = "last_ping_timeout";
static const std::string kTraceFieldTypeCwnd = "cwnd";
static const std::string kTraceFieldTypeCwndBytes = "cwnd_bytes";
static const std::string kTraceFieldTypeTotalRetx = "total_retx";
static const std::string kTraceFieldTypeInflightPacketLoss = "inflight_packet_loss";
static const std::string kTraceFieldTypeRTT = "rtt";
static const std::string kTraceFieldTypeRTTVar = "rtt_variance";
static const std::string kTraceFieldTypeRTO = "rto";
static const std::string kTraceFieldTypeMSS = "sending_mss";
static const std::string kTraceFieldTypeMTU = "mtu";
static const std::string kTraceFieldTypeRcvWnd = "recv_window";
static const std::string kTraceFieldTypeUpstreamCapacity = "upstream_capacity";
static const std::string kTraceFieldTypeReqsSucceed = "reqs_succeed";
static const std::string kTraceFieldTypeReqsFailed = "reqs_failed";
static const std::string kTraceFieldTypeTTFB = "ttfb";
static const std::string kTraceFieldTypeTTLB = "ttlb";
static const std::string kTraceFieldTypeConnIdleDuration = "connection_idle_duration";
static const std::string kTraceFieldTypeConnLifeSpan = "connection_life_span";
static const std::string kTraceFieldTypeEgressBuffered = "egress_buffered";
static const std::string kTraceFieldTypeSCFGCacheHit = "zero_scfg_cache_hit";
static const std::string kTraceFieldTypeInitialAppBytesWritten = "zero_initial_app_bytes_written";
static const std::string kTraceFieldTypeTimeToInitial = "zero_time_to_initial";
static const std::string kTraceFieldTypeSCFGExpired = "zero_scfg_expired";
static const std::string kTraceFieldTypeZeroVerifiedSuccess = "zero_verified_success";
static const std::string kTraceFieldTypeZeroVerifiedError = "zero_verified_error";
static const std::string kTraceFieldTypeMQTTConnAttempts = "mqtt_conn_attempts";
static const std::string kTraceFieldTypeIsForeground = "is_foreground";
static const std::string kTraceFieldTypeMQTTBytesWritten = "mqtt_bytes_written";
static const std::string kTraceFieldTypeMQTTBytesRead = "mqtt_bytes_read";
static const std::string kTraceFieldTypeRawBytesWritten = "raw_bytes_written";
static const std::string kTraceFieldTypeRawBytesRead = "raw_bytes_read";
static const std::string kTraceFieldTypeEventLoopTimeAvg = "event_loop_time_avg";
static const std::string kTraceFieldTypeMQTTMsgRemainingLength = "mqtt_msg_remaining_length";
static const std::string kTraceFieldTypeMsgType = "msg_type";
static const std::string kTraceFieldTypeIsMsgRecv = "is_msg_received";
static const std::string kTraceFieldTypeConnectReturnCode = "connect_return_code";
const std::string& getTraceFieldTypeString(TraceFieldType type) {
  static const std::string kTraceFieldTypeInvalidType = "";

  switch (type) {
    case TraceFieldType::ErrorStage : return kTraceFieldTypeErrorStage;
    case TraceFieldType::Error : return kTraceFieldTypeError;
    case TraceFieldType::ProxygenError : return kTraceFieldTypeProxygenError;
    case TraceFieldType::HTTPStatus : return kTraceFieldTypeHTTPStatus;
    case TraceFieldType::DirectionError : return kTraceFieldTypeDirectionError;
    case TraceFieldType::CodecError : return kTraceFieldTypeCodecError;
    case TraceFieldType::LastPingSentOffset : return kTraceFieldTypeLastPingSentOffset;
    case TraceFieldType::LastPingRecvOffset : return kTraceFieldTypeLastPingRecvOffset;
    case TraceFieldType::RecentPingSentCount : return kTraceFieldTypeRecentPingSentCount;
    case TraceFieldType::RecentPingRecvCount : return kTraceFieldTypeRecentPingRecvCount;
    case TraceFieldType::Uri : return kTraceFieldTypeUri;
    case TraceFieldType::IsSecure : return kTraceFieldTypeIsSecure;
    case TraceFieldType::UsingProxy : return kTraceFieldTypeUsingProxy;
    case TraceFieldType::StatusCode : return kTraceFieldTypeStatusCode;
    case TraceFieldType::Protocol : return kTraceFieldTypeProtocol;
    case TraceFieldType::LocalAddr : return kTraceFieldTypeLocalAddr;
    case TraceFieldType::LocalPort : return kTraceFieldTypeLocalPort;
    case TraceFieldType::ContentType : return kTraceFieldTypeContentType;
    case TraceFieldType::UsingSpdy : return kTraceFieldTypeUsingSpdy;
    case TraceFieldType::ReqHeaderSize : return kTraceFieldTypeReqHeaderSize;
    case TraceFieldType::ReqHeaderCompSize : return kTraceFieldTypeReqHeaderCompSize;
    case TraceFieldType::ReqBodySize : return kTraceFieldTypeReqBodySize;
    case TraceFieldType::RspHeaderSize : return kTraceFieldTypeRspHeaderSize;
    case TraceFieldType::RspHeaderCompSize : return kTraceFieldTypeRspHeaderCompSize;
    case TraceFieldType::RedirectLocation : return kTraceFieldTypeRedirectLocation;
    case TraceFieldType::NumRedirects : return kTraceFieldTypeNumRedirects;
    case TraceFieldType::RedirectResponseCode : return kTraceFieldTypeRedirectResponseCode;
    case TraceFieldType::NumRetries : return kTraceFieldTypeNumRetries;
    case TraceFieldType::PriorityChanges : return kTraceFieldTypePriorityChanges;
    case TraceFieldType::UsingHTTP2 : return kTraceFieldTypeUsingHTTP2;
    case TraceFieldType::BodyGenerated : return kTraceFieldTypeBodyGenerated;
    case TraceFieldType::FirstBodyByteFlushed : return kTraceFieldTypeFirstBodyByteFlushed;
    case TraceFieldType::LastBodyByteFlushed : return kTraceFieldTypeLastBodyByteFlushed;
    case TraceFieldType::HeaderGenerated : return kTraceFieldTypeHeaderGenerated;
    case TraceFieldType::RspBodySize : return kTraceFieldTypeRspBodySize;
    case TraceFieldType::RspIntvlAvg : return kTraceFieldTypeRspIntvlAvg;
    case TraceFieldType::RspIntvlStdDev : return kTraceFieldTypeRspIntvlStdDev;
    case TraceFieldType::RspNumOnBody : return kTraceFieldTypeRspNumOnBody;
    case TraceFieldType::ServerQuality : return kTraceFieldTypeServerQuality;
    case TraceFieldType::ServerRtt : return kTraceFieldTypeServerRtt;
    case TraceFieldType::NewConnection : return kTraceFieldTypeNewConnection;
    case TraceFieldType::SessionManagerType : return kTraceFieldTypeSessionManagerType;
    case TraceFieldType::InFlightConns : return kTraceFieldTypeInFlightConns;
    case TraceFieldType::CachedSessions : return kTraceFieldTypeCachedSessions;
    case TraceFieldType::ConnsStarted : return kTraceFieldTypeConnsStarted;
    case TraceFieldType::RequestsWaited : return kTraceFieldTypeRequestsWaited;
    case TraceFieldType::TotalRequestsWaited : return kTraceFieldTypeTotalRequestsWaited;
    case TraceFieldType::TotalConnsStarted : return kTraceFieldTypeTotalConnsStarted;
    case TraceFieldType::SessionCacheHitType : return kTraceFieldTypeSessionCacheHitType;
    case TraceFieldType::ServerAddr : return kTraceFieldTypeServerAddr;
    case TraceFieldType::ServerPort : return kTraceFieldTypeServerPort;
    case TraceFieldType::CachedFamily : return kTraceFieldTypeCachedFamily;
    case TraceFieldType::NewSession : return kTraceFieldTypeNewSession;
    case TraceFieldType::NumWaiting : return kTraceFieldTypeNumWaiting;
    case TraceFieldType::HostName : return kTraceFieldTypeHostName;
    case TraceFieldType::IpAddr : return kTraceFieldTypeIpAddr;
    case TraceFieldType::Port : return kTraceFieldTypePort;
    case TraceFieldType::CNameRedirects : return kTraceFieldTypeCNameRedirects;
    case TraceFieldType::RedirectTime : return kTraceFieldTypeRedirectTime;
    case TraceFieldType::NumberResolvers : return kTraceFieldTypeNumberResolvers;
    case TraceFieldType::ResolversSerialized : return kTraceFieldTypeResolversSerialized;
    case TraceFieldType::RequestFamily : return kTraceFieldTypeRequestFamily;
    case TraceFieldType::NumberAnswers : return kTraceFieldTypeNumberAnswers;
    case TraceFieldType::NumberRetries : return kTraceFieldTypeNumberRetries;
    case TraceFieldType::ResolvedSuccess : return kTraceFieldTypeResolvedSuccess;
    case TraceFieldType::DNSCacheHit : return kTraceFieldTypeDNSCacheHit;
    case TraceFieldType::DNSCacheStale : return kTraceFieldTypeDNSCacheStale;
    case TraceFieldType::DNSCacheInflight : return kTraceFieldTypeDNSCacheInflight;
    case TraceFieldType::DNSCacheUseFallback : return kTraceFieldTypeDNSCacheUseFallback;
    case TraceFieldType::TLSReused : return kTraceFieldTypeTLSReused;
    case TraceFieldType::TLSCacheHit : return kTraceFieldTypeTLSCacheHit;
    case TraceFieldType::CipherName : return kTraceFieldTypeCipherName;
    case TraceFieldType::TLSVersion : return kTraceFieldTypeTLSVersion;
    case TraceFieldType::OpenSSLVersion : return kTraceFieldTypeOpenSSLVersion;
    case TraceFieldType::TLSCachePersistence : return kTraceFieldTypeTLSCachePersistence;
    case TraceFieldType::CompressedSizeKey : return kTraceFieldTypeCompressedSizeKey;
    case TraceFieldType::UncompressedSizeKey : return kTraceFieldTypeUncompressedSizeKey;
    case TraceFieldType::CompressionType : return kTraceFieldTypeCompressionType;
    case TraceFieldType::VerifiedSuccess : return kTraceFieldTypeVerifiedSuccess;
    case TraceFieldType::VerifiedChain : return kTraceFieldTypeVerifiedChain;
    case TraceFieldType::VerifiedTime : return kTraceFieldTypeVerifiedTime;
    case TraceFieldType::VerifiedServerAddress : return kTraceFieldTypeVerifiedServerAddress;
    case TraceFieldType::VerifiedProxyAddress : return kTraceFieldTypeVerifiedProxyAddress;
    case TraceFieldType::VerifiedError : return kTraceFieldTypeVerifiedError;
    case TraceFieldType::VerifiedReason : return kTraceFieldTypeVerifiedReason;
    case TraceFieldType::VerifiedHostname : return kTraceFieldTypeVerifiedHostname;
    case TraceFieldType::VerifiedMatchedCommonName : return kTraceFieldTypeVerifiedMatchedCommonName;
    case TraceFieldType::VerifiedMatchedSubjectAltName : return kTraceFieldTypeVerifiedMatchedSubjectAltName;
    case TraceFieldType::VerifiedNameMatched : return kTraceFieldTypeVerifiedNameMatched;
    case TraceFieldType::VerifiedHostnameFailMessage : return kTraceFieldTypeVerifiedHostnameFailMessage;
    case TraceFieldType::VerifiedCertSuccess : return kTraceFieldTypeVerifiedCertSuccess;
    case TraceFieldType::PinningReason : return kTraceFieldTypePinningReason;
    case TraceFieldType::PinningRequiredHash : return kTraceFieldTypePinningRequiredHash;
    case TraceFieldType::PinningUserHash : return kTraceFieldTypePinningUserHash;
    case TraceFieldType::PinningExcludedHash : return kTraceFieldTypePinningExcludedHash;
    case TraceFieldType::PinningRequiredFound : return kTraceFieldTypePinningRequiredFound;
    case TraceFieldType::PinningUserInstalledFound : return kTraceFieldTypePinningUserInstalledFound;
    case TraceFieldType::PinningUserInstalledCount : return kTraceFieldTypePinningUserInstalledCount;
    case TraceFieldType::PinningExcludedFound : return kTraceFieldTypePinningExcludedFound;
    case TraceFieldType::PinningTimePin : return kTraceFieldTypePinningTimePin;
    case TraceFieldType::PinningHost : return kTraceFieldTypePinningHost;
    case TraceFieldType::PinningSuccess : return kTraceFieldTypePinningSuccess;
    case TraceFieldType::VerifiedTimeMerge : return kTraceFieldTypeVerifiedTimeMerge;
    case TraceFieldType::RevokeReason : return kTraceFieldTypeRevokeReason;
    case TraceFieldType::RevokeSuccess : return kTraceFieldTypeRevokeSuccess;
    case TraceFieldType::ProxyHost : return kTraceFieldTypeProxyHost;
    case TraceFieldType::ProxyPort : return kTraceFieldTypeProxyPort;
    case TraceFieldType::SchedulerType : return kTraceFieldTypeSchedulerType;
    case TraceFieldType::InitialPriority : return kTraceFieldTypeInitialPriority;
    case TraceFieldType::SizeOfQueue : return kTraceFieldTypeSizeOfQueue;
    case TraceFieldType::PreviousState : return kTraceFieldTypePreviousState;
    case TraceFieldType::CurrentState : return kTraceFieldTypeCurrentState;
    case TraceFieldType::NetworkID : return kTraceFieldTypeNetworkID;
    case TraceFieldType::NumConnAttempts : return kTraceFieldTypeNumConnAttempts;
    case TraceFieldType::AttemptAddrs : return kTraceFieldTypeAttemptAddrs;
    case TraceFieldType::AttemptAddrFamily : return kTraceFieldTypeAttemptAddrFamily;
    case TraceFieldType::SucceededConnTime : return kTraceFieldTypeSucceededConnTime;
    case TraceFieldType::RequestID : return kTraceFieldTypeRequestID;
    case TraceFieldType::HumanReadableName : return kTraceFieldTypeHumanReadableName;
    case TraceFieldType::CurrentTransactions : return kTraceFieldTypeCurrentTransactions;
    case TraceFieldType::HistoricalMaximumTransactions : return kTraceFieldTypeHistoricalMaximumTransactions;
    case TraceFieldType::PermittedMaximumTransactions : return kTraceFieldTypePermittedMaximumTransactions;
    case TraceFieldType::NumberTransactionsServed : return kTraceFieldTypeNumberTransactionsServed;
    case TraceFieldType::TotalPingsSent : return kTraceFieldTypeTotalPingsSent;
    case TraceFieldType::TotalPingRepliesReceived : return kTraceFieldTypeTotalPingRepliesReceived;
    case TraceFieldType::LastPingTimeout : return kTraceFieldTypeLastPingTimeout;
    case TraceFieldType::Cwnd : return kTraceFieldTypeCwnd;
    case TraceFieldType::CwndBytes : return kTraceFieldTypeCwndBytes;
    case TraceFieldType::TotalRetx : return kTraceFieldTypeTotalRetx;
    case TraceFieldType::InflightPacketLoss : return kTraceFieldTypeInflightPacketLoss;
    case TraceFieldType::RTT : return kTraceFieldTypeRTT;
    case TraceFieldType::RTTVar : return kTraceFieldTypeRTTVar;
    case TraceFieldType::RTO : return kTraceFieldTypeRTO;
    case TraceFieldType::MSS : return kTraceFieldTypeMSS;
    case TraceFieldType::MTU : return kTraceFieldTypeMTU;
    case TraceFieldType::RcvWnd : return kTraceFieldTypeRcvWnd;
    case TraceFieldType::UpstreamCapacity : return kTraceFieldTypeUpstreamCapacity;
    case TraceFieldType::ReqsSucceed : return kTraceFieldTypeReqsSucceed;
    case TraceFieldType::ReqsFailed : return kTraceFieldTypeReqsFailed;
    case TraceFieldType::TTFB : return kTraceFieldTypeTTFB;
    case TraceFieldType::TTLB : return kTraceFieldTypeTTLB;
    case TraceFieldType::ConnIdleDuration : return kTraceFieldTypeConnIdleDuration;
    case TraceFieldType::ConnLifeSpan : return kTraceFieldTypeConnLifeSpan;
    case TraceFieldType::EgressBuffered : return kTraceFieldTypeEgressBuffered;
    case TraceFieldType::SCFGCacheHit : return kTraceFieldTypeSCFGCacheHit;
    case TraceFieldType::InitialAppBytesWritten : return kTraceFieldTypeInitialAppBytesWritten;
    case TraceFieldType::TimeToInitial : return kTraceFieldTypeTimeToInitial;
    case TraceFieldType::SCFGExpired : return kTraceFieldTypeSCFGExpired;
    case TraceFieldType::ZeroVerifiedSuccess : return kTraceFieldTypeZeroVerifiedSuccess;
    case TraceFieldType::ZeroVerifiedError : return kTraceFieldTypeZeroVerifiedError;
    case TraceFieldType::MQTTConnAttempts : return kTraceFieldTypeMQTTConnAttempts;
    case TraceFieldType::IsForeground : return kTraceFieldTypeIsForeground;
    case TraceFieldType::MQTTBytesWritten : return kTraceFieldTypeMQTTBytesWritten;
    case TraceFieldType::MQTTBytesRead : return kTraceFieldTypeMQTTBytesRead;
    case TraceFieldType::RawBytesWritten : return kTraceFieldTypeRawBytesWritten;
    case TraceFieldType::RawBytesRead : return kTraceFieldTypeRawBytesRead;
    case TraceFieldType::EventLoopTimeAvg : return kTraceFieldTypeEventLoopTimeAvg;
    case TraceFieldType::MQTTMsgRemainingLength : return kTraceFieldTypeMQTTMsgRemainingLength;
    case TraceFieldType::MsgType : return kTraceFieldTypeMsgType;
    case TraceFieldType::IsMsgRecv : return kTraceFieldTypeIsMsgRecv;
    case TraceFieldType::ConnectReturnCode : return kTraceFieldTypeConnectReturnCode;
  }
  return kTraceFieldTypeInvalidType;
};

  TraceFieldType getTraceFieldTypeFromString(const std::string& str) {
  if (str == kTraceFieldTypeErrorStage)  return TraceFieldType::ErrorStage;
  if (str == kTraceFieldTypeError)  return TraceFieldType::Error;
  if (str == kTraceFieldTypeProxygenError)  return TraceFieldType::ProxygenError;
  if (str == kTraceFieldTypeHTTPStatus)  return TraceFieldType::HTTPStatus;
  if (str == kTraceFieldTypeDirectionError)  return TraceFieldType::DirectionError;
  if (str == kTraceFieldTypeCodecError)  return TraceFieldType::CodecError;
  if (str == kTraceFieldTypeLastPingSentOffset)  return TraceFieldType::LastPingSentOffset;
  if (str == kTraceFieldTypeLastPingRecvOffset)  return TraceFieldType::LastPingRecvOffset;
  if (str == kTraceFieldTypeRecentPingSentCount)  return TraceFieldType::RecentPingSentCount;
  if (str == kTraceFieldTypeRecentPingRecvCount)  return TraceFieldType::RecentPingRecvCount;
  if (str == kTraceFieldTypeUri)  return TraceFieldType::Uri;
  if (str == kTraceFieldTypeIsSecure)  return TraceFieldType::IsSecure;
  if (str == kTraceFieldTypeUsingProxy)  return TraceFieldType::UsingProxy;
  if (str == kTraceFieldTypeStatusCode)  return TraceFieldType::StatusCode;
  if (str == kTraceFieldTypeProtocol)  return TraceFieldType::Protocol;
  if (str == kTraceFieldTypeLocalAddr)  return TraceFieldType::LocalAddr;
  if (str == kTraceFieldTypeLocalPort)  return TraceFieldType::LocalPort;
  if (str == kTraceFieldTypeContentType)  return TraceFieldType::ContentType;
  if (str == kTraceFieldTypeUsingSpdy)  return TraceFieldType::UsingSpdy;
  if (str == kTraceFieldTypeReqHeaderSize)  return TraceFieldType::ReqHeaderSize;
  if (str == kTraceFieldTypeReqHeaderCompSize)  return TraceFieldType::ReqHeaderCompSize;
  if (str == kTraceFieldTypeReqBodySize)  return TraceFieldType::ReqBodySize;
  if (str == kTraceFieldTypeRspHeaderSize)  return TraceFieldType::RspHeaderSize;
  if (str == kTraceFieldTypeRspHeaderCompSize)  return TraceFieldType::RspHeaderCompSize;
  if (str == kTraceFieldTypeRedirectLocation)  return TraceFieldType::RedirectLocation;
  if (str == kTraceFieldTypeNumRedirects)  return TraceFieldType::NumRedirects;
  if (str == kTraceFieldTypeRedirectResponseCode)  return TraceFieldType::RedirectResponseCode;
  if (str == kTraceFieldTypeNumRetries)  return TraceFieldType::NumRetries;
  if (str == kTraceFieldTypePriorityChanges)  return TraceFieldType::PriorityChanges;
  if (str == kTraceFieldTypeUsingHTTP2)  return TraceFieldType::UsingHTTP2;
  if (str == kTraceFieldTypeBodyGenerated)  return TraceFieldType::BodyGenerated;
  if (str == kTraceFieldTypeFirstBodyByteFlushed)  return TraceFieldType::FirstBodyByteFlushed;
  if (str == kTraceFieldTypeLastBodyByteFlushed)  return TraceFieldType::LastBodyByteFlushed;
  if (str == kTraceFieldTypeHeaderGenerated)  return TraceFieldType::HeaderGenerated;
  if (str == kTraceFieldTypeRspBodySize)  return TraceFieldType::RspBodySize;
  if (str == kTraceFieldTypeRspIntvlAvg)  return TraceFieldType::RspIntvlAvg;
  if (str == kTraceFieldTypeRspIntvlStdDev)  return TraceFieldType::RspIntvlStdDev;
  if (str == kTraceFieldTypeRspNumOnBody)  return TraceFieldType::RspNumOnBody;
  if (str == kTraceFieldTypeServerQuality)  return TraceFieldType::ServerQuality;
  if (str == kTraceFieldTypeServerRtt)  return TraceFieldType::ServerRtt;
  if (str == kTraceFieldTypeNewConnection)  return TraceFieldType::NewConnection;
  if (str == kTraceFieldTypeSessionManagerType)  return TraceFieldType::SessionManagerType;
  if (str == kTraceFieldTypeInFlightConns)  return TraceFieldType::InFlightConns;
  if (str == kTraceFieldTypeCachedSessions)  return TraceFieldType::CachedSessions;
  if (str == kTraceFieldTypeConnsStarted)  return TraceFieldType::ConnsStarted;
  if (str == kTraceFieldTypeRequestsWaited)  return TraceFieldType::RequestsWaited;
  if (str == kTraceFieldTypeTotalRequestsWaited)  return TraceFieldType::TotalRequestsWaited;
  if (str == kTraceFieldTypeTotalConnsStarted)  return TraceFieldType::TotalConnsStarted;
  if (str == kTraceFieldTypeSessionCacheHitType)  return TraceFieldType::SessionCacheHitType;
  if (str == kTraceFieldTypeServerAddr)  return TraceFieldType::ServerAddr;
  if (str == kTraceFieldTypeServerPort)  return TraceFieldType::ServerPort;
  if (str == kTraceFieldTypeCachedFamily)  return TraceFieldType::CachedFamily;
  if (str == kTraceFieldTypeNewSession)  return TraceFieldType::NewSession;
  if (str == kTraceFieldTypeNumWaiting)  return TraceFieldType::NumWaiting;
  if (str == kTraceFieldTypeHostName)  return TraceFieldType::HostName;
  if (str == kTraceFieldTypeIpAddr)  return TraceFieldType::IpAddr;
  if (str == kTraceFieldTypePort)  return TraceFieldType::Port;
  if (str == kTraceFieldTypeCNameRedirects)  return TraceFieldType::CNameRedirects;
  if (str == kTraceFieldTypeRedirectTime)  return TraceFieldType::RedirectTime;
  if (str == kTraceFieldTypeNumberResolvers)  return TraceFieldType::NumberResolvers;
  if (str == kTraceFieldTypeResolversSerialized)  return TraceFieldType::ResolversSerialized;
  if (str == kTraceFieldTypeRequestFamily)  return TraceFieldType::RequestFamily;
  if (str == kTraceFieldTypeNumberAnswers)  return TraceFieldType::NumberAnswers;
  if (str == kTraceFieldTypeNumberRetries)  return TraceFieldType::NumberRetries;
  if (str == kTraceFieldTypeResolvedSuccess)  return TraceFieldType::ResolvedSuccess;
  if (str == kTraceFieldTypeDNSCacheHit)  return TraceFieldType::DNSCacheHit;
  if (str == kTraceFieldTypeDNSCacheStale)  return TraceFieldType::DNSCacheStale;
  if (str == kTraceFieldTypeDNSCacheInflight)  return TraceFieldType::DNSCacheInflight;
  if (str == kTraceFieldTypeDNSCacheUseFallback)  return TraceFieldType::DNSCacheUseFallback;
  if (str == kTraceFieldTypeTLSReused)  return TraceFieldType::TLSReused;
  if (str == kTraceFieldTypeTLSCacheHit)  return TraceFieldType::TLSCacheHit;
  if (str == kTraceFieldTypeCipherName)  return TraceFieldType::CipherName;
  if (str == kTraceFieldTypeTLSVersion)  return TraceFieldType::TLSVersion;
  if (str == kTraceFieldTypeOpenSSLVersion)  return TraceFieldType::OpenSSLVersion;
  if (str == kTraceFieldTypeTLSCachePersistence)  return TraceFieldType::TLSCachePersistence;
  if (str == kTraceFieldTypeCompressedSizeKey)  return TraceFieldType::CompressedSizeKey;
  if (str == kTraceFieldTypeUncompressedSizeKey)  return TraceFieldType::UncompressedSizeKey;
  if (str == kTraceFieldTypeCompressionType)  return TraceFieldType::CompressionType;
  if (str == kTraceFieldTypeVerifiedSuccess)  return TraceFieldType::VerifiedSuccess;
  if (str == kTraceFieldTypeVerifiedChain)  return TraceFieldType::VerifiedChain;
  if (str == kTraceFieldTypeVerifiedTime)  return TraceFieldType::VerifiedTime;
  if (str == kTraceFieldTypeVerifiedServerAddress)  return TraceFieldType::VerifiedServerAddress;
  if (str == kTraceFieldTypeVerifiedProxyAddress)  return TraceFieldType::VerifiedProxyAddress;
  if (str == kTraceFieldTypeVerifiedError)  return TraceFieldType::VerifiedError;
  if (str == kTraceFieldTypeVerifiedReason)  return TraceFieldType::VerifiedReason;
  if (str == kTraceFieldTypeVerifiedHostname)  return TraceFieldType::VerifiedHostname;
  if (str == kTraceFieldTypeVerifiedMatchedCommonName)  return TraceFieldType::VerifiedMatchedCommonName;
  if (str == kTraceFieldTypeVerifiedMatchedSubjectAltName)  return TraceFieldType::VerifiedMatchedSubjectAltName;
  if (str == kTraceFieldTypeVerifiedNameMatched)  return TraceFieldType::VerifiedNameMatched;
  if (str == kTraceFieldTypeVerifiedHostnameFailMessage)  return TraceFieldType::VerifiedHostnameFailMessage;
  if (str == kTraceFieldTypeVerifiedCertSuccess)  return TraceFieldType::VerifiedCertSuccess;
  if (str == kTraceFieldTypePinningReason)  return TraceFieldType::PinningReason;
  if (str == kTraceFieldTypePinningRequiredHash)  return TraceFieldType::PinningRequiredHash;
  if (str == kTraceFieldTypePinningUserHash)  return TraceFieldType::PinningUserHash;
  if (str == kTraceFieldTypePinningExcludedHash)  return TraceFieldType::PinningExcludedHash;
  if (str == kTraceFieldTypePinningRequiredFound)  return TraceFieldType::PinningRequiredFound;
  if (str == kTraceFieldTypePinningUserInstalledFound)  return TraceFieldType::PinningUserInstalledFound;
  if (str == kTraceFieldTypePinningUserInstalledCount)  return TraceFieldType::PinningUserInstalledCount;
  if (str == kTraceFieldTypePinningExcludedFound)  return TraceFieldType::PinningExcludedFound;
  if (str == kTraceFieldTypePinningTimePin)  return TraceFieldType::PinningTimePin;
  if (str == kTraceFieldTypePinningHost)  return TraceFieldType::PinningHost;
  if (str == kTraceFieldTypePinningSuccess)  return TraceFieldType::PinningSuccess;
  if (str == kTraceFieldTypeVerifiedTimeMerge)  return TraceFieldType::VerifiedTimeMerge;
  if (str == kTraceFieldTypeRevokeReason)  return TraceFieldType::RevokeReason;
  if (str == kTraceFieldTypeRevokeSuccess)  return TraceFieldType::RevokeSuccess;
  if (str == kTraceFieldTypeProxyHost)  return TraceFieldType::ProxyHost;
  if (str == kTraceFieldTypeProxyPort)  return TraceFieldType::ProxyPort;
  if (str == kTraceFieldTypeSchedulerType)  return TraceFieldType::SchedulerType;
  if (str == kTraceFieldTypeInitialPriority)  return TraceFieldType::InitialPriority;
  if (str == kTraceFieldTypeSizeOfQueue)  return TraceFieldType::SizeOfQueue;
  if (str == kTraceFieldTypePreviousState)  return TraceFieldType::PreviousState;
  if (str == kTraceFieldTypeCurrentState)  return TraceFieldType::CurrentState;
  if (str == kTraceFieldTypeNetworkID)  return TraceFieldType::NetworkID;
  if (str == kTraceFieldTypeNumConnAttempts)  return TraceFieldType::NumConnAttempts;
  if (str == kTraceFieldTypeAttemptAddrs)  return TraceFieldType::AttemptAddrs;
  if (str == kTraceFieldTypeAttemptAddrFamily)  return TraceFieldType::AttemptAddrFamily;
  if (str == kTraceFieldTypeSucceededConnTime)  return TraceFieldType::SucceededConnTime;
  if (str == kTraceFieldTypeRequestID)  return TraceFieldType::RequestID;
  if (str == kTraceFieldTypeHumanReadableName)  return TraceFieldType::HumanReadableName;
  if (str == kTraceFieldTypeCurrentTransactions)  return TraceFieldType::CurrentTransactions;
  if (str == kTraceFieldTypeHistoricalMaximumTransactions)  return TraceFieldType::HistoricalMaximumTransactions;
  if (str == kTraceFieldTypePermittedMaximumTransactions)  return TraceFieldType::PermittedMaximumTransactions;
  if (str == kTraceFieldTypeNumberTransactionsServed)  return TraceFieldType::NumberTransactionsServed;
  if (str == kTraceFieldTypeTotalPingsSent)  return TraceFieldType::TotalPingsSent;
  if (str == kTraceFieldTypeTotalPingRepliesReceived)  return TraceFieldType::TotalPingRepliesReceived;
  if (str == kTraceFieldTypeLastPingTimeout)  return TraceFieldType::LastPingTimeout;
  if (str == kTraceFieldTypeCwnd)  return TraceFieldType::Cwnd;
  if (str == kTraceFieldTypeCwndBytes)  return TraceFieldType::CwndBytes;
  if (str == kTraceFieldTypeTotalRetx)  return TraceFieldType::TotalRetx;
  if (str == kTraceFieldTypeInflightPacketLoss)  return TraceFieldType::InflightPacketLoss;
  if (str == kTraceFieldTypeRTT)  return TraceFieldType::RTT;
  if (str == kTraceFieldTypeRTTVar)  return TraceFieldType::RTTVar;
  if (str == kTraceFieldTypeRTO)  return TraceFieldType::RTO;
  if (str == kTraceFieldTypeMSS)  return TraceFieldType::MSS;
  if (str == kTraceFieldTypeMTU)  return TraceFieldType::MTU;
  if (str == kTraceFieldTypeRcvWnd)  return TraceFieldType::RcvWnd;
  if (str == kTraceFieldTypeUpstreamCapacity)  return TraceFieldType::UpstreamCapacity;
  if (str == kTraceFieldTypeReqsSucceed)  return TraceFieldType::ReqsSucceed;
  if (str == kTraceFieldTypeReqsFailed)  return TraceFieldType::ReqsFailed;
  if (str == kTraceFieldTypeTTFB)  return TraceFieldType::TTFB;
  if (str == kTraceFieldTypeTTLB)  return TraceFieldType::TTLB;
  if (str == kTraceFieldTypeConnIdleDuration)  return TraceFieldType::ConnIdleDuration;
  if (str == kTraceFieldTypeConnLifeSpan)  return TraceFieldType::ConnLifeSpan;
  if (str == kTraceFieldTypeEgressBuffered)  return TraceFieldType::EgressBuffered;
  if (str == kTraceFieldTypeSCFGCacheHit)  return TraceFieldType::SCFGCacheHit;
  if (str == kTraceFieldTypeInitialAppBytesWritten)  return TraceFieldType::InitialAppBytesWritten;
  if (str == kTraceFieldTypeTimeToInitial)  return TraceFieldType::TimeToInitial;
  if (str == kTraceFieldTypeSCFGExpired)  return TraceFieldType::SCFGExpired;
  if (str == kTraceFieldTypeZeroVerifiedSuccess)  return TraceFieldType::ZeroVerifiedSuccess;
  if (str == kTraceFieldTypeZeroVerifiedError)  return TraceFieldType::ZeroVerifiedError;
  if (str == kTraceFieldTypeMQTTConnAttempts)  return TraceFieldType::MQTTConnAttempts;
  if (str == kTraceFieldTypeIsForeground)  return TraceFieldType::IsForeground;
  if (str == kTraceFieldTypeMQTTBytesWritten)  return TraceFieldType::MQTTBytesWritten;
  if (str == kTraceFieldTypeMQTTBytesRead)  return TraceFieldType::MQTTBytesRead;
  if (str == kTraceFieldTypeRawBytesWritten)  return TraceFieldType::RawBytesWritten;
  if (str == kTraceFieldTypeRawBytesRead)  return TraceFieldType::RawBytesRead;
  if (str == kTraceFieldTypeEventLoopTimeAvg)  return TraceFieldType::EventLoopTimeAvg;
  if (str == kTraceFieldTypeMQTTMsgRemainingLength)  return TraceFieldType::MQTTMsgRemainingLength;
  if (str == kTraceFieldTypeMsgType)  return TraceFieldType::MsgType;
  if (str == kTraceFieldTypeIsMsgRecv)  return TraceFieldType::IsMsgRecv;
  if (str == kTraceFieldTypeConnectReturnCode)  return TraceFieldType::ConnectReturnCode;
 throw std::invalid_argument ("No matching TraceFieldType from string");
};


}
