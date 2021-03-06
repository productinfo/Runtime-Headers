/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISCompositVariantResourceLayer : NSObject <ISCompositVariantResourceLayerProtocol> {
    NSDictionary * _layerInfo;
    <ISVariantResourceProviderProtocol> * _resourceProvider;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSDictionary *layerInfo;
@property (atomic, readwrite) <ISVariantResourceProviderProtocol> *resourceProvider;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)applyToContext:(struct CGContext { }*)arg1 size:(unsigned long long)arg2 scale:(unsigned long long)arg3;
- (id)description;
- (BOOL)drawResource:(id)arg1 context:(struct CGContext { }*)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4;
- (void)drawText:(id)arg1 context:(struct CGContext { }*)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithLayerInfo:(id)arg1 resourceProvider:(id)arg2;
- (BOOL)isActiveAtSize:(long long)arg1;
- (id)layerInfo;
- (BOOL)maskWithResource:(id)arg1 context:(struct CGContext { }*)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4;
- (id)resourceProvider;
- (void)setLayerInfo:(id)arg1;
- (void)setResourceProvider:(id)arg1;

@end
