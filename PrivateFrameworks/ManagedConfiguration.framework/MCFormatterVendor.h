/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumberFormatter;

@interface MCFormatterVendor : NSObject  {
    NSNumberFormatter *_numberFormatter;
    struct dispatch_queue_s { } *_syncQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_localeDidChange:(id)arg1;
- (id)numberFormatter;

@end
