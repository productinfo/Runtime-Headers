/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavVirtualNode : NSNavNode {
    NSMutableArray * _children;
    NSString * _comment;
    NSDate * _creationDate;
    NSString * _displayName;
    NSString * _fileType;
    NSImage * _icon;
    struct OpaqueIconRef { } * _iconRef;
    BOOL  _isAlias;
    BOOL  _isContainer;
    BOOL  _isDisconnectedMountPoint;
    BOOL  _isExtensionHidden;
    BOOL  _isPackage;
    BOOL  _isUnauthenticatedMountPoint;
    BOOL  _isVisible;
    BOOL  _isVolume;
    NSString * _kind;
    long long  _logicalSize;
    NSDate * _modDate;
    NSString * _name;
    NSNavNode * _originalNode;
    NSNavNode * _parent;
    NSString * _path;
    long long  _physicalSize;
    NSString * _shortVersion;
    NSImage * _sidebarIcon;
    long long  _usedSize;
}

@property (nonatomic, readwrite, copy) NSString *displayName;
@property (nonatomic, readwrite, retain) NSImage *icon;
@property (nonatomic, readwrite, retain) NSImage *sidebarIcon;

+ (id)containerNode;
+ (id)containerNodeWithChildren:(id)arg1;
+ (id)node;
+ (id)nodeWithPath:(id)arg1 logonOK:(BOOL)arg2;
+ (id)userHomeNode;

- (BOOL)acceptsRootNode;
- (void)addChild:(id)arg1;
- (id)addChildWithPath:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)children;
- (id)comment;
- (struct OpaqueIconRef { }*)copyIcon;
- (struct OpaqueIconRef { }*)copyPreviewIcon;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)displayName;
- (id)fileType;
- (id)getNodeAsDeepResolvedNode:(BOOL)arg1;
- (id)getNodeAsResolvedNode:(BOOL)arg1 withError:(int*)arg2;
- (id)icon;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 logonOK:(BOOL)arg2;
- (id)initWithQueryString:(id)arg1;
- (void)insertObject:(id)arg1 inChildrenAtIndex:(unsigned long long)arg2;
- (BOOL)isAlias;
- (BOOL)isContainer;
- (BOOL)isDisconnectedMountPoint;
- (BOOL)isExtensionHidden;
- (BOOL)isPackage;
- (BOOL)isUnauthenticatedMountPoint;
- (BOOL)isVisible;
- (BOOL)isVolume;
- (id)kind;
- (id)labelColor;
- (id)labelName;
- (long long)logicalSize;
- (id)modDate;
- (id)name;
- (id)parent;
- (id)path;
- (long long)physicalSize;
- (id)previewThumbnailImage;
- (void)removeObjectFromChildrenAtIndex:(unsigned long long)arg1;
- (void)setChildren:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconRef:(struct OpaqueIconRef { }*)arg1;
- (void)setIsAlias:(BOOL)arg1;
- (void)setIsContainer:(BOOL)arg1;
- (void)setIsDisconnectedMountPoint:(BOOL)arg1;
- (void)setIsExtensionHidden:(BOOL)arg1;
- (void)setIsPackage:(BOOL)arg1;
- (void)setIsUnauthenticatedMountPoint:(BOOL)arg1;
- (void)setIsVisible:(BOOL)arg1;
- (void)setIsVolume:(BOOL)arg1;
- (void)setKind:(id)arg1;
- (void)setLogicalSize:(long long)arg1;
- (void)setModDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginalNode:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPhysicalSize:(long long)arg1;
- (void)setShortVersion:(id)arg1;
- (void)setSidebarIcon:(id)arg1;
- (void)setUsedSize:(long long)arg1;
- (id)shortVersion;
- (id)sidebarIcon;
- (long long)usedSize;

@end
