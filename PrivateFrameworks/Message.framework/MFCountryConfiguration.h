/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSLock;

@interface MFCountryConfiguration : NSObject  {
    struct dispatch_queue_s { } *_queue;
    BOOL _isUpdating;
    id _networkObserver;
    NSLock *_countryCodeLock;
    NSString *_countryCode;
    NSString *_oldCountryCode;
}

@property(copy) NSString * countryCode;

+ (id)sharedConfiguration;

- (void)updateCurrentCountry;
- (void)_useCountryCode:(id)arg1;
- (void)_checkCountryCode;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (id)init;
- (void)dealloc;

@end
