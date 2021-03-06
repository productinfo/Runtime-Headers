/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDDeparturePredicate : PBCodable <NSCopying> {
    struct { 
        unsigned int timeRange : 1; 
        unsigned int numAdditionalDepartures : 1; 
    }  _has;
    unsigned int  _numAdditionalDepartures;
    struct GEOPDTimeRange { 
        unsigned int _duration; 
        unsigned int _startTime; 
        struct { 
            unsigned int duration : 1; 
            unsigned int startTime : 1; 
        } _has; 
    }  _timeRange;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) BOOL hasNumAdditionalDepartures;
@property (nonatomic, readwrite) BOOL hasTimeRange;
@property (nonatomic, readwrite) unsigned int numAdditionalDepartures;
@property (nonatomic, readwrite) struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } timeRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNumAdditionalDepartures;
- (BOOL)hasTimeRange;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAdditionalDepartures;
- (BOOL)readFrom:(id)arg1;
- (void)setHasNumAdditionalDepartures:(BOOL)arg1;
- (void)setHasTimeRange:(BOOL)arg1;
- (void)setNumAdditionalDepartures:(unsigned int)arg1;
- (void)setTimeRange:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timeRange;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPDDeparturePredicate (PlaceDataExtras)

- (id)initWithTraitsTransitModeFilter:(id)arg1;

@end
