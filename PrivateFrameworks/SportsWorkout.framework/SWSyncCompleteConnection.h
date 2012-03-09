/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class <SWSyncServiceConnectionDelegate><SWSyncCompleteConnectionDelegate>, NSString;

@interface SWSyncCompleteConnection : SWSyncServiceConnection  {
    <SWSyncServiceConnectionDelegate><SWSyncCompleteConnectionDelegate> *_delegate;
    NSString *_PIN;
}

@property <SWSyncServiceConnectionDelegate><SWSyncCompleteConnectionDelegate> * delegate;
@property(readonly) NSString * PIN;


- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)PIN;
- (id)initWithPIN:(id)arg1 host:(id)arg2 delegate:(id)arg3;
- (void)handleResponse:(id)arg1;

@end
