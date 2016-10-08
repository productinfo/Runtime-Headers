/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavFinderViewFileBrowser : NSView <FIFinderViewDelegate, NSNavFileBrowser> {
    <NSNavFileBrowserDelegate> * _delegate;
    FIFinderView<FIFinderViewProtocol> * _finderView;
    NSURL * _lastDirectoryURL;
    NSArray * _lastSelectedURLs;
    NSDictionary * _recycleInitOptions;
}

@property (atomic, readwrite) BOOL allowsExpandingMultipleDirectories;
@property (atomic, readwrite) BOOL allowsMultipleSelection;
@property (atomic, readwrite) BOOL canClickDisabledFiles;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSNavFileBrowserDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, retain) NSURL *directoryURL;
@property (atomic, readwrite) BOOL downloadsUbiquitousContents;
@property (atomic, readwrite) int fileListMode;
@property (atomic, readonly) FIFinderView *finderView;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL hidesSharedSection;
@property (atomic, readwrite, retain) NSURL *lastDirectoryURL;
@property (atomic, readwrite, copy) NSArray *lastSelectedURLs;
@property (atomic, readonly) struct CGSize { double x1; double x2; } minimumViewSize;
@property (atomic, readwrite) BOOL resolvesAliases;
@property (atomic, readwrite, retain) NSURL *rootDirectoryURL;
@property (atomic, readonly, copy) NSArray *selectedRawURLs;
@property (atomic, readwrite, copy) NSArray *selectedURLs;
@property (atomic, readwrite) BOOL showsHiddenFiles;
@property (atomic, readwrite) BOOL showsNewDocumentButton;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) BOOL treatsFilePackagesAsDirectories;

+ (id)_copyRecycledFinderViewWithInitOptions:(id)arg1;
+ (id)_findRecycledFinderViewDictionaryWithInitOptions:(id)arg1;
+ (int)_mapFinderViewStyleFromNSNavFileListMode:(int)arg1;
+ (int)_mapNSNavFileListModeFromFinderViewStyle:(int)arg1;
+ (id)_recycledFinderViewsArray;
+ (void)_setRecycledFinderView:(id)arg1 withInitOptions:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)allowsExpandingMultipleDirectories;
- (BOOL)allowsMultipleSelection;
- (BOOL)canClickDisabledFiles;
- (BOOL)canCreateNewFolder;
- (void)dealloc;
- (id)delegate;
- (id)directoryURL;
- (void)disableHistoryAndDoWork:(id)arg1;
- (id)documentsDirectoryURL;
- (BOOL)downloadsUbiquitousContents;
- (double)fauxToolbarHeightForWindow:(id)arg1 appCentric:(BOOL)arg2 hasMessageView:(BOOL)arg3 runningAsAService:(BOOL)arg4 verticalSpaceAbove:(double*)arg5;
- (int)fileListMode;
- (id)finderView;
- (BOOL)finderView:(id)arg1 acceptsPreviewPanelControl:(id)arg2;
- (BOOL)finderView:(id)arg1 canSelectURL:(id)arg2;
- (BOOL)finderView:(id)arg1 canSelectURL:(id)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4;
- (void)finderView:(id)arg1 clickedOnDisabledURL:(id)arg2;
- (void)finderView:(id)arg1 configureForGotoWithFilename:(id)arg2;
- (void)finderView:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (void)finderView:(id)arg1 populationInProgress:(BOOL)arg2;
- (void)finderView:(id)arg1 scopeChanged:(BOOL)arg2;
- (BOOL)finderView:(id)arg1 shouldEnableURL:(id)arg2;
- (BOOL)finderView:(id)arg1 shouldEnableURL:(id)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4;
- (BOOL)finderView:(id)arg1 shouldEnableURL:(id)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4 pathExtension:(id)arg5 itemHFSType:(unsigned int)arg6 typeIdentifier:(id)arg7;
- (BOOL)finderView:(id)arg1 showAsPackageForURL:(id)arg2;
- (BOOL)finderViewOpenSelection:(id)arg1;
- (id)finderViewQuerySearchUTIs:(id)arg1;
- (id)finderViewRequestRecentPlaces:(id)arg1;
- (void)finderViewSelectionDidChange:(id)arg1;
- (void)finderViewViewStyleChanged:(id)arg1;
- (void)hidePreviewPanelIfNecessary;
- (BOOL)hidesSharedSection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2;
- (BOOL)isNewFolderDialogRunning;
- (id)lastDirectoryURL;
- (id)lastSelectedURLs;
- (void)makeNewFolderForSavePanel:(id)arg1;
- (struct CGSize { double x1; double x2; })minimumViewSize;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)refreshContents;
- (BOOL)resolvesAliases;
- (id)rootDirectoryURL;
- (id)savePanel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)selectFirstKeyView;
- (id)selectedRawURLs;
- (id)selectedSeamlessOpenerPreviewItems;
- (id)selectedURLs;
- (void)setAllowsExpandingMultipleDirectories:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setCanClickDisabledFiles:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectoryURL:(id)arg1;
- (void)setDownloadsUbiquitousContents:(BOOL)arg1;
- (void)setFileListMode:(int)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidesSharedSection:(BOOL)arg1;
- (void)setLastDirectoryURL:(id)arg1;
- (void)setLastSelectedURLs:(id)arg1;
- (void)setMediaBrowserShownTypes:(unsigned long long)arg1;
- (void)setResolvesAliases:(BOOL)arg1;
- (void)setRootDirectoryURL:(id)arg1;
- (void)setSavePanel:(id)arg1;
- (void)setSelectedURLs:(id)arg1;
- (void)setShowsHiddenFiles:(BOOL)arg1;
- (void)setShowsNewDocumentButton:(BOOL)arg1;
- (void)setTreatsFilePackagesAsDirectories:(BOOL)arg1;
- (BOOL)showGotoWithInitialFilename:(id)arg1;
- (BOOL)showsHiddenFiles;
- (BOOL)showsNewDocumentButton;
- (BOOL)sidebarContainsURL:(id)arg1;
- (BOOL)treatsFilePackagesAsDirectories;
- (void)windowOrderedIn;
- (void)windowOrderedOut;

@end
