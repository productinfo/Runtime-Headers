/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKRasterOverlay : NSObject {
    <VKRasterOverlayDelegate> * _delegate;
    struct weak_ptr<md::GlobeOverlayContainer> { 
        struct GlobeOverlayContainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _flyoverContainer;
    unsigned long long  _level;
    VKRasterOverlayTileSource * _mapModel;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _replaceMapContentInRect;
    VKRasterOverlayTileSource * _tileSource;
}

@property (atomic, readwrite) <VKRasterOverlayDelegate> *delegate;
@property (nonatomic, readwrite) unsigned long long level;
@property (nonatomic, readwrite) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } replaceMapContentInRect;
@property (nonatomic, readwrite) VKRasterOverlayTileSource *tileSource;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)delegate;
- (void)drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 inContext:(struct CGContext { }*)arg2;
- (struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer {} *x1; struct __shared_weak_count {} *x2; })flyoverContainer;
- (id)init;
- (unsigned long long)level;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })replaceMapContentInRect;
- (void)setDelegate:(id)arg1;
- (void)setFlyoverContainer:(struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 level:(long long)arg2;
- (void)setReplaceMapContentInRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTileSource:(id)arg1;
- (id)tileSource;

@end
