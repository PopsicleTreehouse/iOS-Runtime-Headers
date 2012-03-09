/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SADestroyAssistant : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * assistantId;
@property(copy) NSString * speechId;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)destroyAssistant;
+ (id)destroyAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)assistantId;
- (void)setAssistantId:(id)arg1;
- (id)speechId;
- (void)setSpeechId:(id)arg1;
- (id)encodedClassName;

@end
