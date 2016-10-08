/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCatalogColor : NSColor {
    NSString * catalogNameComponent;
    NSString * colorNameComponent;
    NSColor * genericColor;
}

+ (id)newWithCoder:(id)arg1 zone:(struct _NSZone { }*)arg2;

- (struct CGColor { }*)CGColor;
- (struct CGColor { }*)_createCGColorWithAlpha:(double)arg1;
- (double)alphaComponent;
- (id)catalogNameComponent;
- (Class)classForCoder;
- (id)colorNameComponent;
- (id)colorSpaceName;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawSwatchOfColor:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCatalogName:(id)arg1 colorName:(id)arg2 genericColor:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUniform;
- (id)localizedCatalogNameComponent;
- (id)localizedColorNameComponent;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
