/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNTimingFunction : NSObject <NSSecureCoding> {
    struct __C3DTimingFunction { } * _timingFunction;
}

+ (id)functionWithCAMediaTimingFunction:(id)arg1;
+ (id)functionWithTimingMode:(long long)arg1;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction { }*)arg1;

@end
