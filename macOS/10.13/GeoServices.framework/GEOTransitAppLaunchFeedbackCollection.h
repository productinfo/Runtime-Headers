/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    GEOLatLng * _destination;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    GEOLatLng * _source;
    double  _timestamp;
}

@property (nonatomic, readwrite, retain) NSString *bundleIdentifier;
@property (nonatomic, readwrite, retain) GEOLatLng *destination;
@property (nonatomic, readonly) BOOL hasBundleIdentifier;
@property (nonatomic, readonly) BOOL hasDestination;
@property (nonatomic, readonly) BOOL hasSource;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite, retain) GEOLatLng *source;
@property (nonatomic, readwrite) double timestamp;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (BOOL)hasBundleIdentifier;
- (BOOL)hasDestination;
- (BOOL)hasSource;
- (BOOL)hasTimestamp;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)source;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
