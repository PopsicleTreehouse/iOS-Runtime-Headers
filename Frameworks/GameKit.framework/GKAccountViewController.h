/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSURL, NSString;

@interface GKAccountViewController : GKServerWebViewController  {
    NSURL *_url;
    NSString *_accountName;
    NSString *_alias;
    int _mode;
    BOOL _lockedToPortrait;
    NSString *_firstName;
    NSString *_lastName;
}

@property(retain) NSURL * url;
@property(retain) NSString * accountName;
@property(retain) NSString * alias;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property int mode;


- (void)dealloc;
- (void)processGameKitURLComponents:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)finish;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (id)lastName;
- (id)firstName;
- (id)alias;
- (void)setUrl:(id)arg1;
- (id)url;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end
