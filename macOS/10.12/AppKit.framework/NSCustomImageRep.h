/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCustomImageRep : NSImageRep {
    SEL  _drawMethod;
    id  _drawObject;
    unsigned int  _reserved;
}

@property (atomic, readonly) id delegate;
@property (atomic, readonly) SEL drawSelector;
@property (atomic, readonly, copy) id drawingHandler;

+ (void)initialize;

- (id)_imageRepsForEncodingWithCoder:(id)arg1;
- (BOOL)_wantsToBeCached;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)draw;
- (SEL)drawSelector;
- (id)drawingHandler;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrawSelector:(SEL)arg1 delegate:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 flipped:(BOOL)arg2 drawingHandler:(id)arg3;

// NSCustomImageRep (NSDeprecatedPossibleAPI)

- (id)drawHandler;
- (id)initWithDrawSelector:(SEL)arg1 delegate:(id)arg2 flipped:(BOOL)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 drawHandler:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 flipped:(BOOL)arg2 drawHandler:(id)arg3;
- (BOOL)isFlipped;
- (void)setFlipped:(BOOL)arg1;

@end
