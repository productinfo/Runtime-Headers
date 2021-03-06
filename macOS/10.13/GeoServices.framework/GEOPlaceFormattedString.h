/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPlaceFormattedString : PBCodable <NSCopying> {
    GEOFormattedString * _contactHome;
    GEOFormattedString * _contactOther;
    GEOFormattedString * _contactWork;
    GEOFormattedString * _custom;
    GEOFormattedString * _home;
    GEOFormattedString * _pointOfInterest;
    GEOFormattedString * _streetAddress;
    GEOFormattedString * _unknown;
    GEOFormattedString * _work;
}

@property (nonatomic, readwrite, retain) GEOFormattedString *contactHome;
@property (nonatomic, readwrite, retain) GEOFormattedString *contactOther;
@property (nonatomic, readwrite, retain) GEOFormattedString *contactWork;
@property (nonatomic, readwrite, retain) GEOFormattedString *custom;
@property (nonatomic, readonly) BOOL hasContactHome;
@property (nonatomic, readonly) BOOL hasContactOther;
@property (nonatomic, readonly) BOOL hasContactWork;
@property (nonatomic, readonly) BOOL hasCustom;
@property (nonatomic, readonly) BOOL hasHome;
@property (nonatomic, readonly) BOOL hasPointOfInterest;
@property (nonatomic, readonly) BOOL hasStreetAddress;
@property (nonatomic, readonly) BOOL hasUnknown;
@property (nonatomic, readonly) BOOL hasWork;
@property (nonatomic, readwrite, retain) GEOFormattedString *home;
@property (nonatomic, readwrite, retain) GEOFormattedString *pointOfInterest;
@property (nonatomic, readwrite, retain) GEOFormattedString *streetAddress;
@property (nonatomic, readwrite, retain) GEOFormattedString *unknown;
@property (nonatomic, readwrite, retain) GEOFormattedString *work;

- (void).cxx_destruct;
- (id)contactHome;
- (id)contactOther;
- (id)contactWork;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custom;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContactHome;
- (BOOL)hasContactOther;
- (BOOL)hasContactWork;
- (BOOL)hasCustom;
- (BOOL)hasHome;
- (BOOL)hasPointOfInterest;
- (BOOL)hasStreetAddress;
- (BOOL)hasUnknown;
- (BOOL)hasWork;
- (unsigned long long)hash;
- (id)home;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pointOfInterest;
- (BOOL)readFrom:(id)arg1;
- (void)setContactHome:(id)arg1;
- (void)setContactOther:(id)arg1;
- (void)setContactWork:(id)arg1;
- (void)setCustom:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPointOfInterest:(id)arg1;
- (void)setStreetAddress:(id)arg1;
- (void)setUnknown:(id)arg1;
- (void)setWork:(id)arg1;
- (id)streetAddress;
- (id)unknown;
- (id)work;
- (void)writeTo:(id)arg1;

@end
