/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface StdMovieUIVolumeButton : StdMovieUIButton {
    unsigned long long  _currentImageIndex;
    double  _currentVolume;
    BOOL  _muted;
    StdMovieUIVolumeSliderPopupView * _volumeSlider;
}

- (void)_loadImagesIfNecessary;
- (void)_volumeSliderMoved:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)muted;
- (void)popupVolumeSlider;
- (void)setMuted:(BOOL)arg1;
- (void)setVolumeLevel:(double)arg1;
- (double)volumeLevel;

@end
