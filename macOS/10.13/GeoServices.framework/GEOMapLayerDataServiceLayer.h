/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapLayerDataServiceLayer : PBCodable <NSCopying> {
    struct { 
        unsigned int identifier : 1; 
    }  _has;
    unsigned int  _identifier;
}

@property (nonatomic, readwrite) BOOL hasIdentifier;
@property (nonatomic, readwrite) unsigned int identifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIdentifier:(BOOL)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
