/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDCanonicalLocationSearchParameters : PBCodable <NSCopying> {
    NSString * _queryString;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasQueryString;
@property (nonatomic, readwrite, retain) NSString *queryString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasQueryString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryString;
- (BOOL)readFrom:(id)arg1;
- (void)setQueryString:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
