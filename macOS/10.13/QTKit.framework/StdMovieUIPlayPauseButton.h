/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface StdMovieUIPlayPauseButton : StdMovieUIButton {
    BOOL  _isPlaying;
    SEL  _pauseSelector;
    SEL  _playSelector;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isPlaying;
- (void)loadImagesIfNecessary;
- (void)setActionForPlay:(SEL)arg1 forPause:(SEL)arg2;
- (void)setPlaying:(BOOL)arg1;

@end