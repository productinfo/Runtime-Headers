/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSCompositeLayoutYAxisAnchor : NSLayoutYAxisAnchor <NSCompositeLayoutAnchor> {
    double  _constant;
    NSLayoutDimension * _dimension;
    double  _dimensionMultiplier;
    NSLayoutYAxisAnchor * _yAxisAnchor;
}

@property (atomic, readonly) NSArray *_childAnchors;

- (id)_childAnchors;
- (id)_expressionInContext:(/* Warning: unhandled struct encoding: '{?=q@}' */ struct { long long x1; id x2; })arg1;
- (double)_valueInEngine:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)initWithAnchor:(id)arg1;
- (id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 plus:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end
