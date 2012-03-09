/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAReminderPhonePayload : AceObject <SAReminderPayload> {
}

@property(copy) NSString * recipient;

+ (id)phonePayload;
+ (id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setRecipient:(id)arg1;
- (id)recipient;
- (id)encodedClassName;

@end
