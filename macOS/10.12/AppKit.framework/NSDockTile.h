/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDockTile : NSObject {
    NSView * _backstopView;
    NSString * _badgeLabel;
    NSView * _contentView;
    struct { 
        unsigned int showsAppBadge : 1; 
        unsigned int reserved : 31; 
    }  _dFlags;
    void * _dockContextRef;
    struct CGSize { 
        double width; 
        double height; 
    }  _dockTileSize;
    NSView * _frameView;
    id  _miniViewController;
    id  _owner;
    /* Warning: unhandled array encoding: '[4@]' */ id  reserved;
}

@property (atomic, readwrite, copy) NSString *badgeLabel;
@property (atomic, readwrite, retain) NSView *contentView;
@property (atomic, readwrite, retain) NSView *miniView;
@property (atomic, readonly) id owner;
@property (atomic, readwrite) BOOL showsApplicationBadge;
@property (atomic, readonly) struct CGSize { double x1; double x2; } size;

- (id)_backstopView;
- (void)_createFrameViewIfNeeded;
- (void)_dockIsAlive:(BOOL)arg1;
- (void)_dockTileScaleFactorChanged:(id)arg1;
- (BOOL)_getDockContext:(struct CGContext {}**)arg1 andSize:(struct CGSize { double x1; double x2; }*)arg2;
- (struct CGSize { double x1; double x2; })_getSizeFromDock;
- (BOOL)_hasCustomContent;
- (BOOL)_needsTigerDockContextBehavior;
- (void)_reenableAppNap:(id)arg1;
- (void)_registerForDockScaleChangeNotification;
- (BOOL)_releaseContextIfEmpty;
- (void)_releaseDockContext;
- (void)_temporarilyDisableAppNap;
- (id)_tileImage;
- (void)_unregisterForDockScaleChangeNotification;
- (void)_updateDockWindowIDAndDisplayIfNeeded:(BOOL)arg1;
- (id)badgeLabel;
- (id)contentView;
- (void)dealloc;
- (void)display;
- (id)initWithOwner:(id)arg1;
- (void)invalidateOwner;
- (id)owner;
- (void)setBadgeLabel:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setShowsApplicationBadge:(BOOL)arg1;
- (BOOL)showsApplicationBadge;
- (struct CGSize { double x1; double x2; })size;

// NSDockTile (NSDockMiniView)

- (void)_miniViewResized;
- (void)_setMiniView:(long long)arg1 contextid:(unsigned int)arg2;
- (void)_setMiniViewShown:(BOOL)arg1;
- (void)_setMiniViewWindowLevel:(long long)arg1;
- (void)frameChanged:(id)arg1;
- (id)miniView;
- (void)setMiniView:(id)arg1;

@end
