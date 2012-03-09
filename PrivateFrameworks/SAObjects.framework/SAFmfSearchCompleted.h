/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSNumber, NSURL;

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) NSNumber * atRequestedLocation;
@property(copy) NSArray * fmfLocations;
@property(copy) NSURL * searchContext;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setSearchContext:(id)arg1;
- (id)searchContext;
- (id)fmfLocations;
- (void)setFmfLocations:(id)arg1;
- (id)atRequestedLocation;
- (void)setAtRequestedLocation:(id)arg1;
- (id)encodedClassName;

@end
