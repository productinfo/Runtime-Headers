/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSMagnificationGestureRecognizer : NSGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _magnification;
    long long  _mflags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reserved1;
    id  _reserved2;
}

@property (atomic, readwrite) double magnification;

- (void)_appendSubclassDescription:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)magnification;
- (void)magnifyWithEvent:(id)arg1;
- (void)reset;
- (void)setMagnification:(double)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)translateWithEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;

@end
