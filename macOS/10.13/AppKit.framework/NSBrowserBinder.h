/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSBrowserBinder : NSBinder {
    struct ___browserBinderFlags { 
        unsigned int _ignoreChanges : 1; 
        unsigned int _reservedOutlineViewBinder : 31; 
    }  _browserBinderFlags;
    NSArray * _selectedIndexPaths;
    _NSTreeNodeObservingTracker * _treeNodeObservingTracker;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;
+ (BOOL)isUsableWithObject:(id)arg1;

- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (void)_init;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (void)_redisplayCellForNode:(id)arg1;
- (void)_resumeObservationNotificationProcessing;
- (id)_selectionIndexPathsInBrowser:(id)arg1;
- (void)_updateObservingRegistration:(BOOL)arg1;
- (void)_updateSelectionIndexPaths:(id)arg1;
- (void)adjustMatrix:(id)arg1 numberOfRows:(unsigned long long)arg2;
- (void)browser:(id)arg1 createRowsForColumn:(long long)arg2 inMatrix:(id)arg3;
- (void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4;
- (id)indexPathFromSelectionInBrowser:(id)arg1 upToColumn:(unsigned long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performAction:(id)arg1;
- (id)selectedIndexPaths;
- (void)setSelectedIndexPaths:(id)arg1;

@end