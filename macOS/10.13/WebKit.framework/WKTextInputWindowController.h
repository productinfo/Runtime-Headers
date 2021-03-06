/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKTextInputWindowController : NSObject {
    WKTextInputPanel * _panel;
}

+ (id)sharedTextInputWindowController;

- (BOOL)hasMarkedText;
- (id)init;
- (id)inputContext;
- (BOOL)interpretKeyEvent:(id)arg1 usingLegacyCocoaTextInput:(BOOL)arg2 string:(id*)arg3;
- (void)unmarkText;

@end
