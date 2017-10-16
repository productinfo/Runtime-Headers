/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface _WKDraggableElementInfo : NSObject <NSCopying> {
    BOOL  _attachment;
    BOOL  _image;
    BOOL  _link;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    BOOL  _selected;
}

@property (getter=isAttachment, nonatomic, readwrite) BOOL attachment;
@property (getter=isImage, nonatomic, readwrite) BOOL image;
@property (getter=isLink, nonatomic, readwrite) BOOL link;
@property (nonatomic, readwrite) struct CGPoint { double x1; double x2; } point;
@property (getter=isSelected, nonatomic, readwrite) BOOL selected;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isAttachment;
- (BOOL)isImage;
- (BOOL)isLink;
- (BOOL)isSelected;
- (struct CGPoint { double x1; double x2; })point;
- (void)setAttachment:(BOOL)arg1;
- (void)setImage:(BOOL)arg1;
- (void)setLink:(BOOL)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelected:(BOOL)arg1;

@end