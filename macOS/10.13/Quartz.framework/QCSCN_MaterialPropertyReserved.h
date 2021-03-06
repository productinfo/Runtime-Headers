/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSCN_MaterialPropertyReserved : NSObject {
    NSMutableDictionary * _animations;
    id  _attachment;
    NSColor * _borderColor;
    struct __C3DImage { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __CFURL {} *x2; struct CGContext {} *x3; struct __CFData {} *x4; unsigned int x5; bool x6; bool x7; struct C3DVector2 { union { double x_1_2_1[2]; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; } x_1_2_3; struct { double x_4_3_1; double x_4_3_2; } x_1_2_4; } x_8_1_1; } x8; unsigned int x9; int x10; struct __C3DPVRTCInfo {} *x11; struct __C3DDDSInfo {} *x12; } * _c3dImage;
    NSColor * _color;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _contentTransform;
    id  _image;
    id  _layer;
    int  _magFilter;
    long long  _mappingChannel;
    int  _minFilter;
    int  _mipFilter;
    QCSCN_Material * _parent;
    unsigned int  _presentationInstance;
    id  _proceduralContent;
    int  _propertyType;
    struct __C3DTextureProxy { struct __C3DVRAMResource { struct __C3DLinkableObject { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; struct __C3DLinkableObject {} *x_1_2_2; struct __C3DLinkableObject {} *x_1_2_3; bool x_1_2_4; } x_1_1_1; void *x_1_1_2; long long x_1_1_3; struct __C3DRendererContext {} *x_1_1_4; long long x_1_1_5; bool x_1_1_6; struct _cl_mem {} *x_1_1_7; } x1; struct { int (*x_2_1_1)(); int (*x_2_1_2)(); } x2; void *x3; } * _textureProxy;
    int  _wrapS;
    int  _wrapT;
}

- (void)dealloc;
- (void)finalize;

@end
