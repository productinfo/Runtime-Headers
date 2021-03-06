/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying> {
    NSMutableArray * _cameras;
    GEOPDDatasetABStatus * _datasetAbStatus;
    unsigned long long  _debugServerLatencyMs;
    GEOETAServiceResponseSummary * _etaServiceSummary;
    struct { 
        unsigned int debugServerLatencyMs : 1; 
        unsigned int status : 1; 
    }  _has;
    NSData * _responseId;
    NSMutableArray * _routes;
    NSData * _sessionState;
    int  _status;
}

@property (nonatomic, readwrite, retain) NSMutableArray *cameras;
@property (nonatomic, readwrite, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readwrite) unsigned long long debugServerLatencyMs;
@property (nonatomic, readwrite, retain) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic, readonly) BOOL hasDatasetAbStatus;
@property (nonatomic, readwrite) BOOL hasDebugServerLatencyMs;
@property (nonatomic, readonly) BOOL hasEtaServiceSummary;
@property (nonatomic, readonly) BOOL hasResponseId;
@property (nonatomic, readonly) BOOL hasSessionState;
@property (nonatomic, readwrite) BOOL hasStatus;
@property (nonatomic, readwrite, retain) NSData *responseId;
@property (nonatomic, readwrite, retain) NSMutableArray *routes;
@property (nonatomic, readwrite, retain) NSData *sessionState;
@property (nonatomic, readwrite) int status;

+ (Class)cameraType;
+ (Class)routeType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addCamera:(id)arg1;
- (void)addRoute:(id)arg1;
- (id)cameraAtIndex:(unsigned long long)arg1;
- (id)cameras;
- (unsigned long long)camerasCount;
- (void)clearCameras;
- (void)clearRoutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDatasetAbStatus;
- (BOOL)hasResponseId;
- (BOOL)hasSessionState;
- (BOOL)hasStatus;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)responseId;
- (id)routeAtIndex:(unsigned long long)arg1;
- (id)routes;
- (unsigned long long)routesCount;
- (id)sessionState;
- (void)setCameras:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setResponseId:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setSessionState:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

// GEOETATrafficUpdateResponse (GEOEtaClientExtendedExtension)

- (unsigned long long)debugServerLatencyMs;
- (id)etaServiceSummary;
- (BOOL)hasDebugServerLatencyMs;
- (BOOL)hasEtaServiceSummary;
- (void)setDebugServerLatencyMs:(unsigned long long)arg1;
- (void)setEtaServiceSummary:(id)arg1;
- (void)setHasDebugServerLatencyMs:(BOOL)arg1;

@end
