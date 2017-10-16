/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDBrandLookupParameters : PBCodable <NSCopying> {
    NSString * _imessageUid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasImessageUid;
@property (nonatomic, readwrite, retain) NSString *imessageUid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasImessageUid;
- (unsigned long long)hash;
- (id)imessageUid;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setImessageUid:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end