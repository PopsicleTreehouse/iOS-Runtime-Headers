/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GMMRequester;

@interface GMMGEOTileAvailabilityProvider : GEOTileAvailabilityProvider <PBRequesterDelegate> {
    GMMRequester *_requester;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishedHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

}

+ (unsigned short)providerID;

- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;

@end
