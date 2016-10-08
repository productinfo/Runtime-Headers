/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUIMaskedFacetLayer : CALayer {
    long long  _drawingLayer;
    CUIThemeFacet * _facet;
    struct CGPath { } * _maskPath;
}

@property (atomic, readwrite) long long drawingLayer;
@property (nonatomic, readwrite, retain) CUIThemeFacet *facet;
@property (nonatomic, readwrite) struct CGPath { }*maskPath;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (long long)drawingLayer;
- (id)facet;
- (id)init;
- (struct CGPath { }*)maskPath;
- (void)setDrawingLayer:(long long)arg1;
- (void)setFacet:(id)arg1;
- (void)setMaskPath:(struct CGPath { }*)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(BOOL*)arg2 userInfo:(id)arg3;

@end