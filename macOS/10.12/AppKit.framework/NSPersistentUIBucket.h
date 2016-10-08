/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPersistentUIBucket : NSObject {
    BOOL  contentsHaveInvalidState;
    NSString * frameString;
    NSMutableDictionary * publicProperties;
    NSMutableDictionary * state;
    unsigned int  windowID;
    unsigned int  windowNumber;
}

@property (atomic, readwrite, copy) NSString *frameString;
@property (atomic, readonly) NSMutableDictionary *state;

- (BOOL)_contentsHaveInvalidRestorableState;
- (void)_invalidateRestorableStateOfContents;
- (unsigned int)_persistentUIWindowID;
- (void)_setContentsHaveInvalidRestorableState:(BOOL)arg1;
- (BOOL)_shouldRecordPersistentState;
- (void)dealloc;
- (void)encodeInvalidPersistentStateIntoRecords:(id)arg1;
- (id)frameString;
- (id)initWithWindowID:(unsigned int)arg1;
- (BOOL)isGlobal;
- (BOOL)isMenuBar;
- (void)setFrameString:(id)arg1;
- (void)setPublicProperty:(id)arg1 forKey:(id)arg2;
- (id)state;

@end
