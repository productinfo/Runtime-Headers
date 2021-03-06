/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextViewIvars : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _adjustedSelectedRangeForActions;
    NSFindIndicator * _highlightIndicator;
    NSImmediateActionGestureRecognizer * _immediateActionGestureRecognizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _insertionPointRect;
    NSViewWindowBackingStoreBuffer * _insertionPointRectCache;
    NSEvent * _lastFirstMouseEvent;
    id  _placeholderString;
    NSTimer * _selectionDragCursorTimer;
    NSTrackingArea * _trackingArea;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  dirtyRectForDisplayWithoutLayout;
    NSTextDragInfo * dragInfo;
    NSMutableArray * eventList;
    NSLayoutManager * layoutManager;
    struct CGSize { 
        double width; 
        double height; 
    }  maxBoundsSize;
    struct CGSize { 
        double width; 
        double height; 
    }  minBoundsSize;
    NSTextViewSharedData * sharedData;
    NSTextContainer * textContainer;
    struct CGSize { 
        double width; 
        double height; 
    }  textContainerInset;
    struct CGPoint { 
        double x; 
        double y; 
    }  textContainerOrigin;
    NSTextStorage * textStorage;
    struct _tvFlags { 
        unsigned int horizontallyResizable : 1; 
        unsigned int verticallyResizable : 1; 
        unsigned int viewOwnsTextStorage : 1; 
        unsigned int displayWithoutLayout : 1; 
        unsigned int settingMarkedRange : 1; 
        unsigned int containerOriginInvalid : 1; 
        unsigned int registeredForDragging : 1; 
        unsigned int superviewIsClipView : 1; 
        unsigned int forceRulerUpdate : 1; 
        unsigned int typingText : 1; 
        unsigned int wasPostingFrameNotifications : 1; 
        unsigned int wasRotatedOrScaledFromBase : 1; 
        unsigned int settingNeedsDisplay : 1; 
        unsigned int mouseInside : 1; 
        unsigned int verticalLayout : 2; 
        unsigned int diagonallyRotatedOrScaled : 1; 
        unsigned int hasScaledBacking : 1; 
        unsigned int shouldCloseQL : 1; 
        unsigned int dragUpdateRequstOwner : 1; 
        unsigned int genericDragRemoveSource : 1; 
        unsigned int isAttributedPlaceholder : 1; 
        unsigned int isDDAction : 1; 
        unsigned int showingFindIndicator : 1; 
        unsigned int isDrawingLayer : 1; 
        unsigned int touchBarInstantiated : 1; 
        unsigned int calculatingContainerOrigin : 1; 
        unsigned int _pad : 5; 
    }  tvFlags;
}

@end
