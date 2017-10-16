/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTimeRange : PBCodable <NSCopying> {
    unsigned int  _from;
    struct { 
        unsigned int from : 1; 
        unsigned int to : 1; 
    }  _has;
    unsigned int  _to;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) unsigned int from;
@property (nonatomic, readwrite) BOOL hasFrom;
@property (nonatomic, readwrite) BOOL hasTo;
@property (nonatomic, readwrite) unsigned int to;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)from;
- (BOOL)hasFrom;
- (BOOL)hasTo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFrom:(unsigned int)arg1;
- (void)setHasFrom:(BOOL)arg1;
- (void)setHasTo:(BOOL)arg1;
- (void)setTo:(unsigned int)arg1;
- (unsigned int)to;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOTimeRange (PlaceDataExtras)

- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1;

@end