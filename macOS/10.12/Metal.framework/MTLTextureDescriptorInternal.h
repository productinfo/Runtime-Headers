/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLTextureDescriptorInternal : MTLTextureDescriptor {
    struct MTLTextureDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; BOOL x10; BOOL x11; union { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; } * _private;
}

- (unsigned long long)arrayLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (unsigned long long)depth;
- (id)description;
- (const struct MTLTextureDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; BOOL x10; BOOL x11; union { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; }*)descriptorPrivate;
- (BOOL)framebufferOnly;
- (unsigned long long)hash;
- (unsigned long long)height;
- (id)init;
- (BOOL)isDrawable;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)pixelFormat;
- (unsigned long long)resourceOptions;
- (unsigned long long)sampleCount;
- (void)setArrayLength:(unsigned long long)arg1;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (void)setDepth:(unsigned long long)arg1;
- (void)setFramebufferOnly:(BOOL)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setIsDrawable:(BOOL)arg1;
- (void)setMipmapLevelCount:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (void)setTextureType:(unsigned long long)arg1;
- (void)setTextureUsage:(unsigned long long)arg1;
- (void)setUsage:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (unsigned long long)textureType;
- (unsigned long long)textureUsage;
- (unsigned long long)usage;
- (BOOL)validateWithDevice:(id)arg1;
- (unsigned long long)width;

@end
