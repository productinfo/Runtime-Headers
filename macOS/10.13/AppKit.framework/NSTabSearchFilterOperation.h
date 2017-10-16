/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTabSearchFilterOperation : NSOperation {
    id  _filterCompletionCallback;
    NSString * _filterText;
    NSArray * _tabInfo;
}

@property (nonatomic, readonly, copy) id filterCompletionCallback;
@property (nonatomic, readonly) NSString *filterText;
@property (nonatomic, readwrite, copy) NSArray *tabInfo;

- (void).cxx_destruct;
- (void)_completeOperationWithIndexes:(id)arg1;
- (id)filterCompletionCallback;
- (id)filterText;
- (id)initWithTabInfoForFilteringTabs:(id)arg1 filterText:(id)arg2 completionCallback:(id)arg3;
- (void)main;
- (void)setTabInfo:(id)arg1;
- (id)tabInfo;

@end