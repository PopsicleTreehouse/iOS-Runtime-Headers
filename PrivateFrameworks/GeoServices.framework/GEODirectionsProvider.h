/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEODirectionsProvider : NSObject  {
    BOOL _isLoading;
    int _requestType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishedHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

}

@property BOOL isLoading;
@property(copy) id finishedHandler;
@property(copy) id errorHandler;

+ (id)providerHostname;
+ (unsigned short)providerID;

- (id)errorHandler;
- (void)setErrorHandler:(id)arg1;
- (void)dealloc;
- (void)requestCompleted;
- (id)finishedHandler;
- (void)setFinishedHandler:(id)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isLoading;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)cancelProviderRequest;
- (void)startProviderWithRequest:(id)arg1;
- (void)providerDidCancel;
- (void)providerReceivedResponse:(id)arg1;
- (void)providerReceivedErrorCode:(int)arg1;

@end
