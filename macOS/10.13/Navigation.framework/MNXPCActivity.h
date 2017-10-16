/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNXPCActivity : NSObject {
    id  _codeBlock;
    NSString * _identifier;
    unsigned long long  _networkRequirements;
    unsigned long long  _qualityOfService;
    BOOL  _repeat;
    BOOL  _runOnBattery;
    NSDate * _scheduledDate;
    BOOL  _shouldWakeDevice;
    double  _tolerance;
    BOOL  _useCoreDuetPowerBudgeting;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long networkRequirements;
@property (nonatomic, readonly) unsigned long long qualityOfService;
@property (nonatomic, readonly) BOOL repeat;
@property (nonatomic, readonly) BOOL runOnBattery;
@property (nonatomic, readonly) NSDate *scheduledDate;
@property (nonatomic, readonly) BOOL shouldWakeDevice;
@property (nonatomic, readonly) double tolerance;
@property (nonatomic, readonly) BOOL useCoreDuetPowerBudgeting;

- (void).cxx_destruct;
- (BOOL)_needsNetworkRequirement:(unsigned long long)arg1;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 repeat:(BOOL)arg2 shouldWakeDevice:(BOOL)arg3 useCoreDuetPowerBudgeting:(BOOL)arg4 runOnBattery:(BOOL)arg5 tolerance:(double)arg6 qualityOfService:(unsigned long long)arg7 networkRequirements:(unsigned long long)arg8;
- (void)invalidate;
- (unsigned long long)networkRequirements;
- (unsigned long long)qualityOfService;
- (double)remainingTime;
- (BOOL)repeat;
- (BOOL)runOnBattery;
- (void)scheduleForDate:(id)arg1 codeBlock:(id)arg2;
- (id)scheduledDate;
- (BOOL)shouldWakeDevice;
- (double)tolerance;
- (BOOL)useCoreDuetPowerBudgeting;

@end