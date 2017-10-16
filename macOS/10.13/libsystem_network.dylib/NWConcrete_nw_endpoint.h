/* Generated by RuntimeBrowser
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {
    char * description;
    NSObject<OS_nw_interface> * interface;
    bool  is_local_domain;
    char * parent_endpoint_domain;
    NWConcrete_nw_endpoint * proxy_original_endpoint;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) const char *domainForPolicy;
@property (nonatomic, readonly) const char *getDescription;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned short port;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;

// Image: /usr/lib/system/libsystem_network.dylib

- (void).cxx_destruct;
- (id)copyDictionary;
- (void)dealloc;
- (const char *)domainForPolicy;
- (const char *)getDescription;
- (unsigned long long)getHash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2;
- (unsigned short)port;
- (unsigned int)type;

// Image: /usr/lib/libnetwork.dylib

// NWConcrete_nw_endpoint (nw_descriptions)

- (id)description;

@end