/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSExtraMIData : NSObject {
    NSImage * _image;
    id  actionBlock;
    NSAttributedString * attributedTitle;
    BOOL  attributedTitleHasAttachment;
    _NSBindingAdaptor * bindingAdaptor;
    long long  cachedAttributedTitleHeightForDrawing;
    struct CGSize { 
        double width; 
        double height; 
    }  cachedAttributedTitleSize;
    unsigned short  defaultKEPriority;
    NSFont * font;
    struct CGSize { 
        double width; 
        double height; 
    }  imageSize;
    NSString * kbdKE;
    NSMenuItemViewer * menuItemViewer;
    NSImage * mixedStateImage;
    unsigned long long  newItemsCount;
    NSImage * offStateImage;
    NSImage * onStateImage;
    NSString * tooltip;
    NSString * userKE;
    unsigned char  userKEMask;
    unsigned short  virtualKeyCode;
}

- (id)init;

@end
