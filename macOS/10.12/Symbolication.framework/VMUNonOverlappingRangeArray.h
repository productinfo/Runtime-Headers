/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
 */

@interface VMUNonOverlappingRangeArray : VMURangeArray

- (void)_mergeAllBitsOfRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 excludingRanges:(id)arg2 mergeRanges:(BOOL)arg3;
- (void)addOrExtendRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)mergeRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)mergeRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 excludingRanges:(id)arg2;
- (void)mergeRanges:(id)arg1;
- (void)mergeRanges:(id)arg1 excludingRanges:(id)arg2;
- (void)sortAndMergeRanges;
- (id)subtract:(id)arg1 mergeRanges:(BOOL)arg2;

@end
