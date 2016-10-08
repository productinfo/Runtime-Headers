/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSAlignmentLayoutRelationship : NSObject <NSLayoutRelationship> {
    NSArray * _alignedAnchors;
}

@property (atomic, readonly, copy) NSArray *alignedAnchors;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSString *identifier;
@property (atomic, readonly, copy) NSString *relationshipDescription;
@property (atomic, readonly) Class superclass;

+ (id)alignmentWithAnchors:(id)arg1;

- (id)alignedAnchors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAlignedAnchors:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;
- (id)relationshipDescription;

@end
