/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapItemHandle : PBCodable <NSCopying> {
    NSData * _compressedMapItemStorage;
    int  _handleType;
    struct { 
        unsigned int handleType : 1; 
    }  _has;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
    GEOMapItemInitialRequestData * _placeRequestData;
}

@property (nonatomic, readwrite, retain) NSData *compressedMapItemStorage;
@property (nonatomic, readwrite) int handleType;
@property (nonatomic, readonly) BOOL hasCompressedMapItemStorage;
@property (nonatomic, readwrite) BOOL hasHandleType;
@property (nonatomic, readonly) BOOL hasPlaceRefinementParameters;
@property (nonatomic, readonly) BOOL hasPlaceRequestData;
@property (nonatomic, readwrite, retain) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (nonatomic, readwrite, retain) GEOMapItemInitialRequestData *placeRequestData;

- (void).cxx_destruct;
- (int)StringAsHandleType:(id)arg1;
- (id)compressedMapItemStorage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)handleType;
- (id)handleTypeAsString:(int)arg1;
- (BOOL)hasCompressedMapItemStorage;
- (BOOL)hasHandleType;
- (BOOL)hasPlaceRefinementParameters;
- (BOOL)hasPlaceRequestData;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRefinementParameters;
- (id)placeRequestData;
- (BOOL)readFrom:(id)arg1;
- (void)setCompressedMapItemStorage:(id)arg1;
- (void)setHandleType:(int)arg1;
- (void)setHasHandleType:(BOOL)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)setPlaceRequestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
