/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOETARequest : PBRequest <NSCopying> {
    GEOPDABClientDatasetMetadata * _abClientMetadata;
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    BOOL  _allowPartialResults;
    GEOAutomobileOptions * _automobileOptions;
    GEOClientCapabilities * _clientCapabilities;
    GEOCommonOptions * _commonOptions;
    NSMutableArray * _destinationWaypointTypeds;
    NSMutableArray * _destinations;
    NSMutableArray * _deviceHistoricalLocations;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int timepoint : 1; 
        unsigned int transportType : 1; 
        unsigned int walkingLimitMeters : 1; 
        unsigned int allowPartialResults : 1; 
        unsigned int includeDistance : 1; 
        unsigned int includeHistoricTravelTime : 1; 
        unsigned int includeRouteTrafficDetail : 1; 
        unsigned int includeShortTrafficSummary : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int needServerLatency : 1; 
        unsigned int useLiveTrafficAsFallback : 1; 
    }  _has;
    BOOL  _includeDistance;
    BOOL  _includeHistoricTravelTime;
    BOOL  _includeRouteTrafficDetail;
    BOOL  _includeShortTrafficSummary;
    BOOL  _isFromAPI;
    GEOLocation * _lastKnownRoadLocation;
    BOOL  _needServerLatency;
    GEOWaypoint * _origin;
    GEOWaypointTyped * _originWaypointTyped;
    NSData * _originalRouteID;
    NSData * _originalRouteZilchPoints;
    NSString * _phoneticLocaleIdentifier;
    NSString * _requestingAppId;
    NSMutableArray * _serviceTags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    NSData * _sessionState;
    struct GEOTimepoint { 
        double _time; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _timepoint;
    GEOTFTrafficSnapshot * _trafficSnapshot;
    GEOTransitOptions * _transitOptions;
    int  _transportType;
    BOOL  _useLiveTrafficAsFallback;
    unsigned int  _walkingLimitMeters;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, readwrite, retain) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (nonatomic, readwrite, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic, readwrite) BOOL allowPartialResults;
@property (nonatomic, readwrite, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readwrite, retain) GEOClientCapabilities *clientCapabilities;
@property (nonatomic, readwrite, retain) GEOCommonOptions *commonOptions;
@property (nonatomic, readwrite, retain) NSMutableArray *destinationWaypointTypeds;
@property (nonatomic, readwrite, retain) NSMutableArray *destinations;
@property (nonatomic, readwrite, retain) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic, readonly) BOOL hasAbClientMetadata;
@property (nonatomic, readonly) BOOL hasAdditionalEnabledMarkets;
@property (nonatomic, readwrite) BOOL hasAllowPartialResults;
@property (nonatomic, readonly) BOOL hasAutomobileOptions;
@property (nonatomic, readonly) BOOL hasClientCapabilities;
@property (nonatomic, readonly) BOOL hasCommonOptions;
@property (nonatomic, readwrite) BOOL hasIncludeDistance;
@property (nonatomic, readwrite) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic, readwrite) BOOL hasIncludeRouteTrafficDetail;
@property (nonatomic, readwrite) BOOL hasIncludeShortTrafficSummary;
@property (nonatomic, readwrite) BOOL hasIsFromAPI;
@property (nonatomic, readonly) BOOL hasLastKnownRoadLocation;
@property (nonatomic, readwrite) BOOL hasNeedServerLatency;
@property (nonatomic, readonly) BOOL hasOrigin;
@property (nonatomic, readonly) BOOL hasOriginWaypointTyped;
@property (nonatomic, readonly) BOOL hasOriginalRouteID;
@property (nonatomic, readonly) BOOL hasOriginalRouteZilchPoints;
@property (nonatomic, readonly) BOOL hasPhoneticLocaleIdentifier;
@property (nonatomic, readonly) BOOL hasRequestingAppId;
@property (nonatomic, readwrite) BOOL hasSessionID;
@property (nonatomic, readonly) BOOL hasSessionState;
@property (nonatomic, readwrite) BOOL hasTimepoint;
@property (nonatomic, readonly) BOOL hasTrafficSnapshot;
@property (nonatomic, readonly) BOOL hasTransitOptions;
@property (nonatomic, readwrite) BOOL hasTransportType;
@property (nonatomic, readwrite) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic, readwrite) BOOL hasWalkingLimitMeters;
@property (nonatomic, readonly) BOOL hasWalkingOptions;
@property (nonatomic, readwrite) BOOL includeDistance;
@property (nonatomic, readwrite) BOOL includeHistoricTravelTime;
@property (nonatomic, readwrite) BOOL includeRouteTrafficDetail;
@property (nonatomic, readwrite) BOOL includeShortTrafficSummary;
@property (nonatomic, readwrite) BOOL isFromAPI;
@property (nonatomic, readwrite, retain) GEOLocation *lastKnownRoadLocation;
@property (nonatomic, readwrite) BOOL needServerLatency;
@property (nonatomic, readwrite, retain) GEOWaypoint *origin;
@property (nonatomic, readwrite, retain) GEOWaypointTyped *originWaypointTyped;
@property (nonatomic, readwrite, retain) NSData *originalRouteID;
@property (nonatomic, readwrite, retain) NSData *originalRouteZilchPoints;
@property (nonatomic, readwrite, retain) NSString *phoneticLocaleIdentifier;
@property (nonatomic, readwrite, retain) NSString *requestingAppId;
@property (nonatomic, readwrite, retain) NSMutableArray *serviceTags;
@property (nonatomic, readwrite) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic, readwrite, retain) NSData *sessionState;
@property (nonatomic, readwrite) struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } timepoint;
@property (nonatomic, readwrite, retain) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic, readwrite, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, readwrite) int transportType;
@property (nonatomic, readwrite) BOOL useLiveTrafficAsFallback;
@property (nonatomic, readwrite) unsigned int walkingLimitMeters;
@property (nonatomic, readwrite, retain) GEOWalkingOptions *walkingOptions;

