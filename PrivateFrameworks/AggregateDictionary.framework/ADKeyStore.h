/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

@class NSMutableSet;

@interface ADKeyStore : NSObject  {
    NSMutableSet *_whitelistedScalarKeys;
    NSMutableSet *_whitelistedScalarPrefixes;
    NSMutableSet *_whitelistedDistributionKeys;
    NSMutableSet *_whitelistedDistributionPrefixes;
    NSMutableSet *_whitelistedMetadataKeys;
    BOOL _isInternalDevice;
}

+ (id)defaultWhitelist;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithDefaultPath;
- (BOOL)scalarKeyIsWhitelisted:(id)arg1;
- (BOOL)distributionKeyIsWhitelisted:(id)arg1;
- (BOOL)metadataKeyIsWhitelisted:(id)arg1;

@end
