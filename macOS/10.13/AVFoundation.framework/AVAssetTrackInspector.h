/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
    NSArray * _cachedMediaCharacteristics;
    long long  _synthesizeMediaCharacteristicsOnce;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) long long alternateGroupID;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) BOOL canProvideSampleCursors;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (getter=isDecodable, nonatomic, readonly) BOOL decodable;
@property (nonatomic, readonly) long long defaultAlternateGroupID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } dimensions;
@property (getter=isEnabled, nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) float estimatedDataRate;
@property (getter=isExcludedFromAutoselectionInTrackGroup, nonatomic, readonly) BOOL excludedFromAutoselectionInTrackGroup;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (getter=_figAssetTrack, nonatomic, readonly) struct OpaqueFigAssetTrack { }*figAssetTrack;
@property (getter=_figMediaType, nonatomic, readonly) unsigned int figMediaType;
@property (getter=_figTrackReader, nonatomic, readonly) struct OpaqueFigTrackReader { }*figTrackReader;
@property (nonatomic, readonly) NSArray *formatDescriptions;
@property (nonatomic, readonly) BOOL hasProtectedContent;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) long long layer;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSDictionary *loudnessInfo;
@property (nonatomic, readonly) NSArray *mediaCharacteristics;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaDecodeTimeRange;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaPresentationTimeRange;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minSampleDuration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) int naturalTimeScale;
@property (nonatomic, readonly) float nominalFrameRate;
@property (nonatomic, readonly) int playabilityValidationResult;
@property (getter=isPlayable, nonatomic, readonly) BOOL playable;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) long long provisionalAlternateGroupID;
@property (nonatomic, readonly) BOOL requiresFrameReordering;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (getter=isSelfContained, nonatomic, readonly) BOOL selfContained;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic, readonly) long long totalSampleDataLength;
@property (nonatomic, readonly) int trackID;
@property (getter=_trackReferences, nonatomic, readonly) NSDictionary *trackReferences;

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (unsigned int)_figMediaType;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (struct OpaqueFigSampleCursorService { }*)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL*)arg1;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_trackReferences;
- (id)_weakReference;
- (long long)alternateGroupID;
- (id)availableMetadataFormats;
- (BOOL)canProvideSampleCursors;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)defaultAlternateGroupID;
- (struct CGSize { double x1; double x2; })dimensions;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (id)formatDescriptions;
- (BOOL)hasProtectedContent;
- (id)init;
- (BOOL)isDecodable;
- (BOOL)isEnabled;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isPlayable;
- (BOOL)isSelfContained;
- (id)languageCode;
- (long long)layer;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)locale;
- (id)loudnessInfo;
- (id)makeSampleCursorAtFirstSampleInDecodeOrder;
- (id)makeSampleCursorAtLastSampleInDecodeOrder;
- (id)makeSampleCursorWithPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)mediaCharacteristics;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (int)playabilityValidationResult;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (long long)provisionalAlternateGroupID;
- (BOOL)requiresFrameReordering;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

@end