/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
 */

@interface TXRTextureInfo : NSObject {
    unsigned long long  _alphaInfo;
    unsigned long long  _arrayLength;
    BOOL  _cubemap;
    void _dimensions;
    NSError * _error;
    unsigned long long  _mipmapLevelCount;
    unsigned long long  _pixelFormat;
}

@property (nonatomic, readwrite) unsigned long long alphaInfo;
@property (nonatomic, readwrite) unsigned long long arrayLength;
@property (nonatomic, readwrite) BOOL cubemap;
@property (nonatomic, readwrite) void dimensions;
@property (atomic, readonly) NSError *error;
@property (nonatomic, readwrite) unsigned long long mipmapLevelCount;
@property (nonatomic, readwrite) unsigned long long pixelFormat;

- (void).cxx_destruct;
- (unsigned long long)alphaInfo;
- (unsigned long long)arrayLength;
- (BOOL)cubemap;
- (void)dimensions;
- (id)error;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)pixelFormat;
- (void)setAlphaInfo:(unsigned long long)arg1;
- (void)setArrayLength:(unsigned long long)arg1;
- (void)setCubemap:(BOOL)arg1;
- (void)setDimensions;
- (void)setMipmapLevelCount:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;

@end
