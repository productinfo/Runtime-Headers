/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackgroundTaskManagement.framework/Versions/A/BackgroundTaskManagement
 */

@interface BTMLoginItem : NSObject <NSSecureCoding> {
    id  _bookmark;
    BOOL  _hidden;
    id  _identifier;
    id  _installerBookmark;
    unsigned long long  _type;
}

@property (atomic, readonly) NSData *bookmark;
@property (atomic, readwrite) BOOL hidden;
@property (atomic, readonly) NSUUID *identifier;
@property (atomic, readwrite, retain) NSData *installerBookmark;
@property (atomic, readonly) NSString *name;
@property (atomic, readwrite) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmark;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)hidden;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 bookmark:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 bookmark:(id)arg3 hidden:(BOOL)arg4;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 hidden:(BOOL)arg2;
- (id)installerBookmark;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLoginItem:(id)arg1;
- (id)name;
- (void)setHidden:(BOOL)arg1;
- (void)setInstallerBookmark:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

// BTMLoginItem (SFL)

- (void)getURLByResolvingBookmarkCompletion:(id)arg1;
- (id)initWithBookmark:(id)arg1 hidden:(BOOL)arg2;
- (BOOL)isIdenticalToLoginItem:(id)arg1;

@end
