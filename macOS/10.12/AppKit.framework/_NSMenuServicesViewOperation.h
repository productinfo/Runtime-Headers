/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSMenuServicesViewOperation : NSOperation {
    NSMutableArray * completionBlocksToInvoke;
    BOOL  imageIsLoaded;
    NSMutableArray * objectsToNotify;
    NSString * path;
    NSImage * resultImage;
}

@property (atomic, readwrite, copy) NSString *path;

- (void)addCompletionBlock:(id)arg1;
- (void)dealloc;
- (void)finishedLoading:(id)arg1;
- (void)main;
- (id)path;
- (void)setPath:(id)arg1;

@end