/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSDateFormatter : NSFormatter <NSObservable, NSObserver> {
    NSMutableDictionary * _attributes;
    unsigned long long  _behavior;
    long long  _cacheGeneration;
    unsigned long long  _counter;
    struct __CFDateFormatter { } * _formatter;
    NSObject<OS_dispatch_semaphore> * _lock;
}

@property (atomic, readwrite, copy) NSString *AMSymbol;
@property (atomic, readwrite, copy) NSString *PMSymbol;
@property (atomic, readwrite, copy) NSCalendar *calendar;
@property (atomic, readwrite, copy) NSString *dateFormat;
@property (atomic, readwrite) unsigned long long dateStyle;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite, copy) NSDate *defaultDate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) BOOL doesRelativeDateFormatting;
@property (atomic, readwrite, copy) NSArray *eraSymbols;
@property (atomic, readwrite) unsigned long long formatterBehavior;
@property (atomic, readwrite) long long formattingContext;
@property (atomic, readwrite) BOOL generatesCalendarDates;
@property (atomic, readwrite, copy) NSDate *gregorianStartDate;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isLenient, atomic, readwrite) BOOL lenient;
@property (atomic, readwrite, copy) NSLocale *locale;
@property (atomic, readwrite, copy) NSArray *longEraSymbols;
@property (atomic, readwrite, copy) NSArray *monthSymbols;
@property (atomic, readwrite, copy) NSArray *quarterSymbols;
@property (atomic, readwrite, copy) NSArray *shortMonthSymbols;
@property (atomic, readwrite, copy) NSArray *shortQuarterSymbols;
@property (atomic, readwrite, copy) NSArray *shortStandaloneMonthSymbols;
@property (atomic, readwrite, copy) NSArray *shortStandaloneQuarterSymbols;
@property (atomic, readwrite, copy) NSArray *shortStandaloneWeekdaySymbols;
@property (atomic, readwrite, copy) NSArray *shortWeekdaySymbols;
@property (atomic, readwrite, copy) NSArray *standaloneMonthSymbols;
@property (atomic, readwrite, copy) NSArray *standaloneQuarterSymbols;
@property (atomic, readwrite, copy) NSArray *standaloneWeekdaySymbols;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) unsigned long long timeStyle;
@property (atomic, readwrite, copy) NSTimeZone *timeZone;
@property (atomic, readwrite, copy) NSDate *twoDigitStartDate;
@property (atomic, readwrite, copy) NSArray *veryShortMonthSymbols;
@property (atomic, readwrite, copy) NSArray *veryShortStandaloneMonthSymbols;
@property (atomic, readwrite, copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (atomic, readwrite, copy) NSArray *veryShortWeekdaySymbols;
@property (atomic, readwrite, copy) NSArray *weekdaySymbols;

+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
+ (unsigned long long)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;

- (id)AMSymbol;
- (id)PMSymbol;
- (void)_clearFormatter;
- (id)_dateFormat;
- (id)_getLocaleAlreadyLocked:(BOOL)arg1;
- (void)_invalidateCache;
- (id)_locale_forOldMethods;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_reset;
- (void)_setDateFormat:(id)arg1;
- (void)_setDateFormat:(id)arg1 alreadyLocked:(BOOL)arg2;
- (void)_setIsLenient:(BOOL)arg1;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (id)_timeZone_forOldMethods;
- (BOOL)_usesCharacterDirection;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFormat;
- (id)dateFromString:(id)arg1;
- (unsigned long long)dateStyle;
- (void)dealloc;
- (id)defaultDate;
- (BOOL)doesRelativeDateFormatting;
- (void)encodeWithCoder:(id)arg1;
- (id)eraSymbols;
- (unsigned long long)formatterBehavior;
- (long long)formattingContext;
- (BOOL)generatesCalendarDates;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)gregorianStartDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isLenient;
- (id)locale;
- (id)longEraSymbols;
- (id)monthSymbols;
- (id)quarterSymbols;
- (void)setAMSymbol:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setDateStyle:(unsigned long long)arg1;
- (void)setDefaultDate:(id)arg1;
- (void)setDoesRelativeDateFormatting:(BOOL)arg1;
- (void)setEraSymbols:(id)arg1;
- (void)setFormatterBehavior:(unsigned long long)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setGeneratesCalendarDates:(BOOL)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLenient:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizedDateFormatFromTemplate:(id)arg1;
- (void)setLongEraSymbols:(id)arg1;
- (void)setMonthSymbols:(id)arg1;
- (void)setPMSymbol:(id)arg1;
- (void)setQuarterSymbols:(id)arg1;
- (void)setShortMonthSymbols:(id)arg1;
- (void)setShortQuarterSymbols:(id)arg1;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setShortWeekdaySymbols:(id)arg1;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (void)setTimeStyle:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTwoDigitStartDate:(id)arg1;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (void)setWeekdaySymbols:(id)arg1;
- (id)shortMonthSymbols;
- (id)shortQuarterSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)shortStandaloneQuarterSymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)shortWeekdaySymbols;
- (id)standaloneMonthSymbols;
- (id)standaloneQuarterSymbols;
- (id)standaloneWeekdaySymbols;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (unsigned long long)timeStyle;
- (id)timeZone;
- (id)twoDigitStartDate;
- (id)veryShortMonthSymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)weekdaySymbols;

// NSDateFormatter (NSDateFormatterCompatibility)

- (BOOL)allowsNaturalLanguage;
- (id)initWithDateFormat:(id)arg1 allowNaturalLanguage:(BOOL)arg2;

// NSDateFormatter (NSObservationSupport)

- (void)receiveObservedValue:(id)arg1;

// NSDateFormatter (Private)

+ (id)_componentsFromFormatString:(id)arg1;
+ (id)_formatStringFromComponents:(id)arg1;

- (id)_attributedStringWithFieldsFromDate:(id)arg1;
- (long long)_cacheGenerationCount;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (BOOL)_tracksCacheGenerationCount;

@end
