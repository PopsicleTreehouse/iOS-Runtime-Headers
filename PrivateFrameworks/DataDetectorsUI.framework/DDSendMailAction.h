/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate> {
}


- (void)perform;
- (int)interactionType;
- (id)localizedName;
- (id)viewController;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;

@end
