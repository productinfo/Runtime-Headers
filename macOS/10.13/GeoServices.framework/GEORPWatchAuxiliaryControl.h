/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {
    NSString * _hardwareIdentifier;
    NSString * _osBuild;
    NSString * _osVersion;
}

@property (nonatomic, readwrite, retain) NSString *hardwareIdentifier;
@property (nonatomic, readonly) BOOL hasHardwareIdentifier;
@property (nonatomic, readonly) BOOL hasOsBuild;
@property (nonatomic, readonly) BOOL hasOsVersion;
@property (nonatomic, readwrite, retain) NSString *osBuild;
@property (nonatomic, readwrite, retain) NSString *osVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardwareIdentifier;
- (BOOL)hasHardwareIdentifier;
- (BOOL)hasOsBuild;
- (BOOL)hasOsVersion;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)osBuild;
- (id)osVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end