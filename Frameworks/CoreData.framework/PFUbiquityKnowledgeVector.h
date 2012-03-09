/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSNumber, NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding> {
    NSDictionary *_kv;
    NSNumber *_sum;
    unsigned int _hash;
}

@property(readonly) unsigned int length;
@property(readonly) unsigned int hash;
@property(readonly) NSNumber * sum;

+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (unsigned int)length;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (int)compare:(id)arg1;
- (id)sum;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDescendantOfKnowledgeVector:(id)arg1;
- (BOOL)isZeroVector;
- (BOOL)canMergeWithKnowledgeVector:(id)arg1;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (void)_updateHash;
- (void)_updateSum;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (BOOL)isAncestorOfKnowledgeVector:(id)arg1;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)createKnowledgeVectorString;
- (id)allPeerIDs;
- (id)transactionNumberForPeerID:(id)arg1;
- (id)initWithPeerStatesFromStoreMetadata:(id)arg1;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;

@end
