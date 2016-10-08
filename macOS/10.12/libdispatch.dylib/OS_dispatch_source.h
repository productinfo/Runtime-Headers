/* Generated by RuntimeBrowser
   Image: /usr/lib/system/introspection/libdispatch.dylib
 */

@interface OS_dispatch_source : OS_dispatch_object <OS_dispatch_object, OS_dispatch_source, OS_dispatch_source_data_add, OS_dispatch_source_data_or, OS_dispatch_source_interval, OS_dispatch_source_mach_recv, OS_dispatch_source_mach_send, OS_dispatch_source_memorypressure, OS_dispatch_source_proc, OS_dispatch_source_read, OS_dispatch_source_signal, OS_dispatch_source_timer, OS_dispatch_source_timer_with_aggregate, OS_dispatch_source_vnode, OS_dispatch_source_write>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (void)load;

- (void)_xref_dispose;
- (id)init;

@end
