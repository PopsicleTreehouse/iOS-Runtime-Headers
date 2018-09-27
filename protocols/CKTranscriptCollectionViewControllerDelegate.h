/* Generated by RuntimeBrowser.
 */

@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>

@required

- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonView:(CKBalloonView *)arg2 doubleTappedItemAtIndexPath:(NSIndexPath *)arg3;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonView:(CKBalloonView *)arg2 longPressedForItemWithIndexPath:(NSIndexPath *)arg3;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonView:(CKBalloonView *)arg2 tappedForChatItem:(CKChatItem *)arg3;
- (bool)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewDidRequestCommitPayload:(CKBrowserItemPayload *)arg2 forPlugin:(NSString *)arg3 allowAllCommits:(bool)arg4 error:(id*)arg5;
- (bool)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewDidRequestCommitSticker:(IMSticker *)arg2 forPlugin:(NSString *)arg3 allowAllCommits:(bool)arg4 error:(id*)arg5;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(CKChatItem *)arg3 allowAllStyles:(bool)arg4;
- (void)transcriptCollectionViewController:(void *)arg1 balloonViewDidRequestStartEditingPayload:(void *)arg2 forPlugin:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CKTranscriptCollectionViewController *, CKBrowserItemPayload *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewTitleTappedForItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 collectionViewContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didTapAttributionButtonForChatItem:(CKMessageStatusChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didTapPluginStatusButtonForChatItem:(CKMessageStatusChatItem *)arg2;
- (bool)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 shouldCleanupFullscreenEffectUI:(CKFullScreenEffect *)arg2;
- (bool)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 shouldSetupFullscreenEffectUI:(CKFullScreenEffect *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg2;
- (NSArray *)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerDidInset:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(CKTranscriptCollectionViewController *)arg1;
- (bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(CKTranscriptCollectionViewController *)arg1;
- (bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(CKTranscriptCollectionViewController *)arg1;
- (bool)transcriptCollectionViewControllerShouldPlayAudio:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerWillInset:(CKTranscriptCollectionViewController *)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(CKTranscriptCollectionViewController *)arg1;

@end