/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSISLinearExpressionObservable : NSObservationSource {
    NSISEngine * _associatedEngine;
    id  _changeTransactionObservation;
    NSISLinearExpression * _expression;
    NSNumber * _lastValue;
    BOOL  _valueIsDirtied;
    NSMutableArray * _variableObservations;
}

+ (id)observableForExpression:(id)arg1 inEngine:(id)arg2;

- (id)addObserver:(id)arg1;
- (void)dealloc;
- (void)emitValueIfNeeded;
- (id)initWithExpression:(id)arg1 inEngine:(id)arg2;
- (void)receiveObservedValue:(id)arg1 fromVariable:(id)arg2;

@end
