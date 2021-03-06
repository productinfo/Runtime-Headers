/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKFullScreenWindowController : NSWindowController <NSWindowDelegate> {
    struct RetainPtr<NSView> { 
        void *m_ptr; 
    }  _backgroundView;
    struct RetainPtr<NSView> { 
        void *m_ptr; 
    }  _clipView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalFrame;
    long long  _fullScreenState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    struct WebPageProxy { int (**x1)(); id x2; int (*x3)(); int (**x4)(); int (**x5)(); int (**x6)(); int (**x7)(); struct RetainPtr<NSArray> { void *x_8_1_1; } x8; struct PageClient {} *x9; struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x_10_1_1; } x10; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_12_1_1; } x12; struct unique_ptr<API::NavigationClient, std::__1::default_delete<API::NavigationClient> > { struct __compressed_pair<API::NavigationClient *, std::__1::default_delete<API::NavigationClient> > { struct NavigationClient {} *x_1_2_1; } x_13_1_1; } x13; struct unique_ptr<API::HistoryClient, std::__1::default_delete<API::HistoryClient> > { struct __compressed_pair<API::HistoryClient *, std::__1::default_delete<API::HistoryClient> > { struct HistoryClient {} *x_1_2_1; } x_14_1_1; } x14; } * _page;
    struct RefPtr<WebKit::GenericCallback<> > { 
        struct GenericCallback<> {} *m_ptr; 
    }  _repaintCallback;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _savedConstraints;
    double  _savedScale;
    float  _savedTopContentInset;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  _watchdogTimer;
    NSView * _webView;
    struct RetainPtr<WebCoreFullScreenPlaceholderView> { 
        void *m_ptr; 
    }  _webViewPlaceholder;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalFrame;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrame;
@property (atomic, readwrite) NSArray *savedConstraints;
@property (atomic, readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WebFullScreenManagerProxy { int (**x1)(); unsigned int x2; struct WebPageProxy {} *x3; struct WebFullScreenManagerProxyClient {} *x4; }*)_manager;
- (void)_replaceView:(id)arg1 with:(id)arg2;
- (void)_startEnterFullScreenAnimationWithDuration:(double)arg1;
- (void)_startExitFullScreenAnimationWithDuration:(double)arg1;
- (void)_watchdogTimerFired:(id)arg1;
- (void)beganEnterFullScreenWithInitialFrame:(const struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg1 finalFrame:(const struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg2;
- (void)beganExitFullScreenWithInitialFrame:(const struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg1 finalFrame:(const struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg2;
- (void)cancelOperation:(id)arg1;
- (void)close;
- (void)completeFinishExitFullScreenAnimationAfterRepaint;
- (id)customWindowsToEnterFullScreenForWindow:(id)arg1;
- (id)customWindowsToExitFullScreenForWindow:(id)arg1;
- (void)dealloc;
- (void)enterFullScreen:(id)arg1;
- (void)exitFullScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrame;
- (void)finishedEnterFullScreenAnimation:(bool)arg1;
- (void)finishedExitFullScreenAnimation:(bool)arg1;
- (id)initWithWindow:(id)arg1 webView:(id)arg2 page:(struct WebPageProxy { int (**x1)(); id x2; int (*x3)(); int (**x4)(); int (**x5)(); int (**x6)(); int (**x7)(); struct RetainPtr<NSArray> { void *x_8_1_1; } x8; struct PageClient {} *x9; struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x_10_1_1; } x10; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_12_1_1; } x12; struct unique_ptr<API::NavigationClient, std::__1::default_delete<API::NavigationClient> > { struct __compressed_pair<API::NavigationClient *, std::__1::default_delete<API::NavigationClient> > { struct NavigationClient {} *x_1_2_1; } x_13_1_1; } x13; struct unique_ptr<API::HistoryClient, std::__1::default_delete<API::HistoryClient> > { struct __compressed_pair<API::HistoryClient *, std::__1::default_delete<API::HistoryClient> > { struct HistoryClient {} *x_1_2_1; } x_14_1_1; } x14; }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrame;
- (BOOL)isFullScreen;
- (void)performClose:(id)arg1;
- (void)requestExitFullScreen;
- (id)savedConstraints;
- (void)setSavedConstraints:(id)arg1;
- (id)webViewPlaceholder;
- (void)window:(id)arg1 startCustomAnimationToEnterFullScreenWithDuration:(double)arg2;
- (void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)windowDidFailToExitFullScreen:(id)arg1;

@end
