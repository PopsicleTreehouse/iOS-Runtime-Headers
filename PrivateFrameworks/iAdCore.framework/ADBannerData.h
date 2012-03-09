/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSURL, <ADBannerDataDelegate>, ADResourceDownloadJob, NSMutableArray, NSString, ADAdData, ADAdBatchRecord, WebArchive;

@interface ADBannerData : NSObject  {
    <ADBannerDataDelegate> *_delegate;
    BOOL _local;
    unsigned int _provisionalNumberOfImpressions;
    NSMutableArray *_internalAssetMetrics;
    BOOL _failedLoading;
    double _lastAccessed;
    ADAdBatchRecord *_batch;
    NSString *_authenticationUserName;
    BOOL _supportsAuthentication;
    ADAdData *_bannerDescription;
    unsigned int _actualNumberOfImpressions;
    NSString *_batchId;
    BOOL _supplyMetrics;
    unsigned int _activeDownloads;
    ADResourceDownloadJob *_bannerDownload;
    ADResourceDownloadJob *_storyboardDownload;
    BOOL _hasStartedLoading;
    WebArchive *_bannerWebArchive;
    WebArchive *_storyboardWebArchive;
}

@property <ADBannerDataDelegate> * delegate;
@property(getter=isLocal) BOOL local;
@property unsigned int provisionalNumberOfImpressions;
@property(retain) ADAdBatchRecord * batch;
@property(retain) NSString * authenticationUserName;
@property BOOL supportsAuthentication;
@property(retain) ADAdData * bannerDescription;
@property unsigned int actualNumberOfImpressions;
@property(retain) NSString * batchId;
@property BOOL supplyMetrics;
@property(readonly) NSURL * contentURL;
@property(retain) WebArchive * bannerWebArchive;
@property(retain) WebArchive * storyboardWebArchive;
@property(retain) NSMutableArray * internalAssetMetrics;
@property BOOL failedLoading;
@property double lastAccessed;
@property unsigned int activeDownloads;
@property(retain) ADResourceDownloadJob * bannerDownload;
@property(retain) ADResourceDownloadJob * storyboardDownload;
@property BOOL hasStartedLoading;

+ (id)bannerDataForLocalAdAtPath:(id)arg1 usingCreativeNamed:(id)arg2 error:(id*)arg3;
+ (id)sharedDownloader;

- (void)startLoading;
- (id)description;
- (void)dealloc;
- (id)contentURL;
- (void)cancelLoading;
- (BOOL)isExpired;
- (id)backgroundColor;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)storyboardWebArchive;
- (BOOL)hasStartedLoading;
- (id)storyboardDownload;
- (id)bannerDownload;
- (void)setActiveDownloads:(unsigned int)arg1;
- (unsigned int)activeDownloads;
- (BOOL)supportsAuthentication;
- (void)setBatch:(id)arg1;
- (void)setLastAccessed:(double)arg1;
- (double)lastAccessed;
- (void)setFailedLoading:(BOOL)arg1;
- (BOOL)failedLoading;
- (void)setInternalAssetMetrics:(id)arg1;
- (id)internalAssetMetrics;
- (void)setProvisionalNumberOfImpressions:(unsigned int)arg1;
- (unsigned int)provisionalNumberOfImpressions;
- (void)setLocal:(BOOL)arg1;
- (BOOL)isLocal;
- (id)assetMetrics;
- (int)compareForDistribution:(id)arg1;
- (void)trackImpressionWithSequence:(unsigned int)arg1;
- (unsigned int)currentImpressionSequence;
- (void)returnProvisionalImpression;
- (void)checkoutProvisionalImpression;
- (unsigned int)actualImpressionsRemaining;
- (double)timeRemaining;
- (id)bannerWebArchive;
- (unsigned int)provisionalImpressionsRemaining;
- (void)setActualNumberOfImpressions:(unsigned int)arg1;
- (unsigned int)actualNumberOfImpressions;
- (void)_downloadStoryboardData;
- (void)setStoryboardDownload:(id)arg1;
- (id)requestWithURL:(id)arg1 andMethod:(id)arg2;
- (void)_queueFinished;
- (void)setBannerWebArchive:(id)arg1;
- (void)setBannerDownload:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)setBannerDescription:(id)arg1;
- (void)setHasStartedLoading:(BOOL)arg1;
- (void)setStoryboardWebArchive:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (id)authenticationUserName;
- (void)setSupportsAuthentication:(BOOL)arg1;
- (id)initWithAdData:(id)arg1 error:(id*)arg2;
- (void)setSupplyMetrics:(BOOL)arg1;
- (BOOL)supplyMetrics;
- (id)bannerDescription;
- (int)nextMessageSequence;
- (void)setBatchId:(id)arg1;
- (id)batchId;
- (id)batch;

@end
