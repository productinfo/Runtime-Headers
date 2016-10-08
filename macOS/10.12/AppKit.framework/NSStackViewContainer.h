/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSStackViewContainer : NSView {
    NSMapTable * _customSpaceMapping;
    NSMutableArray * _detachedViews;
    struct { 
        unsigned int _reserved : 32; 
    }  _flags;
    NSStackView * _stackView;
    NSMutableArray * _views;
    NSMapTable * _visibilityPriorityMapping;
}

@property (atomic, readonly, copy) NSArray *attachedViews;
@property (atomic, readonly, copy) NSArray *detachedViews;
@property (atomic, readwrite) NSStackView *stackView;
@property (atomic, readwrite, copy) NSArray *views;

- (void)_setValueOfCustomSpacing:(id)arg1 afterView:(id)arg2;
- (void)_setValueOfVisibilityPriority:(id)arg1 forView:(id)arg2;
- (id)_valueOfCustomSpacingAfterView:(id)arg1;
- (id)_valueOfVisibilityPriorityForView:(id)arg1;
- (id)attachedViews;
- (BOOL)containsView:(id)arg1;
- (id)customSpaceMapping;
- (double)customSpacingAfterView:(id)arg1;
- (void)dealloc;
- (void)detachViews:(id)arg1;
- (id)detachedViews;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStackView:(id)arg1;
- (void)insertView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reattachViews:(id)arg1;
- (void)removeView:(id)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)replaceView:(id)arg1 with:(id)arg2;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setStackView:(id)arg1;
- (void)setViews:(id)arg1;
- (void)setVisibilityPriority:(float)arg1 forView:(id)arg2;
- (BOOL)shouldBeArchived;
- (id)stackView;
- (id)views;
- (float)visibilityPriorityForView:(id)arg1;
- (id)visibilityPriorityMapping;

@end
