/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSLayoutRectRelationship : NSObject <NSLayoutRelationship> {
    NSLayoutRect * _firstLayoutRect;
    long long  _relation;
    NSLayoutRect * _secondLayoutRect;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly, copy) NSLayoutRect *firstLayoutRect;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSString *identifier;
@property (atomic, readwrite) long long relation;
@property (atomic, readonly, copy) NSString *relationshipDescription;
@property (atomic, readonly, copy) NSLayoutRect *secondLayoutRect;
@property (atomic, readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)firstLayoutRect;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 relation:(long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;
- (long long)relation;
- (id)relationshipDescription;
- (id)secondLayoutRect;
- (void)setRelation:(long long)arg1;

@end
