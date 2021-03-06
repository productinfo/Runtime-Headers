/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISImageSetVariantResource : NSObject <ISVariantResourceProtocol> {
    unsigned long long  _flags;
    NSMutableDictionary * _resourceImages;
    NSString * _variantName;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long flags;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSMutableDictionary *resourceImages;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSString *variantName;

+ (id)resourceWithURL:(id)arg1 resourceInfo:(id)arg2;

- (void).cxx_destruct;
- (void)addImage:(struct CGImage { }*)arg1 size:(unsigned long long)arg2 scale:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)flags;
- (struct CGImage { }*)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithVariantName:(id)arg1 flags:(unsigned long long)arg2;
- (id)resourceImages;
- (id)variantName;

@end
