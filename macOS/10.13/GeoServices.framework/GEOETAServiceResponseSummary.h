/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOETAServiceResponseSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int responseUuid : 1; 
        unsigned int status : 1; 
        unsigned int resultsApplied : 1; 
    }  _has;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _responseUuid;
    BOOL  _resultsApplied;
    NSMutableArray * _routeInfos;
    int  _status;
}

@property (nonatomic, readwrite) BOOL hasResponseUuid;
@property (nonatomic, readwrite) BOOL hasResultsApplied;
@property (nonatomic, readwrite) BOOL hasStatus;
@property (nonatomic, readwrite) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } responseUuid;
@property (nonatomic, readwrite) BOOL resultsApplied;
@property (nonatomic, readwrite, retain) NSMutableArray *routeInfos;
@property (nonatomic, readwrite) int status;

+ (Class)routeInfoType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addRouteInfo:(id)arg1;
- (void)clearRouteInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasResponseUuid;
- (BOOL)hasResultsApplied;
- (BOOL)hasStatus;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })responseUuid;
- (BOOL)resultsApplied;
- (id)routeInfoAtIndex:(unsigned long long)arg1;
- (id)routeInfos;
- (unsigned long long)routeInfosCount;
- (void)setHasResponseUuid:(BOOL)arg1;
- (void)setHasResultsApplied:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setResponseUuid:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setResultsApplied:(BOOL)arg1;
- (void)setRouteInfos:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
