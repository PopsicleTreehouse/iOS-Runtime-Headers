/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKObject, NSString;

@interface EKObjectRelation : NSObject  {
    EKObject *_owner;
    NSString *_relationName;
    BOOL _dirty;
    BOOL _loaded;
    NSString *_inverseName;
}

@property(readonly) EKObject * owner;
@property(readonly) NSString * relationName;
@property(readonly) NSString * inverseName;


- (void)rollback;
- (void)dealloc;
- (id)relationName;
- (void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (BOOL)isWeak;
- (id)inverseName;
- (void)relatedObjectDidChange;
- (id)committedValue;
- (BOOL)isDirty;
- (id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3;
- (void)updatePersistentObject;
- (BOOL)validate:(id*)arg1;
- (void)didCommit;
- (void)refresh;
- (void)reset;
- (id)owner;

@end
