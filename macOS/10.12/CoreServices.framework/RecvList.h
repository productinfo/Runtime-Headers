/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
 */

@interface RecvList : NSObject {
    struct __CFArray { } * waits;
}

- (void)add:(/* Warning: unhandled struct encoding: '{receive_wait_s=c@^@@@}' */ struct receive_wait_s { BOOL x1; id x2; id x3; id x4; }*)arg1;
- (void)dealloc;
- (BOOL)findMatch:(id)arg1;
- (id)init;
- (void)remove:(/* Warning: unhandled struct encoding: '{receive_wait_s=c@^@@@}' */ struct receive_wait_s { BOOL x1; id x2; id x3; id x4; }*)arg1;
- (void)unconnect:(id)arg1;

@end
