/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/Versions/A/MPSCore
 */

@interface MPSImageDescriptor : NSObject {
    unsigned long long  _cacheMode;
    unsigned long long  _channelFormat;
    unsigned long long  _cpuCacheMode;
    unsigned long long  _featureChannels;
    unsigned long long  _featureChannelsLayout;
    unsigned long long  _height;
    unsigned long long  _numberOfImages;
    unsigned long long  _storageMode;
    unsigned long long  _usage;
    unsigned long long  _width;
}

@property (nonatomic, readwrite) unsigned long long channelFormat;
@property (nonatomic, readwrite) unsigned long long cpuCacheMode;
@property (nonatomic, readwrite) unsigned long long featureChannels;
@property (nonatomic, readwrite) unsigned long long featureChannelsLayout;
@property (nonatomic, readwrite) unsigned long long height;
@property (nonatomic, readwrite) unsigned long long numberOfImages;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readwrite) unsigned long long storageMode;
@property (nonatomic, readwrite) unsigned long long usage;
@property (nonatomic, readwrite) unsigned long long width;

+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4;
+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 numberOfImages:(unsigned long long)arg5 usage:(unsigned long long)arg6;

- (unsigned long long)channelFormat;
- (unsigned long long)cpuCacheMode;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (unsigned long long)featureChannels;
- (unsigned long long)featureChannelsLayout;
- (unsigned long long)height;
- (id)init;
- (id)newTextureDescriptor;
- (unsigned long long)numberOfImages;
- (unsigned long long)pixelFormat;
- (void)setChannelFormat:(unsigned long long)arg1;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (void)setFeatureChannels:(unsigned long long)arg1;
- (void)setFeatureChannelsLayout:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setNumberOfImages:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (void)setUsage:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (unsigned long long)usage;
- (unsigned long long)width;

@end
