/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession> {
    id  _batteryHandler;
    double  _currentRoutePosition;
    <GEORoutePreloadSessionDelegate> * _delegate;
    int  _downloadState;
    BOOL  _enabled;
    BOOL  _fullDebuggingEnabled;
    BOOL  _loggingEnabled;
    BOOL  _minimalDebuggingEnabled;
    unsigned long long  _networkQuality;
    BOOL  _paused;
    GEOComposedRoute * _route;
    double  _stepSizeInMeters;
    id  _tileKeyIsDownloadedPredicate;
    NSMutableDictionary * _tileSetStyles;
    GEOApplicationAuditToken * _token;
}

@property (nonatomic, readwrite, copy) id batteryHandler;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <GEORoutePreloadSessionDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) unsigned long long networkQuality;
@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly, copy) id tileKeyIsDownloadedPredicate;

+ (id)preloaderForRoute:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (void)_start;
- (void)_withDownloadedRegionsOnQueue:(id)arg1 perform:(id)arg2;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (id)batteryHandler;
- (void)beginLoading;
- (void)dealloc;
- (id)delegate;
- (BOOL)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(struct { double x1; double x2; }*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
- (id)init;
- (id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(id)arg5;
- (BOOL)isSufficientlyLoaded;
- (BOOL)loggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (unsigned long long)networkQuality;
- (int)preloadStateForTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)preloaderLog;
- (void)reachabilityChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)route;
- (void)setBatteryHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (void)setTraits:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (id)tileKeyIsDownloadedPredicate;
- (void)tilesChanged;
- (void)updateWithRouteMatch:(id)arg1;

@end
