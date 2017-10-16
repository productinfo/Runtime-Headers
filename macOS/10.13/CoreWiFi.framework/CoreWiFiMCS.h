/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiMCS : NSObject {
    NSMutableArray * longGuardInterval20MHz;
    NSMutableArray * longGuardInterval40MHz;
    NSMutableArray * shortGuardInterval20MHz;
    NSMutableArray * shortGuardInterval40MHz;
}

@property (nonatomic, readonly, retain) NSMutableArray *longGuardInterval20MHz;
@property (nonatomic, readonly, retain) NSMutableArray *longGuardInterval40MHz;
@property (nonatomic, readonly, retain) NSMutableArray *shortGuardInterval20MHz;
@property (nonatomic, readonly, retain) NSMutableArray *shortGuardInterval40MHz;

+ (id)sharedSystem;

- (void)dealloc;
- (id)init;
- (id)longGuardInterval20MHz;
- (id)longGuardInterval40MHz;
- (id)rateForMCSSet:(id)arg1 channelWidth:(long long)arg2 shortGI:(BOOL)arg3;
- (void)setupLongGuardInterval20MHz;
- (void)setupLongGuardInterval40MHz;
- (void)setupShortGuardInterval20MHz;
- (void)setupShortGuardInterval40MHz;
- (id)shortGuardInterval20MHz;
- (id)shortGuardInterval40MHz;

@end