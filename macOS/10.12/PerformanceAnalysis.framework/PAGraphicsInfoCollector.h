/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAGraphicsInfoCollector : NSObject <NSCoding> {
    BOOL  hasData;
    NSMutableDictionary * processToGraphicsSummary;
    PAMemorySimpleGraphicsSummary * systemGraphicsSummary;
}

@property (atomic, readonly) BOOL hasData;
@property (atomic, readonly) NSDictionary *processToGraphicsSummary;
@property (atomic, readonly) PAMemorySimpleGraphicsSummary *systemGraphicsSummary;

+ (BOOL)collectionSupported;
+ (id)collector;

- (void)_refreshGraphicsDataForAllocations:(id)arg1 forProcesses:(id)arg2;
- (BOOL)collectDataForProcesses:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)processToGraphicsSummary;
- (id)systemGraphicsSummary;

@end
