/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImagePixelBuffer : QCImageBuffer {
    BOOL  _purgeable;
    unsigned long long  _rowBytes;
    void * _unused2;
}

- (void*)baseAddress;
- (BOOL)beginUpdatePixels:(BOOL)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
- (unsigned long long)bytesPerRow;
- (void)clearBuffer;
- (id)description;
- (void)endUpdatePixels;
- (id)initWithFormat:(id)arg1 baseAddress:(const void*)arg2 releaseCallback:(int (*)arg3 releaseInfo:(void*)arg4 bytesPerRow:(unsigned long long)arg5 pixelsWide:(unsigned long long)arg6 pixelsHigh:(unsigned long long)arg7 flipped:(BOOL)arg8 colorSpace:(struct CGColorSpace { }*)arg9 options:(id)arg10;
- (id)initWithFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 options:(id)arg4;
- (id)initWithPixelBuffer:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 replacingFormat:(id)arg3;
- (id)pixelBufferRepresentation;
- (BOOL)purgeable;
- (BOOL)setPurgeable:(BOOL)arg1;

// QCImagePixelBuffer (Extensions)

- (void*)baseAddressForSkippedRows:(unsigned long long)arg1 skippedPixels:(unsigned long long)arg2;
- (struct CGContext { }*)createCGContext;
- (struct CGImage { }*)createCGImageWithRenderingIntent:(int)arg1 shouldInterpolate:(BOOL)arg2;

// QCImagePixelBuffer (QCProFX)

- (void)clearToBlack;

@end