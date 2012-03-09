/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSURL, CalDAVCalendarServerInviteNotificationItem, <CoreDAVTaskGroupDelegate>;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    BOOL _acceptInvitation;
    NSURL *_calendarHomeURL;
}

@property(retain) NSURL * calendarHomeURL;
@property BOOL acceptInvitation;
@property(retain) CalDAVCalendarServerInviteNotificationItem * invitation;
@property <CoreDAVTaskGroupDelegate> * delegate;


- (id)description;
- (void)dealloc;
- (void)setInvitation:(id)arg1;
- (id)invitation;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)calendarHomeURL;
- (void)setCalendarHomeURL:(id)arg1;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (void)setAcceptInvitation:(BOOL)arg1;
- (id)generateReply;
- (BOOL)acceptInvitation;

@end
