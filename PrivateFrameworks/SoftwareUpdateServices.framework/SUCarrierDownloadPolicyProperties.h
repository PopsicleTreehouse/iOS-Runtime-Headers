/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUCarrierDownloadPolicyProperties : NSObject <NSCoding> {
}


- (unsigned int)_unsignedIntegerForKey:(id)arg1 defaultValue:(int)arg2;
- (int)peakEndHour;
- (int)peakStartHour;
- (unsigned int)numberOfDaysToWaitForCellularAutoDownload;
- (long long)maximumDownloadSizeInBytes;
- (BOOL)isAutoDownloadAllowable;
- (BOOL)isDownloadAllowableOver2G;
- (BOOL)isDownloadAllowable;
- (BOOL)isDownloadFree;
- (id)_carrierSUProperties;
- (BOOL)_isValidHour:(int)arg1;
- (int)_integerForKey:(id)arg1 defaultValue:(int)arg2;
- (long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)_numberForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
