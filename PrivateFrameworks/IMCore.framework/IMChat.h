/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, IMAccount, IMHandle, IMMessage, NSMutableArray, NSString, NSMutableSet, NSMutableDictionary, NSDate;

@interface IMChat : NSObject  {
    NSString *_guid;
    NSString *_currentQuery;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableArray *_chatItems;
    NSMutableDictionary *_unfinishedChatItemMap;
    NSMutableArray *_participants;
    NSMutableDictionary *_participantStates;
    id _typingIndicatorTimer;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableDictionary *_chatItemsChanged;
    NSMutableDictionary *_messageMap;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    unsigned int _overallChatStatus;
    int _joinState;
    unsigned char _style;
    unsigned int _numberOfMessagesToKeepLoaded;
    double _joinedTimeInterval;
    unsigned int _chatItemChangeCount;
    unsigned int _cachedUnreadCount;
    NSMutableSet *_cachedReadMessages;
    unsigned int _cachedFailureCount;
    unsigned int _isRefreshing : 1;
    unsigned int _isFirstMessageInvitation : 1;
    unsigned int _wasInvitationHandled : 1;
    unsigned int _didSendAFinishedMessage : 1;
    unsigned int _shouldPostIndividualItemChanges : 1;
    unsigned int _shouldAnnouncePeopleJoin : 1;
    unsigned int _didPostWillChangeNotification : 1;
}

@property unsigned int numberOfMessagesToKeepLoaded;
@property(readonly) NSString * guid;
@property(readonly) NSString * persistentID;
@property(readonly) IMAccount * account;
@property(readonly) NSArray * participants;
@property(readonly) unsigned int messageCount;
@property(readonly) unsigned int unreadMessageCount;
@property(readonly) unsigned int messageFailureCount;
@property(readonly) unsigned char chatStyle;
@property(readonly) NSString * chatIdentifier;
@property(readonly) BOOL canHaveMultipleParticipants;
@property(readonly) unsigned int overallChatStatus;
@property(readonly) NSString * roomName;
@property(readonly) NSString * roomNameWithoutSuffix;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSDate * dateModified;
@property(readonly) int joinState;
@property(readonly) BOOL hasUnhandledInvitation;
@property(readonly) NSArray * chatItems;
@property(readonly) IMMessage * lastMessage;
@property(readonly) IMMessage * lastFinishedMessage;
@property(retain) IMHandle * recipient;
@property(retain) IMMessage * invitationForPendingParticipants;
@property(readonly) BOOL _shouldRegisterChat;
@property(readonly) BOOL _isRefreshing;
@property(setter=_setShouldPostIndividualItemChanges:) BOOL _shouldPostIndividualItemChanges;


