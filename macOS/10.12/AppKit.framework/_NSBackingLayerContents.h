/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSBackingLayerContents : NSObject <CALayerDelegate> {
    CALayer * _backingLayer;
    CALayer * _contentLayer;
}

@property (atomic, readwrite) CALayer *backingLayer;
@property (atomic, readonly) CALayer *contentLayer;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void*)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })NS_activeVisibleRect;
- (BOOL)NS_canDrawLayer:(id)arg1;
- (BOOL)NS_hasPartialPrefetchedContentsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)NS_hasPrefetchedContentsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)XXNS_tiledLayer:(id)arg1 drawTile:(id)arg2 inContext:(struct CGContext { }*)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)backingLayer;
- (id)contentLayer;
- (void)dealloc;
- (void)display;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)invalidateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackingLayer:(id)arg1;
- (Class)tileClass;
- (void)update;

@end
