/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOVStyleAttribute : PBCodable <NSCopying> {
    struct { 
        unsigned int intValue : 1; 
    }  _has;
    int  _intValue;
    unsigned int  _key;
}

@property (nonatomic, readwrite) BOOL hasIntValue;
@property (nonatomic, readwrite) int intValue;
@property (nonatomic, readwrite) unsigned int key;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIntValue;
- (unsigned long long)hash;
- (int)intValue;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)key;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIntValue:(BOOL)arg1;
- (void)setIntValue:(int)arg1;
- (void)setKey:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end