/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSSQLSelectIntermediate : NSSQLIntermediate {
    NSString * _columnAlias;
    NSString * _correlationTarget;
    NSSQLEntity * _entity;
    NSString * _entityAlias;
    NSArray * _fetchColumns;
    BOOL  _isCount;
    BOOL  _useDistinct;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (BOOL)isTargetColumnsScoped;
- (BOOL)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)arg1 inContext:(id)arg2;
- (void)setColumnAlias:(id)arg1;
- (void)setFetchColumns:(id)arg1;
- (void)setFetchEntity:(id)arg1;
- (void)setIsCount:(BOOL)arg1;
- (void)setUseDistinct:(BOOL)arg1;

@end
