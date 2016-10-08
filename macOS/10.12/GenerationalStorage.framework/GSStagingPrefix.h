/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
 */

@interface GSStagingPrefix : NSObject {
    int  _deviceID;
    NSData * _extension;
    NSString * _path;
    NSArray * _pathComponents;
    long long  _sandboxHandle;
    unsigned char  _volumeUUID;
}

- (void)_connectionWithDaemonWasLost;
- (void)_invalidate:(BOOL)arg1;
- (BOOL)_refreshWithError:(id*)arg1;
- (void)cleanupStagingPath:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDocumentID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isStagedPath:(id)arg1;
- (id)stagingPathforCreatingAdditionWithError:(id*)arg1;

@end
