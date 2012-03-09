/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary, AVAudioPlayer, GKTableView, NSMutableArray, NSString, <GKMatchmakerViewControllerDelegate>, GKMatchmakerNavView, GKMatchmakerViewController, UIAlertView, GKFriendPickerViewController, GKUITheme, NSMutableDictionary, UILabel, UIActivityIndicatorView, GKPlayer, GKMatchRequest, UIButton, GKMatch, GKGameDetailHeaderView, NSArray, UIView, GKInvite;

@interface GKMatchmakerViewControllerPrivate : GKTableViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, GKFriendPickerViewControllerDelegate, GKMatchDelegate> {
    <GKMatchmakerViewControllerDelegate> *_delegate;
    GKMatchRequest *_matchRequest;
    GKInvite *_acceptedInvite;
    BOOL _hosted;
    BOOL _reachable;
    GKMatch *_match;
    BOOL _loadingFriends;
    BOOL _loadingFriendsFailed;
    BOOL _sentAccept;
    BOOL _geniusMatching;
    BOOL _didLayout;
    BOOL _setupNotifications;
    GKUITheme *_theme;
    GKMatchmakerNavView *_navView;
    UIActivityIndicatorView *_navSpinner;
    UIView *_matchingView;
    GKTableView *_friendTable;
    GKGameDetailHeaderView *_headerView;
    UILabel *_footerLabel;
    UIView *_addRemovePlayersView;
    UIButton *_addPlayerButton;
    UIButton *_removePlayerButton;
    NSMutableArray *_invitedFriends;
    NSMutableDictionary *_ranks;
    NSMutableArray *_friendPlayers;
    NSMutableArray *_declinedPlayers;
    NSArray *_playersToInvite;
    int _numberOfInvitesRemaining;
    int _numberAccepted;
    GKFriendPickerViewController *_friendPicker;
    UIAlertView *_alert;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _formSheetInsets;
    GKPlayer *_emptyPlayer;
    int _pushStatus;
    BOOL _waitingToShowFriendPicker;
    BOOL _loadingExistingPlayers;
    int _automatchActivity;
    NSString *_defaultInvitationMessage;
    AVAudioPlayer *_audioPlayer;
    NSDictionary *_pushTokens;
}

@property(readonly) GKMatchmakerViewController * matchmakerViewController;
@property <GKMatchmakerViewControllerDelegate> * delegate;
@property(retain) GKMatchRequest * matchRequest;
@property(getter=isHosted) BOOL hosted;
@property(retain) GKInvite * acceptedInvite;
@property BOOL reachable;
@property(retain) GKMatch * match;
@property BOOL loadingFriends;
@property BOOL loadingFriendsFailed;
@property BOOL sentAccept;
@property BOOL geniusMatching;
@property BOOL didLayout;
@property BOOL setupNotifications;
@property(retain) GKUITheme * theme;
@property(retain) GKMatchmakerNavView * navView;
@property(retain) UIActivityIndicatorView * navSpinner;
@property(retain) UIView * matchingView;
@property(retain) GKTableView * friendTable;
@property(retain) GKGameDetailHeaderView * headerView;
@property(retain) UILabel * footerLabel;
@property(retain) UIView * addRemovePlayersView;
@property(retain) UIButton * addPlayerButton;
@property(retain) UIButton * removePlayerButton;
@property(retain) NSMutableArray * invitedFriends;
@property(retain) NSMutableDictionary * ranks;
@property(retain) NSMutableArray * friendPlayers;
@property(retain) NSMutableArray * declinedPlayers;
@property NSArray * playersToInvite;
@property int numberOfInvitesRemaining;
@property int numberAccepted;
@property(retain) GKFriendPickerViewController * friendPicker;
@property UIAlertView * alert;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } formSheetInsets;
@property(retain) GKPlayer * emptyPlayer;
@property int pushStatus;
@property BOOL waitingToShowFriendPicker;
@property BOOL loadingExistingPlayers;
@property int automatchActivity;
@property(copy) NSString * defaultInvitationMessage;
@property(retain) AVAudioPlayer * audioPlayer;
@property(retain) NSDictionary * pushTokens;


