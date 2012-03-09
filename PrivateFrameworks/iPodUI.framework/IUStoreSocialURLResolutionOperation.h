/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSURL, NSString;

@interface IUStoreSocialURLResolutionOperation : ISOperation  {
    NSString *_actionType;
    NSURL *_url;
}

@property(readonly) NSString * socialActionType;
@property(readonly) NSURL * outputURL;


- (id)init;
- (void)dealloc;
- (id)outputURL;
- (void)run;
- (void)_setOutputURL:(id)arg1;
- (id)socialActionType;
- (id)initWithSocialActionType:(id)arg1;

@end
