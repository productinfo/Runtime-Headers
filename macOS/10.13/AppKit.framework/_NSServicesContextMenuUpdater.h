/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSServicesContextMenuUpdater : _NSServicesMenuUpdater {
    NSMenu * _pluggedMenu;
    NSMenu * _pluggingMenu;
    id  _requestorChain;
    NSMenuItem * _submenuItem;
}

- (void)dealloc;
- (void)dispose;
- (id)initWithMenuRef:(struct OpaqueMenuRef { }*)arg1 correspondingToMenu:(id)arg2 withRequestorChain:(id)arg3;
- (id)menuContext;
- (id)menus;
- (void)performServiceFromEntry:(id)arg1;
- (void)populateMenu:(id)arg1 withServiceEntries:(id)arg2 forDisplay:(BOOL)arg3;
- (unsigned long long)serviceEntryKinds;
- (void)updateForLiveServicesChangedNotification:(id)arg1;

@end
