/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _usage;
}

@property (nonatomic, readonly) NSNumber *dynamicUsage;
@property (nonatomic, readonly) NSNumber *onDemandResourcesUsage;
@property (nonatomic, readonly) NSNumber *staticUsage;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)dynamicUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)onDemandResourcesUsage;
- (id)staticUsage;

// _LSDiskUsage (Internal)

- (BOOL)_fetchWithXPCConnection:(id)arg1 error:(id*)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2;

// _LSDiskUsage (Private)

- (BOOL)fetchClientSideWithError:(id*)arg1;
- (BOOL)fetchServerSideWithError:(id*)arg1;

@end
