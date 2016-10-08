/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>

@property (nonatomic, readwrite, retain) <MTLFunction> *computeFunction;
@property (nonatomic, readwrite, copy) NSString *label;
@property (nonatomic, readwrite, copy) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (nonatomic, readwrite) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)reset;

@end
