/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, EKCalendar, NSTimeZone, EKDaemonConnection, NSMutableSet, NSString, NSMutableDictionary, NSNumber;

@interface EKEventStore : NSObject  {
    NSMutableDictionary *_registeredObjects;
    NSMutableDictionary *_publicRegisteredObjects;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_updatedObjects;
    NSNumber *_defaultTimedAlarmOffset;
    NSNumber *_defaultAllDayAlarmOffset;
    EKDaemonConnection *_database;
    unsigned long _flags;
    NSTimeZone *_timeZone;
    NSMutableDictionary *_calendars;
    NSMutableDictionary *_sources;
    NSMutableSet *_objectsPendingCommit;
    struct dispatch_queue_s { } *_calendarQueue;
    struct dispatch_queue_s { } *_registeredQueue;
    struct dispatch_queue_s { } *_unsavedChangesQueue;
    struct dispatch_queue_s { } *_dbChangedQueue;
}

@property(readonly) NSString * eventStoreIdentifier;
@property(readonly) NSArray * calendars;
@property(readonly) EKCalendar * defaultCalendarForNewEvents;
@property NSMutableDictionary * registeredObjects;
@property NSMutableDictionary * publicRegisteredObjects;
@property NSMutableSet * insertedObjects;
@property NSMutableSet * deletedObjects;
@property NSMutableSet * updatedObjects;
@property NSMutableSet * objectsPendingCommit;
@property(retain) NSNumber * defaultTimedAlarmOffset;
@property(retain) NSNumber * defaultAllDayAlarmOffset;
@property(retain) NSMutableDictionary * _calendars;
@property(retain) NSMutableDictionary * _sources;
@property(retain) EKDaemonConnection * database;
@property unsigned long flags;
@property(copy) NSTimeZone * timeZone;
@property struct dispatch_queue_s { }* calendarQueue;
@property struct dispatch_queue_s { }* registeredQueue;
@property struct dispatch_queue_s { }* unsavedChangesQueue;
@property struct dispatch_queue_s { }* dbChangedQueue;

+ (id)storeWithOptions:(unsigned long)arg1 path:(id)arg2;
+ (Class)publicClassForEntityName:(id)arg1;
+ (Class)classForEntityName:(id)arg1;

