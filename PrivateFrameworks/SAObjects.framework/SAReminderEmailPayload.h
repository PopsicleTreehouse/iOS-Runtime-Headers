/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload> {
}

@property(copy) NSArray * recipientsTo;
@property(copy) NSString * subject;

+ (id)emailPayload;
+ (id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)subject;
- (void)setSubject:(id)arg1;
- (id)groupIdentifier;
- (id)recipientsTo;
- (void)setRecipientsTo:(id)arg1;
- (id)encodedClassName;

@end
