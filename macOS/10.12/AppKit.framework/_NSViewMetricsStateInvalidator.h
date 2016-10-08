/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSViewMetricsStateInvalidator : NSObject {
    NSSet * _observedKeyPaths;
    NSView * _observedView;
}

@property (atomic, readwrite) NSView *observedView;

+ (id)newInvalidatorForView:(id)arg1;

- (id)autorelease;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedView;
- (void)setObservedView:(id)arg1;

@end
