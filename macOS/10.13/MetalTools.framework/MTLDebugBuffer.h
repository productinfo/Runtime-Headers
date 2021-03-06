/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
 */

@interface MTLDebugBuffer : MTLToolsBuffer {
    unsigned int  _checksum;
    MTLDebugResource * _common;
    MTLDebugDevice * _debugDevice;
    NSMutableArray * _debugMarkers;
    BOOL  _isContentExposedToCPU;
    BOOL  _isContentsPointerExposed;
    unsigned long long  _length;
    const void * _pointer;
    unsigned long long  _purgeableState;
    BOOL  _purgeableStateHasBeenSet;
    MTLDebugResourceAccessTracker * _resourceAccessTracker;
}

@property (nonatomic, readwrite) unsigned int checksum;
@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic, readwrite) BOOL isContentExposedToCPU;
@property (nonatomic, readonly) BOOL isContentsPointerExposed;
@property (nonatomic, readonly) const void*pointer;
@property (nonatomic, readonly) unsigned long long purgeableState;
@property (nonatomic, readonly) BOOL purgeableStateHasBeenSet;
@property (nonatomic, readonly) BOOL resourceTrackingEnabled;
@property (nonatomic, readonly) unsigned int resourceUsage;

- (void)_initResourceTrackingWithDevice:(id)arg1;
- (void)accessedByCPU;
- (void)accessedByGPU;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)blitManagedToPrivate;
- (void)blitManagedToShared;
- (unsigned int)checksum;
- (id)common;
- (void*)contents;
- (id)copyDebugMarkers;
- (void)dealloc;
- (id)description;
- (void)didModifyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasResource:(id)arg1;
- (id)heap;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4;
- (BOOL)isContentExposedToCPU;
- (BOOL)isContentsPointerExposed;
- (unsigned long long)length;
- (void)makeAliasable;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)newTiledTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (const void*)pointer;
- (unsigned long long)purgeableState;
- (BOOL)purgeableStateHasBeenSet;
- (void)removeAllDebugMarkers;
- (BOOL)resourceTrackingEnabled;
- (unsigned int)resourceUsage;
- (void)setChecksum:(unsigned int)arg1;
- (void)setIsContentExposedToCPU:(BOOL)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;

@end
