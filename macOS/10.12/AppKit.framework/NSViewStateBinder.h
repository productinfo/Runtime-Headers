/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSViewStateBinder : NSBinder {
    struct __viewStateBinderFlags { 
        unsigned int _ignoreUpdates : 1; 
        unsigned int _reservedViewStateBinder : 31; 
    }  _viewStateBinderFlags;
}

+ (id)bindingCategory;
+ (BOOL)isUsableWithObject:(id)arg1;

- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_init;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (BOOL)_setValue:(id*)arg1 forBinding:(id)arg2 errorFallbackMessage:(id)arg3;
- (void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void*)arg4;

@end