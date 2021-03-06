/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVCaptureController : NSResponder <AVFunctionBarRecordingControlsControllingInternal, AVTouchBarRecordingControlsControllingInternal> {
    double  _audioLevel;
    NSObject<OS_dispatch_source> * _audioLevelIndicatorTimer;
    BOOL  _audioPreviewEnabled;
    float  _audioPreviewVolume;
    BOOL  _canStartRecording;
    AVCaptureAudioPreviewOutput * _captureAudioPreviewOutput;
    AVCaptureDeviceSelectionController * _captureDeviceSelectionController;
    NSArray * _captureQualityItems;
    BOOL  _captureSessionRunning;
    <AVCaptureControllerDelegate> * _delegate;
    id  _didStartRunningObserver;
    id  _didStopRunningObserver;
    long long  _discoveringWirelessCaptureDevicesCount;
    AVCaptureFileOutput * _fileOutput;
    NSNumber * _previouslyRecordedFileSize;
    double  _previouslyRecordedTime;
    NSNumber * _recordedFileSize;
    double  _recordedTime;
    NSObject<OS_dispatch_source> * _recordingTimeAndSizeTimer;
    AVCaptureQualityItem * _selectedQualityItem;
    AVCaptureSession * _session;
    BOOL  _sessionHasBeenSet;
    BOOL  _shouldSelectAssociatedAudioInputSourceItems;
    long long  _status;
    BOOL  _videoPreviewEnabled;
    BOOL  _wantsDefaultConfiguration;
}

@property (atomic, readonly) NSArray *audioFunctionBarInputSourceItems;
@property (atomic, readonly) AVCaptureDeviceInput *audioInput;
@property (atomic, readonly) NSArray *audioInputSourceItems;
@property (atomic, readwrite) double audioLevel;
@property (getter=isAudioPreviewEnabled, atomic, readwrite) BOOL audioPreviewEnabled;
@property (nonatomic, readwrite) float audioPreviewVolume;
@property (atomic, readonly) NSArray *audioTouchBarInputSourceItems;
@property (atomic, readonly) BOOL canAssociateAudioAndVideoDevices;
@property (atomic, readonly) BOOL canPauseRecording;
@property (atomic, readonly) BOOL canResumeRecording;
@property (atomic, readonly) BOOL canStartRecording;
@property (atomic, readwrite) BOOL canStartRecording;
@property (atomic, readonly) BOOL canStopRecording;
@property (atomic, readwrite, retain) AVCaptureDeviceSelectionController *captureDeviceSelectionController;
@property (atomic, readwrite, copy) NSArray *captureQualityItems;
@property (getter=isCaptureSessionRunning, atomic, readwrite) BOOL captureSessionRunning;
@property (atomic, readonly) struct CGSize { double x1; double x2; } contentDimensions;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <AVCaptureControllerDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) NSString *deviceDisabledDescription;
@property (atomic, readonly) NSString *deviceErrorDescription;
@property (atomic, readonly) AVCaptureFileOutput *fileOutput;
@property (getter=isFinishingRecording, atomic, readwrite) BOOL finishingRecording;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isPaused, atomic, readonly) BOOL paused;
@property (atomic, readonly) NSNumber *recordedFileSize;
@property (atomic, readwrite, retain) NSNumber *recordedFileSize;
@property (atomic, readonly) double recordedTime;
@property (atomic, readwrite) double recordedTime;
@property (getter=isRecording, atomic, readonly) BOOL recording;
@property (atomic, readonly) NSArray *screenFunctionBarInputSourceItems;
@property (atomic, readonly) NSArray *screenTouchBarInputSourceItems;
@property (atomic, readonly) AVFunctionBarCaptureInputSourceItem *selectedAudioFunctionBarInputSourceItem;
@property (atomic, readonly) AVCaptureDeviceInputSourceItem *selectedAudioInputSourceItem;
@property (atomic, readonly) AVTouchBarCaptureInputSourceItem *selectedAudioTouchBarInputSourceItem;
@property (atomic, readwrite, retain) AVCaptureQualityItem *selectedQualityItem;
@property (atomic, readonly) AVFunctionBarCaptureInputSourceItem *selectedScreenFunctionBarInputSourceItem;
@property (atomic, readonly) AVTouchBarCaptureInputSourceItem *selectedScreenTouchBarInputSourceItem;
@property (atomic, readonly) AVFunctionBarCaptureInputSourceItem *selectedVideoFunctionBarInputSourceItem;
@property (atomic, readonly) AVCaptureDeviceInputSourceItem *selectedVideoInputSourceItem;
@property (atomic, readonly) AVTouchBarCaptureInputSourceItem *selectedVideoTouchBarInputSourceItem;
@property (atomic, readonly) AVCaptureSession *session;
@property (atomic, readonly) BOOL sessionHasBeenSet;
@property (atomic, readonly) long long status;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSArray *videoFunctionBarInputSourceItems;
@property (atomic, readonly) AVCaptureDeviceInput *videoInput;
@property (atomic, readonly) NSArray *videoInputSourceItems;
@property (getter=isVideoPreviewEnabled, atomic, readwrite) BOOL videoPreviewEnabled;
@property (atomic, readonly) NSArray *videoTouchBarInputSourceItems;
@property (atomic, readwrite) BOOL wantsDefaultConfiguration;

