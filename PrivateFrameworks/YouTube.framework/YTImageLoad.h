/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableData, NSString, NSURLConnection, NSURL;

@interface YTImageLoad : NSObject <NSURLConnectionDelegate> {
    NSURL *_URL;
    NSURLConnection *_connection;
    NSMutableData *_imageData;
    NSString *_videoID;
}


- (void)dealloc;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)start;
- (void)_createImage;
- (void)_loadFinished;

@end
