/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    Protocol * _exportedInterfaceProtocol;
    id  _exportedObject;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)initWithWithExportedObject:(id)arg1 exportedInterfaceProtocol:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
