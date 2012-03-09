/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
    WebHistoryItemPrivate *_private;
}

+ (id)entryWithURL:(id)arg1;
+ (void)initWindowWatcherIfNecessary;
+ (void)initialize;

- (id)URLString;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)target;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1 target:(id)arg2 parent:(id)arg3 title:(id)arg4;
- (void)setVisitCount:(int)arg1;
- (BOOL)isTargetItem;
- (int)visitCount;
- (id)RSSFeedReferrer;
- (void)setRSSFeedReferrer:(id)arg1;
- (void)setAlwaysAttemptToUsePageCache:(BOOL)arg1;
- (void)_setLastVisitedTimeInterval:(double)arg1;
- (id)_lastVisitedDate;
- (id)targetItem;
- (id)_transientPropertyForKey:(id)arg1;
- (void)_setTransientProperty:(id)arg1 forKey:(id)arg2;
- (BOOL)lastVisitWasFailure;
- (void)_setLastVisitWasFailure:(BOOL)arg1;
- (BOOL)_lastVisitWasHTTPNonGet;
- (id)_redirectURLs;
- (unsigned long)_getDailyVisitCounts:(const int**)arg1;
- (unsigned long)_getWeeklyVisitCounts:(const int**)arg1;
- (id)originalURLString;
- (void)setAlternateTitle:(id)arg1;
- (id)alternateTitle;
- (id)initWithWebCoreHistoryItem:(struct PassRefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x1; })arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (double)lastVisitedTimeInterval;
- (void)_visitedWithTitle:(id)arg1 increaseVisitCount:(BOOL)arg2;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (void)_recordInitialVisit;
- (void)_mergeAutoCompleteHints:(id)arg1;
- (void)setViewState:(id)arg1;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)arg1;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (struct CGPoint { float x1; float x2; })scrollPoint;
- (id)dictionaryRepresentation;
- (struct CGPoint { float x1; float x2; })_scrollPoint;
- (void)_setViewportArguments:(id)arg1;
- (void)_setScale:(float)arg1 isInitial:(BOOL)arg2;
- (void)_setScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_viewportArguments;
- (BOOL)_scaleIsInitial;
- (void)finalize;
- (id)URL;
- (id)title;
- (float)_scale;
- (void)setTitle:(id)arg1;
- (id)children;
- (oneway void)_webcore_releaseOnWebThread;
- (oneway void)release;

@end
