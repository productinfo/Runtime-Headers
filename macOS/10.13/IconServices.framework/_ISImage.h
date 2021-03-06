/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface _ISImage : NSObject <ISImage> {
    struct CGImage { } * _CGImage;
    double  _minimumSize;
    unsigned int  _scale;
}

@property (nonatomic, readwrite) struct CGImage { }*CGImage;
@property (atomic, readwrite) double minimumSize;
@property (atomic, readwrite) unsigned int scale;

- (struct CGImage { }*)CGImage;
- (void)dealloc;
- (double)minimumSize;
- (unsigned int)scale;
- (void)setCGImage:(struct CGImage { }*)arg1;
- (void)setMinimumSize:(double)arg1;
- (void)setScale:(unsigned int)arg1;

@end
