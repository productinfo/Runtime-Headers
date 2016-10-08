/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint_proxy : NSObject <OS_nw_endpoint_proxy> {
    NSObject<OS_nw_array> * child_endpoint_handlers;
    NWConcrete_nw_endpoint_handler * connected_child;
    bool  direct_prohibited;
    unsigned int  next_child_endpoint_index;
    NSObject<OS_nw_array> * pac_resolvers;
    NSObject<OS_xpc_object> * parsed_proxy_settings;
    NSObject<OS_xpc_object> * proxy_settings;
    struct __CFURL { } * url;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyWithHandler:(id)arg1 toChildren:(id)arg2;
- (void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (void)startWithHandler:(id)arg1;
- (void)updatePathWithHandler:(id)arg1;

@end
