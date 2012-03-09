/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKObject;

@interface EKObjectToOneRelation : EKObjectRelation  {
    EKObject *_relatedObject;
    BOOL _weak;
}


- (void)rollback;
- (id)description;
- (void)dealloc;
- (void)_setRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (void)_unload;
- (void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (BOOL)isWeak;
- (id)committedValue;
- (void)_clear;
- (void)updatePersistentObject;
- (void)setRelatedObject:(id)arg1;
- (id)relatedObject;
- (id)initWithObject:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3 weak:(BOOL)arg4;
- (BOOL)validate:(id*)arg1;
- (void)didCommit;
- (void)refresh;
- (void)reset;

@end
