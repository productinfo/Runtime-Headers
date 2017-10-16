/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKDatasourceDiffResult : NSObject {
    int  _indexBufferLength;
    BOOL  _needToExchangeItems;
    long long * _newIndexToOldIndex;
    long long * _oldIndexToNewIndex;
    NSMutableIndexSet * indexesToAdd;
    NSMutableIndexSet * indexesToRemove;
}

- (void)dealloc;
- (void)finalize;
- (id)indexesToAdd;
- (id)indexesToRemove;
- (id)init;
- (BOOL)needToExchangeItems;
- (long long)newIndexOfOldIndex:(long long)arg1;
- (BOOL)noDifference;
- (long long)oldIndexOfNewIndex:(long long)arg1;

// IKDatasourceDiffResult (internal)

- (void)addAddOperationWithIndex:(long long)arg1;
- (void)addMoveOperationFrom:(long long)arg1 to:(long long)arg2;
- (void)addRemoveOperationWithIndex:(long long)arg1;
- (void)allocIndexesBuffers:(int)arg1;
- (void)setNeedToExchangeItems:(BOOL)arg1;

@end