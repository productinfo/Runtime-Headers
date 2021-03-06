/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTMoviePlaybackControllerTimeValue : NSValue {
    struct { 
        long long timeValue; 
        long long timeScale; 
        long long flags; 
    }  _time;
}

+ (id)valueWithQTTime:(struct { long long x1; long long x2; long long x3; })arg1;

- (struct { long long x1; long long x2; long long x3; })QTTimeValue;
- (BOOL)boolValue;
- (BOOL)charValue;
- (double)doubleValue;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (int)intValue;
- (long long)integerValue;
- (long long)longLongValue;
- (long long)longValue;
- (const char *)objCType;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end
