/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {
    /* Warning: unhandled struct encoding: '{MTLComputePipelineDescriptorPrivate=@@c@}' */ struct MTLComputePipelineDescriptorPrivate { id x1; BOOL x2; id x3; } * _private;
}

- (const /* Warning: unhandled struct encoding: '{MTLComputePipelineDescriptorPrivate=@@c@}' */ struct MTLComputePipelineDescriptorPrivate { id x1; BOOL x2; id x3; }*)_descriptorPrivate;
- (id)computeFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (id)newSerializedComputeData;
- (void)reset;
- (void)setComputeFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setStageInputDescriptor:(id)arg1;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1;
- (id)stageInputDescriptor;
- (BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)validateWithDevice:(id)arg1;

@end
