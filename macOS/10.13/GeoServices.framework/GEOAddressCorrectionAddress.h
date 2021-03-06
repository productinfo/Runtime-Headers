/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {
    NSString * _addressID;
    GEOLocation * _addressLocation;
}

@property (nonatomic, readwrite, retain) NSString *addressID;
@property (nonatomic, readwrite, retain) GEOLocation *addressLocation;
@property (nonatomic, readonly) BOOL hasAddressID;
@property (nonatomic, readonly) BOOL hasAddressLocation;

- (void).cxx_destruct;
- (id)addressID;
- (id)addressLocation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressID;
- (BOOL)hasAddressLocation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setAddressLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
