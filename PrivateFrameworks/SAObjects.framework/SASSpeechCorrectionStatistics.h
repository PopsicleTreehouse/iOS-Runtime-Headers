/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand> {
}

@property int alternativeSelectCount;
@property int characterChangeCount;
@property(copy) NSString * interactionId;
@property(copy) NSString * sessionId;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)speechCorrectionStatistics;
+ (id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (int)alternativeSelectCount;
- (void)setAlternativeSelectCount:(int)arg1;
- (int)characterChangeCount;
- (void)setCharacterChangeCount:(int)arg1;
- (id)interactionId;
- (void)setInteractionId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)encodedClassName;

@end
