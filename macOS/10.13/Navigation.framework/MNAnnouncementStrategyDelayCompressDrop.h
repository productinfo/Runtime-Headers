/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNAnnouncementStrategyDelayCompressDrop : NSObject <MNAnnoucementStrategy> {
    double  _distance;
    NSArray * _events;
    MNGuidanceEventManager * _manager;
    MNAnnouncementPlan * _plan;
    double  _speed;
}

@property (nonatomic, readwrite) double distance;
@property (nonatomic, readwrite, retain) NSArray *events;
@property (nonatomic, readwrite) MNGuidanceEventManager *manager;
@property (nonatomic, readwrite, retain) MNAnnouncementPlan *plan;
@property (nonatomic, readwrite) double speed;

- (void).cxx_destruct;
- (BOOL)_advanceToResolveConflict:(id)arg1;
- (double)_canAdvanceEvent:(id)arg1;
- (double)_canDelayEvent:(id)arg1;
- (BOOL)_compressToResolveConflict:(id)arg1;
- (BOOL)_delayToResolveConflict:(id)arg1;
- (void)_dropToResolveConflict:(id)arg1;
- (double)distance;
- (id)events;
- (id)initWithManager:(id)arg1;
- (id)manager;
- (id)nextEvent;
- (id)plan;
- (void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5;
- (void)setDistance:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPlan:(id)arg1;
- (void)setSpeed:(double)arg1;
- (double)speed;

@end
