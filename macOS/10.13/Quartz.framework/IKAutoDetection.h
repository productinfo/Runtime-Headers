/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKAutoDetection : NSObject {
    unsigned long long  _height;
    unsigned long long  _houghBufferSize;
    NSMutableArray * _houghResults;
    int  _houghResultsCount;
    double  _imageScale;
    unsigned long long  _rhoRange;
    IKScannerDeviceViewHandler * _scannerViewHandler;
    unsigned long long  _thetaSize;
    unsigned long long  _width;
}

- (struct CGImage { }*)cleanedupImage:(struct CGImage { }*)arg1;
- (void)cleanup;
- (struct CGImage { }*)copyCleanedupImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (void)dealloc;
- (id)doStartScanAreaDetection:(struct CGImage { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })doStartSimpleFrameDetection:(struct CGImage { }*)arg1;
- (id)doStartSimpleFrameDetection:(struct CGImage { }*)arg1 templateRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 count:(long long)arg3;
- (id)doStartSimpleScanAreaDetection:(struct CGImage { }*)arg1;
- (void)enterAutoDetection:(int)arg1 image:(struct CGImage { }*)arg2;
- (void)exitAutoDetection:(int)arg1;
- (struct CGPoint { double x1; double x2; })findIntersection:(int)arg1 index2:(int)arg2;
- (id)initWithScannerViewHandler:(id)arg1;
- (void)removeNestedAreas:(id)arg1;
- (void)startScanAreaDetection:(struct CGImage { }*)arg1 completion:(id)arg2;
- (void)startSimpleFrameDetection:(struct CGImage { }*)arg1 completion:(id)arg2;
- (void)startSimpleFrameDetection:(struct CGImage { }*)arg1 templateRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 count:(long long)arg3 completion:(id)arg4;
- (void)startSimpleScanAreaDetection:(struct CGImage { }*)arg1 completion:(id)arg2;

@end
