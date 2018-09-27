/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>

+ (void)_logNotificationCountsForNotificationTypes:(id)arg1;
+ (id)_stringForNotificationType:(int)arg1;
+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;
+ (id)whitelistedBundles;

- (void)CADCalendar:(id)arg1 setAlertedWithError:(id /* block */)arg2;
- (void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(id /* block */)arg2;
- (void)CADDatabaseGetEventNotificationItems:(id /* block */)arg1;
- (void)CADDatabaseGetInboxRepliedSectionItems:(id /* block */)arg1;
- (void)CADDatabaseGetInviteReplyNotifications:(id /* block */)arg1;
- (void)CADDatabaseGetReminderNotificationItems:(id /* block */)arg1;
- (void)CADDatabaseGetResourceChanges:(id /* block */)arg1;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(id /* block */)arg1;
- (void)CADEvent:(id)arg1 setAlertedWithError:(id /* block */)arg2;
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(id)arg2 error:(id /* block */)arg3;
- (void)CADInviteReplyNotification:(id)arg1 setAlertedWithError:(id /* block */)arg2;
- (void)CADResourceChange:(id)arg1 setAlertedWithError:(id /* block */)arg2;
- (bool)_event:(void*)arg1 hasOccurrenceEndingAfterDate:(double)arg2;

@end