/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying> {
    GEOPDFeatureBuilding * _featureBuilding;
    GEOPDFeaturePOI * _featurePoi;
    GEOPDFeatureVenue * _featureVenue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOPDFeatureBuilding *featureBuilding;
@property (nonatomic, readwrite, retain) GEOPDFeaturePOI *featurePoi;
@property (nonatomic, readwrite, retain) GEOPDFeatureVenue *featureVenue;
@property (nonatomic, readonly) BOOL hasFeatureBuilding;
@property (nonatomic, readonly) BOOL hasFeaturePoi;
@property (nonatomic, readonly) BOOL hasFeatureVenue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureBuilding;
- (id)featurePoi;
- (id)featureVenue;
- (BOOL)hasFeatureBuilding;
- (BOOL)hasFeaturePoi;
- (BOOL)hasFeatureVenue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFeatureBuilding:(id)arg1;
- (void)setFeaturePoi:(id)arg1;
- (void)setFeatureVenue:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
