/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIColor : NSObject <NSCopying, NSSecureCoding> {
    void * _pad;
    void * _priv;
}

@property (atomic, readonly) double alpha;
@property (atomic, readonly) double blue;
@property (atomic, readonly) struct CGColorSpace { }*colorSpace;
@property (atomic, readonly) const double*components;
@property (atomic, readonly) double green;
@property (atomic, readonly) unsigned long long numberOfComponents;
@property (atomic, readonly) double red;
@property (atomic, readonly) NSString *stringRepresentation;

// Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage

+ (id)blackColor;
+ (id)blueColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
+ (id)colorWithString:(id)arg1;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)magentaColor;
+ (id)redColor;
+ (BOOL)supportsSecureCoding;
+ (id)whiteColor;
+ (id)yellowColor;

- (double)alpha;
- (double)blue;
- (struct CGColor { }*)cgColor;
- (struct CGColorSpace { }*)colorSpace;
- (const double*)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (double)green;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)numberOfComponents;
- (double)red;
- (id)stringRepresentation;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// CIColor (NSAppKitAdditions)

- (id)initWithColor:(id)arg1;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit

// CIColor (CIFilterUIViewCreationAddition)

+ (void)insertAttribute:(id)arg1 intoView:(id)arg2 anchorPosition:(struct CGPoint { double x1; double x2; }*)arg3 forFilter:(id)arg4 settings:(id)arg5 configuration:(id)arg6 objectController:(id)arg7;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

// CIColor (CAAnimatableValue)

- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;

// CIColor (CACIFilterAdditions)

- (id)CAMLType;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI

// CIColor (CoreUIAdditions)

+ (id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end
