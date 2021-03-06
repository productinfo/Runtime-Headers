/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNNavigationState : NSObject <MNNavigationStateInterface> {
    double  _locationUpdateInterval;
    MNNavigationStateManager * _stateManager;
    double  _suggestionUpdateFrequency;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long desiredLocationProviderType;
@property (nonatomic, readonly) unsigned long long desiredResourcePolicy;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) double locationUpdateInterval;
@property (nonatomic, readonly) BOOL requiresHighMemoryThreshold;
@property (nonatomic, readonly) MNNavigationStateManager *stateManager;
@property (nonatomic, readonly) double suggestionUpdateFrequency;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)addCommuteDestinationSuggestion:(id)arg1;
- (void)changeSettings:(id)arg1;
- (void)confirmDestination:(id)arg1;
- (void)dealloc;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)enterState;
- (id)init;
- (id)initWithStateManager:(id)arg1;
- (void)interfaceHashesWithHandler:(id)arg1;
- (void)leaveState;
- (double)locationUpdateInterval;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id)arg1;
- (BOOL)requiresHighMemoryThreshold;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id)arg2;
- (void)startPredictingDestinationsWithHandler:(id)arg1;
- (id)stateManager;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (double)suggestionUpdateFrequency;
- (void)switchToRouteWithDetails:(id)arg1;
- (id)traceManager;
- (unsigned long long)type;
- (void)updateDestination:(id)arg1;
- (void)updateMapsActive:(BOOL)arg1;
- (void)updateVehicleDetected:(BOOL)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id)arg2;

@end
