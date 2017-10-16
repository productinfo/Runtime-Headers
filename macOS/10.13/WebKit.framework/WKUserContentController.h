/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKUserContentController : NSObject <NSCoding, WKObject> {
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> { 
        struct type { 
            unsigned char __lx[144]; 
        } data; 
    }  _userContentControllerProxy;
}

@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly, copy) NSArray *_userStyleSheets;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *userScripts;

// Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;

// WKUserContentController (WKPrivate)

- (void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 userContentWorld:(id)arg3;
- (void)_addUserContentFilter:(id)arg1;
- (void)_addUserStyleSheet:(id)arg1;
- (void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeAllUserContentFilters;
- (void)_removeAllUserScriptsAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeAllUserStyleSheets;
- (void)_removeAllUserStyleSheetsAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeScriptMessageHandlerForName:(id)arg1 userContentWorld:(id)arg2;
- (void)_removeUserContentFilter:(id)arg1;
- (void)_removeUserScript:(id)arg1;
- (void)_removeUserStyleSheet:(id)arg1;
- (id)_userStyleSheets;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (void)addContentRuleList:(id)arg1;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)addUserScript:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeAllContentRuleLists;
- (void)removeAllUserScripts;
- (void)removeContentRuleList:(id)arg1;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (id)userScripts;

@end