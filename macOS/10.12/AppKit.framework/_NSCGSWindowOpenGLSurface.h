/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCGSWindowOpenGLSurface : NSCGSWindowOpenGLSurface {
    NSHashTable * _CGLContexts;
    struct CGColorSpace { } * _colorSpace;
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
    unsigned int  _pendingSurfaceID;
    double  _scale;
    unsigned int  _surfaceID;
    NSCGSWindow * _window;
}

- (void)attachCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (void)detachCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithWindow:(id)arg1;
- (BOOL)isOpaque;
- (double)scale;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setScale:(double)arg1;
- (unsigned int)surfaceID;
- (id)window;

@end
