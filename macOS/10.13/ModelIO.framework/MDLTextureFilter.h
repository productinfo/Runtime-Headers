/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
 */

@interface MDLTextureFilter : NSObject {
    unsigned long long  magFilter;
    unsigned long long  minFilter;
    unsigned long long  mipFilter;
    unsigned long long  rWrapMode;
    unsigned long long  sWrapMode;
    unsigned long long  tWrapMode;
}

@property (nonatomic, readwrite) unsigned long long magFilter;
@property (nonatomic, readwrite) unsigned long long minFilter;
@property (nonatomic, readwrite) unsigned long long mipFilter;
@property (nonatomic, readwrite) unsigned long long rWrapMode;
@property (nonatomic, readwrite) unsigned long long sWrapMode;
@property (nonatomic, readwrite) unsigned long long tWrapMode;

- (id)init;
- (unsigned long long)magFilter;
- (unsigned long long)minFilter;
- (unsigned long long)mipFilter;
- (unsigned long long)rWrapMode;
- (unsigned long long)sWrapMode;
- (void)setMagFilter:(unsigned long long)arg1;
- (void)setMinFilter:(unsigned long long)arg1;
- (void)setMipFilter:(unsigned long long)arg1;
- (void)setRWrapMode:(unsigned long long)arg1;
- (void)setSWrapMode:(unsigned long long)arg1;
- (void)setTWrapMode:(unsigned long long)arg1;
- (unsigned long long)tWrapMode;

@end
