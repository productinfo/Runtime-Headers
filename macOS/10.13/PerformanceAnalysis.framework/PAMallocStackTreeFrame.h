/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAMallocStackTreeFrame : NSObject {
    unsigned long long  address;
    NSMutableArray * allocations;
    NSMutableArray * children;
    BOOL  gotSourceInfo;
    BOOL  isSymbolicated;
    unsigned long long  numChildBytes;
    unsigned long long  numChildNodes;
    unsigned long long  numSelfBytes;
    unsigned long long  numSelfNodes;
    PAMallocStackTreeFrame * parent;
    long long  serializedIndex;
    unsigned int  sourceInfoColumnInfo;
    NSString * sourceInfoFilename;
    unsigned int  sourceInfoLineNumber;
    unsigned long long  symbolLocation;
    NSString * symbolName;
    NSString * symbolOwnerName;
}

@property (atomic, readonly) unsigned long long address;
@property (atomic, readonly) BOOL gotSourceInfo;
@property (atomic, readonly) BOOL isSymbolicated;
@property (atomic, readonly) unsigned long long numChildBytes;
@property (atomic, readonly) unsigned long long numChildNodes;
@property (atomic, readonly) unsigned long long numSelfBytes;
@property (atomic, readonly) unsigned long long numSelfNodes;
@property (atomic, readonly) PAMallocStackTreeFrame *parent;
@property (atomic, readonly) long long serializedIndex;
@property (atomic, readwrite, retain) NSString *sourceInfoFilename;
@property (atomic, readonly) unsigned long long symbolLocation;
@property (atomic, readwrite, retain) NSString *symbolName;
@property (atomic, readwrite, retain) NSString *symbolOwnerName;
@property (atomic, readonly) unsigned long long totalBytes;
@property (atomic, readonly) unsigned long long totalNodes;

+ (id)cachedStringFromCString:(const char *)arg1;
+ (void)clearStringCache;
+ (id)getStringCache;

- (id)addAllocation:(id)arg1 WithStack:(unsigned long long*)arg2 OfDepth:(unsigned long long)arg3;
- (id)addBranchFromOtherTree:(id)arg1 currentDepth:(unsigned long long)arg2;
- (void)addMemAllocationWithoutBuildingTree:(id)arg1;
- (unsigned long long)address;
- (long long)compareBytes:(id)arg1;
- (void)dealloc;
- (id)frameStringWithDepth:(unsigned long long)arg1 andMemoryStats:(BOOL)arg2;
- (BOOL)gotSourceInfo;
- (id)init;
- (id)initWithFrame:(unsigned long long)arg1 Parent:(id)arg2;
- (id)initWithSameMetaInfoAsFrame:(id)arg1 WithParent:(id)arg2;
- (id)initWithSerializedFrameArray:(struct PASerializedMallocStackFrame { unsigned long long x1; unsigned long long x2; long long x3; long long x4; long long x5; long long x6; unsigned int x7; unsigned int x8; unsigned long long x9; BOOL x10; BOOL x11; }*)arg1 WithTreeHeader:(struct PASerializedMallocStackTree { unsigned long long x1; unsigned long long x2; BOOL x3; }*)arg2 WithParent:(id)arg3 WithIndexToFrameArray:(id*)arg4 WithCurrentIndex:(unsigned long long)arg5 WithStringsIndexArray:(id*)arg6;
- (BOOL)isSymbolicated;
- (BOOL)metaInformationMatches:(id)arg1;
- (unsigned long long)numChildBytes;
- (unsigned long long)numChildNodes;
- (unsigned long long)numFramesInSubtree;
- (unsigned long long)numSelfBytes;
- (unsigned long long)numSelfNodes;
- (id)parent;
- (void)printSelfAndChildren:(unsigned int)arg1;
- (unsigned long long)serializeToBuffer:(void*)arg1 ParentIndex:(long long)arg2 CurrentIndex:(long long)arg3 WithStrings:(id)arg4;
- (long long)serializedIndex;
- (void)setSourceInfoFilename:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setSymbolOwnerName:(id)arg1;
- (void)sortChildrenByBytes;
- (id)sourceInfoFilename;
- (id)stringForBranchWithMemoryStats:(BOOL)arg1;
- (id)stringForFrameAndChildren:(unsigned int)arg1 doMemoryStats:(BOOL)arg2;
- (unsigned long long)symbolLocation;
- (id)symbolName;
- (id)symbolOwnerName;
- (void)symbolicateWithSym:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)totalBytes;
- (unsigned long long)totalNodes;

@end
