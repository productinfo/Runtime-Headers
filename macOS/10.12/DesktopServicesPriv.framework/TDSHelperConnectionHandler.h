/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
 */

@interface TDSHelperConnectionHandler : NSObject {
    struct TDSHelperContext { int (**x1)(); struct TDSMutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_2_1_1; } x2; struct TConditionVariable { struct _opaque_pthread_cond_t { long long x_1_2_1; BOOL x_1_2_2[40]; } x_3_1_1; } x3; bool x4; unsigned int x5; struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x_6_1_1; unsigned char x_6_1_2[16]; struct AuthorizationOpaqueRef {} *x_6_1_3; /* Warning: unhandled struct encoding: '{TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> >=@}{TNSRef<TDSHelperConnectionHandler *, void>=@}}' */ struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x_4_2_1; struct TNSRef<TDSHelperConnectionHandler *, void> { id x_2_3_1; } x_4_2_2; } x_6_1_4; } x6; } * _helper;
    struct TDSMutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } fMutex; 
    }  _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearHelper;
- (void)handleHelperEvent:(id)arg1;
- (id)initWithHelper:(struct TDSHelperContext { int (**x1)(); struct TDSMutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_2_1_1; } x2; struct TConditionVariable { struct _opaque_pthread_cond_t { long long x_1_2_1; BOOL x_1_2_2[40]; } x_3_1_1; } x3; bool x4; unsigned int x5; struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x_6_1_1; unsigned char x_6_1_2[16]; struct AuthorizationOpaqueRef {} *x_6_1_3; /* Warning: unhandled struct encoding: '{TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> >=@}{TNSRef<TDSHelperConnectionHandler *, void>=@}}' */ struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x_4_2_1; struct TNSRef<TDSHelperConnectionHandler *, void> { id x_2_3_1; } x_4_2_2; } x_6_1_4; } x6; }*)arg1;

@end
