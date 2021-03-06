/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying> {
    int  _enumValue;
    struct { 
        unsigned int enumValue : 1; 
    }  _has;
    GEOFormattedString * _name;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) int enumValue;
@property (nonatomic, readonly) <GEOServerFormattedString> *formattedName;
@property (nonatomic, readwrite) BOOL hasEnumValue;
@property (nonatomic, readonly) BOOL hasName;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) GEOFormattedString *name;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) int value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)enumValue;
- (BOOL)hasEnumValue;
- (BOOL)hasName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setEnumValue:(int)arg1;
- (void)setHasEnumValue:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

// GEORequestOption (GEOTransitExtrasInternal)

- (id)formattedName;
- (int)value;

@end
