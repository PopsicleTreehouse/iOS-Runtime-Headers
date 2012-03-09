/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAAlarmObject;

@interface SAAlarmCreate : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(retain) SAAlarmObject * alarmToCreate;

+ (id)create;
+ (id)createWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)alarmToCreate;
- (void)setAlarmToCreate:(id)arg1;
- (id)encodedClassName;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (BOOL)requiresResponse;

@end
