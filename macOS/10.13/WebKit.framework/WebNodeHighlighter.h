/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebNodeHighlighter : NSObject {
    WebNodeHighlight * _currentHighlight;
    WebView * _inspectedWebView;
}

- (void)dealloc;
- (void)didAttachWebNodeHighlight:(id)arg1;
- (void)hideHighlight;
- (void)highlight;
- (id)initWithInspectedWebView:(id)arg1;
- (void)willDetachWebNodeHighlight:(id)arg1;

@end