/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSMethodSignature : NSObject {
    void * _private;
    void * _reserved;
}

@property (atomic, readonly) unsigned long long frameLength;
@property (atomic, readonly) unsigned long long methodReturnLength;
@property (atomic, readonly) const char *methodReturnType;
@property (atomic, readonly) unsigned long long numberOfArguments;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)signatureWithObjCTypes:(const char *)arg1;

- (struct NSMethodFrameArgInfo { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7; BOOL x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned char x25; BOOL x26[0]; }*)_argInfo:(long long)arg1;
- (Class)_classForObjectAtArgumentIndex:(long long)arg1;
- (struct { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; }*)_frameDescriptor;
- (BOOL)_isHiddenStructRet;
- (id)_protocolsForObjectAtArgumentIndex:(long long)arg1;
- (id)_signatureForBlockAtArgumentIndex:(long long)arg1;
- (id)_typeString;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)frameLength;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOneway;
- (unsigned long long)methodReturnLength;
- (const char *)methodReturnType;
- (unsigned long long)numberOfArguments;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSMethodSignature (NSXPCCoderAdditions)

- (BOOL)_cheapTypeString:(char *)arg1 maxLength:(long long)arg2;

@end
