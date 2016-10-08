/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface LSUserActivityDebuggingManager : NSObject {
    int  _additionalLogFile;
    struct __asl_object_s { } * _client;
    unsigned long long  _lastLogRotationTime;
    NSString * _logFileDirectoryPath;
    NSString * _logFilePath;
    NSObject<OS_dispatch_source> * _logRotationTimerSource;
    NSUserDefaults * _userDefaults;
}

@property (atomic, readwrite) int additionalLogFile;
@property (atomic, readwrite) struct __asl_object_s { }*client;
@property (atomic, readwrite) unsigned long long lastLogRotationTime;
@property (atomic, readwrite, copy) NSString *logFileDirectoryPath;
@property (atomic, readonly) BOOL logFileEnabled;
@property (atomic, readwrite, copy) NSString *logFilePath;
@property (atomic, readwrite) NSObject<OS_dispatch_source> *logRotationTimerSource;
@property (atomic, readonly) BOOL loggingEnabled;
@property (atomic, readwrite, retain) NSUserDefaults *userDefaults;

+ (id)hexDataDump:(id)arg1;
+ (void)log:(int)arg1 format:(id)arg2;
+ (id)sharedDebugManager;

- (int)additionalLogFile;
- (struct __asl_object_s { }*)client;
- (void)deleteExtraLogFiles;
- (void)doRotateLogFiles;
- (id)init;
- (unsigned long long)lastLogRotationTime;
- (void)log:(int)arg1 common:(BOOL)arg2 format:(id)arg3 args:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg4 file:(const char *)arg5 line:(long long)arg6;
- (void)log:(int)arg1 file:(const char *)arg2 line:(long long)arg3 format:(id)arg4;
- (void)log:(int)arg1 format:(id)arg2;
- (void)log:(int)arg1 format:(id)arg2 args:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg3;
- (void)log:(int)arg1 format:(id)arg2 args:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg3 file:(const char *)arg4 line:(long long)arg5;
- (void)logCommon:(unsigned long long)arg1 format:(id)arg2 args:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg3;
- (id)logFileDirectoryPath;
- (BOOL)logFileEnabled;
- (id)logFilePath;
- (long long)logRotationMaximumFiles;
- (double)logRotationTimeInSeconds;
- (id)logRotationTimerSource;
- (BOOL)loggingEnabled;
- (void)resume;
- (void)rotateLogFiles;
- (void)setAdditionalLogFile:(int)arg1;
- (void)setClient:(struct __asl_object_s { }*)arg1;
- (void)setLastLogRotationTime:(unsigned long long)arg1;
- (void)setLogFileDirectoryPath:(id)arg1;
- (void)setLogFilePath:(id)arg1;
- (void)setLogRotationTimerSource:(id)arg1;
- (void)setLoggingLevel:(int)arg1;
- (void)setUserDefaults:(id)arg1;
- (BOOL)shouldLog:(int)arg1;
- (BOOL)shouldLogCommon:(unsigned long long)arg1;
- (void)suspend;
- (id)userDefaults;

@end
