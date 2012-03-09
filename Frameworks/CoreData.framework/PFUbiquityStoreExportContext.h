/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityPeer, _PFUbiquityStack, NSSQLCore, PFUbiquityStoreMetadata, NSMutableSet, PFUbiquityLocation, NSSet;

@interface PFUbiquityStoreExportContext : NSObject  {
    PFUbiquityLocation *_ubiquityRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeer *_localPeer;
    NSMutableSet *_transactionEntries;
    NSSQLCore *_store;
}

@property(retain) NSSQLCore * store;
@property(readonly) NSSet * transactionEntries;
@property(readonly) PFUbiquityPeer * localPeer;
@property(readonly) PFUbiquityStoreMetadata * storeMetadata;
@property(readonly) _PFUbiquityStack * stack;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;


- (id)description;
- (void)dealloc;
- (id)addTransactionEntryForGlobalIDString:(id)arg1 andLocalManagedObjectID:(id)arg2 andTransactionType:(int)arg3;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3 withStack:(id)arg4;
- (void)setStore:(id)arg1;
- (id)localPeer;
- (id)transactionEntries;
- (id)stack;
- (id)ubiquityRootLocation;
- (id)storeMetadata;
- (id)store;

@end
