/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSTimer, NSMutableArray, NSMapTable;

@interface ADAdServer : NSObject <PBRequesterDelegate, ADBannerDataDelegate> {
    NSMutableArray *_activeRequesters;
    NSMutableArray *_pendingGroups;
    NSMapTable *_bannersToRequesters;
    NSTimer *_requiredPropertiesAcquisitionTimeout;
}

@property(retain) NSMutableArray * activeRequesters;
@property(retain) NSMutableArray * pendingGroups;
@property(retain) NSMapTable * bannersToRequesters;
@property(retain) NSTimer * requiredPropertiesAcquisitionTimeout;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedAdServer;

- (unsigned int)retainCount;
- (id)retain;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)init;
- (id)requiredPropertiesAcquisitionTimeout;
- (void)setBannersToRequesters:(id)arg1;
- (id)bannersToRequesters;
- (void)setPendingGroups:(id)arg1;
- (id)pendingGroups;
- (void)setActiveRequesters:(id)arg1;
- (id)activeRequesters;
- (void)cancelRequestForBannerGroup:(id)arg1;
- (void)bannerData:(id)arg1 didFailToLoad:(id)arg2;
- (void)bannerDataDidFinishLoading:(id)arg1;
- (void)_handleRequiredPropertiesAcquisitionTimeout;
- (void)_cleanupRequester:(id)arg1;
- (void)requestAdsForBannerGroup:(id)arg1;
- (void)setRequiredPropertiesAcquisitionTimeout:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidFinish:(id)arg1;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;

@end
