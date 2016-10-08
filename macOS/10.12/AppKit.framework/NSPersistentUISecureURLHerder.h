/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPersistentUISecureURLHerder : NSObject {
    NSString * bundleID;
    void * lsSharedFileList;
    NSMutableDictionary * urlsStashedInLSToSharedFileListItemRefs;
}

- (void)dealloc;
- (void)fetchAndConsumeLSPersistentFileList;
- (struct OpaqueLSSharedFileListRef { }*)getLSPersistentFileList;
- (id)init;
- (void)resolveSecurityScopedURLsFromRecords:(id)arg1;
- (void)setLSPersistentFileList:(id)arg1;

@end