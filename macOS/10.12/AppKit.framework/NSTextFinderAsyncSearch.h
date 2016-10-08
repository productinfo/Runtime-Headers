/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextFinderAsyncSearch : NSObject {
    id  _completionBlock;
    NSMutableArray * _findFirstMatchOperations;
    id  _firstMatchBlock;
    unsigned long long  _firstMatchIndex;
    BOOL  _foundFirstMatch;
    NSMutableRangeArray * _matchRanges;
    BOOL  _nextMatchIsFirst;
    _NSTextFinderAsyncSearchOperation * _operation;
    NSMutableIndexSet * _searchedIndexes;
    BOOL  _started;
    _NSTextFinderImpl * _textFinderImpl;
}

@property (atomic, readwrite, copy) id completionBlock;
@property (atomic, readonly) BOOL isSearching;

+ (id)queue;

- (void)_addRanges:(id)arg1 searchedIndexes:(id)arg2;
- (void)_foundFirstMatchInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_foundMatchRanges:(id)arg1 searchedIndexes:(id)arg2;
- (void)_getIndexes:(id*)arg1 forInsertionOfRanges:(id*)arg2;
- (void)_locateFirstMatchIfNecessary;
- (void)_scheduleFirstMatchOperation;
- (void)_searchCompleted;
- (id)completionBlock;
- (void)dealloc;
- (id)initWithTextFinderImpl:(id)arg1;
- (BOOL)isSearching;
- (id)matchRanges;
- (void)notifyOfFirstMatchAfterIndex:(unsigned long long)arg1 withBlock:(id)arg2;
- (void)setCompletionBlock:(id)arg1;
- (void)start;
- (void)stopSearchingAndWait:(BOOL)arg1;
- (BOOL)waitUntilSearchCompletedForRanges:(id)arg1 orTimeout:(BOOL)arg2;

@end
