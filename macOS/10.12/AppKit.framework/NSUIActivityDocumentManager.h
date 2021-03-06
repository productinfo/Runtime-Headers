/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSUIActivityDocumentManager : NSObject

+ (id)sharedManager;

- (void)documentDidChangeFileType:(id)arg1;
- (void)documentDidChangeFileURL:(id)arg1;
- (void)documentDidClose:(id)arg1;
- (void)documentDidOpen:(id)arg1;
- (BOOL)documentIsUbiquitous:(id)arg1;
- (void)removeAutomaticUserActivityForDocument:(id)arg1;
- (void)updateAutomaticUserActivityForDocument:(id)arg1;
- (BOOL)userActivityIsAutomaticForDocument:(id)arg1;
- (id)userActivityTypeForDocument:(id)arg1;

@end
