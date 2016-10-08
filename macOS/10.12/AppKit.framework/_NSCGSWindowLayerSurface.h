/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCGSWindowLayerSurface : NSCGSWindowLayerSurface {
    struct CGColorSpace { } * _colorSpace;
    CAContext * _context;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    unsigned int  _opaque;
    double  _scale;
    unsigned int  _surfaceID;
    NSCGSWindow * _window;
}

- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (unsigned int)displayMask;
- (unsigned int)displayNumber;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithWindow:(id)arg1;
- (BOOL)isOpaque;
- (id)layer;
- (double)scale;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setDisplayMask:(unsigned int)arg1;
- (void)setDisplayNumber:(unsigned int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayer:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setScale:(double)arg1;
- (unsigned int)surfaceID;
- (id)window;

@end
