/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying> {
    BOOL  _concatenatingFormatStringsSupported;
    struct { 
        unsigned int concatenatingFormatStringsSupported : 1; 
        unsigned int timestampFormatPatternSupported : 1; 
    }  _has;
    BOOL  _timestampFormatPatternSupported;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) BOOL concatenatingFormatStringsSupported;
@property (nonatomic, readwrite) BOOL hasConcatenatingFormatStringsSupported;
@property (nonatomic, readwrite) BOOL hasTimestampFormatPatternSupported;
@property (nonatomic, readwrite) BOOL timestampFormatPatternSupported;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (BOOL)concatenatingFormatStringsSupported;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConcatenatingFormatStringsSupported;
- (BOOL)hasTimestampFormatPatternSupported;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConcatenatingFormatStringsSupported:(BOOL)arg1;
- (void)setHasConcatenatingFormatStringsSupported:(BOOL)arg1;
- (void)setHasTimestampFormatPatternSupported:(BOOL)arg1;
- (void)setTimestampFormatPatternSupported:(BOOL)arg1;
- (BOOL)timestampFormatPatternSupported;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end