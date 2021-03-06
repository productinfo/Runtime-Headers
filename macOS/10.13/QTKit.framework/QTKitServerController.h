/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTKitServerController : NSObject {
    unsigned int  _delegatePort;
    struct __CFRunLoop { } * _delegateRunloop;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _delegateThread;
    BOOL  _logServerLifespan;
    BOOL  _logServerUseCount;
    unsigned int  _notifierPort;
    struct __CFRunLoop { } * _notifierRunloop;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _notifierThread;
    struct __CFDictionary { } * _objectList;
    int  _objectListLock;
    NSObject<OS_xpc_object> * _serverConnection;
    double  _serverKillGracePeriod;
    NSTimer * _serverKillGracePeriodTimer;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _serverLifespanLock;
    unsigned int  _serverPort;
    int  _serverPortListLock;
    NSObject<OS_dispatch_queue> * _serverQueue;
    long long  _serverUseCount;
}

+ (void)initialize;
+ (id)sharedServerController;

- (void)_postServerDiedNotification:(id)arg1;
- (void)addObjectToObjectList:(id)arg1;
- (unsigned int)delegatePort;
- (struct __CFRunLoop { }*)delegateRunLoop;
- (struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*)delegateThreadID;
- (id)init;
- (struct __CFRunLoop { }*)notificationRunLoop;
- (struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*)notificationThreadID;
- (unsigned int)notifierPort;
- (id)objectForProxy:(int)arg1;
- (void)removeObjectFromObjectList:(id)arg1;
- (id)serverConnection;
- (unsigned int)serverMachPort;
- (id)serverQueue;
- (void)setDelegatePort:(unsigned int)arg1;
- (void)setDelegateRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)setDelegateThread:(struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*)arg1;
- (void)setNotificationPort:(unsigned int)arg1;
- (void)setNotificationRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)setNotificationThread:(struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*)arg1;
- (void)setServerConnection:(id)arg1;
- (void)setServerPort:(unsigned int)arg1;
- (void)startUsingServerForObject:(id)arg1;
- (void)stopUsingServerForObject:(id)arg1;

@end
