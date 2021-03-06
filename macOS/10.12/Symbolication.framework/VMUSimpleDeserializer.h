/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
 */

@interface VMUSimpleDeserializer : VMUAbstractSerializer {
    void * _cache;
    id  _destructor;
}

- (unsigned int*)_deserializeValues:(unsigned int)arg1;
- (const char *)copyDeserializedNullTerminatedBytes;
- (id)copyDeserializedString;
- (id)copyDeserializedStringWithID:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)deserialize32;
- (unsigned long long)deserialize64;
- (id)initWithBuffer:(const void*)arg1 length:(unsigned int)arg2 destructor:(id)arg3;
- (void)skipFields:(unsigned int)arg1;

@end
