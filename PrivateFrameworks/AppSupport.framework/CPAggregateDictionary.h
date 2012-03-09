/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPAggregateDictionary : NSObject  {
}

@property(getter=isEnabled,readonly) BOOL enabled;

+ (id)sharedAggregateDictionary;

- (void)significantTimeChanged;
- (void)pushValue:(double)arg1 forKey:(id)arg2;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)clearDistributionKey:(id)arg1;
- (void)decrementKey:(id)arg1;
- (void)incrementKey:(id)arg1;
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;
- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)clearScalarKey:(id)arg1;
- (BOOL)isEnabled;
- (int)commit;

@end
