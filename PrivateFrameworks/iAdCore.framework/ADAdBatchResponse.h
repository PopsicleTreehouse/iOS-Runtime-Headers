/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADAdDefaultsOverrides, NSString, NSMutableArray;

@interface ADAdBatchResponse : PBCodable  {
    BOOL _hasError;
    int _error;
    NSString *_batchId;
    NSMutableArray *_ads;
    BOOL _hasSupplyMetrics;
    BOOL _supplyMetrics;
    ADAdDefaultsOverrides *_overrideDefaults;
}

@property BOOL hasError;
@property int error;
@property(readonly) BOOL hasBatchId;
@property(retain) NSString * batchId;
@property(retain) NSMutableArray * ads;
@property BOOL hasSupplyMetrics;
@property BOOL supplyMetrics;
@property(readonly) BOOL hasOverrideDefaults;
@property(retain) ADAdDefaultsOverrides * overrideDefaults;

+ (void)initialize;

- (id)description;
- (void)dealloc;
- (void)setError:(int)arg1;
- (int)error;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)setHasSupplyMetrics:(BOOL)arg1;
- (void)setHasError:(BOOL)arg1;
- (id)adAtIndex:(unsigned int)arg1;
- (void)clearAds;
- (unsigned int)adsCount;
- (void)setSupplyMetrics:(BOOL)arg1;
- (void)addAd:(id)arg1;
- (void)setOverrideDefaults:(id)arg1;
- (void)setAds:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)overrideDefaults;
- (BOOL)hasOverrideDefaults;
- (id)ads;
- (BOOL)supplyMetrics;
- (BOOL)hasSupplyMetrics;
- (BOOL)hasError;
- (BOOL)hasBatchId;
- (void)setBatchId:(id)arg1;
- (id)batchId;

@end