+ (id)keyPathsForValuesAffectingAudioInput;
+ (id)keyPathsForValuesAffectingAudioInputSourceItems;
+ (id)keyPathsForValuesAffectingCanAssociateAudioAndVideoDevices;
+ (id)keyPathsForValuesAffectingCanPauseRecording;
+ (id)keyPathsForValuesAffectingCanResumeRecording;
+ (id)keyPathsForValuesAffectingCanStopRecording;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingDeviceDisabledDescription;
+ (id)keyPathsForValuesAffectingDeviceErrorDescription;
+ (id)keyPathsForValuesAffectingFinishingRecording;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingRecording;
+ (id)keyPathsForValuesAffectingSelectedAudioInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedVideoInputSourceItem;
+ (id)keyPathsForValuesAffectingVideoInput;
+ (id)keyPathsForValuesAffectingVideoInputSourceItems;

- (void).cxx_destruct;
- (BOOL)_associateItemsWithVideoInputSourceItems:(id)arg1 audioInputSourceItems:(id)arg2 outIndexOfBuiltInVideoItem:(unsigned long long*)arg3 outIndexOfBuiltInAudioItem:(unsigned long long*)arg4 outIndexOfExternalVideoItem:(unsigned long long*)arg5 outIndexOfExternalAudioItem:(unsigned long long*)arg6;
- (void)_createDefaultSessionAndFileOutputAsynchronously:(BOOL)arg1;
- (id)_defaultCaptureQualityItems;
- (id)_firstDeviceInputWithConnectionOfMediaType:(id)arg1 fromSession:(id)arg2;
- (id)_inputSourceItemsForMediaType:(id)arg1;
- (id)_inputSourceItemsWithoutAssociatedAudioItemsForCaptureDevices:(id)arg1 mediaType:(id)arg2;
- (void)_setWirelessDeviceDiscoveryEnabled:(BOOL)arg1;
- (void)_updateAudioInputForSession:(id)arg1;
- (void)_updateVideoInputForSession:(id)arg1;
- (id)audioDeviceErrorDescription;
- (id)audioInput;
- (id)audioInputSourceItems;
- (double)audioLevel;
- (void)audioLevelIndicatorTimerTask;
- (float)audioPreviewVolume;
- (BOOL)canAssociateAudioAndVideoDevices;
- (BOOL)canPauseRecording;
- (BOOL)canResumeRecording;
- (BOOL)canStartRecording;
- (BOOL)canStopRecording;
- (id)captureDeviceSelectionController;
- (id)captureQualityItems;
- (void)changeAudioPreviewVolumeToMaximum;
- (void)changeAudioPreviewVolumeToMinimum;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (void)createDefaultSessionAndFileOutputAsynchronously;
- (void)dealloc;
- (void)decreaseAudioPreviewVolume;
- (id)delegate;
- (id)deviceDisabledDescription;
- (id)deviceErrorDescription;
- (id)fileOutput;
- (void)increaseAudioPreviewVolume;
- (id)init;
- (BOOL)isAudioPreviewEnabled;
- (BOOL)isCaptureSessionRunning;
- (BOOL)isFinishingRecording;
- (BOOL)isPaused;
- (BOOL)isRecording;
- (BOOL)isVideoPreviewEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseRecording;
- (id)recordedFileSize;
- (double)recordedTime;
- (void)recordingTimeAndSizeTimerTask;
- (void)resumeRecording;
- (void)selectInputSourceItem:(id)arg1;
- (id)selectedAudioInputSourceItem;
- (id)selectedQualityItem;
- (id)selectedVideoInputSourceItem;
- (id)session;
- (BOOL)sessionHasBeenSet;
- (void)setAudioLevel:(double)arg1;
- (void)setAudioPreviewEnabled:(BOOL)arg1;
- (void)setAudioPreviewVolume:(float)arg1;
- (void)setCanStartRecording:(BOOL)arg1;
- (void)setCaptureDeviceSelectionController:(id)arg1;
- (void)setCaptureQualityItems:(id)arg1;
- (void)setCaptureSessionRunning:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileOutput:(id)arg1;
- (void)setFinishingRecording:(BOOL)arg1;
- (void)setRecordedFileSize:(id)arg1;
- (void)setRecordedTime:(double)arg1;
- (void)setSelectedQualityItem:(id)arg1;
- (void)setSession:(id)arg1 videoPreviewEnabled:(BOOL)arg2 audioPreviewEnabled:(BOOL)arg3;
- (void)setStatus:(long long)arg1;
- (void)setVideoPreviewEnabled:(BOOL)arg1;
- (void)setWantsDefaultConfiguration:(BOOL)arg1;
- (void)startAudioLevelIndicatorTimer;
- (void)startDiscovingWirelessCaptureDevices;
- (void)startRecording;
- (void)startRecordingTimeAndSizeTimer;
- (long long)status;
- (void)stopAudioLevelIndicatorTimer;
- (void)stopDiscovingWirelessCaptureDevices;
- (void)stopRecording;
- (void)stopRecordingTimeAndSizeTimer;
- (void)updateCanStartRecording;
- (void)updateCaptureSessionRunning;
- (void)updateRecordingTimeAndSize;
- (id)videoDeviceErrorDescription;
- (id)videoInput;
- (id)videoInputSourceItems;
- (BOOL)wantsDefaultConfiguration;

