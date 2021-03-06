/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface _NSCFServer : NSObject {
    NSDictionary * _configuration;
    BOOL  _enableCoprocessorInterface;
    NSString * _interface;
    NSObject<OS_tcp_listener> * _listener;
    NSNumber * _listenerID;
    long long  _listenerPort;
    long long  _type;
}

@property (atomic, readwrite, retain) NSDictionary *configuration;
@property (getter=isCoprocessorInterfaceEnabled, atomic, readwrite) BOOL enableCoprocessorInterface;
@property (atomic, readwrite, retain) NSString *interface;
@property (atomic, readwrite, retain) NSObject<OS_tcp_listener> *listener;
@property (atomic, readwrite, retain) NSNumber *listenerID;
@property (atomic, readwrite) long long listenerPort;
@property (atomic, readwrite) long long type;

+ (id)adressesForInterface:(id)arg1;
+ (id)listeners;
+ (BOOL)startSocksServerWithPort:(long long)arg1;
+ (BOOL)stopAll;

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 port:(long long)arg2;
- (id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3;
- (id)interface;
- (BOOL)isCoprocessorInterfaceEnabled;
- (id)listener;
- (id)listenerID;
- (long long)listenerPort;
- (void)setConfiguration:(id)arg1;
- (void)setEnableCoprocessorInterface:(BOOL)arg1;
- (void)setInterface:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setListenerID:(id)arg1;
- (void)setListenerPort:(long long)arg1;
- (void)setType:(long long)arg1;
- (BOOL)start;
- (BOOL)startWithAcceptHandler:(id)arg1;
- (BOOL)stop;
- (long long)type;

@end
