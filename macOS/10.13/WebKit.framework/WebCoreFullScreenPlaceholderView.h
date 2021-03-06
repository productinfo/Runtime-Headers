/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
 */

@interface WebCoreFullScreenPlaceholderView : NSView {
    SEL  _action;
    struct RetainPtr<NSVisualEffectView> { 
        void *m_ptr; 
    }  _effectView;
    struct RetainPtr<NSTextField> { 
        void *m_ptr; 
    }  _exitWarning;
    NSObject * _target;
}

@property (atomic, readwrite) SEL action;
@property (atomic, readwrite, retain) id contents;
@property (atomic, readwrite) NSObject *target;

- (id).cxx_construct;
- (void).cxx_destruct;
- (SEL)action;
- (id)contents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mouseDown:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setContents:(id)arg1;
- (void)setExitWarningVisible:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
