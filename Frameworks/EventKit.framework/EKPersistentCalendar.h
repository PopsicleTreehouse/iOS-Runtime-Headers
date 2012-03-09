/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentSource, NSString;

@interface EKPersistentCalendar : EKPersistentObject  {
}

@property(retain) EKPersistentSource * source;
@property(readonly) NSString * UUID;
@property(copy) NSString * title;
@property(copy) NSString * externalID;
@property int displayOrder;
@property(copy) NSString * colorString;
@property(getter=isColorDisplayOnly) BOOL colorDisplayOnly;
@property int allowedEntityTypes;
@property BOOL allowsContentModifications;
@property BOOL prohibitsScheduling;
@property(getter=isSubscribed) BOOL subscribed;
@property(getter=isHidden) BOOL hidden;
@property(getter=isImmutable) BOOL immutable;
@property int sharingStatus;
@property(copy) NSString * sharedOwnerName;
@property(copy) NSString * sharedOwnerAddress;

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (id)calendar;

- (void)setExternalID:(id)arg1;
- (id)externalID;
- (id)description;
- (id)init;
- (void)setSharedOwnerAddress:(id)arg1;
- (void)setSharedOwnerName:(id)arg1;
- (void)setSharingStatus:(int)arg1;
- (void)setImmutable:(BOOL)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setProhibitsScheduling:(BOOL)arg1;
- (void)setAllowsContentModifications:(BOOL)arg1;
- (void)setUUID:(id)arg1;
- (void)setColorDisplayOnly:(BOOL)arg1;
- (BOOL)isColorDisplayOnly;
- (void)setAllowedEntityTypes:(int)arg1;
- (id)sharedOwnerAddress;
- (id)sharedOwnerName;
- (int)sharingStatus;
- (BOOL)prohibitsScheduling;
- (void)setDisplayOrder:(int)arg1;
- (int)displayOrder;
- (void)setColorString:(id)arg1;
- (BOOL)isImmutable;
- (BOOL)isSubscribed;
- (int)entityType;
- (BOOL)validate:(id*)arg1;
- (BOOL)allowsContentModifications;
- (int)allowedEntityTypes;
- (void)setSource:(id)arg1;
- (id)source;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (id)colorString;
- (id)UUID;

@end
