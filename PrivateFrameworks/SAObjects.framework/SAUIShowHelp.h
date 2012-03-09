/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand  {
}

@property(copy) NSString * speakableText;
@property(copy) NSString * text;

+ (id)showHelp;
+ (id)showHelpWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)text;
- (void)setText:(id)arg1;
- (id)speakableText;
- (void)setSpeakableText:(id)arg1;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
