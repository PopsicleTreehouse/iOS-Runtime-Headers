/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEOSearchProvider : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _error;

}

@property(copy) id error;

+ (id)hostname;
+ (unsigned short)provider;

- (void)cancel;
- (void)dealloc;
- (void)setError:(id)arg1;
- (id)error;
- (void)search:(id)arg1 finished:(id)arg2 spellingSuggestion:(id)arg3 refinement:(id)arg4 error:(id)arg5;

@end
