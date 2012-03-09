/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLGenericAlbum;

@interface PLStackViewImageChangeNotification : PLChangeNotification  {
    PLGenericAlbum *_album;
}

@property(readonly) PLGenericAlbum * album;

+ (id)notificationWithAlbum:(id)arg1;

- (id)userInfo;
- (id)description;
- (void)dealloc;
- (id)_initWithAlbum:(id)arg1;
- (id)album;
- (id)object;
- (id)name;
- (id)_init;

@end
