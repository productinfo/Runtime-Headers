/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarItemTreeBarProviderNode : NSTouchBarItemTreeNode <NSTouchBarItemTreeParentNode> {
    NSTouchBar * _touchBar;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSTouchBar *touchBar;
@property (atomic, readonly) NSTouchBar *touchBarContainingChildNodes;
@property (atomic, readonly) long long touchBarLayoutDirection;

+ (id)nodeForTouchBar:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithNode:(id)arg1 children:(id)arg2;
- (id)touchBar;
- (id)touchBarContainingChildNodes;
- (long long)touchBarLayoutDirection;

// NSTouchBarItemTreeBarProviderNode (NSTreeNodeItemIdentifier)

- (id)itemIdentifier;

@end
