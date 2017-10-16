/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCLogView : NSView {
    NSView * _insideView;
    QCPatch * _rootPatch;
    NSScrollView * _scrollView;
    NSTextView * _textView;
    void * _unused;
}

+ (void)initialize;

- (void)_appendLog:(id)arg1;
- (void)_finishInitialization;
- (void)_message:(id)arg1;
- (void)clear:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)rootPatch;
- (void)setRootPatch:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;

@end