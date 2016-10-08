/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSLayoutDimension : NSLayoutAnchor

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintEqualToConstant:(double)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintLessThanOrEqualToConstant:(double)arg1;
- (BOOL)isCompatibleWithAnchor:(id)arg1;
- (BOOL)validateOtherAttribute:(long long)arg1;

// NSLayoutDimension (NSCompositeAnchorCreation)

- (id)anchorByAddingConstant:(double)arg1;
- (id)anchorByAddingDimension:(id)arg1;
- (id)anchorByMultiplyingByConstant:(double)arg1;
- (id)anchorBySubtractingDimension:(id)arg1;
- (id)minusDimension:(id)arg1;
- (id)plus:(double)arg1;
- (id)plusDimension:(id)arg1;
- (id)times:(double)arg1;

// NSLayoutDimension (NSLayoutRelationshipExtensions)

- (id)relationshipEqualToConstant:(double)arg1;
- (id)relationshipEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)relationshipGreaterThanOrEqualToConstant:(double)arg1;
- (id)relationshipGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)relationshipLessThanOrEqualToConstant:(double)arg1;
- (id)relationshipLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSLayoutDimension (NSLayoutRelationshipExtensions)

- (id)relationshipEqualToConstant:(double)arg1;
- (id)relationshipEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)relationshipGreaterThanOrEqualToConstant:(double)arg1;
- (id)relationshipGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)relationshipLessThanOrEqualToConstant:(double)arg1;
- (id)relationshipLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;

@end
