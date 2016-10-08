/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSXPCCoder : NSCoder {
    id  _reserved1;
    <NSObject> * _userInfo;
}

@property (atomic, readonly) NSXPCConnection *connection;
@property (atomic, readwrite, retain) <NSObject> *userInfo;

- (id)connection;
- (void)dealloc;
- (id)decodeXPCObjectForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (BOOL)requiresSecureCoding;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
