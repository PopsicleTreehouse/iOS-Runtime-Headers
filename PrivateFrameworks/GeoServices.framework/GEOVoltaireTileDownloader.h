/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileKeyList, <GEOVoltaireTileDownloaderDelegate>, NSString, GEONetworkDataReader, NSURLConnection, NSURL;

@interface GEOVoltaireTileDownloader : NSObject <NSURLConnectionDelegate> {
    GEOTileKeyList *_keyList;
    NSURL *_requestURL;
    int _zAdjust;
    NSURLConnection *_connection;
    GEONetworkDataReader *_reader;
    int _numTilesLoaded;
    NSString *_sharedPrefix;
    NSString *_userAgent;
    <GEOVoltaireTileDownloaderDelegate> *_delegate;
    unsigned short _providerID;
}

@property(retain) NSString * userAgent;
@property <GEOVoltaireTileDownloaderDelegate> * delegate;


- (void)cancel;
- (void)dealloc;
- (void)_tryParseTiles;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })_tileKeyForURL:(id)arg1 edition:(unsigned int*)arg2;
- (void)_cleanupConnection;
- (id)_urlForTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)addTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)userAgent;
- (id)initWithURL:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)start;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)_cancelWithErrorCode:(int)arg1;
- (void)_failWithErrorCode:(int)arg1;

@end
