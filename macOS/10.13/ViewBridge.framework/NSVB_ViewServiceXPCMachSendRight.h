/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
 */

@interface NSVB_ViewServiceXPCMachSendRight : NSObject <NSSecureCoding> {
    unsigned int  _sendRight;
}

+ (BOOL)supportsSecureCoding;
+ (id)wrapSendRight:(unsigned int)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)forgetSendRight;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)sendRight;

@end
