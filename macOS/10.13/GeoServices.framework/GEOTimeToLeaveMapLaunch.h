/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTimeToLeaveMapLaunch : PBCodable <NSCopying> {
    struct { 
        unsigned int minutesUntilEvent : 1; 
    }  _has;
    double  _minutesUntilEvent;
}

@property (nonatomic, readwrite) BOOL hasMinutesUntilEvent;
@property (nonatomic, readwrite) double minutesUntilEvent;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMinutesUntilEvent;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)minutesUntilEvent;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMinutesUntilEvent:(BOOL)arg1;
- (void)setMinutesUntilEvent:(double)arg1;
- (void)writeTo:(id)arg1;

@end
