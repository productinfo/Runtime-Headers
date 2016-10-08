/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDataDetectionIndicatorView : NSView {
    id  _dataResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _string;
    NSTextView * _textView;
    NSTrackingArea * _trackingArea;
}

- (void)_reset;
- (void)_showMenu:(id)arg1;
- (void)bindToTextView:(id)arg1 forDataResult:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)rightMouseDown:(id)arg1;

@end
