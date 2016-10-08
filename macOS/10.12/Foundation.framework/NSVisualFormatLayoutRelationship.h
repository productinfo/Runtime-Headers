/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSVisualFormatLayoutRelationship : NSObject <NSLayoutRelationship> {
    NSLayoutRect * _containerRect;
    unsigned long long  _formatOptions;
    NSDictionary * _metricMapping;
    NSDictionary * _rectMapping;
    NSString * _visualFormatString;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSString *identifier;
@property (atomic, readonly, copy) NSString *relationshipDescription;
@property (atomic, readonly) Class superclass;

+ (id)relationshipWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;
- (id)relationshipDescription;

@end
