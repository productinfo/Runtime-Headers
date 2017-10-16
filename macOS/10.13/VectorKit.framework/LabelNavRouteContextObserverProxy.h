/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface LabelNavRouteContextObserverProxy : NSObject <VKRouteContextObserver> {
    struct vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
        struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__begin_; 
        struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__end_; 
        struct __compressed_pair<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, std::__1::allocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
            struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__first_; 
        } __end_cap_; 
    }  _observedContexts;
    struct RouteContextChangeObserver { int (**x1)(); } * _observer;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRouteContextChangeObserver:(struct RouteContextChangeObserver { int (**x1)(); }*)arg1;
- (void)routeContextStateDidChange:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;

@end