// AVCaptureController (AVFunctionBarAdditions)

+ (id)keyPathsForValuesAffectingAudioFunctionBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedAudioFunctionBarInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedVideoFunctionBarInputSourceItem;
+ (id)keyPathsForValuesAffectingVideoFunctionBarInputSourceItems;

- (id)_makeFunctionBarCaptureInputSourceItem:(id)arg1;
- (id)audioFunctionBarInputSourceItems;
- (id)screenFunctionBarInputSourceItems;
- (void)selectFunctionBarInputSourceItem:(id)arg1;
- (id)selectedAudioFunctionBarInputSourceItem;
- (id)selectedScreenFunctionBarInputSourceItem;
- (id)selectedVideoFunctionBarInputSourceItem;
- (id)videoFunctionBarInputSourceItems;

// AVCaptureController (AVTouchBarAdditions)

+ (id)keyPathsForValuesAffectingAudioTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedAudioTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedVideoTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingVideoTouchBarInputSourceItems;

- (id)_makeTouchBarCaptureInputSourceItem:(id)arg1;
- (id)audioTouchBarInputSourceItems;
- (id)screenTouchBarInputSourceItems;
- (void)selectTouchBarInputSourceItem:(id)arg1;
- (id)selectedAudioTouchBarInputSourceItem;
- (id)selectedScreenTouchBarInputSourceItem;
- (id)selectedVideoTouchBarInputSourceItem;
- (id)videoTouchBarInputSourceItems;

// AVCaptureController (NSResponder)

- (void)_handleSpaceKeyWithEvent:(id)arg1;
- (BOOL)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(BOOL)arg3;
- (void)keyDown:(id)arg1;

@end
