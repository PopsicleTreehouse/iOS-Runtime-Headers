/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SACalendarSource;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SACalendarSource * aceCalendarSource;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)defaultSourceGetCompleted;
+ (id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1;

- (id)groupIdentifier;
- (id)aceCalendarSource;
- (id)initWithAceCalendarSource:(id)arg1;
- (void)setAceCalendarSource:(id)arg1;
- (id)encodedClassName;

@end
