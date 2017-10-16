/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTMovieModernizerTrack : NSObject {
    struct OpaqueRFExportSession { } * _cmaSessionRef;
    NSProgress * _cmaTrackProgress;
    long long  _completedDataBytesRead;
    unsigned long long  _countOfEditSegments;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _emptyEditTimeRange;
    BOOL  _hasEmptyEditAtStart;
    BOOL  _insertedEmptyEditAtStart;
    AVAssetReader * _legacyQTAssetReader;
    NSURL * _legacyQTURL;
    QTMovieModernizer * _modernizer;
    int  _outputBufferCount;
    AVAssetReaderTrackOutput * _readerOutput;
    AVURLAsset * _sourceAsset;
    int  _sourceBufferCount;
    float  _sourceDataRate;
    int  _sourceID;
    unsigned int  _sourceMediaSubType;
    NSString * _sourceMediaType;
    int  _sourceTimeScale;
    AVAssetTrack * _sourceTrack;
    BOOL  _sourceTrackIsEnabled;
    NSArray * _sourceTrackMetadata;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    NSProgress * _trackProgress;
    AVAssetWriterInput * _writerInput;
}

- (void)addTrackToDestinationWriter:(id)arg1 forModernizer:(id)arg2 settings:(id)arg3 withOriginalAssetTrack:(id)arg4;
- (void)addTrackToSourceReader:(id)arg1 toReader:(id)arg2 settings:(id)arg3;
- (BOOL)cleanup;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)dealloc;
- (id)initWithSourceAsset:(id)arg1 track:(id)arg2 forModernizer:(id)arg3;
- (BOOL)startup;
- (void)updateTrackCompletedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)writeNextOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end