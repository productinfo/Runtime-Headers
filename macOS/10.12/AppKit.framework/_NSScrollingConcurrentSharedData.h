/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingConcurrentSharedData : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _canonicalClipBoundsOrigin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _clipViewOrigin;
    struct CGSize { 
        double width; 
        double height; 
    }  _clipViewSize;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _documentFrame;
    BOOL  _isDrawingVisibleRect;
    double  _lastFastFrameTimestamp;
    double  _lastScrollDirection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastValidRenderedContentRect;
    double  _progress;
    long long  _referencePageNumber;
    long long  _swipeCount;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _synchMutex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

- (void)dealloc;
- (id)init;
- (id)initWithConstantData:(id)arg1;
- (void)threadSafePropertyAccess:(id)arg1;

@end