/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSArray;

@interface SAAlarmDelete : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSArray * alarmIds;

+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)delete;

- (id)groupIdentifier;
- (id)alarmIds;
- (void)setAlarmIds:(id)arg1;
- (id)encodedClassName;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (BOOL)requiresResponse;

@end
