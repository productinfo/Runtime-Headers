/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTabViewControllerSegmentedControlUIProvider : NSObject <NSTabViewControllerUIProvider> {
    NSSegmentedControl * _segmentedControl;
    long long  _segmentedControlLocation;
    NSTabViewController * _tabViewController;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSSegmentedControl *segmentedControl;
@property (atomic, readwrite) long long segmentedControlLocation;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) NSTabViewController *tabViewController;

- (void)_addConstraintsForTabView:(id)arg1 inContainer:(id)arg2;
- (long long)_associatedTabStyle;
- (void)_changeSelectedSegment:(id)arg1;
- (id)_makeSegmentedControl;
- (void)_startObservingTabViewItem:(id)arg1;
- (void)_startObservingTabViewItems:(id)arg1;
- (void)_stopObservingTabViewItem:(id)arg1;
- (void)_stopObservingTabViewItems:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)insertTabView:(id)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeTabView:(id)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
- (id)segmentedControl;
- (long long)segmentedControlLocation;
- (void)selectTabViewItemAtIndex:(long long)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSegmentedControlLocation:(long long)arg1;
- (void)setTabViewController:(id)arg1;
- (void)setTabViewItemsFrom:(id)arg1 to:(id)arg2 newSelectedIndex:(long long)arg3;
- (void)setUpForTabView:(id)arg1 inContainer:(id)arg2;
- (id)tabViewController;
- (void)tearDown;

@end
