/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class SUNetworkMonitor, SUDescriptor, SUCarrierDownloadPolicyProperties;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy> {
    SUDescriptor *_descriptor;
    SUCarrierDownloadPolicyProperties *_carrierPolicy;
    SUNetworkMonitor *_networkMonitor;
    BOOL _cellularCapable;
}

@property(retain) SUCarrierDownloadPolicyProperties * carrierPolicy;
@property(getter=isCellularCapable) BOOL cellularCapable;
@property(retain) SUNetworkMonitor * networkMonitor;
@property(retain) SUDescriptor * descriptor;


- (void)setCellularCapable:(BOOL)arg1;
- (BOOL)isCellularCapable;
- (void)setCarrierPolicy:(id)arg1;
- (id)carrierPolicy;
- (BOOL)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(BOOL*)arg2;
- (BOOL)hasEnoughDiskSpace;
- (BOOL)_isDownloadableForNetworkType:(int)arg1 error:(int*)arg2 cellularFeesApply:(BOOL*)arg3 powerRequired:(BOOL*)arg4;
- (id)networkMonitor;
- (BOOL)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3;
- (BOOL)_isCellularCapable;
- (void)setNetworkMonitor:(id)arg1;
- (id)_stringForBool:(BOOL)arg1;
- (BOOL)isDownloadAllowableForWiFi;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)isDownloadAllowableForCellular2G;
- (BOOL)isDownloadFreeForCellular;
- (void)setDescriptor:(id)arg1;
- (BOOL)isPowerRequired;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)isDownloadable;

@end
