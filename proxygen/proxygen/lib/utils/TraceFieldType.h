// Copyright 2004-present Facebook. All Rights Reserved.
// ** AUTOGENERATED FILE. DO NOT HAND-EDIT **

#pragma once

#include <string>

namespace proxygen { 

enum class TraceFieldType {
    ErrorStage,
    Error,
    ProxygenError,
    HTTPStatus,
    DirectionError,
    CodecError,
    LastPingSentOffset,
    LastPingRecvOffset,
    RecentPingSentCount,
    RecentPingRecvCount,
    Uri,
    IsSecure,
    UsingProxy,
    StatusCode,
    Protocol,
    LocalAddr,
    LocalPort,
    ContentType,
    UsingSpdy,
    ReqHeaderSize,
    ReqHeaderCompSize,
    ReqBodySize,
    RspHeaderSize,
    RspHeaderCompSize,
    RedirectLocation,
    NumRedirects,
    RedirectResponseCode,
    NumRetries,
    PriorityChanges,
    UsingHTTP2,
    BodyGenerated,
    FirstBodyByteFlushed,
    LastBodyByteFlushed,
    HeaderGenerated,
    RspBodySize,
    RspIntvlAvg,
    RspIntvlStdDev,
    RspNumOnBody,
    ServerQuality,
    ServerRtt,
    NewConnection,
    SessionManagerType,
    InFlightConns,
    CachedSessions,
    ConnsStarted,
    RequestsWaited,
    TotalRequestsWaited,
    TotalConnsStarted,
    SessionCacheHitType,
    ServerAddr,
    ServerPort,
    CachedFamily,
    NewSession,
    NumWaiting,
    HostName,
    IpAddr,
    Port,
    CNameRedirects,
    RedirectTime,
    NumberResolvers,
    ResolversSerialized,
    RequestFamily,
    NumberAnswers,
    NumberRetries,
    ResolvedSuccess,
    DNSCacheHit,
    DNSCacheStale,
    DNSCacheInflight,
    DNSCacheUseFallback,
    TLSReused,
    TLSCacheHit,
    CipherName,
    TLSVersion,
    OpenSSLVersion,
    TLSCachePersistence,
    CompressedSizeKey,
    UncompressedSizeKey,
    CompressionType,
    VerifiedSuccess,
    VerifiedChain,
    VerifiedTime,
    VerifiedServerAddress,
    VerifiedProxyAddress,
    VerifiedError,
    VerifiedReason,
    VerifiedHostname,
    VerifiedMatchedCommonName,
    VerifiedMatchedSubjectAltName,
    VerifiedNameMatched,
    VerifiedHostnameFailMessage,
    VerifiedCertSuccess,
    PinningReason,
    PinningRequiredHash,
    PinningUserHash,
    PinningExcludedHash,
    PinningRequiredFound,
    PinningUserInstalledFound,
    PinningUserInstalledCount,
    PinningExcludedFound,
    PinningTimePin,
    PinningHost,
    PinningSuccess,
    VerifiedTimeMerge,
    RevokeReason,
    RevokeSuccess,
    ProxyHost,
    ProxyPort,
    SchedulerType,
    InitialPriority,
    SizeOfQueue,
    PreviousState,
    CurrentState,
    NetworkID,
    NumConnAttempts,
    AttemptAddrs,
    AttemptAddrFamily,
    SucceededConnTime,
    RequestID,
    HumanReadableName,
    CurrentTransactions,
    HistoricalMaximumTransactions,
    PermittedMaximumTransactions,
    NumberTransactionsServed,
    TotalPingsSent,
    TotalPingRepliesReceived,
    LastPingTimeout,
    Cwnd,
    CwndBytes,
    TotalRetx,
    InflightPacketLoss,
    RTT,
    RTTVar,
    RTO,
    MSS,
    MTU,
    RcvWnd,
    UpstreamCapacity,
    ReqsSucceed,
    ReqsFailed,
    TTFB,
    TTLB,
    ConnIdleDuration,
    ConnLifeSpan,
    EgressBuffered,
    SCFGCacheHit,
    InitialAppBytesWritten,
    TimeToInitial,
    SCFGExpired,
    ZeroVerifiedSuccess,
    ZeroVerifiedError,
    MQTTConnAttempts,
    IsForeground,
    MQTTBytesWritten,
    MQTTBytesRead,
    RawBytesWritten,
    RawBytesRead,
    EventLoopTimeAvg,
    MQTTMsgRemainingLength,
    MsgType,
    IsMsgRecv,
    ConnectReturnCode,
};

extern const std::string& getTraceFieldTypeString(TraceFieldType);
extern TraceFieldType getTraceFieldTypeFromString(const std::string&);
}
