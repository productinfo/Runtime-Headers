/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKResponderChainSink : NSResponder {
    bool  _didReceiveUnhandledCommand;
    NSResponder * _lastResponderInChain;
}

- (void)detach;
- (bool)didReceiveUnhandledCommand;
- (void)doCommandBySelector:(SEL)arg1;
- (id)initWithResponderChain:(id)arg1;
- (void)noResponderFor:(SEL)arg1;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;

@end
