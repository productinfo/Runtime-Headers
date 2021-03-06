/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUReadRequest : NSObject {
    void * _bufferBytes;
    NSMutableData * _bufferData;
    char * _bufferPtr;
    id  _completion;
    NSError * _error;
    unsigned long long  _length;
    unsigned long long  _maxLength;
    unsigned long long  _minLength;
}

@property (nonatomic, readwrite) void*bufferBytes;
@property (nonatomic, readwrite, retain) NSMutableData *bufferData;
@property (nonatomic, readwrite, copy) id completion;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readwrite) unsigned long long maxLength;
@property (nonatomic, readwrite) unsigned long long minLength;

- (void).cxx_destruct;
- (void*)bufferBytes;
- (id)bufferData;
- (id)completion;
- (id)error;
- (unsigned long long)length;
- (unsigned long long)maxLength;
- (unsigned long long)minLength;
- (void)setBufferBytes:(void*)arg1;
- (void)setBufferData:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setMinLength:(unsigned long long)arg1;

@end
