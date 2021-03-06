/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOClientCapabilities : PBCodable <NSCopying> {
    GEOAbAssignInfo * _abAssignInfo;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    BOOL  _clusteredTransitRoutesSupported;
    NSString * _deviceCountryCode;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    GEOFormattedStringClientCapabilities * _formattedStringClientCapabilities;
    NSString * _hardwareModel;
    struct { 
        unsigned int maxFormatterSupported : 1; 
        unsigned int maxManeuverTypeSupported : 1; 
        unsigned int maxRouteIncidentSupported : 1; 
        unsigned int maxTrafficSpeedSupported : 1; 
        unsigned int transitMarketSupport : 1; 
        unsigned int clusteredTransitRoutesSupported : 1; 
        unsigned int includeCrossLanguagePhonetics : 1; 
        unsigned int internalInstall : 1; 
        unsigned int internalTool : 1; 
        unsigned int routeOptionsSupported : 1; 
        unsigned int snapToClosestStopSupported : 1; 
        unsigned int supportsGuidanceEvents : 1; 
        unsigned int supportsGuidanceEventsInlineShields : 1; 
        unsigned int supportsLongShieldStrings : 1; 
    }  _has;
    BOOL  _includeCrossLanguagePhonetics;
    BOOL  _internalInstall;
    BOOL  _internalTool;
    int  _maxFormatterSupported;
    int  _maxManeuverTypeSupported;
    int  _maxRouteIncidentSupported;
    unsigned int  _maxTrafficSpeedSupported;
    GEOLocalTime * _requestTime;
    BOOL  _routeOptionsSupported;
    BOOL  _snapToClosestStopSupported;
    BOOL  _supportsGuidanceEvents;
    BOOL  _supportsGuidanceEventsInlineShields;
    BOOL  _supportsLongShieldStrings;
    int  _transitMarketSupport;
    PBUnknownFields * _unknownFields;
    NSString * _userCurrentTimezone;
}

@property (nonatomic, readwrite, retain) GEOAbAssignInfo *abAssignInfo;
@property (nonatomic, readwrite, retain) NSString *appMajorVersion;
@property (nonatomic, readwrite, retain) NSString *appMinorVersion;
@property (nonatomic, readwrite) BOOL clusteredTransitRoutesSupported;
@property (nonatomic, readwrite, retain) NSString *deviceCountryCode;
@property (nonatomic, readwrite, retain) NSMutableArray *displayLanguages;
@property (nonatomic, readwrite, retain) NSString *displayRegion;
@property (nonatomic, readwrite, retain) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities;
@property (nonatomic, readwrite, retain) NSString *hardwareModel;
@property (nonatomic, readonly) BOOL hasAbAssignInfo;
@property (nonatomic, readonly) BOOL hasAppMajorVersion;
@property (nonatomic, readonly) BOOL hasAppMinorVersion;
@property (nonatomic, readwrite) BOOL hasClusteredTransitRoutesSupported;
@property (nonatomic, readonly) BOOL hasDeviceCountryCode;
@property (nonatomic, readonly) BOOL hasDisplayRegion;
@property (nonatomic, readonly) BOOL hasFormattedStringClientCapabilities;
@property (nonatomic, readonly) BOOL hasHardwareModel;
@property (nonatomic, readwrite) BOOL hasIncludeCrossLanguagePhonetics;
@property (nonatomic, readwrite) BOOL hasInternalInstall;
@property (nonatomic, readwrite) BOOL hasInternalTool;
@property (nonatomic, readwrite) BOOL hasMaxFormatterSupported;
@property (nonatomic, readwrite) BOOL hasMaxManeuverTypeSupported;
@property (nonatomic, readwrite) BOOL hasMaxRouteIncidentSupported;
@property (nonatomic, readwrite) BOOL hasMaxTrafficSpeedSupported;
@property (nonatomic, readonly) BOOL hasRequestTime;
@property (nonatomic, readwrite) BOOL hasRouteOptionsSupported;
@property (nonatomic, readwrite) BOOL hasSnapToClosestStopSupported;
@property (nonatomic, readwrite) BOOL hasSupportsGuidanceEvents;
@property (nonatomic, readwrite) BOOL hasSupportsGuidanceEventsInlineShields;
@property (nonatomic, readwrite) BOOL hasSupportsLongShieldStrings;
@property (nonatomic, readwrite) BOOL hasTransitMarketSupport;
@property (nonatomic, readonly) BOOL hasUserCurrentTimezone;
@property (nonatomic, readwrite) BOOL includeCrossLanguagePhonetics;
@property (nonatomic, readwrite) BOOL internalInstall;
@property (nonatomic, readwrite) BOOL internalTool;
@property (nonatomic, readwrite) int maxFormatterSupported;
@property (nonatomic, readwrite) int maxManeuverTypeSupported;
@property (nonatomic, readwrite) int maxRouteIncidentSupported;
@property (nonatomic, readwrite) unsigned int maxTrafficSpeedSupported;
@property (nonatomic, readwrite, retain) GEOLocalTime *requestTime;
@property (nonatomic, readwrite) BOOL routeOptionsSupported;
@property (nonatomic, readwrite) BOOL snapToClosestStopSupported;
@property (nonatomic, readwrite) BOOL supportsGuidanceEvents;
@property (nonatomic, readwrite) BOOL supportsGuidanceEventsInlineShields;
@property (nonatomic, readwrite) BOOL supportsLongShieldStrings;
@property (nonatomic, readwrite) int transitMarketSupport;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) NSString *userCurrentTimezone;

