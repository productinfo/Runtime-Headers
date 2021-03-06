/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying> {
    int  _decodeTime;
    struct { 
        unsigned int requestEnd : 1; 
        unsigned int requestErrorCode : 1; 
        unsigned int requestStart : 1; 
        unsigned int decodeTime : 1; 
        unsigned int httpResponseCode : 1; 
        unsigned int networkService : 1; 
        unsigned int queuedTime : 1; 
        unsigned int redirectCount : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
        unsigned int tilesetId : 1; 
        unsigned int totalTime : 1; 
    }  _has;
    int  _httpResponseCode;
    NSString * _manifestEnv;
    int  _networkService;
    int  _queuedTime;
    int  _redirectCount;
    NSString * _requestAppIdentifier;
    int  _requestDataSize;
    double  _requestEnd;
    long long  _requestErrorCode;
    NSString * _requestErrorDescription;
    NSString * _requestErrorDomain;
    double  _requestStart;
    int  _responseDataSize;
    NSString * _serviceIpAddress;
    GEONetworkSessionTaskTransactionMetrics * _taskMetrics;
    unsigned int  _tilesetId;
    int  _totalTime;
}

@property (nonatomic, readwrite) int decodeTime;
@property (nonatomic, readwrite) BOOL hasDecodeTime;
@property (nonatomic, readwrite) BOOL hasHttpResponseCode;
@property (nonatomic, readonly) BOOL hasManifestEnv;
@property (nonatomic, readwrite) BOOL hasNetworkService;
@property (nonatomic, readwrite) BOOL hasQueuedTime;
@property (nonatomic, readwrite) BOOL hasRedirectCount;
@property (nonatomic, readonly) BOOL hasRequestAppIdentifier;
@property (nonatomic, readwrite) BOOL hasRequestDataSize;
@property (nonatomic, readwrite) BOOL hasRequestEnd;
@property (nonatomic, readwrite) BOOL hasRequestErrorCode;
@property (nonatomic, readonly) BOOL hasRequestErrorDescription;
@property (nonatomic, readonly) BOOL hasRequestErrorDomain;
@property (nonatomic, readwrite) BOOL hasRequestStart;
@property (nonatomic, readwrite) BOOL hasResponseDataSize;
@property (nonatomic, readonly) BOOL hasServiceIpAddress;
@property (nonatomic, readonly) BOOL hasTaskMetrics;
@property (nonatomic, readwrite) BOOL hasTilesetId;
@property (nonatomic, readwrite) BOOL hasTotalTime;
@property (nonatomic, readwrite) int httpResponseCode;
@property (nonatomic, readwrite, retain) NSString *manifestEnv;
@property (nonatomic, readwrite) int networkService;
@property (nonatomic, readwrite) int queuedTime;
@property (nonatomic, readwrite) int redirectCount;
@property (nonatomic, readwrite, retain) NSString *requestAppIdentifier;
@property (nonatomic, readwrite) int requestDataSize;
@property (nonatomic, readwrite) double requestEnd;
@property (nonatomic, readwrite) long long requestErrorCode;
@property (nonatomic, readwrite, retain) NSString *requestErrorDescription;
@property (nonatomic, readwrite, retain) NSString *requestErrorDomain;
@property (nonatomic, readwrite) double requestStart;
@property (nonatomic, readwrite) int responseDataSize;
@property (nonatomic, readwrite, retain) NSString *serviceIpAddress;
@property (nonatomic, readwrite, retain) GEONetworkSessionTaskTransactionMetrics *taskMetrics;
@property (nonatomic, readwrite) unsigned int tilesetId;
@property (nonatomic, readwrite) int totalTime;

- (void).cxx_destruct;
- (int)StringAsNetworkService:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)decodeTime;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDecodeTime;
- (BOOL)hasHttpResponseCode;
- (BOOL)hasManifestEnv;
- (BOOL)hasNetworkService;
- (BOOL)hasQueuedTime;
- (BOOL)hasRedirectCount;
- (BOOL)hasRequestAppIdentifier;
- (BOOL)hasRequestDataSize;
- (BOOL)hasRequestEnd;
- (BOOL)hasRequestErrorCode;
- (BOOL)hasRequestErrorDescription;
- (BOOL)hasRequestErrorDomain;
- (BOOL)hasRequestStart;
- (BOOL)hasResponseDataSize;
- (BOOL)hasServiceIpAddress;
- (BOOL)hasTaskMetrics;
- (BOOL)hasTilesetId;
- (BOOL)hasTotalTime;
- (unsigned long long)hash;
- (int)httpResponseCode;
- (BOOL)isEqual:(id)arg1;
- (id)manifestEnv;
- (void)mergeFrom:(id)arg1;
- (int)networkService;
- (id)networkServiceAsString:(int)arg1;
- (int)queuedTime;
- (BOOL)readFrom:(id)arg1;
- (int)redirectCount;
- (id)requestAppIdentifier;
- (int)requestDataSize;
- (double)requestEnd;
- (long long)requestErrorCode;
- (id)requestErrorDescription;
- (id)requestErrorDomain;
- (double)requestStart;
- (int)responseDataSize;
- (id)serviceIpAddress;
- (void)setDecodeTime:(int)arg1;
- (void)setHasDecodeTime:(BOOL)arg1;
- (void)setHasHttpResponseCode:(BOOL)arg1;
- (void)setHasNetworkService:(BOOL)arg1;
- (void)setHasQueuedTime:(BOOL)arg1;
- (void)setHasRedirectCount:(BOOL)arg1;
- (void)setHasRequestDataSize:(BOOL)arg1;
- (void)setHasRequestEnd:(BOOL)arg1;
- (void)setHasRequestErrorCode:(BOOL)arg1;
- (void)setHasRequestStart:(BOOL)arg1;
- (void)setHasResponseDataSize:(BOOL)arg1;
- (void)setHasTilesetId:(BOOL)arg1;
- (void)setHasTotalTime:(BOOL)arg1;
- (void)setHttpResponseCode:(int)arg1;
- (void)setManifestEnv:(id)arg1;
- (void)setNetworkService:(int)arg1;
- (void)setQueuedTime:(int)arg1;
- (void)setRedirectCount:(int)arg1;
- (void)setRequestAppIdentifier:(id)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setRequestEnd:(double)arg1;
- (void)setRequestErrorCode:(long long)arg1;
- (void)setRequestErrorDescription:(id)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setServiceIpAddress:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (void)setTilesetId:(unsigned int)arg1;
- (void)setTotalTime:(int)arg1;
- (id)taskMetrics;
- (unsigned int)tilesetId;
- (int)totalTime;
- (void)writeTo:(id)arg1;

@end