- (id)persistentID;
- (id)account;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)_typingIndicatorTimedOut:(id)arg1;
- (void)_clearTypingIndicatorTimeout;
- (void)_setTypingIndicatorTimeout;
- (id)loadMessagesUpToGUID:(id)arg1 loadImmediately:(BOOL)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2;
- (id)loadMessagesWithGUIDs:(id)arg1;
- (id)_buildLoadQueryForSynchronize;
- (unsigned int)numberOfMessagesToKeepLoaded;
- (void)_trimMessagesLeavingNumber:(unsigned int)arg1;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (id)invitationForPendingParticipants;
- (id)dateModified;
- (id)_initWithDictionaryRepresentation:(id)arg1 initialItems:(id)arg2;
- (void)addPendingParticipants:(id)arg1;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (id)allChatProperties;
- (void)_setChatProperties:(id)arg1;
- (id)_lastMessageChatItem;
- (void)markMessagesAsRead:(id)arg1;
- (BOOL)hasUnhandledInvitation;
- (id)roomNameWithoutSuffix;
- (void)setRoomName:(id)arg1;
- (unsigned int)overallChatStatus;
- (id)convertToChatStyle:(unsigned char)arg1;
- (id)participantsWithState:(unsigned int)arg1;
- (void)_showErrorMessage:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (void)_handleIncomingMessage:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (void)mark;
- (BOOL)deleteChatItems:(id)arg1;
- (id)messageForGUID:(id)arg1;
- (BOOL)shouldAppendDatestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldAppendTimestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (void)_insertArchivedChatItems:(id)arg1;
- (void)_insertHistoricalChatItems:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3;
- (BOOL)_shouldAnnouncePeopleJoin;
- (BOOL)_shouldRegisterChat;
- (BOOL)_shouldPostIndividualItemChanges;
- (void)_setIsRefreshing:(BOOL)arg1;
- (BOOL)_isRefreshing;
- (BOOL)_sanityCheckAccounts;
- (void)_addParticipant:(id)arg1;
- (void)_buildChatItemForNewRecipient:(id)arg1 isNewAccount:(BOOL)arg2;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)_clearUnreadCount;
- (id)_messageChatItems;
- (void)_markMessagesAsRead:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)_cacheReadMessageGUID:(id)arg1;
- (void)__clearReadMessageCache;
- (void)_handleCancelledMessage:(id)arg1;
- (void)_updateHeaderChatItem;
- (void)_setJoinState:(int)arg1;
- (int)joinState;
- (id)chatIdentifier;
- (void)_clearCachedIdentifier;
- (void)_buildChatItemForErrorMessage:(id)arg1;
- (void)_setJoinState:(int)arg1 quietly:(BOOL)arg2;
- (BOOL)_isDuplicate:(id)arg1;
- (id)_chatItemForGUID:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_buildChatItemForParticipantState:(unsigned int)arg1 handle:(id)arg2;
- (void)_buildChatItemForDisconnectOrLogout;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_setParticipantState:(unsigned int)arg1 forHandle:(id)arg2;
- (void)_buildChatItemForDecidingHandleWentOffline:(id)arg1;
- (unsigned int)stateForParticipant:(id)arg1;
- (void)_buildChatItemForOverallChatStatusFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (id)roomName;
- (BOOL)canDeleteChatItem:(id)arg1;
- (void)_fixLastStatusMessageIfNecessary;
- (void)_trimMessagesAsNeeded;
- (void)_removeInitialTypingIndicator;
- (void)_removeChatItem:(id)arg1 andTimestamp:(BOOL)arg2;
- (void)_appendChatItem:(id)arg1;
- (id)_newInitialTypingIndicatorChatItem;
- (BOOL)_shouldDisplayInitialTypingIndicator;
- (id)_newHeaderChatItemWithDate:(id)arg1;
- (unsigned int)_insertChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_replaceChatItem:(id)arg1 andTimestamp:(BOOL)arg2 withChatItem:(id)arg3;
- (void)_replaceChatItem:(id)arg1 withChatItem:(id)arg2;
- (BOOL)shouldInsertChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_endChatItemChanges;
- (void)_mapChatItem:(id)arg1;
- (id)_timeStampForChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_postChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_dateStampForChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)processChatItem:(id)arg1;
- (void)_unmapChatItem:(id)arg1;
- (void)_beginChatItemChanges;
- (void)_postWillChangeIfNecessary;
- (void)_updateTypingIndicatorTimeout;
- (unsigned int)_unreadMessageCount;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (unsigned int)_messageFailureCount;
- (void)_clearIncomingTypingIndicators;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 chatItems:(id)arg5 participants:(id)arg6;
- (void)_accountControllerUpdated:(id)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_accountLoggedOut:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (BOOL)canHaveMultipleParticipants;
- (void)_updateUnreadCount;
- (void)_updateFailedCount;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_buildInitialChatItems:(id)arg1;
- (id)participants;
- (void)setRecipient:(id)arg1;
- (id)recipient;
- (id)lastMessage;
- (unsigned char)chatStyle;
- (void)markMessageAsRead:(id)arg1;
- (void)setNumberOfMessagesToKeepLoaded:(unsigned int)arg1;
- (unsigned int)unreadMessageCount;
- (id)lastFinishedMessage;
- (void)_setShouldPostIndividualItemChanges:(BOOL)arg1;
- (unsigned int)messageFailureCount;
- (id)valueForChatProperty:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)_setAccount:(id)arg1;
- (BOOL)sendDowngradeNotificationTo:(id)arg1;
- (id)chatItems;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2 loadImmediately:(BOOL)arg3;
- (id)chatItemForMessage:(id)arg1;
- (BOOL)deleteChatItem:(id)arg1;
- (BOOL)deleteAllHistory;
- (void)leave;
- (unsigned int)messageCount;
- (void)markAllMessagesAsRead;
- (void)cancelMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)guid;
- (void)updateMessage:(id)arg1;
- (void)clear;
- (void)join;
- (id)dateCreated;
- (void)declineInvitation;
- (void)acceptInvitation;

@end
