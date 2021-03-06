/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavProgressStatusViewController : NSViewController {
    NSImage * _badgeImage;
    NSImageView * _badgeView;
    NSButton * _cancelButton;
    NSTrackingArea * _cancelButtonTrackingArea;
    NSString * _cancelMessageString;
    BOOL  _hasCancel;
    NSImage * _image;
    NSImageView * _imageView;
    BOOL  _indeterminate;
    NSString * _messageString;
    NSTextField * _messageText;
    long long  _percentComplete;
    NSProgressIndicator * _progress;
    NSString * _titleString;
    NSTextField * _titleText;
}

@property (atomic, readwrite, retain) NSImage *badgeImage;
@property (atomic, readonly, retain) NSButton *cancelButton;
@property (atomic, readwrite, copy) NSString *cancelMessageString;
@property (atomic, readwrite) BOOL hasCancel;
@property (atomic, readwrite, retain) NSImage *image;
@property (atomic, readwrite) BOOL indeterminate;
@property (atomic, readwrite, copy) NSString *messageString;
@property (atomic, readwrite) long long percentComplete;
@property (atomic, readwrite, copy) NSString *titleString;

- (void)_updateTrackingAreas:(id)arg1;
- (id)badgeImage;
- (void)cancel:(id)arg1;
- (id)cancelButton;
- (id)cancelMessageString;
- (void)dealloc;
- (BOOL)hasCancel;
- (id)image;
- (BOOL)indeterminate;
- (id)init;
- (void)loadView;
- (id)messageString;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (long long)percentComplete;
- (void)setBadgeImage:(id)arg1;
- (void)setCancelMessageString:(id)arg1;
- (void)setHasCancel:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setMessageString:(id)arg1;
- (void)setPercentComplete:(long long)arg1;
- (void)setTitleString:(id)arg1;
- (id)titleString;

@end
