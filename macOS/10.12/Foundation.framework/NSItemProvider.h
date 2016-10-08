/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSItemProvider : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * __loadHandlers;
    <_NSItemProviderLoading> * __loadOperator;
    id  __previewImageHandler;
    NSDictionary * _userInfo;
}

@property (atomic, readwrite, retain) NSMutableDictionary *_loadHandlers;
@property (atomic, readwrite, retain) <_NSItemProviderLoading> *_loadOperator;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerFrame;
@property (atomic, readonly) struct CGSize { double x1; double x2; } preferredPresentationSize;
@property (atomic, readwrite, copy) id previewImageHandler;
@property (atomic, readonly, copy) NSArray *registeredTypeIdentifiers;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceFrame;
@property (atomic, readwrite, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (BOOL)supportsSecureCoding;

- (id)_loadHandlers;
- (void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(id)arg5;
- (void)_loadItemOfClass:(Class)arg1 withLoadHandler:(id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(id)arg5;
- (id)_loadOperator;
- (void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(BOOL)arg3 completionHandler:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasItemConformingToTypeIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;
- (void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(id)arg2;
- (id)registeredTypeIdentifiers;
- (void)setUserInfo:(id)arg1;
- (void)set_loadHandlers:(id)arg1;
- (void)set_loadOperator:(id)arg1;
- (id)userInfo;

// NSItemProvider (NSPreviewSupport)

- (void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(id)arg2;
- (id)previewImageHandler;
- (void)setPreviewImageHandler:(id)arg1;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSItemProvider (NSCloudKitSharing)

- (id)_ckContainerID;
- (id)_ckContainerIdentifier;
- (id)_ckDictionary;
- (id)_ckShare;
- (id)_ckSourceAppBundleIdentifier;
- (void)registerCloudKitShare:(id)arg1 container:(id)arg2;
- (void)registerCloudKitShareWithPreparationHandler:(id)arg1;

// NSItemProvider (NSItemSourceInfo)

- (id)_itemSourceInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFrame;
- (struct CGSize { double x1; double x2; })preferredPresentationSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceFrame;

// NSItemProvider (NSPrivate)

- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreferredPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
