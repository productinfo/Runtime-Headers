/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapURLParser : NSObject {
    NSString * _abAddressID;
    NSString * _abRecordID;
    NSString * _addressString;
    double  _altitude;
    struct { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    NSString * _cnAddressIdentifier;
    NSString * _cnContactIdentifier;
    NSString * _contentProvider;
    NSString * _contentProviderID;
    NSString * _directionsDestinationAddressString;
    NSString * _directionsSourceAddressString;
    BOOL  _exactPositionSpecified;
    GEOURLExtraStorage * _extraStorage;
    long long  _favoritesType;
    unsigned long long  _lineMUID;
    NSString * _lineName;
    int  _mapType;
    double  _roll;
    double  _rotation;
    struct { 
        double latitude; 
        double longitude; 
    }  _searchCoordinate;
    int  _searchProviderID;
    NSString * _searchQuery;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _searchRegion;
    unsigned long long  _searchUID;
    struct { 
        double latitudeDelta; 
        double longitudeDelta; 
    }  _span;
    BOOL  _tester;
    double  _tilt;
    int  _trackingMode;
    int  _transportType;
    NSURL * _url;
    GEOUserSessionEntity * _userSessionEntity;
    float  _zoomLevel;
}

@property (atomic, readonly) NSString *abAddressID;
@property (atomic, readonly) NSString *abRecordID;
@property (atomic, readonly) NSString *addressString;
@property (atomic, readonly) double altitude;
@property (atomic, readonly) struct { double x1; double x2; } centerCoordinate;
@property (atomic, readonly) NSString *cnAddressIdentifier;
@property (atomic, readonly) NSString *cnContactIdentifier;
@property (atomic, readonly) NSString *contentProvider;
@property (atomic, readonly) NSString *contentProviderID;
@property (atomic, readonly) NSString *directionsDestinationAddressString;
@property (atomic, readonly) NSString *directionsSourceAddressString;
@property (atomic, readonly) BOOL exactPositionSpecified;
@property (atomic, readonly) GEOURLExtraStorage *extraStorage;
@property (atomic, readonly) long long favoritesType;
@property (atomic, readonly) unsigned long long lineMUID;
@property (atomic, readonly, copy) NSString *lineName;
@property (atomic, readonly) int mapType;
@property (atomic, readonly) double roll;
@property (atomic, readonly) double rotation;
@property (atomic, readonly) struct { double x1; double x2; } searchCoordinate;
@property (atomic, readonly) int searchProviderID;
@property (atomic, readonly) NSString *searchQuery;
@property (atomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } searchRegion;
@property (atomic, readonly) unsigned long long searchUID;
@property (atomic, readonly) struct { double x1; double x2; } span;
@property (atomic, readonly) BOOL tester;
@property (atomic, readonly) double tilt;
@property (atomic, readonly) int trackingMode;
@property (atomic, readonly) int transportType;
@property (atomic, readonly) GEOUserSessionEntity *userSessionEntity;
@property (atomic, readonly) float zoomLevel;

+ (BOOL)isValidMapURL:(id)arg1;
+ (BOOL)isValidMapsCategoryURL:(id)arg1;
+ (BOOL)isValidMapsURLForAppendingSharedSessionID:(id)arg1;

- (void).cxx_destruct;
- (id)abAddressID;
- (id)abRecordID;
- (id)addressString;
- (double)altitude;
- (struct { double x1; double x2; })centerCoordinate;
- (id)cnAddressIdentifier;
- (id)cnContactIdentifier;
- (id)contentProvider;
- (id)contentProviderID;
- (id)directionsDestinationAddressString;
- (id)directionsSourceAddressString;
- (BOOL)exactPositionSpecified;
- (id)extraStorage;
- (long long)favoritesType;
- (id)initWithURL:(id)arg1;
- (unsigned long long)lineMUID;
- (id)lineName;
- (int)mapType;
- (BOOL)parseIncludingCustomParameters:(BOOL)arg1;
- (double)roll;
- (double)rotation;
- (struct { double x1; double x2; })searchCoordinate;
- (int)searchProviderID;
- (id)searchQuery;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })searchRegion;
- (unsigned long long)searchUID;
- (struct { double x1; double x2; })span;
- (BOOL)tester;
- (double)tilt;
- (int)trackingMode;
- (int)transportType;
- (id)userSessionEntity;
- (float)zoomLevel;

@end
