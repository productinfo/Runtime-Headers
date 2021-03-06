/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPeoplePickerView : NSView <DebugHierarchyObject> {
    id  _reserved1;
    id  _reserved10;
    id  _reserved2;
    id  _reserved3;
    id  _reserved4;
    id  _reserved5;
    SEL  _reserved6;
    SEL  _reserved7;
    id  _reserved8;
    id  _reserved9;
}

@property (nonatomic, readwrite, retain) NSView *accessoryView;
@property (nonatomic, readwrite) BOOL allowsGroupSelection;
@property (nonatomic, readwrite) BOOL allowsMultipleSelection;
@property (nonatomic, readwrite, retain) NSString *autosaveName;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, retain) NSString *displayedProperty;
@property (nonatomic, readwrite) SEL groupDoubleAction;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) SEL nameDoubleAction;
@property (atomic, readonly) NSArray *selectedGroups;
@property (atomic, readonly) NSArray *selectedRecords;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) id target;
@property (nonatomic, readwrite) int valueSelectionBehavior;

// Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook

+ (Class)_controllerClass;
+ (BOOL)isPropertyOfColumnLocalizable:(id)arg1;
+ (BOOL)isTitleOfColumnAlreadyLocalized:(id)arg1;
+ (id)titleOfColumn:(id)arg1;

- (void)_commonInit;
- (void)_loadPickerUI;
- (void)_openSelectionInAddressBook:(BOOL)arg1;
- (void)_placeAccessoryView;
- (void)_postSearchUpdateNotifications;
- (id)_searchField;
- (void)_setValueColumnWidthPercentage:(double)arg1;
- (id)_uiController;
- (double)_valueColumnWidthPercentage;
- (id)accessoryView;
- (void)addFilter:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (void)addProperty:(id)arg1;
- (BOOL)allowsDirectoriesSearches;
- (BOOL)allowsGroupEditing;
- (BOOL)allowsGroupSelection;
- (BOOL)allowsMultipleSelection;
- (id)autosaveName;
- (void)clearSearchField:(id)arg1;
- (id)columnTitleForProperty:(id)arg1;
- (id)controller;
- (void)dealloc;
- (void)decodeColumns:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)deselectGroup:(id)arg1;
- (void)deselectIdentifier:(id)arg1 forPerson:(id)arg2;
- (void)deselectRecord:(id)arg1;
- (id)displayedProperty;
- (void)encodeWithCoder:(id)arg1;
- (SEL)groupDoubleAction;
- (BOOL)hasTableBorder;
- (BOOL)inDistributionListEditor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isDistributionListEditor;
- (SEL)nameDoubleAction;
- (void)printDescription:(id)arg1;
- (id)properties;
- (void)removeAllProperties;
- (void)removeProperty:(id)arg1;
- (void)selectGroup:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectIdentifier:(id)arg1 forPerson:(id)arg2 byExtendingSelection:(BOOL)arg3;
- (void)selectRecord:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedGroups;
- (id)selectedIdentifiersForPerson:(id)arg1;
- (id)selectedRecords;
- (void)setAccessoryView:(id)arg1;
- (void)setAllowsDirectoriesSearches:(BOOL)arg1;
- (void)setAllowsGroupEditing:(BOOL)arg1;
- (void)setAllowsGroupSelection:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setAutosaveName:(id)arg1;
- (void)setColumnTitle:(id)arg1 forProperty:(id)arg2;
- (void)setDisplayedProperty:(id)arg1;
- (void)setGroupDoubleAction:(SEL)arg1;
- (void)setHasTableBorder:(BOOL)arg1;
- (void)setInDistributionListEditor:(BOOL)arg1;
- (void)setIsDistributionListEditor:(BOOL)arg1;
- (void)setNameDoubleAction:(SEL)arg1;
- (void)setShowIdentityBadges:(BOOL)arg1;
- (void)setShowIdentityGroups:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTypes:(id)arg1 forProperty:(id)arg2;
- (void)setValueSelectionBehavior:(int)arg1;
- (id)target;
- (int)valueSelectionBehavior;

// ABPeoplePickerView (ABPeoplePickerConvenience)

- (void)editInAddressBook:(id)arg1;
- (void)selectInAddressBook:(id)arg1;
- (id)selectedValues;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// ABPeoplePickerView (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

@end
