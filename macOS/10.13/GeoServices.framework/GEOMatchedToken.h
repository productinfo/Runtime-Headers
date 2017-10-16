/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMatchedToken : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoIds;
    int  _geoType;
    struct { 
        unsigned int geoType : 1; 
    }  _has;
    NSString * _matchedToken;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned long long*geoIds;
@property (nonatomic, readonly) unsigned long long geoIdsCount;
@property (nonatomic, readwrite) int geoType;
@property (nonatomic, readwrite) BOOL hasGeoType;
@property (nonatomic, readwrite, retain) NSString *matchedToken;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addGeoId:(unsigned long long)arg1;
- (void)clearGeoIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)geoIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)geoIds;
- (unsigned long long)geoIdsCount;
- (int)geoType;
- (BOOL)hasGeoType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)matchedToken;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setGeoIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setGeoType:(int)arg1;
- (void)setHasGeoType:(BOOL)arg1;
- (void)setMatchedToken:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end