+ (Class)displayLanguagesType;

- (void).cxx_destruct;
- (int)StringAsMaxManeuverTypeSupported:(id)arg1;
- (int)StringAsTransitMarketSupport:(id)arg1;
- (id)abAssignInfo;
- (void)addDisplayLanguages:(id)arg1;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (void)clearDisplayLanguages;
- (BOOL)clusteredTransitRoutesSupported;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCountryCode;
- (id)dictionaryRepresentation;
- (id)displayLanguages;
- (id)displayLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (id)formattedStringClientCapabilities;
- (id)hardwareModel;
- (BOOL)hasAbAssignInfo;
- (BOOL)hasAppMajorVersion;
- (BOOL)hasAppMinorVersion;
- (BOOL)hasClusteredTransitRoutesSupported;
- (BOOL)hasDeviceCountryCode;
- (BOOL)hasDisplayRegion;
- (BOOL)hasFormattedStringClientCapabilities;
- (BOOL)hasHardwareModel;
- (BOOL)hasIncludeCrossLanguagePhonetics;
- (BOOL)hasInternalInstall;
- (BOOL)hasInternalTool;
- (BOOL)hasMaxFormatterSupported;
- (BOOL)hasMaxManeuverTypeSupported;
- (BOOL)hasMaxRouteIncidentSupported;
- (BOOL)hasMaxTrafficSpeedSupported;
- (BOOL)hasRequestTime;
- (BOOL)hasRouteOptionsSupported;
- (BOOL)hasSnapToClosestStopSupported;
- (BOOL)hasSupportsGuidanceEvents;
- (BOOL)hasSupportsGuidanceEventsInlineShields;
- (BOOL)hasSupportsLongShieldStrings;
- (BOOL)hasTransitMarketSupport;
- (BOOL)hasUserCurrentTimezone;
- (unsigned long long)hash;
- (BOOL)includeCrossLanguagePhonetics;
- (BOOL)internalInstall;
- (BOOL)internalTool;
- (BOOL)isEqual:(id)arg1;
- (int)maxFormatterSupported;
- (int)maxManeuverTypeSupported;
- (id)maxManeuverTypeSupportedAsString:(int)arg1;
- (int)maxRouteIncidentSupported;
- (unsigned int)maxTrafficSpeedSupported;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestTime;
- (BOOL)routeOptionsSupported;
- (void)setAbAssignInfo:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setClusteredTransitRoutesSupported:(BOOL)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setFormattedStringClientCapabilities:(id)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHasClusteredTransitRoutesSupported:(BOOL)arg1;
- (void)setHasIncludeCrossLanguagePhonetics:(BOOL)arg1;
- (void)setHasInternalInstall:(BOOL)arg1;
- (void)setHasInternalTool:(BOOL)arg1;
- (void)setHasMaxFormatterSupported:(BOOL)arg1;
- (void)setHasMaxManeuverTypeSupported:(BOOL)arg1;
- (void)setHasMaxRouteIncidentSupported:(BOOL)arg1;
- (void)setHasMaxTrafficSpeedSupported:(BOOL)arg1;
- (void)setHasRouteOptionsSupported:(BOOL)arg1;
- (void)setHasSnapToClosestStopSupported:(BOOL)arg1;
- (void)setHasSupportsGuidanceEvents:(BOOL)arg1;
- (void)setHasSupportsGuidanceEventsInlineShields:(BOOL)arg1;
- (void)setHasSupportsLongShieldStrings:(BOOL)arg1;
- (void)setHasTransitMarketSupport:(BOOL)arg1;
- (void)setIncludeCrossLanguagePhonetics:(BOOL)arg1;
- (void)setInternalInstall:(BOOL)arg1;
- (void)setInternalTool:(BOOL)arg1;
- (void)setMaxFormatterSupported:(int)arg1;
- (void)setMaxManeuverTypeSupported:(int)arg1;
- (void)setMaxRouteIncidentSupported:(int)arg1;
- (void)setMaxTrafficSpeedSupported:(unsigned int)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setRouteOptionsSupported:(BOOL)arg1;
- (void)setSnapToClosestStopSupported:(BOOL)arg1;
- (void)setSupportsGuidanceEvents:(BOOL)arg1;
- (void)setSupportsGuidanceEventsInlineShields:(BOOL)arg1;
- (void)setSupportsLongShieldStrings:(BOOL)arg1;
- (void)setTransitMarketSupport:(int)arg1;
- (void)setUserCurrentTimezone:(id)arg1;
- (BOOL)snapToClosestStopSupported;
- (BOOL)supportsGuidanceEvents;
- (BOOL)supportsGuidanceEventsInlineShields;
- (BOOL)supportsLongShieldStrings;
- (int)transitMarketSupport;
- (id)transitMarketSupportAsString:(int)arg1;
- (id)unknownFields;
- (id)userCurrentTimezone;
- (void)writeTo:(id)arg1;

@end
