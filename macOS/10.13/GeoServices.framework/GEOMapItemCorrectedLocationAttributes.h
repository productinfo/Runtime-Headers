/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying> {
    GEOAddress * _correctedAddress;
    NSString * _correctedAddressSecondaryStreetLine;
    GEOLatLng * _correctedCoordinate;
    NSString * _customLabel;
    struct { 
        unsigned int lastUpdateDate : 1; 
        unsigned int hasSubmittedRAP : 1; 
    }  _has;
    BOOL  _hasSubmittedRAP;
    double  _lastUpdateDate;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOAddress *correctedAddress;
@property (nonatomic, readwrite, retain) NSString *correctedAddressSecondaryStreetLine;
@property (nonatomic, readwrite, retain) GEOLatLng *correctedCoordinate;
@property (nonatomic, readwrite, retain) NSString *customLabel;
@property (nonatomic, readonly) BOOL hasCorrectedAddress;
@property (nonatomic, readonly) BOOL hasCorrectedAddressSecondaryStreetLine;
@property (nonatomic, readonly) BOOL hasCorrectedCoordinate;
@property (nonatomic, readonly) BOOL hasCustomLabel;
@property (nonatomic, readwrite) BOOL hasHasSubmittedRAP;
@property (nonatomic, readwrite) BOOL hasLastUpdateDate;
@property (nonatomic, readwrite) BOOL hasSubmittedRAP;
@property (nonatomic, readwrite) double lastUpdateDate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedAddress;
- (id)correctedAddressSecondaryStreetLine;
- (id)correctedCoordinate;
- (id)customLabel;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCorrectedAddress;
- (BOOL)hasCorrectedAddressSecondaryStreetLine;
- (BOOL)hasCorrectedCoordinate;
- (BOOL)hasCustomLabel;
- (BOOL)hasHasSubmittedRAP;
- (BOOL)hasLastUpdateDate;
- (BOOL)hasSubmittedRAP;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (double)lastUpdateDate;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCorrectedAddress:(id)arg1;
- (void)setCorrectedAddressSecondaryStreetLine:(id)arg1;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)setCustomLabel:(id)arg1;
- (void)setHasHasSubmittedRAP:(BOOL)arg1;
- (void)setHasLastUpdateDate:(BOOL)arg1;
- (void)setHasSubmittedRAP:(BOOL)arg1;
- (void)setLastUpdateDate:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end