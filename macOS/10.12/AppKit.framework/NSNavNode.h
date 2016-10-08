/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavNode : NSObject <QLPreviewItem> {
    unsigned int  _aliasState;
    unsigned int  _ejecting;
    unsigned int  _openSyncStarted;
    unsigned int  _registeredForAttributeChanges;
    unsigned int  _registeredForChildChanges;
    unsigned int  _reserved;
    unsigned int  _reserved2;
    unsigned int  _reserved3;
    unsigned int  _selfChangeRegistrationCount;
    unsigned int  _waitingForAttributeChangeCallback;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (getter=isAlias, nonatomic, readonly) BOOL alias;
@property (getter=isAliasInvalid, nonatomic, readwrite) BOOL aliasInvalid;
@property (getter=isAliasResolving, nonatomic, readwrite) BOOL aliasResolving;
@property (nonatomic, readwrite) int aliasState;
@property (nonatomic, readonly) BOOL canBeRead;
@property (nonatomic, readonly) BOOL canBrowse;
@property (nonatomic, readonly, copy) NSString *comment;
@property (getter=isContainer, nonatomic, readonly) BOOL container;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *displayVersion;
@property (getter=isEjectable, nonatomic, readonly) BOOL ejectable;
@property (getter=isEjectableOrUnmountable, nonatomic, readonly) BOOL ejectableOrUnmountable;
@property (getter=isEjecting, nonatomic, readwrite) BOOL ejecting;
@property (getter=isExtensionHidden, nonatomic, readonly) BOOL extensionHidden;
@property (nonatomic, readonly, copy) NSString *fileType;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSImage *icon;
@property (nonatomic, readonly) BOOL isCannedSearch;
@property (nonatomic, readonly) BOOL isComputerNode;
@property (nonatomic, readonly) BOOL isDisconnectedMountPoint;
@property (nonatomic, readonly) BOOL isDiskImage;
@property (nonatomic, readonly) BOOL isFullyFormed;
@property (nonatomic, readonly) BOOL isHomeNode;
@property (nonatomic, readonly) BOOL isMediaNode;
@property (nonatomic, readonly) BOOL isMeetingRoom;
@property (nonatomic, readonly) BOOL isNetworkNode;
@property (nonatomic, readonly) BOOL isNil;
@property (nonatomic, readonly) BOOL isODSNode;
@property (nonatomic, readonly) BOOL isODSRequiresAsk;
@property (nonatomic, readonly) BOOL isQuery;
@property (nonatomic, readonly) BOOL isSharedFolder;
@property (nonatomic, readonly) BOOL isSharedServer;
@property (nonatomic, readonly) BOOL isUnauthenticatedMountPoint;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSString *kindWithoutPlatform;
@property (nonatomic, readonly) long long labelColorIndex;
@property (nonatomic, readonly, copy) NSString *labelName;
@property (nonatomic, readonly, retain) NSDate *lastOpenedDate;
@property (getter=isLocked, atomic, readonly) BOOL locked;
@property (nonatomic, readonly) long long logicalSize;
@property (nonatomic, readonly, copy) NSDate *modDate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int networkConnectionState;
@property (atomic, readonly) int networkMediaTypes;
@property (nonatomic, readwrite) BOOL openSyncStarted;
@property (nonatomic, readonly) long long owner;
@property (getter=isPackage, nonatomic, readonly) BOOL package;
@property (nonatomic, readonly, retain) NSNavNode *parent;
@property (nonatomic, readonly, retain) NSNavNode *parentVolume;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) long long permissions;
@property (nonatomic, readonly) long long physicalSize;
@property (nonatomic, readwrite, copy) NSDictionary *previewAttributes;
@property (atomic, readonly) id previewItemDisplayState;
@property (atomic, readonly) NSString *previewItemTitle;
@property (atomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly, copy) NSString *serverUserName;
@property (nonatomic, readonly, copy) NSString *shortVersion;
@property (nonatomic, readonly, retain) NSImage *sidebarIcon;
@property (nonatomic, readonly) long long sortingGroup;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsFileSharing;
@property (nonatomic, readonly) BOOL supportsScreenSharing;
@property (nonatomic, readonly, copy) NSString *systemVersion;
@property (nonatomic, readonly) BOOL targetChanged;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (getter=isUnmountable, nonatomic, readonly) BOOL unmountable;
@property (nonatomic, readonly) long long usedSize;
@property (nonatomic, readonly) long long userAccess;
@property (nonatomic, readonly) long long userGroups;
@property (getter=isValid, nonatomic, readonly) BOOL valid;
@property (getter=isVisible, nonatomic, readonly) BOOL visible;
@property (getter=isVolume, nonatomic, readonly) BOOL volume;

