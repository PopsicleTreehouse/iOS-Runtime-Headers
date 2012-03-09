/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationRecorderDisplayLinkManagerTargetAction : NSObject  {
    id _target;
    SEL _actionSelector;
    int _frameInterval;
    int _displayDidRefreshCount;
}


- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (void)displayDidRefresh:(id)arg1;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 frameInterval:(int)arg3;

@end
