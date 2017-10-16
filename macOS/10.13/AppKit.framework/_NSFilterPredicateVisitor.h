/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSFilterPredicateVisitor : NSObject <NSPredicateVisitor> {
    BOOL  _bail;
    BOOL  _didFirstVisit;
    NSMutableArray * _predicateParts;
    unsigned long long  _predicatePartsCount;
    NSString * _substitutedValue;
    unsigned long long  _visitingIndex;
}

- (void)dealloc;
- (id)initWithPredicate:(id)arg1;
- (void)reset;
- (id)result;
- (id)substitutedValueForPredicate:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end