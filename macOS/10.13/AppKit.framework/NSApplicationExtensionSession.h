/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSApplicationExtensionSession : NSObject

@property (atomic, readonly) NSString *extensionType;
@property (atomic, readonly) NSArray *inputItems;
@property (atomic, readwrite, retain) NSProgress *progress;

- (void)completeSessionReturningItems:(id)arg1 error:(id)arg2;
- (id)extensionType;
- (id)inputItems;
- (id)progress;
- (void)setProgress:(id)arg1;

@end
