/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventBatchTrafficProbe : PBCodable <NSCopying> {
    NSData * _locationCollection;
}

@property (nonatomic, readonly) BOOL hasLocationCollection;
@property (nonatomic, readwrite, retain) NSData *locationCollection;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLocationCollection;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationCollection;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLocationCollection:(id)arg1;
- (void)writeTo:(id)arg1;

@end
