/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebNetscapePluginDocumentView : WebBaseNetscapePluginView <WebPluginManualLoader> {
    unsigned int  _dataLengthReceived;
    struct NPObject { struct NPClass {} *x1; unsigned int x2; } * _elementNPObject;
    struct RetainPtr<NSError> { 
        void *m_ptr; 
    }  _error;
    struct unique_ptr<WebNetscapePluginEventHandler, std::__1::default_delete<WebNetscapePluginEventHandler> > { 
        struct __compressed_pair<WebNetscapePluginEventHandler *, std::__1::default_delete<WebNetscapePluginEventHandler> > { 
            struct WebNetscapePluginEventHandler {} *__first_; 
        } __ptr_; 
    }  _eventHandler;
    BOOL  _isFlash;
    BOOL  _isSilverlight;
    struct RefPtr<WebNetscapePluginStream> { 
        struct WebNetscapePluginStream {} *m_ptr; 
    }  _manualStream;
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    }  _pendingFrameLoads;
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    }  _pluginLayer;
    unsigned int  argsCount;
    char ** cAttributes;
    char ** cValues;
    unsigned int  currentTimerID;
    int  drawingModel;
    int  eventModel;
    BOOL  inSetWindow;
    union PluginPort { 
        struct NP_CGContext { 
            struct CGContext {} *context; 
            struct _NPNSWindow {} *window; 
        } cgPort; 
    }  lastSetPort;
    struct _NPWindow { 
        void *window; 
        int x; 
        int y; 
        unsigned int width; 
        unsigned int height; 
        struct _NPRect { 
            unsigned short top; 
            unsigned short left; 
            unsigned short bottom; 
            unsigned short right; 
        } clipRect; 
        int type; 
    }  lastSetWindow;
    union PluginPort { 
        struct NP_CGContext { 
            struct CGContext {} *context; 
            struct _NPNSWindow {} *window; 
        } cgPort; 
    }  nPort;
    struct _NPP { void *x1; void *x2; } * plugin;
    unsigned int  pluginFunctionCallDepth;
    BOOL  shouldStopSoon;
    int  specifiedHeight;
    int  specifiedWidth;
    struct HashSet<WTF::RefPtr<WebNetscapePluginStream>, WTF::PtrHash<WTF::RefPtr<WebNetscapePluginStream> >, WTF::HashTraits<WTF::RefPtr<WebNetscapePluginStream> > > { 
        struct HashTable<WTF::RefPtr<WebNetscapePluginStream>, WTF::RefPtr<WebNetscapePluginStream>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebNetscapePluginStream> >, WTF::HashTraits<WTF::RefPtr<WebNetscapePluginStream> >, WTF::HashTraits<WTF::RefPtr<WebNetscapePluginStream> > > { 
            struct RefPtr<WebNetscapePluginStream> {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  streams;
    struct unique_ptr<WTF::HashMap<unsigned int, std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> > > >, std::__1::default_delete<WTF::HashMap<unsigned int, std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> > > > > > { 
        struct __compressed_pair<WTF::HashMap<unsigned int, std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> > > > *, std::__1::default_delete<WTF::HashMap<unsigned int, std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> > > > > > { 
            struct HashMap<unsigned int, std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> >, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<std::__1::unique_ptr<PluginTimer, std::__1::default_delete<PluginTimer> > > > {} *__first_; 
        } __ptr_; 
    }  timers;
    struct _NPWindow { 
        void *window; 
        int x; 
        int y; 
        unsigned int width; 
        unsigned int height; 
        struct _NPRect { 
            unsigned short top; 
            unsigned short left; 
            unsigned short bottom; 
            unsigned short right; 
        } clipRect; 
        int type; 
    }  window;
}

+ (id)currentPluginView;
+ (void)initialize;
+ (void)setCurrentPluginView:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)createPlugin;
- (struct NPObject { struct NPClass {} *x1; unsigned int x2; }*)createPluginScriptableObject;
- (void)dealloc;
- (void)destroyPlugin;
- (void)didCallPlugInFunction;
- (void)disconnectStream:(struct WebNetscapePluginStream { int (**x1)(); unsigned int x2; struct RetainPtr<NSMutableData> { void *x_3_1_1; } x3; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_4_1_1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; unsigned int x_4_1_9; unsigned int x_4_1_10; unsigned int x_4_1_11; unsigned int x_4_1_12; unsigned int x_4_1_13; } x4; struct RetainPtr<NSURL> { void *x_5_1_1; } x5; struct CString { struct RefPtr<WTF::CStringBuffer> { struct CStringBuffer {} *x_1_2_1; } x_6_1_1; } x6; struct _NPP {} *x7; unsigned short x8; int x9; struct _NPStream { void *x_10_1_1; void *x_10_1_2; char *x_10_1_3; unsigned int x_10_1_4; unsigned int x_10_1_5; void *x_10_1_6; char *x_10_1_7; } x10; struct RetainPtr<NSString> { void *x_11_1_1; } x11; int x12; BOOL x13; void *x14; char *x15; struct RetainPtr<WebNetscapePluginDocumentView> { void *x_16_1_1; } x16; short x17; bool x18; bool x19; }*)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)eventModel;
- (void)fini;
- (void)fixWindowPort;
- (void)flagsChanged:(id)arg1;
- (void)focusChanged;
- (BOOL)getFormValue:(id*)arg1;
- (void)handleMouseEntered:(id)arg1;
- (void)handleMouseExited:(id)arg1;
- (void)handleMouseMoved:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pluginPackage:(id)arg2 URL:(id)arg3 baseURL:(id)arg4 MIMEType:(id)arg5 attributeKeys:(id)arg6 attributeValues:(id)arg7 loadManually:(BOOL)arg8 element:(struct RefPtr<WebCore::HTMLPlugInElement> { struct HTMLPlugInElement {} *x1; }*)arg9;
- (id)inputContext;
- (BOOL)isNewWindowEqualToOldWindow;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)loadStream;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (struct _NPP { void *x1; void *x2; }*)plugin;
- (id)pluginLayer;
- (void)pluginView:(id)arg1 receivedData:(id)arg2;
- (void)pluginView:(id)arg1 receivedError:(id)arg2;
- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;
- (void)pluginViewFinishedLoading:(id)arg1;
- (void)privateBrowsingModeDidChange;
- (void)restorePortState:(struct OpaquePortState { }*)arg1;
- (struct OpaquePortState { }*)saveAndSetNewPortState;
- (struct OpaquePortState { }*)saveAndSetNewPortStateForUpdate:(BOOL)arg1;
- (void)scrollWheel:(id)arg1;
- (void)sendDrawRectEvent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)sendEvent:(void*)arg1 isDrawRect:(BOOL)arg2;
- (void)sendModifierEventWithKeyCode:(int)arg1 character:(BOOL)arg2;
- (void)setAttributeKeys:(id)arg1 andValues:(id)arg2;
- (void)setLayer:(id)arg1;
- (void)setWindowIfNecessary;
- (BOOL)shouldStop;
- (void)startTimers;
- (void)stopTimers;
- (void)tellQuickTimeToChill;
- (void)updateAndSetWindow;
- (void)willCallPlugInFunction;
- (void)windowFocusChanged:(BOOL)arg1;

