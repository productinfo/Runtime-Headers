/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLImageAndTextLayer : CALayer <CALayerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultImageSize;
    CALayer * _imageLayer;
    CALayer * _imageLayerContainer;
    BOOL  _liveResize;
    double  _margin;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxInfoSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minInfoSize;
    BOOL  _perspectiveLayout;
    QLCustomTextLayer * _textLayer;
    BOOL  _tightLayout;
    QLCustomTextLayer * _topTextLayer;
    long long  _userInterfaceLayoutDirection;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } defaultImageSize;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL highlighted;
@property (atomic, readwrite, retain) id image;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (atomic, readwrite, retain) CALayer *imageLayer;
@property (atomic, readwrite) BOOL liveResize;
@property (atomic, readwrite) double margin;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } maxImageSize;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } maxInfoSize;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } minInfoSize;
@property (atomic, readonly) struct CGSize { double x1; double x2; } optimalSize;
@property (nonatomic, readwrite) BOOL perspectiveLayout;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) NSAttributedString *text;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textFrame;
@property (atomic, readwrite) BOOL tightLayout;
@property (atomic, readwrite, retain) NSAttributedString *topText;
@property (atomic, readwrite) long long userInterfaceLayoutDirection;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentBoundsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_idealTopTextHeightInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textVisible:(BOOL)arg2;
- (double)_interspace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_topTextFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct CGSize { double x1; double x2; })defaultImageSize;
- (BOOL)highlighted;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)imageLayer;
- (id)init;
- (void)layoutSublayers;
- (BOOL)liveResize;
- (double)margin;
- (struct CGSize { double x1; double x2; })maxImageSize;
- (struct CGSize { double x1; double x2; })maxInfoSize;
- (struct CGSize { double x1; double x2; })minInfoSize;
- (struct CGSize { double x1; double x2; })optimalSize;
- (double)optimalWidthWithHeight:(double)arg1;
- (BOOL)perspectiveLayout;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDefaultImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageLayer:(id)arg1;
- (void)setLiveResize:(BOOL)arg1;
- (void)setMargin:(double)arg1;
- (void)setMaxImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaxInfoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinInfoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerspectiveLayout:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTightLayout:(BOOL)arg1;
- (void)setTopText:(id)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (id)text;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFrame;
- (BOOL)tightLayout;
- (id)topText;
- (long long)userInterfaceLayoutDirection;

@end
