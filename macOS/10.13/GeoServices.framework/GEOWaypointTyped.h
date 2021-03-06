/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOWaypointTyped : PBCodable <NSCopying> {
    struct { 
        unsigned int waypointType : 1; 
        unsigned int isCurrentLocation : 1; 
        unsigned int isLocationOfInterest : 1; 
    }  _has;
    BOOL  _isCurrentLocation;
    BOOL  _isLocationOfInterest;
    PBUnknownFields * _unknownFields;
    GEOWaypointID * _waypointId;
    GEOWaypointLocation * _waypointLocation;
    GEOWaypointPlace * _waypointPlace;
    int  _waypointType;
}

@property (nonatomic, readwrite) BOOL hasIsCurrentLocation;
@property (nonatomic, readwrite) BOOL hasIsLocationOfInterest;
@property (nonatomic, readonly) BOOL hasWaypointId;
@property (nonatomic, readonly) BOOL hasWaypointLocation;
@property (nonatomic, readonly) BOOL hasWaypointPlace;
@property (nonatomic, readwrite) BOOL hasWaypointType;
@property (nonatomic, readwrite) BOOL isCurrentLocation;
@property (nonatomic, readwrite) BOOL isLocationOfInterest;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) GEOWaypointID *waypointId;
@property (nonatomic, readwrite, retain) GEOWaypointLocation *waypointLocation;
@property (nonatomic, readwrite, retain) GEOWaypointPlace *waypointPlace;
@property (nonatomic, readwrite) int waypointType;

- (void).cxx_destruct;
- (int)StringAsWaypointType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsCurrentLocation;
- (BOOL)hasIsLocationOfInterest;
- (BOOL)hasWaypointId;
- (BOOL)hasWaypointLocation;
- (BOOL)hasWaypointPlace;
- (BOOL)hasWaypointType;
- (unsigned long long)hash;
- (BOOL)isCurrentLocation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocationOfInterest;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsCurrentLocation:(BOOL)arg1;
- (void)setHasIsLocationOfInterest:(BOOL)arg1;
- (void)setHasWaypointType:(BOOL)arg1;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (void)setIsLocationOfInterest:(BOOL)arg1;
- (void)setWaypointId:(id)arg1;
- (void)setWaypointLocation:(id)arg1;
- (void)setWaypointPlace:(id)arg1;
- (void)setWaypointType:(int)arg1;
- (id)unknownFields;
- (id)waypointId;
- (id)waypointLocation;
- (id)waypointPlace;
- (int)waypointType;
- (id)waypointTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

// GEOWaypointTyped (GEOProtoExtras)

- (id)locationForWaypoint;

@end
