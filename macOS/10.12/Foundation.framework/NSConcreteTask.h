/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSConcreteTask : NSTask {
    NSMutableDictionary * _dictionary;
    NSObject<OS_dispatch_source> * _dsrc;
    BOOL  _hasExeced;
    BOOL  _hasPostedDeathNotification;
    BOOL  _isRunning;
    NSObject<OS_dispatch_semaphore> * _lock;
    int  _pid;
    int  _platformExitInfo;
    BOOL  _qos;
    long long  _suspendCount;
    id  _terminationHandler;
    BOOL  _terminationRun;
    NSPort * _tmpPort;
}

- (long long)_platformExitInformation;
- (int)_procid;
- (void)_setTerminationHandler:(id)arg1;
- (void)_withTaskDictionary:(id)arg1;
- (id)arguments;
- (id)currentDirectoryPath;
- (void)dealloc;
- (id)environment;
- (id)init;
- (void)interrupt;
- (BOOL)isRunning;
- (void)launch;
- (id)launchPath;
- (void)launchWithDictionary:(id)arg1;
- (id)preferredArchitectures;
- (int)processIdentifier;
- (long long)qualityOfService;
- (BOOL)resume;
- (void)setArguments:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (void)setPreferredArchitectures:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStartsNewProcessGroup:(BOOL)arg1;
- (void)setTaskDictionary:(id)arg1;
- (void)setTerminationHandler:(id)arg1;
- (id)standardError;
- (id)standardInput;
- (id)standardOutput;
- (BOOL)suspend;
- (long long)suspendCount;
- (id)taskDictionary;
- (void)terminate;
- (void)terminateTask;
- (id)terminationHandler;
- (long long)terminationReason;
- (int)terminationStatus;
- (void)waitUntilExit;

@end
