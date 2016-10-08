/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSComboBox : NSTextField {
    id  _dataSource;
}

@property (getter=isButtonBordered, atomic, readwrite) BOOL buttonBordered;
@property (atomic, readwrite) BOOL completes;
@property (atomic, readwrite) <NSComboBoxDataSource> *dataSource;
@property (atomic, readwrite) <NSComboBoxDelegate> *delegate;
@property (atomic, readwrite) BOOL hasVerticalScroller;
@property (atomic, readonly) long long indexOfSelectedItem;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } intercellSpacing;
@property (atomic, readwrite) double itemHeight;
@property (atomic, readonly) long long numberOfItems;
@property (atomic, readwrite) long long numberOfVisibleItems;
@property (atomic, readonly) id objectValueOfSelectedItem;
@property (atomic, readonly, copy) NSArray *objectValues;
@property (atomic, readwrite) BOOL usesDataSource;

+ (void)initialize;

- (BOOL)acceptsFirstResponder;
- (void)addItemWithObjectValue:(id)arg1;
- (void)addItemsWithObjectValues:(id)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)completes;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)deselectItemAtIndex:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasVerticalScroller;
- (long long)indexOfItemWithObjectValue:(id)arg1;
- (long long)indexOfSelectedItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertItemWithObjectValue:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })intercellSpacing;
- (BOOL)isButtonBordered;
- (double)itemHeight;
- (id)itemObjectValueAtIndex:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)noteNumberOfItemsChanged;
- (long long)numberOfItems;
- (long long)numberOfVisibleItems;
- (id)objectValueOfSelectedItem;
- (id)objectValues;
- (void)reloadData;
- (void)removeAllItems;
- (void)removeItemAtIndex:(long long)arg1;
- (void)removeItemWithObjectValue:(id)arg1;
- (void)scrollItemAtIndexToTop:(long long)arg1;
- (void)scrollItemAtIndexToVisible:(long long)arg1;
- (void)selectItemAtIndex:(long long)arg1;
- (void)selectItemWithObjectValue:(id)arg1;
- (void)setButtonBordered:(BOOL)arg1;
- (void)setCompletes:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (void)setIntercellSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemHeight:(double)arg1;
- (void)setNumberOfVisibleItems:(long long)arg1;
- (void)setUsesDataSource:(BOOL)arg1;
- (BOOL)usesDataSource;

// NSComboBox (NSComboBoxCellDataSource)

- (id)comboBoxCell:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBoxCell:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBoxCell:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBoxCell:(id)arg1;

// NSComboBox (NSComboBoxCellNotifications)

- (void)comboBoxCellSelectionDidChange:(id)arg1;
- (void)comboBoxCellSelectionIsChanging:(id)arg1;
- (void)comboBoxCellWillDismiss:(id)arg1;
- (void)comboBoxCellWillPopUp:(id)arg1;

// NSComboBox (NSIBComboBoxIntegration)

- (id)ns_widgetType;

@end
