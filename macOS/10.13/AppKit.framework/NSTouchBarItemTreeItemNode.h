/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarItemTreeItemNode : NSTouchBarItemTreeNode {
    NSTouchBarItem * _item;
}

@property (atomic, readonly) NSTouchBarItem *item;

+ (id)nodeForItem:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithItem:(id)arg1;
- (id)initWithNode:(id)arg1 children:(id)arg2;
- (id)item;

// NSTouchBarItemTreeItemNode (NSTreeNodeItemIdentifier)

- (id)itemIdentifier;

@end
