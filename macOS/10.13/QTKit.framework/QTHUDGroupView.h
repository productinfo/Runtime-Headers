/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTHUDGroupView : NSView {
    NSArray * _items;
    struct __CFRunLoopObserver { } * _observer;
    NSMapTable * _viewItemMap;
}

+ (BOOL)automaticallyNotifiesObserversOfItems;
+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)getRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forItemsAtIndexes:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (BOOL)needsLayout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForItemAtIndex:(unsigned long long)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBoundsOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setNeedsLayout;
- (void)viewWillDraw;

@end