/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOInstructionSet : PBCodable <NSCopying> {
    GEOFormattedString * _countStopsText;
    GEOFormattedString * _departureBar;
    GEODrivingWalkingInstruction * _drivingWalkingListInstruction;
    GEODrivingWalkingInstruction * _drivingWalkingSignInstruction;
    GEODrivingWalkingSpokenInstruction * _drivingWalkingSpokenInstruction;
    GEOGenericInstruction * _genericInstruction;
    GEOTransitListInstruction * _transitListInstruction;
    GEOTransitSignInstruction * _transitSignInstruction;
}

@property (nonatomic, readonly) <GEOServerFormattedString> *countStopsFormattedString;
@property (nonatomic, readwrite, retain) GEOFormattedString *countStopsText;
@property (nonatomic, readwrite, retain) GEOFormattedString *departureBar;
@property (nonatomic, readonly) <GEOServerFormattedString> *departureBarFormattedString;
@property (nonatomic, readwrite, retain) GEODrivingWalkingInstruction *drivingWalkingListInstruction;
@property (nonatomic, readwrite, retain) GEODrivingWalkingInstruction *drivingWalkingSignInstruction;
@property (nonatomic, readwrite, retain) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction;
@property (nonatomic, readwrite, retain) GEOGenericInstruction *genericInstruction;
@property (nonatomic, readonly) BOOL hasCountStopsText;
@property (nonatomic, readonly) BOOL hasDepartureBar;
@property (nonatomic, readonly) BOOL hasDrivingWalkingListInstruction;
@property (nonatomic, readonly) BOOL hasDrivingWalkingSignInstruction;
@property (nonatomic, readonly) BOOL hasDrivingWalkingSpokenInstruction;
@property (nonatomic, readonly) BOOL hasGenericInstruction;
@property (nonatomic, readonly) BOOL hasTransitListInstruction;
@property (nonatomic, readonly) BOOL hasTransitSignInstruction;
@property (nonatomic, readwrite, retain) GEOTransitListInstruction *transitListInstruction;
@property (nonatomic, readwrite, retain) GEOTransitSignInstruction *transitSignInstruction;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countStopsText;
- (id)departureBar;
- (id)description;
- (id)dictionaryRepresentation;
- (id)drivingWalkingListInstruction;
- (id)drivingWalkingSignInstruction;
- (id)drivingWalkingSpokenInstruction;
- (id)genericInstruction;
- (BOOL)hasCountStopsText;
- (BOOL)hasDepartureBar;
- (BOOL)hasDrivingWalkingListInstruction;
- (BOOL)hasDrivingWalkingSignInstruction;
- (BOOL)hasDrivingWalkingSpokenInstruction;
- (BOOL)hasGenericInstruction;
- (BOOL)hasTransitListInstruction;
- (BOOL)hasTransitSignInstruction;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCountStopsText:(id)arg1;
- (void)setDepartureBar:(id)arg1;
- (void)setDrivingWalkingListInstruction:(id)arg1;
- (void)setDrivingWalkingSignInstruction:(id)arg1;
- (void)setDrivingWalkingSpokenInstruction:(id)arg1;
- (void)setGenericInstruction:(id)arg1;
- (void)setTransitListInstruction:(id)arg1;
- (void)setTransitSignInstruction:(id)arg1;
- (id)transitListInstruction;
- (id)transitSignInstruction;
- (void)writeTo:(id)arg1;

// GEOInstructionSet (GEOTransitExtras)

- (id)countStopsFormattedString;
- (id)departureBarFormattedString;

@end
