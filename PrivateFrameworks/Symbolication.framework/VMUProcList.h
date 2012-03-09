/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMapTable, NSLock;

@interface VMUProcList : NSObject  {
    NSLock *procLock;
    NSMapTable *allProcs;
    NSMapTable *filteredProcs;
    BOOL appsOnly;
    BOOL ownedOnly;
}


- (unsigned int)count;
- (id)init;
- (void)dealloc;
- (void)setProcInfos:(id)arg1;
- (void)addProcInfo:(id)arg1;
- (void)removeProcInfo:(id)arg1;
- (void)setOwnedOnly:(BOOL)arg1;
- (BOOL)ownedOnly:(BOOL)arg1;
- (void)setAppsOnly:(BOOL)arg1;
- (BOOL)appsOnly;
- (id)allProcInfos;
- (id)allPIDs;
- (id)allNames;
- (id)allPathNames;
- (id)newestProcInfo;
- (id)newestProcInfoWithName:(id)arg1;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2;
- (id)procInfoWithPID:(int)arg1;
- (BOOL)updateFromSystem;
- (void)_populateFromSystem;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void*)arg3;
- (BOOL)update;
- (void)finalize;

@end
