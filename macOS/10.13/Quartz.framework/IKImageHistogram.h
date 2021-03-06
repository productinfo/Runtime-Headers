/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKImageHistogram : NSView {
    unsigned long long  _histA;
    unsigned long long  _histB;
    unsigned long long  _histG;
    unsigned long long  _histR;
    unsigned long long * _histogram;
    struct CGImage { } * _image;
    BOOL  _isDirty;
    BOOL  _isGray;
    IKScanUIControllerAdvanced * _scanUIController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionRectInch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionRectPixels;
    BOOL  _updating;
}

@property (atomic, readwrite) BOOL isGray;
@property (atomic, readwrite) IKScanUIControllerAdvanced *scanUIController;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })fittingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isGray;
- (id)scanUIController;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsGray:(BOOL)arg1;
- (void)setScanUIController:(id)arg1;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateCGImage;
- (void)updateHistogram;
- (void)update_vImageBufferFromImage:(struct CGImage { }*)arg1;
- (void)update_vImageBufferFromImageGray:(struct CGImage { }*)arg1;
- (void)update_vImageBufferFromImageRGB:(struct CGImage { }*)arg1;

@end
