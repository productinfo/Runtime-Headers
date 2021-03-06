/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVFunctionBarVideoTrackView : AVFunctionBarTrackView {
    NSArray * _filteredThumbnailImages;
    BOOL  _showsThumbnails;
}

@property (atomic, readwrite) BOOL showsThumbnails;

- (void).cxx_destruct;
- (id)_filterImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)filterAndDisplayThumbnails:(id)arg1;
- (long long)numberOfPreviewLayersForWidth:(double)arg1;
- (struct CGPoint { double x1; double x2; })positionForPreviewLayerWithIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })previewLayerSize;
- (void)setShowsThumbnails:(BOOL)arg1;
- (BOOL)showsThumbnails;
- (void)updatePreviewLayerContent;

@end
