/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSString;

@interface SFUNumberFormatter : NSObject  {
    struct __CFLocale { } *mLocale;
    struct __CFArray { } *mDecimalFormatters;
    struct __CFArray { } *mCurrencyFormatters;
    struct __CFArray { } *mPercentageFormatters;
    struct __CFArray { } *mScientificFormatters;
    struct __CFNumberFormatter { } *mFractionFormatter;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mPercentSymbol;
}

+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (id)availableCurrencyCodes;
+ (id)numberFormatStringSpecialSymbols;
+ (id)formatterForLocale:(struct __CFLocale { }*)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)localizedPercentSymbol;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (id)currentLocaleCurrencyCode;
+ (id)currencySymbolForCurrencyCode:(id)arg1;

- (void)dealloc;
- (BOOL)currencyFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3 currencyCode:(const struct __CFString {}**)arg4;
- (BOOL)findCurrencySymbolInString:(struct __CFString { }*)arg1;
- (BOOL)decimalFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (BOOL)percentageFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (BOOL)scientificFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (BOOL)fractionFromString:(struct __CFString { }*)arg1 value:(double*)arg2;
- (id)displayNameForCurrencyCode:(id)arg1;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)localizedPercentSymbol;
- (id)initWithLocale:(struct __CFLocale { }*)arg1;
- (void)numberPreferencesChanged:(id)arg1;
- (BOOL)valueFromString:(struct __CFString { }*)arg1 formatters:(struct __CFArray { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;
- (id)currentLocaleCurrencyCode;
- (id)currencySymbolForCurrencyCode:(id)arg1;

@end