- (void)setFlags:(unsigned long)arg1;
- (void)rollback;
- (oneway void)release;
- (id)init;
- (void)dealloc;
- (int)sequenceNumber;
- (void)setDbChangedQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)dbChangedQueue;
- (void)setUnsavedChangesQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)unsavedChangesQueue;
- (void)setRegisteredQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)registeredQueue;
- (void)setCalendarQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)calendarQueue;
- (void)setObjectsPendingCommit:(id)arg1;
- (id)objectsPendingCommit;
- (void)set_sources:(id)arg1;
- (id)_sources;
- (void)set_calendars:(id)arg1;
- (id)_calendars;
- (void)setDatabase:(id)arg1;
- (id)database;
- (void)setPublicRegisteredObjects:(id)arg1;
- (id)publicRegisteredObjects;
- (void)setRegisteredObjects:(id)arg1;
- (id)defaultAllDayAlarm;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;
- (id)defaultTimedAlarm;
- (void)setDefaultTimedAlarmOffset:(id)arg1;
- (void)_protectedDataDidBecomeAvailable;
- (void)_protectedDataWillBecomeUnavailable;
- (id)predicateForUpcomingEventsWithLimit:(int)arg1;
- (id)predicateForUnalertedEvents;
- (id)predicateForUnacknowledgedEvents;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (void)locationBasedAlarmOccurrencesWithCompletion:(id)arg1;
- (void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 completion:(id)arg3;
- (id)alarmWithUUID:(id)arg1;
- (void)cancelFetchRequest:(id)arg1;
- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(id)arg2;
- (id)eventsMatchingPredicate:(id)arg1;
- (void)_trackModifiedObject:(id)arg1;
- (id)publicObjectWithObjectID:(id)arg1;
- (id)publicObjectWithPersistentObject:(id)arg1;
- (void)refreshSourcesIfNecessary;
- (id)earliestExpiringUnreadEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2;
- (int)unacknowledgedEventCount;
- (int)unreadEventCount;
- (id)insertNewExceptionDateWithDate:(id)arg1;
- (id)insertNewEvent;
- (id)calendarWithExternalURI:(id)arg1;
- (id)eventWithUUID:(id)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8;
- (id)predicateForRemindersWithSearchTerm:(id)arg1;
- (id)predicateForCompletedRemindersWithCalendars:(id)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (void)fetchRemindersMatchingPredicate:(id)arg1 completion:(id)arg2;
- (int)countOfRemindersMatchingPredicate:(id)arg1;
- (id)remindersMatchingPredicate:(id)arg1;
- (id)insertNewReminder;
- (id)reminderWithExternalURI:(id)arg1;
- (BOOL)removeReminder:(id)arg1 error:(id*)arg2;
- (BOOL)saveReminder:(id)arg1 error:(id*)arg2;
- (void)setDefaultCalendarForNewTasks:(id)arg1;
- (id)defaultCalendarForNewTasks;
- (void)setDefaultCalendarForNewEvents:(id)arg1;
- (id)defaultCalendarForNewEvents;
- (struct CGColor { }*)copyCGColorForNewCalendar;
- (id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3;
- (void)setEventsAlertedAndSave:(id)arg1;
- (BOOL)markEventsRead:(id)arg1 error:(id*)arg2;
- (BOOL)markEventRead:(id)arg1 error:(id*)arg2;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 error:(id*)arg3;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 error:(id*)arg3;
- (id)eventWithUniqueId:(id)arg1;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2;
- (id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2;
- (id)eventWithIdentifier:(id)arg1;
- (BOOL)deleteCalendar:(id)arg1 forEntityType:(int)arg2 error:(id*)arg3;
- (BOOL)removeCalendar:(id)arg1 error:(id*)arg2;
- (BOOL)saveCalendar:(id)arg1 error:(id*)arg2;
- (id)readWriteCalendarsForEntityType:(int)arg1;
- (int)readWriteCalendarCountForEntityType:(int)arg1;
- (id)calendars;
- (BOOL)removeSource:(id)arg1 error:(id*)arg2;
- (BOOL)saveSource:(id)arg1 error:(id*)arg2;
- (id)localSource;
- (void)_save;
- (id)eventStoreIdentifier;
- (id)changesSinceSequenceNumber:(int)arg1;
- (id)defaultAllDayAlarmOffset;
- (id)defaultTimedAlarmOffset;
- (id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(id)arg2;
- (void)_reregisterObject:(id)arg1 oldID:(id)arg2;
- (void)_forgetRegisteredObjects;
- (void)_registerObject:(id)arg1;
- (id)sourceWithIdentifier:(id)arg1;
- (id)_addFetchedObjectWithID:(id)arg1;
- (void)_registerObjectImmediate:(id)arg1;
- (void)refreshSourcesIfNecessary:(BOOL)arg1;
- (void)_refreshSource:(id)arg1 accountsManager:(id)arg2 isUserRequested:(BOOL)arg3;
- (void)_refreshCalendar:(id)arg1 accountsManager:(id)arg2 isUserRequested:(BOOL)arg3;
- (id)calendarWithIdentifier:(id)arg1;
- (id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7;
- (id)reminderWithUUID:(id)arg1;
- (BOOL)removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (id)calendarWithID:(id)arg1;
- (void)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3 completion:(id)arg4;
- (void)_performServerFunction:(id)arg1 replyHandler:(id)arg2;
- (id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3;
- (void)_deleteObject:(id)arg1;
- (void)_insertObject:(id)arg1;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 commit:(BOOL)arg3 error:(id*)arg4;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 commit:(BOOL)arg3 error:(id*)arg4;
- (BOOL)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id*)arg3 options:(id*)arg4;
- (void)_addObjectToPendingCommits:(id)arg1;
- (BOOL)removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (id)objectWithObjectID:(id)arg1;
- (BOOL)_calendar:(id)arg1 supportsEntityType:(int)arg2;
- (id)_allCalendars;
- (BOOL)commit:(id*)arg1;
- (id)sources;
- (id)registerFetchedObjectWithID:(id)arg1;
- (void)_saveWithNotify:(BOOL)arg1;
- (void)_databaseChangedExternally;
- (BOOL)isDataProtected;
- (void)_validateObjectIDs:(id)arg1 completion:(id)arg2;
- (void)_unregisterObject:(id)arg1;
- (unsigned int)serverPort;
- (void)daemonRestarted;
- (void)_notifyStoreChanged;
- (id)initWithOptions:(unsigned long)arg1 path:(id)arg2;
- (id)connection;
- (void)reset;
- (id)timeZone;
- (unsigned long)flags;
- (void)setTimeZone:(id)arg1;
- (void)setInsertedObjects:(id)arg1;
- (void)setUpdatedObjects:(id)arg1;
- (void)setDeletedObjects:(id)arg1;
- (id)registeredObjects;
- (id)insertedObjects;
- (id)deletedObjects;
- (id)updatedObjects;
- (id)defaultCalendarColorsInRainbowOrder;
- (id)defaultCalendarColors;
- (id)colorForCalendar:(id)arg1;
- (id)stringForColor:(id)arg1;

@end
