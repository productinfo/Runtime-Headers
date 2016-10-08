/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAMallocData : NSObject <NSCoding> {
    NSMutableDictionary * allocationCategoryDict;
    BOOL  calculatedLeaksTotals;
    BOOL  calculatedTotals;
    BOOL  categoriesUpdated;
    NSMutableArray * leaksArray;
    NSMutableDictionary * leaksCategoryDict;
    NSMutableDictionary * pointersByZone;
    PAMallocStackTree * stackTree;
    BOOL  stacksAvailable;
    unsigned long long  totalBytes;
    unsigned long long  totalLeakedBytes;
    unsigned long long  totalLeakedNodes;
    unsigned long long  totalNodes;
}

@property (atomic, readwrite, retain) NSMutableDictionary *allocationCategoryDict;
@property (atomic, readwrite) BOOL calculatedLeaksTotals;
@property (atomic, readwrite) BOOL calculatedTotals;
@property (atomic, readwrite, retain) NSMutableArray *leaksArray;
@property (atomic, readwrite, retain) NSMutableDictionary *leaksCategoryDict;
@property (atomic, readwrite, retain) NSMutableDictionary *pointersByZone;
@property (atomic, readonly) unsigned long long totalBytes;
@property (atomic, readonly) unsigned long long totalLeakedBytes;
@property (atomic, readonly) unsigned long long totalLeakedNodes;
@property (atomic, readonly) unsigned long long totalNodes;

+ (id)newAllAllocationsFromPointersDict:(id)arg1;
+ (id)newMemRangeArrayFromVMURangeArray:(id)arg1 MallocZone:(id)arg2;

- (void)addCopyOfMemAllocationFromOtherMallocData:(id)arg1;
- (id)allocationCategoryDict;
- (void)calculateLeaksTotalsWithArray:(id)arg1;
- (void)calculateTotals;
- (BOOL)calculatedLeaksTotals;
- (BOOL)calculatedTotals;
- (void)dealloc;
- (id*)deserializeMemAllocationCategoriesAndReturnIndexArray:(id)arg1 WithStringsIndexArray:(id*)arg2;
- (id*)deserializedMallocStackTreeAndReturnIndexArray:(id)arg1 WithStringsIndexArray:(id*)arg2;
- (void)discardIndividualAllocations;
- (void)encodeWithCoder:(id)arg1;
- (void)extractDataFromPointersDict:(id)arg1;
- (void)fillBufferWithZones:(void*)arg1 StringDict:(id)arg2;
- (void)fillInStringsSection:(void*)arg1 BufferLength:(unsigned long long)arg2 IndexToString:(id*)arg3 NumStrings:(unsigned long long)arg4;
- (unsigned long long)fillIndexToStringMapping:(id*)arg1 FromStringDict:(id)arg2;
- (void)fillMallocDataHeader:(struct PAMallocDataHeader { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; }*)arg1;
- (void)findLeaks:(unsigned int)arg1 WithPointers:(id)arg2;
- (void)gatherObjectTypes:(unsigned int)arg1 withStacks:(BOOL)arg2;
- (void)gatherPurgeStateOfAllocs:(id)arg1;
- (void)getPointersByZoneDictFromSerializedMemAllocations:(id)arg1 WithIndexToMemCategoriesArray:(id*)arg2 WithIndexToStackFramesArray:(id*)arg3 WithStringsIndex:(id*)arg4;
- (void)identifyObject:(id)arg1 FromZone:(id)arg2 WithIdentifier:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)leaksArray;
- (id)leaksCategoryDict;
- (id)mallocDataWithFilter:(int)arg1;
- (id)memorySummaryString;
- (id*)newNSStringArrayWithStringIndexHeader:(struct PAStringIndexHeader { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1;
- (void)organizeAndCalculateTotals;
- (id)pointersByZone;
- (void)populateInstanceFields:(id)arg1;
- (id)serializedAllocationCategoriesWithStringsDict:(id)arg1;
- (id)serializedAllocationsWithStringsDict:(id)arg1;
- (id)serializedStackTreeWithStringsDict:(id)arg1;
- (id)serializedStringsWithStringsDict:(id)arg1;
- (void)setAllocationCategoryDict:(id)arg1;
- (void)setCalculatedLeaksTotals:(BOOL)arg1;
- (void)setCalculatedTotals:(BOOL)arg1;
- (void)setLeaksArray:(id)arg1;
- (void)setLeaksCategoryDict:(id)arg1;
- (void)setPointersByZone:(id)arg1;
- (id)sortedAllocationCategories;
- (id)sortedLeaksCategories;
- (id)stackTreeStringWithMemoryStats:(BOOL)arg1;
- (id)totalAllocatedMemoryString;
- (id)totalAllocatedShortString;
- (unsigned long long)totalBytes;
- (unsigned long long)totalLeakedBytes;
- (id)totalLeakedMemoryString;
- (unsigned long long)totalLeakedNodes;
- (id)totalLeakedShortString;
- (unsigned long long)totalNodes;

@end