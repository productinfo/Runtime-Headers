/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface _MTLCommandEncoder : NSObject {
    BOOL  _StatEnabled;
    unsigned long long  _StatLocations;
    unsigned long long  _StatOptions;
    _MTLCommandBuffer<MTLCommandBuffer> * _commandBuffer;
    <MTLDevice> * _device;
    unsigned long long  _globalTraceObjectID;
    NSString * _label;
    unsigned long long  _labelTraceID;
    unsigned long long  _numCommands;
    unsigned long long  _numThisEncoder;
}

@property (nonatomic, readonly) <MTLDevice> *device;
@property (getter=globalTraceObjectID, nonatomic, readwrite) unsigned long long globalTraceObjectID;
@property (atomic, readwrite, copy) NSString *label;
@property (nonatomic, readwrite) unsigned long long numThisEncoder;
@property (getter=getType, nonatomic, readonly) unsigned long long type;

- (id)commandBuffer;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)endEncoding;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getType;
- (unsigned long long)globalTraceObjectID;
- (void)incNumCommands;
- (id)initWithCommandBuffer:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (struct MTLStatSampleRec { void *x1; unsigned long long x2; unsigned long long x3[0]; }*)newSample;
- (unsigned long long)numThisEncoder;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setGlobalTraceObjectID:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setNumThisEncoder:(unsigned long long)arg1;

@end
