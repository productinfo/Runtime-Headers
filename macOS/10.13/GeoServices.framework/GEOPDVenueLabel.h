/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDVenueLabel : PBCodable <NSCopying> {
    NSString * _detail;
    NSString * _name;
    NSString * _nameShort;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSString *detail;
@property (nonatomic, readonly) BOOL hasDetail;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasNameShort;
@property (nonatomic, readwrite, retain) NSString *name;
@property (nonatomic, readwrite, retain) NSString *nameShort;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (BOOL)hasDetail;
- (BOOL)hasName;
- (BOOL)hasNameShort;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)nameShort;
- (BOOL)readFrom:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameShort:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
