/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNVoiceController : NSObject {
    MNNavigationAudioSession * _activeNavigationSession;
    long long  _audioSessionState;
    unsigned long long  _charactersSpokenCount;
    double  _charactersSpokenDuration;
    NSString * _currentLanguage;
    long long  _currentLanguageSource;
    NSLocale * _currentLocale;
    BOOL  _deviceMuted;
    BOOL  _isPersistentConnectionOpen;
    NSString * _lastSpeech;
    double  _lastSpeechStartTime;
    NSHashTable * _observers;
    NSBundle * _spokenBundle;
    NSString * _uiLanguage;
}

@property (nonatomic, readwrite, retain) MNNavigationAudioSession *activeNavigationSession;
@property (nonatomic, readonly) NSString *currentVoiceLanguage;
@property (nonatomic, readonly) NSLocale *currentVoiceLocale;
@property (nonatomic, readonly) BOOL deviceMuted;
@property (nonatomic, readonly) BOOL speechMuted;

+ (id)_uiLanguage;
+ (id)defaultVoiceLanguageWithSource:(long long*)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_defaultsDidChange;
- (id)_localizedStringForKey:(id)arg1;
- (void)_setGender;
- (void)_setMaintainInactivePersistentConnection:(BOOL)arg1;
- (void)_updateCurrentVoiceLanguage;
- (id)activeNavigationSession;
- (void)addObserver:(id)arg1;
- (void)beepIfNecessaryForShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2;
- (void)clearAllEvents;
- (id)currentVoiceLanguage;
- (id)currentVoiceLocale;
- (void)dealloc;
- (BOOL)deviceMuted;
- (double)durationToSpeak:(id)arg1;
- (void)endAnnounce;
- (id)init;
- (BOOL)isPlayingAudio;
- (BOOL)isSpeaking;
- (void)prepareToAnnounce;
- (void)removeObserver:(id)arg1;
- (void)setActiveNavigationSession:(id)arg1;
- (void)setAudioSessionProperties;
- (void)setVolume:(double)arg1;
- (void)speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(id)arg3;
- (BOOL)speechMuted;
- (void)stop;
- (void)warmUpTTS;

@end
