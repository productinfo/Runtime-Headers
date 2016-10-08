/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (atomic, readwrite, copy) NSCalendar *calendar;
@property (atomic, readonly, copy) NSDate *date;
@property (atomic, readwrite) long long day;
@property (atomic, readwrite) long long era;
@property (atomic, readwrite) long long hour;
@property (getter=isLeapMonth, atomic, readwrite) BOOL leapMonth;
@property (atomic, readwrite) long long minute;
@property (atomic, readwrite) long long month;
@property (atomic, readwrite) long long nanosecond;
@property (atomic, readwrite) long long quarter;
@property (atomic, readwrite) long long second;
@property (atomic, readwrite, copy) NSTimeZone *timeZone;
@property (getter=isValidDate, atomic, readonly) BOOL validDate;
@property (atomic, readwrite) long long weekOfMonth;
@property (atomic, readwrite) long long weekOfYear;
@property (atomic, readwrite) long long weekday;
@property (atomic, readwrite) long long weekdayOrdinal;
@property (atomic, readwrite) long long year;
@property (atomic, readwrite) long long yearForWeekOfYear;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (long long)day;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)era;
- (unsigned long long)hash;
- (long long)hour;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLeapMonth;
- (BOOL)isLeapMonthSet;
- (BOOL)isValidDate;
- (BOOL)isValidDateInCalendar:(id)arg1;
- (long long)minute;
- (long long)month;
- (long long)nanosecond;
- (long long)quarter;
- (long long)second;
- (void)setCalendar:(id)arg1;
- (void)setDay:(long long)arg1;
- (void)setEra:(long long)arg1;
- (void)setHour:(long long)arg1;
- (void)setLeapMonth:(BOOL)arg1;
- (void)setMinute:(long long)arg1;
- (void)setMonth:(long long)arg1;
- (void)setNanosecond:(long long)arg1;
- (void)setQuarter:(long long)arg1;
- (void)setSecond:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (void)setWeek:(long long)arg1;
- (void)setWeekOfMonth:(long long)arg1;
- (void)setWeekOfYear:(long long)arg1;
- (void)setWeekday:(long long)arg1;
- (void)setWeekdayOrdinal:(long long)arg1;
- (void)setYear:(long long)arg1;
- (void)setYearForWeekOfYear:(long long)arg1;
- (id)timeZone;
- (long long)valueForComponent:(unsigned long long)arg1;
- (long long)week;
- (long long)weekOfMonth;
- (long long)weekOfYear;
- (long long)weekday;
- (long long)weekdayOrdinal;
- (long long)year;
- (long long)yearForWeekOfYear;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSDateComponents (_)

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
