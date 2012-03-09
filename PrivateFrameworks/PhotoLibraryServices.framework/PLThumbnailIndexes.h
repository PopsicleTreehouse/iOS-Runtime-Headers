/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableIndexSet;

@interface PLThumbnailIndexes : NSObject  {
    struct dispatch_queue_s { } *isolation;
    NSMutableIndexSet *unusedIndexes;
    int usedMax;
    NSMutableIndexSet *_blackList;
}

+ (id)sharedInstance;
+ (void)recycleThumbnailIndexes:(id)arg1;
+ (void)getAvailableThumbnailIndexWithHandler:(id)arg1;
+ (void)getAvailableThumbnailIndexesWithCount:(unsigned int)arg1 handler:(id)arg2;
+ (void)recycleThumbnailIndex:(unsigned int)arg1;
+ (unsigned int)nextAvailableThumbnailIndex;

- (id)init;
- (id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1;
- (void)getAvailableThumbnailIndexesFromDatabase;
- (void)recycleThumbnailIndexes:(id)arg1;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned int)arg1 handler:(id)arg2;
- (void)recycleThumbnailIndex:(unsigned int)arg1;

@end
