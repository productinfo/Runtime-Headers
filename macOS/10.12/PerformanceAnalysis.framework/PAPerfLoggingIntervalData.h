/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAPerfLoggingIntervalData : NSObject <NSCoding, PAPerfLoggingResult> {
    double  _averageIntervalDurationInMs;
    double  _endOfLastIntervalInSec;
    double  _firstIntervalStartInSec;
    unsigned long long  _intervalCount;
    double * _intervalDurationInMsArray;
    double * _intervalStartTimeInSecArray;
    NSString * _intervalType;
    double  _normalizedStandardDeviation;
    unsigned long long  _numUnpairedTransitions;
    NSString * _operationCategory;
    double  _operationEndTimeInSec;
    NSString * _operationName;
    double  _operationStartTimeInSec;
    NSString * _processName;
    NSArray * _processedContextDataArray;
    NSArray * _processedContextDataUOMsArray;
    double  _standardDeviationIntervalDurationInMs;
}

@property (atomic, readonly) double averageIntervalDurationInMs;
@property (atomic, readonly) double endOfLastIntervalInSec;
@property (atomic, readonly) double initialDelayDurationInMs;
@property (atomic, readwrite) unsigned long long intervalCount;
@property (atomic, readonly) double*intervalDurationInMsArray;
@property (atomic, readonly) double intervalRateOverOperationIgnoringDelayInIntervalsPerSec;
@property (atomic, readonly) double intervalRateOverOperationInIntervalsPerSec;
@property (atomic, readonly) const double*intervalStartTimeInSecArray;
@property (nonatomic, readwrite, retain) NSString *intervalType;
@property (atomic, readonly) double normalizedStandardDeviation;
@property (atomic, readwrite) unsigned long long numUnpairedIntervalEndsOrStarts;
@property (atomic, readwrite, retain) NSString *operationCategory;
@property (atomic, readonly) double operationEndTimeInSec;
@property (atomic, readwrite, retain) NSString *operationName;
@property (atomic, readonly) double operationStartTimeInSec;
@property (atomic, readwrite, retain) NSString *processName;
@property (atomic, readonly) NSArray *processedContextDataArray;
@property (atomic, readonly) NSArray *processedContextDataUOMsArray;
@property (atomic, readonly) double standardDeviationIntervalDurationInMs;
@property (atomic, readonly) double startOfFirstIntervalInSec;
@property (atomic, readonly) double timeBetweenOperationStartAndFirstIntervalInMs;
@property (atomic, readonly) double totalOperationDurationInMs;
@property (atomic, readonly) double trailingDelayDurationInMs;

- (void)_addNSStringDataType:(id)arg1 andDoubleValue:(double)arg2 toMessageTracerMessage:(struct __asl_object_s { }*)arg3;
- (void)_initializeFieldsFromParentOperationInformation:(id)arg1;
- (BOOL)_isWSFrameInterval;
- (void)_logPAPerfLoggingDataValue:(double)arg1 uom:(id)arg2 doLocalLogging:(BOOL)arg3;
- (char *)_newMessageTracerIntervalSpecificCStringKeyForNSStringDataType:(id)arg1;
- (void)addIntervalDataToMessageTracerMessage:(struct __asl_object_s { }*)arg1;
- (double)averageIntervalDurationInMs;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endOfLastIntervalInSec;
- (void)finalize;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntervalType:(id)arg1 andIntervalDurationInMSArray:(double*)arg2 andIntervalStartTimeInSecArray:(double*)arg3 ofLength:(unsigned long long)arg4 andNumUnpairedTransitions:(unsigned long long)arg5 andTimeOfFirstIntervalStartInSec:(double)arg6 andTimeOfLastIntervalEndInSec:(double)arg7 andProcessedMetaDataArray:(id)arg8 andProcessedMetaDataUOMsArray:(id)arg9 withPAPerfLoggingData:(id)arg10;
- (double)initialDelayDurationInMs;
- (unsigned long long)intervalCount;
- (double*)intervalDurationInMsArray;
- (double)intervalRateOverOperationIgnoringDelayInIntervalsPerSec;
- (double)intervalRateOverOperationInIntervalsPerSec;
- (const double*)intervalStartTimeInSecArray;
- (id)intervalType;
- (void)logIntervalData:(BOOL)arg1;
- (double)normalizedStandardDeviation;
- (unsigned long long)numUnpairedIntervalEndsOrStarts;
- (id)operationCategory;
- (double)operationEndTimeInSec;
- (id)operationName;
- (double)operationStartTimeInSec;
- (void)printTimelineToMutableData:(id)arg1;
- (id)processName;
- (id)processedContextDataArray;
- (id)processedContextDataUOMsArray;
- (void)setIntervalCount:(unsigned long long)arg1;
- (void)setIntervalType:(id)arg1;
- (void)setNumUnpairedIntervalEndsOrStarts:(unsigned long long)arg1;
- (void)setOperationCategory:(id)arg1;
- (void)setOperationName:(id)arg1;
- (void)setProcessName:(id)arg1;
- (double)standardDeviationIntervalDurationInMs;
- (double)startOfFirstIntervalInSec;
- (double)timeBetweenOperationStartAndFirstIntervalInMs;
- (double)totalOperationDurationInMs;
- (double)trailingDelayDurationInMs;

@end
