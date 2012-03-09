/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable> {
}

@property(copy) NSString * query;
@property(copy) NSArray * searchProperties;

+ (id)searchConstraint;
+ (id)searchConstraintWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setQuery:(id)arg1;
- (id)query;
- (id)searchProperties;
- (void)setSearchProperties:(id)arg1;
- (id)encodedClassName;

@end
