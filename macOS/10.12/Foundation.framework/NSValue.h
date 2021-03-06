/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (atomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } CATransform3DValue;
@property (atomic, readonly) const char *objCType;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)value:(const void*)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithBytes:(const void*)arg1 objCType:(const char *)arg2;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithPointer:(const void*)arg1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithWeakObject:(id)arg1;

- (BOOL)_matchType:(const char *)arg1 size:(unsigned long long)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsValue;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToValue:(id)arg1;
- (id)nonretainedObjectValue;
- (const char *)objCType;
- (struct CGPoint { double x1; double x2; })pointValue;
- (void*)pointerValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectValue;
- (struct CGSize { double x1; double x2; })sizeValue;
- (id)weakObjectValue;

// NSValue (NSKindOfAdditions)

- (BOOL)isNSValue__;

// NSValue (NSValuePortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSValue (NSValueUIGeometryExtensions)

+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;

// NSValue (UIKitStubs)

+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

// NSValue (CAAnimatableValue)

- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (id)CA_roundToIntegerFromValue:(id)arg1;

// NSValue (CAColorMatrixAdditions)

+ (id)valueWithCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;

- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })CAColorMatrixValue;

// NSValue (CAMLWriter)

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// NSValue (CAPoint3DAdditions)

+ (id)valueWithCAPoint3D:(struct CAPoint3D { double x1; double x2; double x3; })arg1;

- (struct CAPoint3D { double x1; double x2; double x3; })CAPoint3DValue;

// NSValue (CARenderValue)

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;

// NSValue (CATransform3DAdditions)

+ (id)valueWithCATransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;

- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })CATransform3DValue;

@end
