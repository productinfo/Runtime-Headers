/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSPopoverFramePrivateData : NSObject {
    NSImage * _cachedImageMask;
    unsigned long long  anchorEdge;
    struct CGPoint { 
        double x; 
        double y; 
    }  anchorPoint;
    struct CGSize { 
        double width; 
        double height; 
    }  anchorSize;
    NSButton * closeButton;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  contentInset;
    NSImage * dragImage;
    struct { 
        unsigned int animatedIn : 1; 
        unsigned int animatedInWithTitle : 1; 
        unsigned int animating : 1; 
        unsigned int _reserved : 29; 
    }  flags;
    long long  popoverAppearance;
    unsigned long long  previousAnchorEdge;
    struct CGPoint { 
        double x; 
        double y; 
    }  previousAnchorPoint;
    NSFloatRange * rangeOfInterest1;
    NSFloatRange * rangeOfInterest2;
    NSLayoutConstraint * separationConstraint;
    NSTextField * titleTextField;
    NSMutableArray * transientConstraints;
}

@property (atomic, readwrite, retain) NSImage *cachedImageMask;

- (id)cachedImageMask;
- (void)dealloc;
- (void)setCachedImageMask:(id)arg1;

@end