- (void)cancel;
- (void)dealloc;
- (id)audioPlayer;
- (id)defaultInvitationMessage;
- (int)automatchActivity;
- (void)setLoadingExistingPlayers:(BOOL)arg1;
- (BOOL)loadingExistingPlayers;
- (void)setWaitingToShowFriendPicker:(BOOL)arg1;
- (BOOL)waitingToShowFriendPicker;
- (void)setPushStatus:(int)arg1;
- (int)pushStatus;
- (id)emptyPlayer;
- (void)setAlert:(id)arg1;
- (id)alert;
- (void)setFriendPicker:(id)arg1;
- (id)friendPicker;
- (void)setNumberAccepted:(int)arg1;
- (int)numberAccepted;
- (void)setNumberOfInvitesRemaining:(int)arg1;
- (int)numberOfInvitesRemaining;
- (id)declinedPlayers;
- (void)setFriendPlayers:(id)arg1;
- (id)friendPlayers;
- (id)ranks;
- (void)setInvitedFriends:(id)arg1;
- (id)invitedFriends;
- (id)removePlayerButton;
- (id)addPlayerButton;
- (id)addRemovePlayersView;
- (id)footerLabel;
- (id)friendTable;
- (void)setMatchingView:(id)arg1;
- (id)matchingView;
- (id)navSpinner;
- (id)navView;
- (void)setSetupNotifications:(BOOL)arg1;
- (BOOL)setupNotifications;
- (void)setDidLayout:(BOOL)arg1;
- (BOOL)didLayout;
- (void)setGeniusMatching:(BOOL)arg1;
- (BOOL)geniusMatching;
- (void)setSentAccept:(BOOL)arg1;
- (BOOL)sentAccept;
- (BOOL)loadingFriendsFailed;
- (void)setLoadingFriends:(BOOL)arg1;
- (BOOL)loadingFriends;
- (void)setReachable:(BOOL)arg1;
- (BOOL)reachable;
- (void)setHostedPlayer:(id)arg1 connected:(BOOL)arg2;
- (void)addPlayersToMatch:(id)arg1;
- (id)initWithInvite:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (void)match:(id)arg1 didFailWithError:(id)arg2;
- (void)match:(id)arg1 connectionWithPlayerFailed:(id)arg2 withError:(id)arg3;
- (void)match:(id)arg1 player:(id)arg2 didChangeState:(int)arg3;
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
- (void)friendPickerViewController:(id)arg1 didFinishWithPlayers:(id)arg2 inviteMessage:(id)arg3;
- (void)inviteMessagePlayerStatusFromBytes:(const char *)arg1 withLength:(unsigned int)arg2;
- (void)updatePlayersUsingStatusInfo:(id)arg1 andLoadedPlayers:(id)arg2;
- (void)setDeclinedPlayers:(id)arg1;
- (void)invitePlayers:(id)arg1 withMessage:(id)arg2;
- (void)invitePlayers:(id)arg1 withMessage:(id)arg2 connectionData:(id)arg3;
- (void)failedToInvitePlayers:(id)arg1;
- (int)indexOfPlayer:(id)arg1;
- (void)cancelInviteForPlayerAtIndex:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })formSheetInsets;
- (id)matchmakerViewController;
- (void)cleanupStateForCancelOrError;
- (void)cancelGeniusMatchmaking;
- (void)finishWithPlayers:(id)arg1;
- (id)acceptedPlayerIDs;
- (void)finishWithMatch:(id)arg1;
- (void)matchmakingDidCancel;
- (void)setupForGeniusMatchmaking;
- (void)doneInvitingFindMorePlayers:(BOOL)arg1;
- (BOOL)showAlertIfPendingInvites;
- (id)match;
- (void)acceptHostedInvite;
- (void)failedToAcceptInviteWithError:(id)arg1;
- (void)inviterCancelledNotification:(id)arg1;
- (void)updateCellForPlayer:(id)arg1;
- (void)playerDisconnected:(id)arg1;
- (void)playerConnected:(id)arg1;
- (id)invitedPlayerWithID:(id)arg1;
- (void)removeMatchingView;
- (void)resetUninvolvedPlayersWithAnimation:(BOOL)arg1;
- (void)showMatchingView;
- (void)updateNavViewLayoutForOrientation:(int)arg1;
- (void)setFooterLabel:(id)arg1;
- (void)setNavSpinner:(id)arg1;
- (void)revertToEmptyPlayer:(id)arg1 animated:(BOOL)arg2;
- (void)revertToEmptyPlayer:(id)arg1;
- (void)updateWaitTime;
- (void)setAutomatchActivity:(int)arg1;
- (void)setRanks:(id)arg1;
- (void)setLoadingFriendsFailed:(BOOL)arg1;
- (BOOL)haveConnectingPlayers;
- (void)sendStatusUpdate;
- (void)showFriendPicker;
- (void)acceptInvite;
- (void)loadRanks;
- (void)queryGroupActivity;
- (void)loadFriends;
- (void)checkIfPushEnabled;
- (void)inviteeDeclinedNotification:(id)arg1;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)playersToInvite:(id)arg1;
- (void)layoutSubviewsForInterfaceOrientation:(int)arg1;
- (void)applicationWillEnterForeground;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)addPlayer;
- (void)setAddPlayerButton:(id)arg1;
- (void)removePlayer;
- (void)setRemovePlayerButton:(id)arg1;
- (void)setAddRemovePlayersView:(id)arg1;
- (void)setFormSheetInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPlayerRangeText;
- (void)setNavView:(id)arg1;
- (id)theme;
- (void)cancelButtonPressed;
- (void)setFriendTable:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)cancelAlertWithoutDelegateCallback;
- (void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1;
- (void)loadRanksForPlayerIDs:(id)arg1;
- (void)updateAddRemovePlayerButtons;
- (void)finishWithError:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setAudioPlayer:(id)arg1;
- (void)setEmptyPlayer:(id)arg1;
- (void)setPushTokens:(id)arg1;
- (id)pushTokens;
- (id)matchRequest;
- (id)acceptedInvite;
- (void)showAlertForTag:(int)arg1;
- (void)authenticatedStatusChanged;
- (BOOL)isHosted;
- (void)setHosted:(BOOL)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)setAcceptedInvite:(id)arg1;
- (id)playersToInvite;
- (void)setPlayersToInvite:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (id)headerView;
- (id)initWithStyle:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (float)marginForTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)didReceiveMemoryWarning;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)play;

@end
