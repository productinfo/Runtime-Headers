/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarColorListPickerPressAndHoldPopUp : NSObject <NSScrubberDataSource, NSScrubberDelegate, NSTouchBarPressAndHoldTransposerDelegate> {
    NSColorList * _colorList;
    NSView<NSTouchBarColorListPickerContainerView> * _containerView;
    <NSTouchBarColorListPickerPressAndHoldPopUpDelegate> * _delegate;
    BOOL  _didBeginScrubberInteraction;
    long long  _numberOfDarkerColors;
    long long  _numberOfLighterColors;
    BOOL  _presenting;
    NSScrubber * _scrubber;
    NSColor * _selectedColor;
}

@property (atomic, readwrite, retain) NSColorList *colorList;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSTouchBarColorListPickerPressAndHoldPopUpDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long numberOfDarkerColors;
@property (atomic, readwrite) long long numberOfLighterColors;
@property (atomic, readwrite, copy) NSColor *selectedColor;
@property (atomic, readonly) Class superclass;

- (void)_transposerDidEnd:(id)arg1 cancelled:(BOOL)arg2;
- (id)colorList;
- (void)dealloc;
- (id)delegate;
- (void)didBeginInteractingWithScrubber:(id)arg1;
- (void)didCancelInteractingWithScrubber:(id)arg1;
- (void)didFinishInteractingWithScrubber:(id)arg1;
- (void)dismiss;
- (long long)numberOfDarkerColors;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (long long)numberOfLighterColors;
- (void)scrubber:(id)arg1 didHighlightItemAtIndex:(long long)arg2;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (id)selectedColor;
- (void)setColorList:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumberOfDarkerColors:(long long)arg1;
- (void)setNumberOfLighterColors:(long long)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)showFromView:(id)arg1 inContainer:(id)arg2;
- (void)transposerDidCancel:(id)arg1;
- (void)transposerDidEnd:(id)arg1;

@end
