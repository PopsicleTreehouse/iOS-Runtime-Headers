/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class UIImageView, CNFRegLearnMoreButton, UILabel, PSSpecifier;

@interface CNFRegSigninLearnMoreView : UIView <PreferencesTableCustomView> {
    int _serviceType;
    PSSpecifier *_specifier;
    CNFRegLearnMoreButton *_learnMoreButton;
    UIImageView *_splashImageView;
    UILabel *_verbiageLabel;
}

@property int serviceType;


- (void)dealloc;
- (float)preferredHeightForWidth:(float)arg1;
- (id)_splashImage;
- (id)splashImageView;
- (id)verbiageLabel;
- (id)learnMoreButton;
- (void)_learnMorePressed:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (void)setServiceType:(int)arg1;
- (int)serviceType;

@end
