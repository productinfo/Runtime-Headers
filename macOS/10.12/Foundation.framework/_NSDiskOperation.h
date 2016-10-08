/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSDiskOperation : NSObject {
    struct __DADisk { } * _disk;
    BOOL  _eject;
    NSURL * _volumeURL;
}

@property (atomic, readonly) struct __DADisk { }*disk;
@property (atomic, readonly) BOOL eject;
@property (atomic, readonly) NSURL *volumeURL;

+ (id)diskOperationWithDisk:(struct __DADisk { }*)arg1 eject:(BOOL)arg2 volumeURL:(id)arg3;

- (void)dealloc;
- (id)description;
- (struct __DADisk { }*)disk;
- (BOOL)eject;
- (id)volumeURL;

@end