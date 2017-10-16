/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (atomic, readonly) long long _calendarDirection;
@property (nonatomic, readonly) NSString *languageIdentifier;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)ISOCountryCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOLanguageCodes;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)availableLocaleIdentifiers;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)currentLocale;
+ (id)internetServicesRegion;
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (BOOL)supportsSecureCoding;
+ (id)systemLocale;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (unsigned char)_nullLocale;
- (id)_prefs;
- (void)_setNullLocale;
- (id)alternateQuotationBeginDelimiter;
- (id)alternateQuotationEndDelimiter;
- (id)calendarIdentifier;
- (id)collationIdentifier;
- (id)collatorIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)currencyCode;
- (id)currencySymbol;
- (id)decimalSeparator;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exemplarCharacterSet;
- (id)groupingSeparator;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (id)localeIdentifier;
- (id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1;
- (id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1;
- (id)localizedStringForCalendarIdentifier:(id)arg1;
- (id)localizedStringForCollationIdentifier:(id)arg1;
- (id)localizedStringForCollatorIdentifier:(id)arg1;
- (id)localizedStringForCountryCode:(id)arg1;
- (id)localizedStringForCurrencyCode:(id)arg1;
- (id)localizedStringForCurrencySymbol:(id)arg1;
- (id)localizedStringForDecimalSeparator:(id)arg1;
- (id)localizedStringForGroupingSeparator:(id)arg1;
- (id)localizedStringForLanguageCode:(id)arg1;
- (id)localizedStringForLocaleIdentifier:(id)arg1;
- (id)localizedStringForQuotationBeginDelimiter:(id)arg1;
- (id)localizedStringForQuotationEndDelimiter:(id)arg1;
- (id)localizedStringForScriptCode:(id)arg1;
- (id)localizedStringForVariantCode:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)quotationBeginDelimiter;
- (id)quotationEndDelimiter;
- (id)scriptCode;
- (BOOL)usesMetricSystem;
- (id)variantCode;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSLocale (NSLocale)

+ (id)autoupdatingCurrentLocale;

- (Class)classForCoder;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// NSLocale (NSLocale_CalendarDirection)

- (long long)_calendarDirection;

// NSLocale (NSLocale_LanguageExtras)

+ (id)_preferredMeasurementSystem;
+ (id)_preferredTemperatureUnit;
+ (void)_setPreferredMeasurementSystem:(id)arg1;
+ (void)_setPreferredTemperatureUnit:(id)arg1;
+ (id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4;
+ (void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3;
+ (void)setPreferredLanguages:(id)arg1;
+ (id)systemLanguages;

// Image: /System/Library/PrivateFrameworks/InternationalSupport.framework/Versions/A/InternationalSupport

// NSLocale (InternationalSupportExtensions)

+ (id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames { }*)arg2;
+ (id)_addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3;
+ (id)_filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3;
+ (id)_languageNameOverrides;
+ (id)_languagesForRegionWithoutFiltering:(id)arg1;
+ (id)_languagesToExemplarStrings;
+ (id)_normalizedLanguageIdentifierFromString:(id)arg1;
+ (id)_parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)baseLanguageFromLanguage:(id)arg1;
+ (id)baseSystemLanguages;
+ (id)deviceLanguage;
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(BOOL)arg4;
+ (id)exemplarForLanguage:(id)arg1;
+ (id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2;
+ (id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2;
+ (id)supportedLanguages;
+ (id)supportedRegions;
+ (id)systemLanguagesForRegion:(id)arg1;

- (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(BOOL)arg4;

// Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/Versions/A/IntlPreferences

// NSLocale (IntlPreferencesAdditions)

+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)archivedPreferences;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;
+ (id)deviceLanguageIdentifier;
+ (id)deviceLanguageLocale;
+ (void)registerPreferredLanguageForAddedKeyboardLanguage:(id)arg1;
+ (id)renderableLanguagesFromList:(id)arg1;
+ (id)renderableLocaleLanguages;
+ (id)renderableUILanguages;
+ (void)setArchivedPreferences:(id)arg1;
+ (void)setLocaleOnly:(id)arg1;
+ (id)string:(id)arg1 withCapitalizedDisplayNamesForFirstLanguageIdentifier:(id)arg2 secondLanguageIdentifier:(id)arg3 thirdLanguageIdentifier:(id)arg4;
+ (id)supportedCJLanguageIdentifiers;

- (id)languageIdentifier;
- (id)localeByChangingLanguageTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation

// NSLocale (MNExtras)

+ (id)_localeOverridesForLocaleWithCountryCode:(id)arg1;
+ (void)_navigation_overrideDistanceUnit:(long long)arg1;
+ (id)_navigation_overrideDistanceUnitProvider;
+ (void)_navigation_setNeedsUpdateOverrideDistanceUnit;
+ (void)set_navigation_overrideDistanceUnitProvider:(id)arg1;

- (BOOL)_navigation_distanceUsesMetricSystem;
- (BOOL)_navigation_distanceUsesMetricSystemIgnoringUserPreference:(BOOL)arg1;
- (id)_navigation_objectForKey:(id)arg1;
- (BOOL)_navigation_useYardsForShortDistances;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit

// NSLocale (VKFoundationUtility)

+ (long long)_vk_indexForLocale:(id)arg1;

@end