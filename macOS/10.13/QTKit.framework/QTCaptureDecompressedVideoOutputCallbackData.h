/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTCaptureDecompressedVideoOutputCallbackData : NSObject {
    QTBackgroundQueue * _backgroundQueue;
    QTCaptureConnection * _connection;
    QTCaptureDecompressedVideoOutput * _output;
}

+ (id)callbackDataWithOutput:(id)arg1 connection:(id)arg2 backgroundQueue:(id)arg3;

- (id)backgroundQueue;
- (id)connection;
- (void)dealloc;
- (id)initWithOutput:(id)arg1 connection:(id)arg2 backgroundQueue:(id)arg3;
- (id)output;

@end