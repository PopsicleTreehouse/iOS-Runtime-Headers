/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray, NSArray;

@interface IMPeopleCollection : IMPeople  {
    NSMutableArray *_collectedPeople;
}

@property(readonly) NSArray * collectedIMPeople;
@property NSMutableArray * _collectedPeople;


- (id)init;
- (void)dealloc;
- (void)set_collectedPeople:(id)arg1;
- (BOOL)containsPerson:(id)arg1;
- (void)removeIMPeople:(id)arg1;
- (void)addIMPeople:(id)arg1;
- (BOOL)collectsIMPeople:(id)arg1;
- (id)collectedIMPeople;
- (void)_collectionNotification:(id)arg1;
- (id)_collectedPeople;
- (id)people;
- (id)groups;

@end
