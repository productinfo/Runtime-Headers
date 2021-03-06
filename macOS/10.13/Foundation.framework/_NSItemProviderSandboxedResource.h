/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSItemProviderSandboxedResource : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _accessingSecurityScopedResource;
    NSURL * _resourceURL;
    NSData * _sandboxExtensionToken;
}

@property (getter=isAccessingSecurityScopedResource, nonatomic, readwrite) BOOL accessingSecurityScopedResource;
@property (nonatomic, readwrite, copy) NSURL *resourceURL;
@property (nonatomic, readwrite, copy) NSData *sandboxExtensionToken;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (BOOL)isAccessingSecurityScopedResource;
- (id)resolveURLAndReturnError:(id*)arg1;
- (id)resourceURL;
- (id)sandboxExtensionToken;
- (void)setAccessingSecurityScopedResource:(BOOL)arg1;
- (void)setResourceURL:(id)arg1;
- (void)setSandboxExtensionToken:(id)arg1;

@end
