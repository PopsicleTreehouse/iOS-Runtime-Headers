/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}

@property(readonly) NSString * UUID;
@property(copy) NSString * name;
@property(copy) NSString * emailAddress;
@property(copy) NSString * externalID;

+ (id)defaultPropertiesToLoad;

- (id)emailAddress;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setName:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setEmailAddress:(id)arg1;
- (id)name;
- (id)owner;
- (id)UUID;

@end
