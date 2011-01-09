/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLSlideshowPluginDelegate>, MLAlbum, NSArray;



@interface PLSlideshowPlugin : NSObject 
{
    <PLSlideshowPluginDelegate> *_delegate;
    MLAlbum *_album;
    NSArray *_filteredAlbumImages;
    double _secondsPerSlide;
    BOOL _shuffleAlbum;
    BOOL _shouldRepeat;
}

@property(retain) MLAlbum *album;
@property(readonly) NSArray *displayedPhotos;
@property(readonly) MLPhoto *currentPhoto;
@property BOOL shouldRepeat;
@property BOOL shuffleAlbum;
@property double secondsPerSlide;
@property <PLSlideshowPluginDelegate> *delegate;


- (id)currentPhoto;
- (id)displayedPhotos;
- (id)newSlideshowView;
- (void)slideshowViewWillAppear;
- (void)slideshowViewDidAppear;
- (void)pauseSlideshow;
- (void)resumeSlideshow;
- (void)setShouldRepeat:(BOOL)arg1;
- (BOOL)shuffleAlbum;
- (void)setShuffleAlbum:(BOOL)arg1;
- (void)setSecondsPerSlide:(double)arg1;
- (double)secondsPerSlide;
- (void)slideshowViewDidDisappear;
- (void)stopSlideshow;
- (BOOL)shouldRepeat;
- (void)setAlbum:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)album;

@end