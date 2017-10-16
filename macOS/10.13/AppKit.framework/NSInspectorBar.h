/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSInspectorBar : NSObject <NSCoding> {
    <NSInspectorBarClient> * _client;
    id  _defaultController;
    NSArray * _defaultItemIdentifiers;
    NSArray * _defaultItems;
    <NSInspectorBarDelegate> * _delegate;
    NSWindow * _documentWindow;
    struct { 
        unsigned int _visible : 1; 
        unsigned int _textViewOwned : 1; 
        unsigned int _baselineSeparator : 1; 
        unsigned int _reserved : 29; 
    }  _flags;
    NSArray * _identifiers;
    NSView * _inspectorBarView;
    NSMutableDictionary * _itemTable;
    NSArray * _items;
    NSTitlebarAccessoryViewController * _viewController;
}

@property (atomic, readwrite, retain) <NSInspectorBarClient> *client;
@property (atomic, readwrite, copy) NSArray *defaultItemIdentifiers;
@property (atomic, readwrite) <NSInspectorBarDelegate> *delegate;
@property (atomic, readonly) NSArray *items;
@property (atomic, readwrite) BOOL showsBaselineSeparator;
@property (getter=isVisible, atomic, readwrite) BOOL visible;
@property (atomic, readonly) NSWindow *window;

+ (id)_sharedSpacerItem;
+ (Class)standardItemControllerClass;
+ (id)standardTextItemIdentifiers;

- (id)_auxiliaryViewController;
- (id)_createItemsForIdentifiers:(id)arg1;
- (long long)_defaultItemGravity;
- (id)_inspectorBarView;
- (BOOL)_isOwnedByTextView;
- (void)_setIsOwnedByTextView:(BOOL)arg1;
- (void)_setWindow:(id)arg1;
- (id)_startingWindowForSendAction:(SEL)arg1;
- (void)_tile;
- (void)_update;
- (BOOL)_updateAuxiliaryViewControllerIfAvailable;
- (id)client;
- (id)convertAttributes:(id)arg1;
- (id)convertFont:(id)arg1;
- (void)dealloc;
- (id)defaultItemIdentifiers;
- (id)defaultItems;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)inspectorBarViewDidLoad:(id)arg1;
- (BOOL)isVisible;
- (id)itemForIdentifier:(id)arg1;
- (id)items;
- (void)setClient:(id)arg1;
- (void)setDefaultItemIdentifiers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsBaselineSeparator:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)showsBaselineSeparator;
- (id)window;

@end