// WebNetscapePluginDocumentView (Internal)

- (short)_createPlugin;
- (void)_destroyPlugin;
- (id)_printedPluginBitmap;
- (void)_redeliverStream;
- (BOOL)_shouldCancelSrcStream;

// WebNetscapePluginDocumentView (WebNPPCallbacks)

- (short)_postURL:(const char *)arg1 target:(const char *)arg2 len:(unsigned int)arg3 buf:(const char *)arg4 file:(unsigned char)arg5 notifyData:(void*)arg6 sendNotification:(BOOL)arg7 allowHeaders:(BOOL)arg8;
- (short)destroyStream:(struct _NPStream { void *x1; void *x2; char *x3; unsigned int x4; unsigned int x5; void *x6; char *x7; }*)arg1 reason:(short)arg2;
- (void)evaluateJavaScriptPluginRequest:(id)arg1;
- (void)forceRedraw;
- (short)getAuthenticationInfoWithProtocol:(const char *)arg1 host:(const char *)arg2 port:(int)arg3 scheme:(const char *)arg4 realm:(const char *)arg5 username:(char **)arg6 usernameLength:(unsigned int*)arg7 password:(char **)arg8 passwordLength:(unsigned int*)arg9;
- (short)getURL:(const char *)arg1 target:(const char *)arg2;
- (short)getURLNotify:(const char *)arg1 target:(const char *)arg2 notifyData:(void*)arg3;
- (short)getVariable:(int)arg1 forURL:(const char *)arg2 value:(char **)arg3 length:(unsigned int*)arg4;
- (short)getVariable:(int)arg1 value:(void*)arg2;
- (void)invalidateRect:(struct _NPRect { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)arg1;
- (void)invalidateRegion:(void*)arg1;
- (void)loadPluginRequest:(id)arg1;
- (short)loadRequest:(id)arg1 inTarget:(const char *)arg2 withNotifyData:(void*)arg3 sendNotification:(BOOL)arg4;
- (short)newStream:(char *)arg1 target:(const char *)arg2 stream:(struct _NPStream {}**)arg3;
- (short)popUpContextMenu:(struct _NPNSMenu { }*)arg1;
- (short)postURL:(const char *)arg1 target:(const char *)arg2 len:(unsigned int)arg3 buf:(const char *)arg4 file:(unsigned char)arg5;
- (short)postURLNotify:(const char *)arg1 target:(const char *)arg2 len:(unsigned int)arg3 buf:(const char *)arg4 file:(unsigned char)arg5 notifyData:(void*)arg6;
- (unsigned int)scheduleTimerWithInterval:(unsigned int)arg1 repeat:(unsigned char)arg2 timerFunc:(int (*)arg3;
- (short)setVariable:(int)arg1 forURL:(const char *)arg2 value:(const char *)arg3 length:(unsigned int)arg4;
- (short)setVariable:(int)arg1 value:(void*)arg2;
- (void)status:(const char *)arg1;
- (void)unscheduleTimer:(unsigned int)arg1;
- (const char *)userAgent;
- (void)webFrame:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)webFrame:(id)arg1 didFinishLoadWithReason:(short)arg2;
- (short)write:(struct _NPStream { void *x1; void *x2; char *x3; unsigned int x4; unsigned int x5; void *x6; char *x7; }*)arg1 len:(int)arg2 buffer:(void*)arg3;

@end
