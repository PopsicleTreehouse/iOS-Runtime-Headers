/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASetAlertContext : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * context;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)setAlertContext;
+ (id)setAlertContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)context;
- (void)setContext:(id)arg1;
- (id)encodedClassName;

@end
