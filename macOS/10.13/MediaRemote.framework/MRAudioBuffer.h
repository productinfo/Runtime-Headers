/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRAudioBuffer : NSObject {
    AVAudioCompressedBuffer * _buffer;
    NSDictionary * _formatSettings;
}

@property (nonatomic, readonly) AVAudioCompressedBuffer *buffer;
@property (nonatomic, readonly) NSDictionary *formatSettings;

- (id)buffer;
- (void)dealloc;
- (id)formatSettings;
- (id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3;

@end
