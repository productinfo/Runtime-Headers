/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVPooledData : NSMutableData {
    NSMutableData * _copiedBacking;
    AVDataPool * _dataPool;
    unsigned long long  _dataPoolIndex;
}

- (void).cxx_destruct;
- (const void*)bytes;
- (void)dealloc;
- (id)init;
- (id)initWithIndex:(unsigned long long)arg1 inDataPool:(id)arg2;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;

@end
