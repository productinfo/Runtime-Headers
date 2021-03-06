/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKTexturePackerItem : NSObject {
    NSOpenGLContext * _context;
    IKRectanglePacker * _rectanglePacker;
    NSData * _textureBytes;
    unsigned int  _textureID;
}

- (void)dealloc;
- (float)fragmentation;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)rectanglePacker;
- (void)setTextureBytes:(id)arg1;
- (void)setTextureID:(unsigned int)arg1;
- (id)textureBytes;
- (unsigned int)textureID;

@end
