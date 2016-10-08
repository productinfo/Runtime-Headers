/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CAConstraint : NSObject <NSCoding> {
    unsigned int  _attr;
    double  _offset;
    double  _scale;
    unsigned int  _srcAttr;
    NSString * _srcId;
}

@property (atomic, readonly) int attribute;
@property (atomic, readonly) double offset;
@property (atomic, readonly) double scale;
@property (atomic, readonly) int sourceAttribute;
@property (atomic, readonly) NSString *sourceName;

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 offset:(double)arg4;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 scale:(double)arg4 offset:(double)arg5;

- (int)attribute;
- (void)dealloc;
- (id)description;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 scale:(double)arg4 offset:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (double)offset;
- (double)scale;
- (int)sourceAttribute;
- (id)sourceName;

@end
