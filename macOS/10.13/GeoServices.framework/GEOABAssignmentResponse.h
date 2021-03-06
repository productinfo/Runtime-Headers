/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOABAssignmentResponse : PBCodable <NSCopying> {
    NSMutableArray * _assignments;
    unsigned long long  _branchExpirationTtlHours;
    GEOABClientConfig * _clientConfig;
    struct { 
        unsigned int branchExpirationTtlHours : 1; 
        unsigned int refreshIntervalSeconds : 1; 
        unsigned int timestamp : 1; 
        unsigned int invalidatePoiCache : 1; 
        unsigned int invalidateTileCache : 1; 
    }  _has;
    BOOL  _invalidatePoiCache;
    BOOL  _invalidateTileCache;
    GEOABSecondPartyPlaceRequestClientMetaData * _mapsAbClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData * _parsecClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData * _rapClientMetadata;
    unsigned long long  _refreshIntervalSeconds;
    NSString * _requestGuid;
    GEOABSecondPartyPlaceRequestClientMetaData * _siriClientMetadata;
    NSString * _sourceURL;
    double  _timestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSMutableArray *assignments;
@property (nonatomic, readwrite) unsigned long long branchExpirationTtlHours;
@property (nonatomic, readwrite, retain) GEOABClientConfig *clientConfig;
@property (nonatomic, readwrite) BOOL hasBranchExpirationTtlHours;
@property (nonatomic, readonly) BOOL hasClientConfig;
@property (nonatomic, readwrite) BOOL hasInvalidatePoiCache;
@property (nonatomic, readwrite) BOOL hasInvalidateTileCache;
@property (nonatomic, readonly) BOOL hasMapsAbClientMetadata;
@property (nonatomic, readonly) BOOL hasParsecClientMetadata;
@property (nonatomic, readonly) BOOL hasRapClientMetadata;
@property (nonatomic, readwrite) BOOL hasRefreshIntervalSeconds;
@property (nonatomic, readonly) BOOL hasRequestGuid;
@property (nonatomic, readonly) BOOL hasSiriClientMetadata;
@property (nonatomic, readonly) BOOL hasSourceURL;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite) BOOL invalidatePoiCache;
@property (nonatomic, readwrite) BOOL invalidateTileCache;
@property (nonatomic, readwrite, retain) GEOABSecondPartyPlaceRequestClientMetaData *mapsAbClientMetadata;
@property (nonatomic, readwrite, retain) GEOABSecondPartyPlaceRequestClientMetaData *parsecClientMetadata;
@property (nonatomic, readwrite, retain) GEOABSecondPartyPlaceRequestClientMetaData *rapClientMetadata;
@property (nonatomic, readwrite) unsigned long long refreshIntervalSeconds;
@property (nonatomic, readwrite, retain) NSString *requestGuid;
@property (nonatomic, readwrite, retain) GEOABSecondPartyPlaceRequestClientMetaData *siriClientMetadata;
@property (nonatomic, readwrite, retain) NSString *sourceURL;
@property (nonatomic, readwrite) double timestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)assignmentType;

- (void).cxx_destruct;
- (void)addAssignment:(id)arg1;
- (id)assignmentAtIndex:(unsigned long long)arg1;
- (id)assignments;
- (unsigned long long)assignmentsCount;
- (unsigned long long)branchExpirationTtlHours;
- (void)clearAssignments;
- (id)clientConfig;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBranchExpirationTtlHours;
- (BOOL)hasClientConfig;
- (BOOL)hasInvalidatePoiCache;
- (BOOL)hasInvalidateTileCache;
- (BOOL)hasMapsAbClientMetadata;
- (BOOL)hasParsecClientMetadata;
- (BOOL)hasRapClientMetadata;
- (BOOL)hasRefreshIntervalSeconds;
- (BOOL)hasRequestGuid;
- (BOOL)hasSiriClientMetadata;
- (unsigned long long)hash;
- (BOOL)invalidatePoiCache;
- (BOOL)invalidateTileCache;
- (BOOL)isEqual:(id)arg1;
- (id)mapsAbClientMetadata;
- (void)mergeFrom:(id)arg1;
- (id)parsecClientMetadata;
- (id)rapClientMetadata;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)refreshIntervalSeconds;
- (id)requestGuid;
- (void)setAssignments:(id)arg1;
- (void)setBranchExpirationTtlHours:(unsigned long long)arg1;
- (void)setClientConfig:(id)arg1;
- (void)setHasBranchExpirationTtlHours:(BOOL)arg1;
- (void)setHasInvalidatePoiCache:(BOOL)arg1;
- (void)setHasInvalidateTileCache:(BOOL)arg1;
- (void)setHasRefreshIntervalSeconds:(BOOL)arg1;
- (void)setInvalidatePoiCache:(BOOL)arg1;
- (void)setInvalidateTileCache:(BOOL)arg1;
- (void)setMapsAbClientMetadata:(id)arg1;
- (void)setParsecClientMetadata:(id)arg1;
- (void)setRapClientMetadata:(id)arg1;
- (void)setRefreshIntervalSeconds:(unsigned long long)arg1;
- (void)setRequestGuid:(id)arg1;
- (void)setSiriClientMetadata:(id)arg1;
- (id)siriClientMetadata;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOABAssignmentResponse (GEOClientExperimentsExtension)

- (BOOL)hasSourceURL;
- (BOOL)hasTimestamp;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sourceURL;
- (double)timestamp;

// GEOABAssignmentResponse (GEOExperimentConfigurationExtras)

- (id)_clientConfigValueForKey:(id)arg1;
- (id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2;
- (id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2;

@end
