/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTStream : NSObject {
    int  _proxy;
    long long  _reserved1;
    long long  _reserved2;
    QTTrack * _track;
}

+ (void)initialize;
+ (id)streamWithProxy:(int)arg1;

- (unsigned int)audioChannelCount;
- (id)audioFormatString;
- (double)audioSampleRate;
- (unsigned int)audioSampleSize;
- (int)averageFrameRate;
- (unsigned int)chunksPlayed;
- (unsigned int)chunksReceived;
- (unsigned int)chunksSkipped;
- (int)chunksSkippedPercent;
- (id)dataFormat;
- (void)dealloc;
- (int)expectedFrameRate;
- (void)finalize;
- (int)index;
- (id)initWithProxy:(int)arg1;
- (void)invalidate;
- (BOOL)isGrayScale;
- (id)kind;
- (id)mediaTypeString;
- (id)name;
- (unsigned int)packetsLost;
- (int)packetsLostPercent;
- (unsigned int)pixelDepth;
- (int)proxy;
- (unsigned int)queueDuration;
- (unsigned int)queueSize;
- (void)setTrack:(id)arg1;
- (id)track;
- (id)type;
- (id)videoFormatString;

@end