/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDownloadController : NSObject {
    NSAlert * _alert;
    BOOL  _autoOpen;
    NSString * _contentType;
    SEL  _didEndSelector;
    NSDictionary * _downloadInfo;
    NSString * _filename;
    NSString * _informativeText;
    NSString * _messageText;
    NSString * _mimeType;
    id  _modalDelegate;
    BOOL  _reserved;
    NSString * _riskCategory;
    BOOL  _useSave;
    /* Warning: unhandled array encoding: '[5@]' */ id  reserved1;
}

- (id)_createAlert;
- (void)_setMessageAndInformativeText;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3;
- (void)beginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)dealloc;
- (id)downloadInformation;
- (id)informativeText;
- (id)initWithDictionary:(id)arg1;
- (id)messageText;
- (long long)runModalWindow;
- (void)setInformativeText:(id)arg1;
- (void)setMessageText:(id)arg1;
- (id)window;

@end
