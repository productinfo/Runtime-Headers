/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAPageResidencyDiff : NSObject {
    int  copiedPages;
    int  dirtyPages;
    BOOL  isDetailed;
    int  residentNonSpecPages;
    int  residentPages;
    int  speculativePages;
    int  swappedPages;
}

@property (atomic, readwrite) int copiedPages;
@property (atomic, readwrite) int dirtyPages;
@property (atomic, readwrite) BOOL isDetailed;
@property (atomic, readwrite) int residentNonSpecPages;
@property (atomic, readwrite) int residentPages;
@property (atomic, readwrite) int speculativePages;
@property (atomic, readwrite) int swappedPages;

- (long long)cleanNonSpecBytes;
- (long long)compareClean:(id)arg1;
- (long long)compareDirty:(id)arg1;
- (long long)compareDirtyAndSwapped:(id)arg1;
- (long long)compareNonSpecResident:(id)arg1;
- (long long)compareResident:(id)arg1;
- (long long)compareSpec:(id)arg1;
- (long long)copiedBytes;
- (int)copiedPages;
- (long long)dirtyBytes;
- (int)dirtyPages;
- (id)initWithResidencyBefore:(id)arg1 After:(id)arg2;
- (BOOL)isDetailed;
- (long long)residentBytes;
- (long long)residentNonSpecBytes;
- (int)residentNonSpecPages;
- (int)residentPages;
- (void)setCopiedPages:(int)arg1;
- (void)setDirtyPages:(int)arg1;
- (void)setIsDetailed:(BOOL)arg1;
- (void)setResidentNonSpecPages:(int)arg1;
- (void)setResidentPages:(int)arg1;
- (void)setSpeculativePages:(int)arg1;
- (void)setSwappedPages:(int)arg1;
- (long long)speculativeBytes;
- (int)speculativePages;
- (long long)swappedBytes;
- (int)swappedPages;

@end
