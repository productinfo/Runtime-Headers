/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCGLSurface : NSObject

@property (atomic, readonly) unsigned long long bitsPerComponent;
@property (atomic, readonly) unsigned long long bitsPerPixel;
@property (atomic, readonly, copy) struct CGColorSpace { }*colorSpace;
@property (atomic, readonly) unsigned int displayMask;
@property (getter=isFloatingPoint, atomic, readonly) BOOL floatingPoint;
@property (atomic, readonly, copy) struct CGImage { }*image;
@property (atomic, readonly, copy) id layerContents;
@property (atomic, readonly, copy) struct CGImage { }*leftImage;
@property (getter=isOpaque, atomic, readonly) BOOL opaque;
@property (atomic, readonly, copy) struct CGImage { }*rightImage;
@property (atomic, readonly) struct CGSize { double x1; double x2; } size;
@property (getter=isStereo, atomic, readonly) BOOL stereo;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)attachToCGLContext:(struct _CGLContextObject { }*)arg1;
- (unsigned long long)bitsPerComponent;
- (unsigned long long)bitsPerPixel;
- (struct CGColorSpace { }*)colorSpace;
- (unsigned int)displayMask;
- (void)flushRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorSpace:(struct CGColorSpace { }*)arg2 atomic:(BOOL)arg3;
- (BOOL)isAttachedToCGLContext:(struct _CGLContextObject { }*)arg1;
- (BOOL)isFloatingPoint;
- (BOOL)isOpaque;
- (BOOL)isStereo;
- (struct CGSize { double x1; double x2; })size;

// NSCGLSurface (NSCALayerContents)

- (id)layerContents;

// NSCGLSurface (NSCGImage)

- (struct CGImage { }*)image;
- (struct CGImage { }*)leftImage;
- (struct CGImage { }*)rightImage;

@end
