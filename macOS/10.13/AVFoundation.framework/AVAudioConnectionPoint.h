/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVAudioConnectionPoint : NSObject {
    unsigned long long  _bus;
    AVAudioNode * _node;
    void * _reserved;
}

@property (nonatomic, readonly) unsigned long long bus;
@property (nonatomic, readonly) AVAudioNode *node;

+ (id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2;

- (unsigned long long)bus;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNode:(id)arg1 bus:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)node;

@end