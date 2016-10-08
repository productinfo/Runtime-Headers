/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_connection : NSObject <OS_nw_connection> {
    unsigned int  adaptive_read_timeout_count;
    id  adaptive_read_timeout_handler;
    unsigned int  adaptive_write_timeout_count;
    id  adaptive_write_timeout_handler;
    bool  better_path_available;
    id  better_path_available_handler;
    id  cancel_handler;
    NSObject<OS_nw_endpoint_handler> * candidate_endpoint_handler;
    id  client_handler;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_endpoint_handler> * connected_endpoint_handler;
    NSObject<OS_nw_endpoint_handler> * dry_run_endpoint_handler;
    NSObject<OS_nw_endpoint> * endpoint;
    struct __CFArray { } * errors;
    unsigned int  excessive_keepalive_count;
    id  excessive_keepalive_handler;
    unsigned int  excessive_keepalive_interval;
    unsigned int  generic_stats_reported;
    unsigned int  initial_payload_sent;
    id  low_throughput_handler;
    unsigned short  num_timestamps;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_endpoint_handler> * parent_endpoint_handler;
    id  path_changed_handler;
    id  read_close_handler;
    NSObject<OS_nw_endpoint_handler> * ready_dry_run_endpoint_handler;
    unsigned int  should_report_generic_stats;
    unsigned int  should_report_stats;
    unsigned long long  start_time;
    int  state;
    int  stats_reason;
    struct netcore_stats_tcp_report { bool x1; bool x2; union { struct { int x_1_2_1; struct netcore_stats_tcp_statistics_report { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; bool x_2_3_4; int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; unsigned int x_2_3_8; unsigned int x_2_3_9; int x_2_3_10; bool x_2_3_11; unsigned int x_2_3_12; bool x_2_3_13; bool x_2_3_14; bool x_2_3_15; bool x_2_3_16; bool x_2_3_17; bool x_2_3_18; unsigned long long x_2_3_19; unsigned long long x_2_3_20; unsigned long long x_2_3_21; unsigned long long x_2_3_22; unsigned long long x_2_3_23; unsigned long long x_2_3_24; unsigned long long x_2_3_25; unsigned long long x_2_3_26; unsigned long long x_2_3_27; unsigned long long x_2_3_28; unsigned int x_2_3_29; unsigned int x_2_3_30; unsigned int x_2_3_31; unsigned int x_2_3_32; unsigned int x_2_3_33; bool x_2_3_34; unsigned int x_2_3_35; unsigned int x_2_3_36; unsigned int x_2_3_37; unsigned int x_2_3_38; } x_1_2_2; struct netcore_stats_tcp_cell_fallback_report { bool x_3_3_1; int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; struct netcore_stats_network_event { int x_5_4_1; unsigned int x_5_4_2; } x_3_3_5[20]; unsigned int x_3_3_6; struct netcore_stats_data_usage_snapshot { unsigned long long x_7_4_1; unsigned long long x_7_4_2; } x_3_3_7[20]; } x_1_2_3; } x_3_1_1; } x3; } * stats_report;
    unsigned int  stats_reported;
    struct nw_connection_throughput_monitor_s { 
        void *timer; 
        unsigned int minimum; 
        unsigned long long current_bytes; 
        unsigned long long current_time; 
        unsigned long long last_bytes; 
        unsigned long long last_time; 
    }  throughput_monitor;
    struct nw_connection_timestamp_s { unsigned long long x1; unsigned long long x2; struct nw_endpoint_handler_event_s { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; long long x4; } * timestamps;
    unsigned short  used_timestamps;
    id  viability_changed_handler;
    id  write_close_handler;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;

@end