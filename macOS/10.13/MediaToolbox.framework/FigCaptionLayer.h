/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox
 */

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {
    FigCaptionLayerPrivate * _priv;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)finalize;
- (id)init;
- (void)layoutSublayers;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;
- (void)setFontName:(const char *)arg1;
- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer { }*)arg1;

@end
