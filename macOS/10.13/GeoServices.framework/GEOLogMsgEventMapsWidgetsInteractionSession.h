/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying> {
    int  _duration;
    int  _endState;
    struct { 
        unsigned int duration : 1; 
        unsigned int endState : 1; 
        unsigned int localDayOfWeek : 1; 
        unsigned int localHour : 1; 
        unsigned int mapsWidgetType : 1; 
        unsigned int lockedMode : 1; 
    }  _has;
    int  _localDayOfWeek;
    int  _localHour;
    BOOL  _lockedMode;
    GEOMapsDestinationsWidget * _mapsDestinationsWidget;
    GEOMapsNearbyWidget * _mapsNearbyWidget;
    GEOMapsTransitWidget * _mapsTransitWidget;
    int  _mapsWidgetType;
}

@property (nonatomic, readwrite) int duration;
@property (nonatomic, readwrite) int endState;
@property (nonatomic, readwrite) BOOL hasDuration;
@property (nonatomic, readwrite) BOOL hasEndState;
@property (nonatomic, readwrite) BOOL hasLocalDayOfWeek;
@property (nonatomic, readwrite) BOOL hasLocalHour;
@property (nonatomic, readwrite) BOOL hasLockedMode;
@property (nonatomic, readonly) BOOL hasMapsDestinationsWidget;
@property (nonatomic, readonly) BOOL hasMapsNearbyWidget;
@property (nonatomic, readonly) BOOL hasMapsTransitWidget;
@property (nonatomic, readwrite) BOOL hasMapsWidgetType;
@property (nonatomic, readwrite) int localDayOfWeek;
@property (nonatomic, readwrite) int localHour;
@property (nonatomic, readwrite) BOOL lockedMode;
@property (nonatomic, readwrite, retain) GEOMapsDestinationsWidget *mapsDestinationsWidget;
@property (nonatomic, readwrite, retain) GEOMapsNearbyWidget *mapsNearbyWidget;
@property (nonatomic, readwrite, retain) GEOMapsTransitWidget *mapsTransitWidget;
@property (nonatomic, readwrite) int mapsWidgetType;

- (void).cxx_destruct;
- (int)StringAsEndState:(id)arg1;
- (int)StringAsMapsWidgetType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duration;
- (int)endState;
- (id)endStateAsString:(int)arg1;
- (BOOL)hasDuration;
- (BOOL)hasEndState;
- (BOOL)hasLocalDayOfWeek;
- (BOOL)hasLocalHour;
- (BOOL)hasLockedMode;
- (BOOL)hasMapsDestinationsWidget;
- (BOOL)hasMapsNearbyWidget;
- (BOOL)hasMapsTransitWidget;
- (BOOL)hasMapsWidgetType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (int)localDayOfWeek;
- (int)localHour;
- (BOOL)lockedMode;
- (id)mapsDestinationsWidget;
- (id)mapsNearbyWidget;
- (id)mapsTransitWidget;
- (int)mapsWidgetType;
- (id)mapsWidgetTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setEndState:(int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasEndState:(BOOL)arg1;
- (void)setHasLocalDayOfWeek:(BOOL)arg1;
- (void)setHasLocalHour:(BOOL)arg1;
- (void)setHasLockedMode:(BOOL)arg1;
- (void)setHasMapsWidgetType:(BOOL)arg1;
- (void)setLocalDayOfWeek:(int)arg1;
- (void)setLocalHour:(int)arg1;
- (void)setLockedMode:(BOOL)arg1;
- (void)setMapsDestinationsWidget:(id)arg1;
- (void)setMapsNearbyWidget:(id)arg1;
- (void)setMapsTransitWidget:(id)arg1;
- (void)setMapsWidgetType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
