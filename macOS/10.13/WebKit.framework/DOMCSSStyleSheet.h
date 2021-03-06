/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface DOMCSSStyleSheet : DOMStyleSheet

@property (atomic, readonly) DOMCSSRuleList *cssRules;
@property (atomic, readonly) DOMCSSRule *ownerRule;
@property (atomic, readonly) DOMCSSRuleList *rules;

- (int)addRule:(id)arg1 style:(id)arg2 index:(unsigned int)arg3;
- (id)cssRules;
- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
- (id)ownerRule;
- (void)removeRule:(unsigned int)arg1;
- (id)rules;

// DOMCSSStyleSheet (DOMCSSStyleSheetDeprecated)

- (unsigned int)insertRule:(id)arg1 :(unsigned int)arg2;

@end
