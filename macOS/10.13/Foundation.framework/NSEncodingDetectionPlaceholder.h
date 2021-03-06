/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSEncodingDetectionPlaceholder : NSObject {
    char * bytes;
    unsigned long long  bytesLength;
    char * bytesStart;
    unsigned int  cfEncoding;
    unsigned long long  nsEncoding;
    NSString * string;
}

@property (atomic, readonly) char *bytes;
@property (atomic, readonly) unsigned long long bytesLength;
@property (atomic, readonly) unsigned int cfEncoding;
@property (atomic, readonly) unsigned long long nsEncoding;
@property (atomic, readonly) NSString *string;

+ (id)placeholderForDetector:(id)arg1;

- (char *)bytes;
- (unsigned long long)bytesLength;
- (unsigned int)cfEncoding;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)nsEncoding;
- (id)string;

@end
