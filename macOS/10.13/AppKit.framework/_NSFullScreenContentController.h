/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSFullScreenContentController : NSObject {
    BOOL  _appInitiatedInvalidTileResizeToFit;
    NSArray * _frozenWids;
    BOOL  _hasInvalidTileFrame;
    BOOL  _performingTileResizeToFit;
    NSHIPresentationInstance * _presentationInstance;
    BOOL  _presentationInstanceHasInitializedSpace;
    unsigned long long  _presentationOptions;
    BOOL  _reactingToTileResizeNotification;
    _NSFullScreenSpace * _space;
    _NSFullScreenContentController * _surrogateContentController;
}

@property (nonatomic, readwrite, retain) NSHIPresentationInstance *presentationInstance;
@property (nonatomic, readwrite) unsigned long long presentationOptions;
@property (nonatomic, readwrite, retain) _NSFullScreenSpace *space;
@property (nonatomic, readwrite) _NSFullScreenContentController *surrogateContentController;

+ (unsigned long long)_defaultPresentationOptions;

- (void).cxx_destruct;
- (void)_discardPresentationInstance;
- (void)_makePresentationInstanceIfNeeded;
- (void)activateFullScreenPresentationOptions;
- (void)addSiblingWindow:(long long)arg1 position:(unsigned long long)arg2 responseHandler:(id)arg3;
- (unsigned int)contentOwnerConnectionID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentWindowFrame;
- (unsigned int)contentWindowID;
- (id)currentDividerResizeDirections;
- (id)cursorForResizeDirection:(long long)arg1;
- (void)dealloc;
- (BOOL)disableMCExit;
- (void)displayChanged;
- (void)dispose;
- (void)endLiveResize;
- (void)freezeWindows;
- (id)fullScreenStorage;
- (id)init;
- (BOOL)isOnActiveSpace;
- (BOOL)isPrincipalInSpace;
- (id)menuBarCompanionController;
- (void)parentSpaceDidChange;
- (BOOL)performDividerDragWithEvent:(id)arg1 forResizeDirection:(long long)arg2;
- (BOOL)performTileResizeToFit:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)performTileResizeToFit:(struct CGSize { double x1; double x2; })arg1 acceptIncorrectSize:(BOOL)arg2;
- (id)presentationInstance;
- (unsigned long long)presentationOptions;
- (void)queryCanAddSiblingWindow:(long long)arg1 responseHandler:(id)arg2;
- (void)reshapeContentForTileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)resignPrincipalFullScreenWindowInSpace;
- (id)screen;
- (void)setAsThePrincipalFullScreenWindowInSpace;
- (void)setPresentationInstance:(id)arg1;
- (void)setPresentationOptions:(unsigned long long)arg1;
- (void)setSpace:(id)arg1;
- (void)setSurrogateContentController:(id)arg1;
- (BOOL)sharesTileWithOtherTabs;
- (id)space;
- (void)startLiveResize;
- (id)surrogateContentController;
- (void)thawWindows;
- (id)windowIDsForSnapshot;
- (id)windowIDsToFreeze;

@end
