/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLManagedObject, NSKnownKeysDictionary;

@interface PLObjectSnapshot : NSObject  {
    PLManagedObject *_managedObject;
    NSKnownKeysDictionary *_snapshotValues;
    struct __CFDictionary { } *_indexMaps;
}

@property(readonly) PLManagedObject * managedObject;

+ (struct __CFDictionary { }*)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2;
+ (id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(BOOL)arg3;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)filteredIndexesForFilter:(id)arg1;
- (id)snapshotValueForProperty:(id)arg1;
- (id)_snapshotValueForProperty:(id)arg1;
- (id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(struct __CFDictionary { }*)arg4 useCommitedValues:(BOOL)arg5;
- (id)_allSnapshotValuesDescription;
- (id)managedObject;
- (BOOL)hasSnapshotValueForProperty:(id)arg1;
- (void)setAssetsSnapshot:(id)arg1;

@end
