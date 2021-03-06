/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFPageSelectionLayerPrivate : NSObject {
    long long  displayBox;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  firstPageRect;
    bool  isOnFirstPage;
    bool  isOnLastPage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  lastPageRect;
    PDFPage * page;
    PDFSelection * selection;
    CALayer * selectionEndHandle;
    NSMutableDictionary * selectionRects;
    CALayer * selectionStartHandle;
    bool  showTextSelectionHandle;
    PDFTimer * zoomTimer;
}

- (void).cxx_destruct;

@end
