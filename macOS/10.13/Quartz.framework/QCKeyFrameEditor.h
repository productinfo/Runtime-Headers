/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCKeyFrameEditor : NSObject {
    QCKeyFrameEditorWindow * _window;
    NSTextField * tField;
    NSTextField * vField;
    NSView * view;
}

- (void)awakeFromNib;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)done:(id)arg1;
- (BOOL)runEditorForTimeLine:(id)arg1 atKeyFrame:(long long)arg2 forTimeLine:(long long)arg3 controlType:(int)arg4 inView:(id)arg5 atPoint:(struct CGPoint { double x1; double x2; })arg6;

@end
