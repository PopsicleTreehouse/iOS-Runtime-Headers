/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDURLifier : NSObject  {
}

+ (id)urlMatchesForString:(id)arg1;
+ (BOOL)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned int)arg2;
+ (BOOL)urlIfyNode:(id)arg1;
+ (id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned int)arg2;
+ (void)initialize;
+ (id)urlMatchesForString:(id)arg1 includingTel:(BOOL)arg2;
+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner { }*)arg2 phoneNumberTypes:(unsigned int)arg3;
+ (id)urlMatchesForString:(id)arg1 usingScanner:(struct __DDScanner { }*)arg2 withPhoneNumberTypes:(unsigned int)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6;
+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner { }*)arg2 phoneNumberTypes:(unsigned int)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5;
+ (BOOL)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3;


@end
