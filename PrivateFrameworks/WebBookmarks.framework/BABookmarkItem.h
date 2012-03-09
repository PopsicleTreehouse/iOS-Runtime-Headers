/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmark, WebBookmarkCollection;

@interface BABookmarkItem : NSObject  {
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
}

@property(retain) WebBookmark * bookmark;
@property(readonly) WebBookmarkCollection * collection;


- (void)dealloc;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2;
- (void)setBookmark:(id)arg1;
- (id)bookmark;
- (id)collection;

@end
