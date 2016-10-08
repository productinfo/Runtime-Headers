/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {
    NSMutableSet * _forwardedClaimIDs;
    BOOL  _nullified;
    NSMutableDictionary * _readRelinquishmentsByPresenterID;
    NSArray * _readingLocations;
    unsigned long long  _readingOptions;
    NSArray * _readingURLs;
    NSFileAccessNode * _rootNode;
    NSXPCConnection * _subarbiterConnection;
    NSMutableDictionary * _writeRelinquishmentsByPresenterID;
    NSArray * _writingLocations;
    unsigned long long  _writingOptions;
    NSArray * _writingURLs;
}

@property (atomic, readwrite, retain) NSXPCConnection *subarbiterConnection;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)descriptionWithIndenting:(id)arg1;
- (void)devalueOldClaim:(id)arg1;
- (void)devalueSelf;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardReacquisitionForWritingClaim:(BOOL)arg1 withID:(in id)arg2 toPresenterForID:(id)arg3 usingReplySender:(id)arg4;
- (void)forwardRelinquishmentForWritingClaim:(BOOL)arg1 withID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 toPresenter:(id)arg6 usingReplySender:(id)arg7;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id)arg2;
- (void)forwardUsingConnection:(id)arg1 withServer:(id)arg2 crashHandler:(id)arg3;
- (void)granted;
- (id)initWithCoder:(id)arg1;
- (id)initWithReadingURLs:(id)arg1 options:(unsigned long long)arg2 writingURLs:(id)arg3 options:(unsigned long long)arg4 claimer:(id)arg5;
- (void)invokeClaimer;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (id)relinquishmentForWrite:(BOOL)arg1 toPresenterForID:(id)arg2;
- (void)revoked;
- (void)setSubarbiterConnection:(id)arg1;
- (id)subarbiterConnection;

@end
