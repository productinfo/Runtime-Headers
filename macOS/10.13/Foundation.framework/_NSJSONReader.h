/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSJSONReader : NSObject {
    NSError * error;
    id  input;
    int  kind;
}

+ (BOOL)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(BOOL)arg3;

- (void)dealloc;
- (id)error;
- (unsigned long long)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned long long*)arg2;
- (id)init;
- (id)parseData:(id)arg1 options:(unsigned long long)arg2;
- (id)parseStream:(id)arg1 options:(unsigned long long)arg2;
- (id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)setError:(id)arg1;

@end