+ (id)findSidebarNodeForNode:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)nodeWithQueryString:(id)arg1 searchScopes:(id)arg2 title:(id)arg3 sortDescriptors:(id)arg4;
+ (id)nodeWithSavedQueryData:(id)arg1 title:(id)arg2 sortDescriptors:(id)arg3;
+ (id)nodeWithSimpleQueryString:(id)arg1 searchScopes:(id)arg2 sortDescriptors:(id)arg3;
+ (id)nodeWithURL:(id)arg1 logonOK:(BOOL)arg2;
+ (Class)previewHelperClass;

- (id)URL;
- (BOOL)acceptsRootNode;
- (int)aliasState;
- (id)ancestorsStartingWith:(id)arg1;
- (void)askToUseODS;
- (BOOL)canBeRead;
- (BOOL)canBrowse;
- (id)childWithName:(id)arg1;
- (id)children;
- (void)connectToSharedServerAs;
- (struct OpaqueIconRef { }*)copyIcon;
- (id)description;
- (void)disconnectShare;
- (id)displayVersion;
- (BOOL)eject;
- (BOOL)ejectWithInteraction:(BOOL)arg1;
- (id)getNodeAsContainerNodeForBrowsing:(BOOL)arg1;
- (id)getNodeAsDeepResolvedNode:(BOOL)arg1;
- (id)getNodeAsInfoNode:(BOOL)arg1;
- (id)getNodeAsResolvedNode:(BOOL)arg1;
- (id)getNodeAsResolvedNode:(BOOL)arg1 withError:(int*)arg2;
- (id)getNodeAsResolvedNodeForSidebar;
- (id)icon;
- (BOOL)isAliasInvalid;
- (BOOL)isAliasResolving;
- (BOOL)isCannedSearch;
- (BOOL)isComputerNode;
- (BOOL)isDescendantOfNode:(id)arg1;
- (BOOL)isDiskImage;
- (BOOL)isEjectable;
- (BOOL)isEjectableOrUnmountable;
- (BOOL)isEjecting;
- (BOOL)isFullyFormed;
- (BOOL)isHomeNode;
- (BOOL)isLocked;
- (BOOL)isMediaNode;
- (BOOL)isMeetingRoom;
- (BOOL)isNetworkNode;
- (BOOL)isNil;
- (BOOL)isODSNode;
- (BOOL)isODSRequiresAsk;
- (BOOL)isQuery;
- (BOOL)isQueryChildNode;
- (BOOL)isSharedFolder;
- (BOOL)isSharedServer;
- (BOOL)isUnmountable;
- (BOOL)isValid;
- (id)kindWithoutPlatform;
- (id)labelColor;
- (long long)labelColorIndex;
- (id)labelName;
- (id)lastOpenedDate;
- (void)launchScreenSharingApp;
- (int)networkConnectionState;
- (BOOL)openSyncStarted;
- (id)otherVolumesOnSameDevice;
- (id)parentVolume;
- (long long)permissions;
- (id)previewAttributes;
- (id)previewImageWithSize:(struct CGSize { double x1; double x2; })arg1 isIconModeThumbnail:(BOOL)arg2;
- (id)previewItemDisplayName;
- (id)previewItemLocalizedDescription;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)queryHitResultsFilterUTIs;
- (void)registerForDeepChildChangedNotifications;
- (void)registerForPropertyChangedNotifications;
- (id)searchScopeDisplayName;
- (id)serverUserName;
- (void)setAliasState:(int)arg1;
- (void)setEjecting:(BOOL)arg1;
- (void)setOpenSyncStarted:(BOOL)arg1;
- (void)setPreviewAttributes:(id)arg1;
- (void)setQueryHitResultsFilterUTIs:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)shortVersion;
- (id)sidebarIcon;
- (id)sortDescriptors;
- (long long)sortingGroup;
- (BOOL)sortsChildrenEfficiently;
- (BOOL)supportsFileSharing;
- (BOOL)supportsScreenSharing;
- (id)systemVersion;
- (BOOL)targetChanged;
- (id)typeIdentifier;
- (BOOL)unmount;
- (void)unregisterForDeepChildChangedNotifications;
- (void)unregisterForPropertyChangedNotifications;

@end