+ (Class)destinationType;
+ (Class)destinationWaypointTypedType;
+ (Class)deviceHistoricalLocationType;
+ (Class)serviceTagType;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (id)abClientMetadata;
- (void)addDestination:(id)arg1;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (id)additionalEnabledMarkets;
- (BOOL)allowPartialResults;
- (id)automobileOptions;
- (void)clearDestinationWaypointTypeds;
- (void)clearDestinations;
- (void)clearDeviceHistoricalLocations;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (id)commonOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypeds;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)destinations;
- (unsigned long long)destinationsCount;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (id)deviceHistoricalLocations;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)dictionaryRepresentation;
- (BOOL)hasAbClientMetadata;
- (BOOL)hasAdditionalEnabledMarkets;
- (BOOL)hasAllowPartialResults;
- (BOOL)hasAutomobileOptions;
- (BOOL)hasClientCapabilities;
- (BOOL)hasCommonOptions;
- (BOOL)hasIncludeDistance;
- (BOOL)hasIncludeHistoricTravelTime;
- (BOOL)hasIncludeRouteTrafficDetail;
- (BOOL)hasIncludeShortTrafficSummary;
- (BOOL)hasIsFromAPI;
- (BOOL)hasLastKnownRoadLocation;
- (BOOL)hasOrigin;
- (BOOL)hasOriginWaypointTyped;
- (BOOL)hasOriginalRouteID;
- (BOOL)hasOriginalRouteZilchPoints;
- (BOOL)hasPhoneticLocaleIdentifier;
- (BOOL)hasRequestingAppId;
- (BOOL)hasSessionID;
- (BOOL)hasSessionState;
- (BOOL)hasTimepoint;
- (BOOL)hasTransitOptions;
- (BOOL)hasTransportType;
- (BOOL)hasWalkingLimitMeters;
- (BOOL)hasWalkingOptions;
- (unsigned long long)hash;
- (BOOL)includeDistance;
- (BOOL)includeHistoricTravelTime;
- (BOOL)includeRouteTrafficDetail;
- (BOOL)includeShortTrafficSummary;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromAPI;
- (id)lastKnownRoadLocation;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (id)originWaypointTyped;
- (id)originalRouteID;
- (id)originalRouteZilchPoints;
- (id)phoneticLocaleIdentifier;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)requestingAppId;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)sessionState;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setAllowPartialResults:(BOOL)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setCommonOptions:(id)arg1;
- (void)setDestinationWaypointTypeds:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setDeviceHistoricalLocations:(id)arg1;
- (void)setHasAllowPartialResults:(BOOL)arg1;
- (void)setHasIncludeDistance:(BOOL)arg1;
- (void)setHasIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setHasIncludeRouteTrafficDetail:(BOOL)arg1;
- (void)setHasIncludeShortTrafficSummary:(BOOL)arg1;
- (void)setHasIsFromAPI:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasTimepoint:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasWalkingLimitMeters:(BOOL)arg1;
- (void)setIncludeDistance:(BOOL)arg1;
- (void)setIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setIncludeRouteTrafficDetail:(BOOL)arg1;
- (void)setIncludeShortTrafficSummary:(BOOL)arg1;
- (void)setIsFromAPI:(BOOL)arg1;
- (void)setLastKnownRoadLocation:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setOriginWaypointTyped:(id)arg1;
- (void)setOriginalRouteID:(id)arg1;
- (void)setOriginalRouteZilchPoints:(id)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setRequestingAppId:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionState:(id)arg1;
- (void)setTimepoint:(struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setWalkingLimitMeters:(unsigned int)arg1;
- (void)setWalkingOptions:(id)arg1;
- (struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timepoint;
- (id)transitOptions;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (unsigned int)walkingLimitMeters;
- (id)walkingOptions;
- (void)writeTo:(id)arg1;

// GEOETARequest (GEOEtaClientExtendedExtension)

- (BOOL)hasNeedServerLatency;
- (BOOL)hasTrafficSnapshot;
- (BOOL)hasUseLiveTrafficAsFallback;
- (BOOL)needServerLatency;
- (void)setHasNeedServerLatency:(BOOL)arg1;
- (void)setHasUseLiveTrafficAsFallback:(BOOL)arg1;
- (void)setNeedServerLatency:(BOOL)arg1;
- (void)setTrafficSnapshot:(id)arg1;
- (void)setUseLiveTrafficAsFallback:(BOOL)arg1;
- (id)trafficSnapshot;
- (BOOL)useLiveTrafficAsFallback;

// GEOETARequest (GEOQuickETARequester)

- (id)initWithQuickETARequest:(id)arg1;

@end