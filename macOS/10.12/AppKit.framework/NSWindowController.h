/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSWindowController : NSResponder <NSCoding, NSSeguePerforming> {
    NSDocument * _document;
    NSString * _frameAutosaveName;
    id  _moreVars;
    id  _owner;
    NSArray * _topLevelObjects;
    struct __wcFlags { 
        unsigned int shouldCloseDocument : 1; 
        unsigned int shouldCascade : 1; 
        unsigned int nibIsLoaded : 1; 
        unsigned int nibNameIsPath : 1; 
        unsigned int settingWindowsContentViewController : 1; 
        unsigned int didInitWithCoder : 1; 
        unsigned int nibIsMakingConnections : 1; 
        unsigned int sentWindowWillLoad : 1; 
        unsigned int RESERVED : 24; 
    }  _wcFlags;
    NSWindow * _window;
    NSString * _windowNibName;
}

@property (setter=_setFrameAutosaveName:, atomic, readwrite, copy) NSString *_frameAutosaveName;
@property (atomic, readwrite, retain) NSViewController *contentViewController;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) id document;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) id owner;
@property (atomic, readonly) NSViewController *presentingViewController;
@property (atomic, readwrite) BOOL shouldCascadeWindows;
@property (atomic, readwrite) BOOL shouldCloseDocument;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) NSWindow *window;
@property (atomic, readwrite, copy) NSString *windowFrameAutosaveName;
@property (getter=isWindowLoaded, atomic, readonly) BOOL windowLoaded;
@property (atomic, readonly, copy) NSString *windowNibName;
@property (atomic, readonly, copy) NSString *windowNibPath;

+ (void)_doneWithLocations;
+ (void)initialize;
+ (id)windowControllerWithContentViewController:(id)arg1;

- (id)_autounbinder;
- (void)_findWindowLocationsWithRepresentativeWindow:(id)arg1 count:(unsigned long long)arg2;
- (void)_finishedMakingConnections;
- (id)_frameAutosaveName;
- (void)_invalidateDocumentIcon;
- (id)_segueTemplates;
- (void)_setDocumentAutosavingError:(id)arg1;
- (void)_setDocumentEditingState:(long long)arg1 animate:(BOOL)arg2;
- (void)_setDocumentShowsPanelOnClose:(BOOL)arg1;
- (void)_setFrameAutosaveName:(id)arg1;
- (void)_setNonModalDocumentError:(id)arg1;
- (void)_setPresentingViewController:(id)arg1;
- (void)_setRetainedSelf:(BOOL)arg1;
- (void)_setSegueTemplates:(id)arg1;
- (void)_setShowAutosaveButton:(BOOL)arg1;
- (void)_windowDidChangeContentViewController:(id)arg1;
- (void)_windowDidClose;
- (void)_windowDidLoad;
- (void)_windowWillLoad;
- (void)close;
- (id)contentViewController;
- (void)dealloc;
- (id)document;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;
- (id)initWithWindowNibName:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibPath:(id)arg1 owner:(id)arg2;
- (BOOL)isWindowLoaded;
- (void)loadWindow;
- (id)owner;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (oneway void)release;
- (void)setContentViewController:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)setShouldCascadeWindows:(BOOL)arg1;
- (void)setShouldCloseDocument:(BOOL)arg1;
- (void)setStoryboard:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)setWindowFrameAutosaveName:(id)arg1;
- (BOOL)shouldCascadeWindows;
- (BOOL)shouldCloseDocument;
- (BOOL)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)showWindow:(id)arg1;
- (id)storyboard;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)synchronizeWindowTitleWithDocumentName;
- (id)window;
- (void)windowDidLoad;
- (id)windowFrameAutosaveName;
- (id)windowNibName;
- (id)windowNibPath;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)windowWillLoad;

// NSWindowController (NSPersistentUISupport)

- (id)_copyPersistentUIChildren;
- (id)_persistentUIIdentifier;
- (id)_persistentUIWindow;

// NSWindowController (NSUIActivityProvider)

- (void)_didRestoreUserActivity:(id)arg1;

// NSWindowController (NSViewControllerPresentation)

- (void)presentViewController:(id)arg1 asPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 preferredEdge:(unsigned long long)arg4 behavior:(long long)arg5;
- (id)presentingViewController;

// NSWindowController (NSWindowControllerDismissing)

- (void)dismissController:(id)arg1;

@end
