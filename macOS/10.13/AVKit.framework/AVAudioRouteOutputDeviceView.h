/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVAudioRouteOutputDeviceView : NSTableCellView {
    NSButton * _checkbox;
    <AVAudioRouteOutputDeviceSelectionDelegate> * _delegate;
    NSString * _name;
    NSTextField * _nameTextField;
    NSImage * _routeImage;
    NSImageView * _routeImageView;
    BOOL  _selected;
    NSSlider * _volumeSlider;
}

@property (nonatomic, readwrite) <AVAudioRouteOutputDeviceSelectionDelegate> *delegate;
@property (nonatomic, readwrite, retain) NSString *name;
@property (nonatomic, readwrite, retain) NSImage *routeImage;
@property (getter=isSelected, nonatomic, readwrite) BOOL selected;

- (void).cxx_destruct;
- (void)_checkboxClicked:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isFlipped;
- (BOOL)isSelected;
- (id)name;
- (id)routeImage;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRouteImage:(id)arg1;
- (void)setSelected:(BOOL)arg1;

@end
