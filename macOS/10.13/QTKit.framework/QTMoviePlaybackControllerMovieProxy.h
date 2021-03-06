/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTMoviePlaybackControllerMovieProxy : QTKeyValueProxy {
    struct { 
        short scrubCount; 
        short preventIdleSleepCount; 
        short pauseWhenInactiveCount; 
    }  _configuration;
    struct { 
        unsigned int scrubbing : 1; 
        unsigned int disabledIdleSystemSleep : 1; 
        unsigned int disabledIdleDisplaySleep : 1; 
        unsigned int listeningForSessionResignActive : 1; 
        unsigned int initialized : 1; 
        unsigned int playing : 1; 
    }  _internal;
    struct { 
        struct { 
            long long timeValue; 
            long long timeScale; 
            long long flags; 
        } duration; 
        struct { 
            long long timeValue; 
            long long timeScale; 
            long long flags; 
        } currentTime; 
        struct { 
            struct { 
                long long timeValue; 
                long long timeScale; 
                long long flags; 
            } time; 
            struct { 
                long long timeValue; 
                long long timeScale; 
                long long flags; 
            } duration; 
        } playbackRange; 
        struct CGSize { 
            double width; 
            double height; 
        } naturalSize; 
        float volume; 
        NSArray *availableRanges; 
        NSArray *loadedRanges; 
        NSString *statusString; 
        double nominalRate; 
        struct { 
            unsigned int canChangeVolume : 1; 
            unsigned int canChangePlayingRate : 1; 
        } capabilities; 
    }  _properties;
}

@property (nonatomic, readonly) QTMovie *movie;

+ (BOOL)accessesIvarsDirectly;
+ (BOOL)automaticallyNotifiesObserversOfAvailableRanges;
+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;
+ (BOOL)automaticallyNotifiesObserversOfDuration;
+ (BOOL)automaticallyNotifiesObserversOfLoadedRanges;
+ (BOOL)automaticallyNotifiesObserversOfMuted;
+ (BOOL)automaticallyNotifiesObserversOfNaturalSize;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackRange;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackRangeCurrentTime;
+ (BOOL)automaticallyNotifiesObserversOfPlaying;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfStatusString;
+ (BOOL)automaticallyNotifiesObserversOfVolume;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingPlaybackRangeCurrentTime;
+ (id)keyPathsForValuesAffectingPlaybackRangeDuration;
+ (id)keyPathsForValuesAffectingPlaybackRangeRemainingTime;
+ (id)proxyForMovie:(id)arg1;
+ (BOOL)shouldProxyValueForAvailableRanges;
+ (BOOL)shouldProxyValueForCanChangePlayingRate;
+ (BOOL)shouldProxyValueForCanChangeVolume;
+ (BOOL)shouldProxyValueForCurrentTime;
+ (BOOL)shouldProxyValueForDuration;
+ (BOOL)shouldProxyValueForLoadedRanges;
+ (BOOL)shouldProxyValueForMuted;
+ (BOOL)shouldProxyValueForNaturalSize;
+ (BOOL)shouldProxyValueForPlaybackRange;
+ (BOOL)shouldProxyValueForPlaybackRangeCurrentTime;
+ (BOOL)shouldProxyValueForPlaybackRangeDuration;
+ (BOOL)shouldProxyValueForPlaybackRangeRemainingTime;
+ (BOOL)shouldProxyValueForPlaying;
+ (BOOL)shouldProxyValueForRate;
+ (BOOL)shouldProxyValueForStatusString;
+ (BOOL)shouldProxyValueForVolume;

- (void)_evaluateMovieSleepCharacteristics:(id)arg1;
- (void)_movieAvailableRangesDidChange:(id)arg1;
- (void)_movieCanChangePlayingRateDidChange:(id)arg1;
- (void)_movieCanChangeVolumeDidChange:(id)arg1;
- (void)_movieDurationDidChange:(id)arg1;
- (void)_movieLoadedRangesDidChange:(id)arg1;
- (void)_movieMutedDidChange:(id)arg1;
- (void)_movieNaturalSizeDidChange:(id)arg1;
- (void)_moviePlaybackRangeDidChange;
- (void)_movieRateDidChange:(id)arg1;
- (void)_movieStatusStringDidChange:(id)arg1;
- (void)_movieTimeDidChange:(id)arg1;
- (void)_movieVolumeDidChange:(id)arg1;
- (void)_sessionDidResignActive:(id)arg1;
- (void)_startListeningToSessionResignActive;
- (void)_startScrubbing;
- (void)_stopListeningToSessionResignActive;
- (void)_stopScrubbing;
- (void)_syncIdleSleepAssertions;
- (void)_updateNominalRate:(double)arg1;
- (void)allowIdleSleepWhilePlaying;
- (id)availableRanges;
- (void)beginScrubbing;
- (BOOL)canChangePlayingRate;
- (BOOL)canChangeVolume;
- (id)currentTime;
- (void)dealloc;
- (void)disablePauseWhenSessionResignsActive;
- (id)duration;
- (void)enablePauseWhenSessionResignsActive;
- (void)endScrubbing;
- (void)finalize;
- (id)init;
- (id)initWithMovie:(id)arg1;
- (BOOL)isMuted;
- (BOOL)isPlaying;
- (id)loadedRanges;
- (id)movie;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; long long x_1_1_3; } x1; struct { long long x_2_1_1; long long x_2_1_2; long long x_2_1_3; } x2; })playbackRange;
- (id)playbackRangeCurrentTime;
- (id)playbackRangeDuration;
- (id)playbackRangeRemainingTime;
- (void)preventIdleSleepWhilePlaying;
- (double)rate;
- (void)setCurrentTime:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPlaybackRange:(struct { struct { long long x_1_1_1; long long x_1_1_2; long long x_1_1_3; } x1; struct { long long x_2_1_1; long long x_2_1_2; long long x_2_1_3; } x2; })arg1;
- (void)setPlaybackRangeCurrentTime:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setRate:(double)arg1;
- (void)setTarget:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)statusString;
- (float)volume;

@end
