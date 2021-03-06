/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSDocumentConflict : NSObject {
    NSDocumentConflictPanelController * _controller;
    BOOL  _documentIsShared;
    BOOL  _selected;
    BOOL  _showName;
    struct __QLThumbnail { } * _thumbnail;
    NSImage * _thumbnailImage;
    NSFileVersion * _version;
}

@property (atomic, readwrite) NSDocumentConflictPanelController *controller;
@property (atomic, readwrite) BOOL documentIsShared;
@property (getter=isSelected, atomic, readwrite) BOOL selected;
@property (atomic, readwrite) BOOL showName;
@property (atomic, readwrite, copy) NSImage *thumbnail;
@property (atomic, readwrite, retain) NSFileVersion *version;

- (id)controller;
- (void)dealloc;
- (BOOL)documentIsShared;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSelected;
- (id)nameAndDateText;
- (id)originText;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)setController:(id)arg1;
- (void)setDocumentIsShared:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowName:(BOOL)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setVersion:(id)arg1;
- (BOOL)showName;
- (void)startLoadingDocumentThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scaleFactor:(double)arg2 force:(BOOL)arg3;
- (id)thumbnail;
- (id)version;

@end
