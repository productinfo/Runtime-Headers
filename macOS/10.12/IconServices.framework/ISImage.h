/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISImage : NSObject {
    NSData * _data;
}

@property (atomic, readonly) BOOL hasData;

+ (struct CGImage { }*)newCGImageWithDataSource:(id)arg1;

- (void)_getImageBuffer:(void**)arg1 size:(unsigned long long*)arg2;
- (struct { unsigned int x1; float x2; float x3; unsigned int x4; unsigned int x5; }*)_header;
- (struct CGImageBlockSet { }*)copyCGImageBlockSetWithProvider:(struct CGImageProvider { }*)arg1;
- (void)dealloc;
- (BOOL)hasData;
- (id)initWithData:(id)arg1;

@end
