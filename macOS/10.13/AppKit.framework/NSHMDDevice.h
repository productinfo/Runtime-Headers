/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSHMDDevice : NSObject {
    unsigned int  _acquired;
    unsigned int  _attached;
    unsigned int  _awake;
    NSSLSHMD * _hmd;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
}

@property (getter=isAttached, atomic, readonly) BOOL attached;
@property (getter=isAvailable, atomic, readonly) BOOL available;
@property (getter=isAwake, atomic, readonly) BOOL awake;
@property (atomic, readonly, copy) NSString *name;
@property (atomic, readonly) unsigned long long productID;
@property (atomic, readonly) unsigned long long vendorID;

+ (id)devices;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingAttached;

- (void)dealloc;
- (id)initWithSLSHMD:(id)arg1;
- (BOOL)isAttached;
- (BOOL)isAvailable;
- (BOOL)isAwake;
- (id)name;
- (unsigned long long)productID;
- (unsigned long long)vendorID;

@end
