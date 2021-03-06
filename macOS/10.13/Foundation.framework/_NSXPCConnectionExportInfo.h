/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSXPCConnectionExportInfo : NSObject {
    long long  _exportCount;
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
}

@property (nonatomic, readwrite) long long exportCount;
@property (nonatomic, readwrite, retain) NSXPCInterface *exportedInterface;
@property (nonatomic, readwrite, retain) id exportedObject;

- (void)dealloc;
- (id)description;
- (long long)exportCount;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (void)setExportCount:(long long)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;

@end
