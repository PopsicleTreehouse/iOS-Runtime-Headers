/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSKnownKeysDictionary, NSMutableArray, NSManagedObjectModel;

@interface NSSQLModel : NSStoreMapping  {
    NSString *_configuration;
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    unsigned int _brokenHashVersion;
    BOOL _retainLeopardStyleDictionaries;
    BOOL _modelHasPrecomputedKeyOrder;
}


- (id)managedObjectModel;
- (void)dealloc;
- (void)finalize;
- (id)entities;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (id)_sqlEntityWithRenamingIdentifier:(id)arg1;
- (unsigned long)entityIDForName:(id)arg1;
- (BOOL)_retainHashHack;
- (void)_generateModel:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 brokenHashVersion:(unsigned int)arg4;
- (id)_entityMapping;
- (BOOL)_modelHasPrecomputedKeyOrder;
- (BOOL)_useLeopardStyleHashing;
- (BOOL)_useSnowLeopardStyleHashing;
- (id)_precomputedKeyOrderForEntity:(id)arg1;
- (void)_addIndexedEntity:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned int)arg3;
- (id)entityForID:(unsigned long)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3;
- (id)entityNamed:(id)arg1;
- (id)configurationName;
- (id)entitiesByName;

@end
