/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SACancelRequest : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)cancelRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)cancelRequest;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
