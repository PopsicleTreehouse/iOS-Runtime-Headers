/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class CertInfoCertificateDetailsView, NSArray;

@interface CertInfoTrustDetailsView : UIView  {
    NSArray *_certificateViews;
    CertInfoCertificateDetailsView *_currentCertView;
}


- (void)_appendRemainingCertificates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trustProperties:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;

@end
