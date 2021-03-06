/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/Versions/A/GLKit
 */

@interface GLKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator> {
    struct _CGLContextObject { } * _context;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)newZone:(unsigned long long)arg1;
- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;

@end
