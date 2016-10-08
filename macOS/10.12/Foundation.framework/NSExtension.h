/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSExtension : NSObject <_NSExtensionContextHosting> {
    NSSet * __allowedErrorClasses;
    NSBundle * __extensionBundle;
    NSMutableDictionary * __extensionContexts;
    NSMutableDictionary * __extensionExpirationIdentifiers;
    NSMutableDictionary * __extensionServiceConnections;
    <PKPlugIn> * __plugIn;
    id  __requestPostCompletionBlock;
    id  __requestPostCompletionBlockWithItems;
    NSObject<OS_dispatch_queue> * __safePluginQueue;
    id  __stashedPlugInConnection;
    NSDictionary * _attributes;
    NSUUID * _connectionUUID;
    NSString * _extensionPointIdentifier;
    NSString * _identifier;
    NSDictionary * _infoDictionary;
    id  _requestCancellationBlock;
    id  _requestCompletionBlock;
    id  _requestInterruptionBlock;
    NSString * _version;
}

@property (setter=_setAllowedErrorClasses:, atomic, readwrite, copy) NSSet *_allowedErrorClasses;
@property (setter=_setExtensionBundle:, nonatomic, readwrite, retain) NSBundle *_extensionBundle;
@property (setter=_setExtensionContexts:, atomic, readwrite, retain) NSMutableDictionary *_extensionContexts;
@property (setter=_setExtensionExpirationsIdentifiers:, atomic, readwrite, retain) NSMutableDictionary *_extensionExpirationIdentifiers;
@property (setter=_setExtensionServiceConnections:, atomic, readwrite, retain) NSMutableDictionary *_extensionServiceConnections;
@property (getter=_extensionState, setter=_setExtensionState:, atomic, readwrite, copy) NSDictionary *_extensionState;
@property (getter=_isMarkedNew, atomic, readonly) BOOL _markedNew;
@property (setter=_setPlugIn:, atomic, readwrite, retain) <PKPlugIn> *_plugIn;
@property (atomic, readwrite, copy) id _requestPostCompletionBlock;
@property (atomic, readwrite, copy) id _requestPostCompletionBlockWithItems;
@property (atomic, readwrite) NSObject<OS_dispatch_queue> *_safePluginQueue;
@property (atomic, readwrite, retain) id _stashedPlugInConnection;
@property (atomic, readwrite, copy) NSDictionary *attributes;
@property (atomic, readwrite, copy) NSUUID *connectionUUID;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, copy) NSString *extensionPointIdentifier;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSArray *icons;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readwrite, copy) NSDictionary *infoDictionary;
@property (atomic, readonly) BOOL optedIn;
@property (atomic, readwrite, copy) id requestCancellationBlock;
@property (atomic, readwrite, copy) id requestCompletionBlock;
@property (atomic, readwrite, copy) id requestInterruptionBlock;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSString *version;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (BOOL)_shouldLogExtensionDiscovery;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(id)arg2;
+ (void)endMatchingExtensions:(id)arg1;
+ (id)extensionWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(BOOL)arg2 error:(id*)arg3;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(id)arg2;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (id)_allowedErrorClasses;
- (id)_bareExtensionServiceConnection;
- (void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(id)arg3;
- (void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(id)arg3;
- (void)_didCreateExtensionContext:(id)arg1;
- (id)_extensionBundle;
- (id)_extensionContextForUUID:(id)arg1;
- (id)_extensionContexts;
- (id)_extensionExpirationIdentifiers;
- (id)_extensionServiceConnections;
- (id)_initWithPKPlugin:(id)arg1;
- (BOOL)_isPhotoServiceAccessGranted;
- (BOOL)_isSystemExtension;
- (id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2;
- (void)_kill:(int)arg1;
- (void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(id)arg3;
- (void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(id)arg3;
- (void)_openURL:(id)arg1 completion:(id)arg2;
- (id)_plugIn;
- (int)_plugInProcessIdentifier;
- (void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id)arg3;
- (id)_requestPostCompletionBlock;
- (id)_requestPostCompletionBlockWithItems;
- (id)_safePluginQueue;
- (void)_safelyBeginUsing:(id)arg1;
- (void)_safelyEndUsing:(id)arg1;
- (void)_safelyEndUsingWithProcessAssertion:(id)arg1 continuation:(id)arg2;
- (void)_setAllowedErrorClasses:(id)arg1;
- (void)_setExtensionBundle:(id)arg1;
- (void)_setExtensionContexts:(id)arg1;
- (void)_setExtensionExpirationsIdentifiers:(id)arg1;
- (void)_setExtensionServiceConnections:(id)arg1;
- (void)_setPlugIn:(id)arg1;
- (id)_stashedPlugInConnection;
- (BOOL)_wantsProcessPerRequest;
- (BOOL)attemptOptIn:(id*)arg1;
- (BOOL)attemptOptOut:(id*)arg1;
- (id)attributes;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(id)arg2;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id)arg3;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (id)connectionUUID;
- (void)dealloc;
- (id)description;
- (id)extensionPointIdentifier;
- (unsigned long long)hash;
- (id)icons;
- (id)identifier;
- (id)infoDictionary;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (BOOL)optedIn;
- (int)pidForRequestIdentifier:(id)arg1;
- (id)requestCancellationBlock;
- (id)requestCompletionBlock;
- (id)requestInterruptionBlock;
- (void)setAttributes:(id)arg1;
- (void)setConnectionUUID:(id)arg1;
- (void)setExtensionPointIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoDictionary:(id)arg1;
- (void)setRequestCancellationBlock:(id)arg1;
- (void)setRequestCompletionBlock:(id)arg1;
- (void)setRequestInterruptionBlock:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)set_requestPostCompletionBlock:(id)arg1;
- (void)set_requestPostCompletionBlockWithItems:(id)arg1;
- (void)set_safePluginQueue:(id)arg1;
- (void)set_stashedPlugInConnection:(id)arg1;
- (id)version;

// NSExtension (ExtensionStateManagement)

- (void)_didShowExtensionManagementInterface;
- (void)_didShowNewExtensionIndicator;
- (id)_extensionState;
- (BOOL)_isMarkedNew;
- (void)_resetExtensionState;
- (void)_setExtensionState:(id)arg1;

// NSExtension (Filtering)

+ (BOOL)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (void)initializeFiltering;
+ (id)predicateForActivationRule:(id)arg1;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSExtension (NSExtension_AppKitAdditions)

+ (void)initialize;
+ (unsigned long long)numberOfNewItems;

@end
