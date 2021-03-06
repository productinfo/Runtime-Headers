/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaption : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    AVCaptionInternal * _internal;
}

@property (nonatomic, readonly) const struct OpaqueFigCaptionData { }*_figCaptionData;
@property (nonatomic, readonly) long long animation;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (void)_appendFigStyleKey:(const struct __CFString { }*)arg1 value:(const void*)arg2 range:(struct { long long x1; long long x2; })arg3 toArray:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (const struct OpaqueFigCaptionData { }*)_figCaptionData;
- (void)_setAnimation:(long long)arg1;
- (void)_setBackgroundColor:(struct CGColor { }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setDecoration:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setFontStyle:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setFontWeight:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setRegion:(id)arg1;
- (void)_setRuby:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setStylePropertiesForArchive:(id)arg1;
- (void)_setText:(id)arg1;
- (void)_setTextColor:(struct CGColor { }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)_stylePropertiesForArchive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigCaptionData:(const struct OpaqueFigCaptionData { }*)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)initWithFigMutableCaptionData:(struct OpaqueFigCaptionData { }*)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)initWithText:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)region;
- (id)text;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

// AVCaption (Animation)

- (long long)animation;

// AVCaption (FigCaptionAddition)

+ (id)captionFromFigCaption:(const struct OpaqueFigCaption { }*)arg1;

// AVCaption (Styling)

- (struct CGColor { }*)copyBackgroundColorAtIndex:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (struct CGColor { }*)copyTextColorAtIndex:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (long long)decorationAtIndex:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (long long)fontStyleAtIndex:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (long long)fontWeightAtIndex:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)rubyTextAtIndex:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;

@end
