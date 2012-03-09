/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteNotificationClient : NSObject  {
}

+ (void)getSupportedTypes:(id*)arg1 enabledTypes:(id*)arg2;
+ (BOOL)isSystemwideEnabled;
+ (void)setSystemwideEnabled:(BOOL)arg1;
+ (BOOL)hasRegisteredBundleIdentifiers;
+ (void)setEnabledNotificationTypes:(int)arg1 forBundleIdentifier:(id)arg2;
+ (unsigned int)_remoteNotificationServerPort;
+ (void)registerForRemoteNotificationTypes:(int)arg1;
+ (int)enabledRemoteNotificationTypes;
+ (id)getPendingNotificationUserInfo;


@end
