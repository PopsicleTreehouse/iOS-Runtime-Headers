/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class NSMutableDictionary, UILocalNotification, NSString, NSDate, <AlarmDelegate>, NSURL;

@interface Alarm : NSObject  {
    NSString *_id;
    NSURL *_idUrl;
    NSMutableDictionary *_settings;
    UILocalNotification *_notification;
    UILocalNotification *_weeklyNotifications[7];
    UILocalNotification *_snoozedNotification;
    unsigned int _hour;
    unsigned int _minute;
    unsigned int _daySetting;
    BOOL _allowsSnooze;
    NSString *_sound;
    NSString *_title;
    NSDate *_lastModified;
    unsigned int _revision;
    BOOL _hasSnapshot;
    unsigned int _snapshotHour;
    unsigned int _snapshotMinute;
    unsigned int _snapshotDaySetting;
    unsigned char _snapshotAllowsSnooze;
    NSString *_snapshotSound;
    NSString *_snapshotTitle;
    <AlarmDelegate> *_delegate;
}

+ (id)_newSettingsFromNotification:(id)arg1;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (BOOL)verifySettings:(id)arg1;

- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithNotification:(id)arg1;
- (id)initWithDefaultValues;
- (void)revertToSnapshot;
- (id)uiTitle;
- (id)nowDateForOffsetCalculation;
- (id)timeZoneForOffsetCalculation;
- (id)_newBaseDateComponentsForDay:(int)arg1;
- (id)rawTitle;
- (BOOL)allowsSnooze;
- (BOOL)repeats;
- (unsigned int)daySetting;
- (id)_newNotification:(int)arg1;
- (void)prepareNotifications;
- (unsigned int)_notificationsCount;
- (void)setAllowsSnooze:(BOOL)arg1;
- (void)setDaySetting:(unsigned int)arg1;
- (void)markModified;
- (int)compareTime:(id)arg1;
- (void)scheduleNotifications;
- (id)initWithSettings:(id)arg1;
- (id)alarmIdUrl;
- (void)cancelNotifications;
- (BOOL)tryAddNotification:(id)arg1;
- (void)dropNotifications;
- (void)refreshActiveState;
- (void)handleNotificationSnoozed:(id)arg1;
- (void)handleAlarmFired:(id)arg1;
- (void)setSound:(id)arg1;
- (id)sound;
- (id)settings;
- (void)setMinute:(unsigned int)arg1;
- (void)setHour:(unsigned int)arg1;
- (unsigned int)minute;
- (unsigned int)hour;
- (void)takeSnapshot;
- (BOOL)isActive;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)alarmId;

@end
