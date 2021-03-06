/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSObservationBuffer : NSObservationTransformer

@property (atomic, readwrite) BOOL automaticallyEmitsObjects;
@property (atomic, readwrite, copy) id bufferFullHandler;
@property (getter=isMemoryPressureSensitive, atomic, readwrite) BOOL memoryPressureSensitive;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)bufferWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
+ (id)bufferWithOutputQueue:(id)arg1;

- (BOOL)automaticallyEmitsObjects;
- (id)bufferFullHandler;
- (void)emitAllObjects;
- (void)emitObject;
- (id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
- (BOOL)isMemoryPressureSensitive;
- (void)setAutomaticallyEmitsObjects:(BOOL)arg1;
- (void)setBufferFullHandler:(id)arg1;
- (void)setMemoryPressureSensitive:(BOOL)arg1;

@end
