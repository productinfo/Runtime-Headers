/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentRevisionsWindow : NSWindow {
    CABackdropLayer * rootBackdropLayer;
    NSDocumentRevisionsView * view;
}

@property (atomic, readonly) NSDocumentRevisionsView *view;

- (BOOL)_allowsOrdering;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityTitleAttribute;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)displayIfNeeded;
- (id)initWithController:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)view;

@end
