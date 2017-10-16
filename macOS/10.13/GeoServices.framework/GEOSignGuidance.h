/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOSignGuidance : PBCodable <NSCopying> {
    struct { 
        unsigned int maneuverArrowOverride : 1; 
        unsigned int stackRanking : 1; 
    }  _has;
    int  _maneuverArrowOverride;
    NSMutableArray * _secondarySigns;
    GEONameInfo * _shieldName;
    NSMutableArray * _signDetails;
    NSMutableArray * _signTitles;
    unsigned int  _stackRanking;
}

@property (nonatomic, readwrite) BOOL hasManeuverArrowOverride;
@property (nonatomic, readonly) BOOL hasShieldName;
@property (nonatomic, readwrite) BOOL hasStackRanking;
@property (nonatomic, readwrite) int maneuverArrowOverride;
@property (nonatomic, readwrite, retain) NSMutableArray *secondarySigns;
@property (nonatomic, readwrite, retain) GEONameInfo *shieldName;
@property (nonatomic, readwrite, retain) NSMutableArray *signDetails;
@property (nonatomic, readwrite, retain) NSMutableArray *signTitles;
@property (nonatomic, readwrite) unsigned int stackRanking;

+ (Class)secondarySignType;
+ (Class)signDetailType;
+ (Class)signTitleType;

- (void).cxx_destruct;
- (int)StringAsManeuverArrowOverride:(id)arg1;
- (void)addSecondarySign:(id)arg1;
- (void)addSignDetail:(id)arg1;
- (void)addSignTitle:(id)arg1;
- (void)clearSecondarySigns;
- (void)clearSignDetails;
- (void)clearSignTitles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasManeuverArrowOverride;
- (BOOL)hasShieldName;
- (BOOL)hasStackRanking;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (int)maneuverArrowOverride;
- (id)maneuverArrowOverrideAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)secondarySignAtIndex:(unsigned long long)arg1;
- (id)secondarySigns;
- (unsigned long long)secondarySignsCount;
- (void)setHasManeuverArrowOverride:(BOOL)arg1;
- (void)setHasStackRanking:(BOOL)arg1;
- (void)setManeuverArrowOverride:(int)arg1;
- (void)setSecondarySigns:(id)arg1;
- (void)setShieldName:(id)arg1;
- (void)setSignDetails:(id)arg1;
- (void)setSignTitles:(id)arg1;
- (void)setStackRanking:(unsigned int)arg1;
- (id)shieldName;
- (id)signDetailAtIndex:(unsigned long long)arg1;
- (id)signDetails;
- (unsigned long long)signDetailsCount;
- (id)signTitleAtIndex:(unsigned long long)arg1;
- (id)signTitles;
- (unsigned long long)signTitlesCount;
- (unsigned int)stackRanking;
- (void)writeTo:(id)arg1;

@end