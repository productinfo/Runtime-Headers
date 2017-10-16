/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteServiceDiscovery.framework/Versions/A/RemoteServiceDiscovery
 */

@interface OS_remote_device : NSObject {
    NSObject<OS_dispatch_queue> * _ccbq;
    id  _connected_callback;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _dcbq;
    unsigned long long  _device_id;
    id  _disconnected_callback;
    NSObject<OS_dispatch_queue> * _dq;
    NSObject<OS_xpc_object> * _properties;
    unsigned int  _state;
    unsigned int  _type;
    char * _uuid;
    char * device_name;
}

@property (atomic, readwrite, retain) NSObject<OS_dispatch_queue> *ccbq;
@property (atomic, readwrite, copy) id connected_callback;
@property (atomic, readwrite, retain) NSObject<OS_xpc_object> *connection;
@property (atomic, readwrite, retain) NSObject<OS_dispatch_queue> *dcbq;
@property (nonatomic, readwrite) unsigned long long device_id;
@property (atomic, readwrite, copy) id disconnected_callback;
@property (atomic, readwrite, retain) NSObject<OS_dispatch_queue> *dq;
@property (atomic, readwrite, retain) NSObject<OS_xpc_object> *properties;
@property (atomic, readwrite) unsigned int state;
@property (atomic, readwrite) unsigned int type;
@property (nonatomic, readwrite) char *uuid;

- (void).cxx_destruct;
- (id)ccbq;
- (id)connected_callback;
- (id)connection;
- (id)dcbq;
- (void)dealloc;
- (unsigned long long)device_id;
- (id)disconnected_callback;
- (id)dq;
- (id)init;
- (id)properties;
- (void)setCcbq:(id)arg1;
- (void)setConnected_callback:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDcbq:(id)arg1;
- (void)setDevice_id:(unsigned long long)arg1;
- (void)setDisconnected_callback:(id)arg1;
- (void)setDq:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuid:(char *)arg1;
- (unsigned int)state;
- (unsigned int)type;
- (char *)uuid;

@end