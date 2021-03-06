/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKICInfoHandler : NSObject {
    BOOL  busy;
    WebView * info;
    NSString * infoStr;
    BOOL  prefsAreUpToDate;
    NSButton * saveButton;
    NSView * view;
}

@property (atomic, readwrite) BOOL busy;
@property (atomic, readwrite) WebView *info;
@property (atomic, readwrite) NSString *infoStr;
@property (atomic, readwrite) BOOL prefsAreUpToDate;
@property (atomic, readwrite) NSButton *saveButton;
@property (atomic, readwrite) NSView *view;

+ (id)sharedInfoHandler;

- (void)addAutoLaunchInfo:(id)arg1 devices:(id)arg2;
- (void)addCameraInfo:(id)arg1 camera:(id)arg2;
- (void)addCurentDeviceInfo:(id)arg1 devices:(id)arg2;
- (void)addDevInfo:(id)arg1 device:(id)arg2;
- (void)addDeviceBrowserInfo:(id)arg1 master:(id)arg2;
- (void)addDeviceInfo:(id)arg1 devices:(id)arg2;
- (void)addPreferenceInfo:(id)arg1;
- (void)addProcessInfo:(id)arg1;
- (void)addScannerInfo:(id)arg1 scanner:(id)arg2;
- (BOOL)busy;
- (id)info;
- (BOOL)infoEnabled;
- (id)infoStr;
- (void)installInView:(id)arg1;
- (BOOL)prefsAreUpToDate;
- (void)refresh:(id)arg1;
- (void)removeObsoletePrefs;
- (void)save:(id)arg1;
- (id)saveButton;
- (void)setBusy:(BOOL)arg1;
- (void)setInfo:(id)arg1;
- (void)setInfoStr:(id)arg1;
- (void)setPrefsAreUpToDate:(BOOL)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
