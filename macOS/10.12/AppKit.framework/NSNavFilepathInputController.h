/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavFilepathInputController : NSWindowController {
    SEL  _action;
    NSMutableDictionary * _cachedUIStrings;
    id  _delegate;
    id  _doDelayedAutocomplete;
    NSString * _errorMessage;
    NSTextField * _filepathInputTextField;
    NSTextField * _filepathLabel;
    NSButton * _okButton;
    NSSavePanel * _savePanel;
    void * _sheetDidEndContextInfo;
    SEL  _sheetDidEndSelector;
    id  _target;
    BOOL  isUILoaded;
}

@property (atomic, readwrite, copy) NSString *errorMessage;

- (void)_cancelDelayedAutocomplete;
- (long long)_completePathWithPrefix:(id)arg1 intoString:(id*)arg2 matchesIntoArray:(id*)arg3;
- (BOOL)_containsValidFilePath;
- (id)_currentInputFilepath;
- (BOOL)_doDelayedAutocomplete;
- (void)_doUserComplete;
- (BOOL)_handleTabKey:(id)arg1;
- (void)_loadUIIfNecessary;
- (void)_prepareToRunForSavePanel:(id)arg1 withFilepath:(id)arg2;
- (void)_scheduleDelayedAutocomplete;
- (void)_setCurrentInputFilepath:(id)arg1;
- (void)_setDefaultWindowKeyViewLoop;
- (BOOL)_shouldExecuteDelayedAutocomplete;
- (unsigned long long)_simpleCompletePathWithPrefix:(id)arg1 intoString:(id*)arg2 caseSensitive:(BOOL)arg3 matchesIntoArray:(id*)arg4 filterTypes:(id)arg5;
- (void)_stopGotoWithCode:(long long)arg1;
- (void)_updateUIToMatchCachedValues;
- (SEL)action;
- (void)beginSheetForSavePanel:(id)arg1 withFilepath:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)cancel:(id)arg1;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)dealloc;
- (void)doFileCompletion:(id)arg1 isAutoComplete:(BOOL)arg2 reverseCycle:(BOOL)arg3;
- (id)errorMessage;
- (id)filepath;
- (id)filepathLabel;
- (id)initWithWindow:(id)arg1;
- (BOOL)isRunning;
- (void)loadWindow;
- (void)ok:(id)arg1;
- (id)prompt;
- (long long)runModalForSavePanel:(id)arg1;
- (long long)runModalForSavePanel:(id)arg1 withFilepath:(id)arg2;
- (void)setAction:(SEL)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setFilepathLabel:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3;
- (id)target;
- (id)title;

@end
