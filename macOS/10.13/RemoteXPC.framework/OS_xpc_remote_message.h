/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteXPC.framework/Versions/A/RemoteXPC
 */

@interface OS_xpc_remote_message : NSObject {
    id  barrier;
    NSObject<OS_dispatch_data> * body;
    unsigned long long  msg_id;
    OS_xpc_remote_message * msgq_next;
    NSObject<OS_xpc_object> * ool;
    int  ool_length;
    id  reply_handler;
    NSObject<OS_dispatch_queue> * reply_queue;
}

- (void).cxx_destruct;

@end
