/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CAConstraintLayoutManager : NSObject <CALayoutManager, NSCoding>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)layoutManager;

- (id)init;
- (void)invalidateLayoutOfLayer:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredSizeOfLayer:(id)arg1;

// CAConstraintLayoutManager (CAConstraintLayoutManagerPrivate)

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
