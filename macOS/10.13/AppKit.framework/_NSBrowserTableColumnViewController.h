/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSBrowserTableColumnViewController : NSBrowserColumnViewController <NSTableViewDataSource, NSTableViewDelegate> {
    NSIndexSet * _selectedIndexes;
    NSMutableArray * _selectedItems;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)_autoExpandFlashOnce;
- (BOOL)_autoExpandItemUnderCursor;
- (void)_cancelExpandItemUnderMouse;
- (void)_expandItemUnderMouse:(id)arg1;
- (void)_startAutoExpandingItemFlash;
- (void)_stopAutoExpandingFlash;
- (BOOL)allowsEmptySelection;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsTypeSelect;
- (id)currentTypeSelectSearchString;
- (void)dealloc;
- (void)didChangeColumnSize;
- (void)didEndResizingColumn:(long long)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint { double x1; double x2; }*)arg3;
- (BOOL)drawsBackground;
- (void)editRow:(long long)arg1 withEvent:(id)arg2 select:(BOOL)arg3;
- (long long)firstValidRowIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfRow:(long long)arg1;
- (void)loadView;
- (long long)nextValidRowIndexAfterIndex:(long long)arg1;
- (void)noteHeightOfRowsWithIndexesChanged:(id)arg1;
- (unsigned long long)numberOfRows;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)preparedCellAtRow:(long long)arg1;
- (void)reloadData;
- (void)reloadDataForRowIndexes:(id)arg1;
- (long long)rowAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)rowHeight;
- (void)scrollRowToCenter:(long long)arg1;
- (id)selectedItems;
- (id)selectionIndexes;
- (void)setAllowsEmptySelection:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setAllowsTypeSelect:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setNeedsDisplayInRow:(long long)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSelectionIndexes:(id)arg1;
- (void)setView:(id)arg1;
- (void)synchSelectionCache;
- (id)tableView;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (long long)tableView:(id)arg1 nextTypeSelectMatchFromRow:(long long)arg2 toRow:(long long)arg3 forString:(id)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)titleOfSelectedRow;
- (double)widthThatFits;
- (void)willBeginResizingColumn:(long long)arg1;

@end
