/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSCalendar, NSDate, NSDictionary, NSTimeZone;

@interface UILocalNotification : NSObject <NSCopying, NSCoding> {
}

@property(copy) NSDate * fireDate;
@property(copy) NSTimeZone * timeZone;
@property unsigned int repeatInterval;
@property(copy) NSCalendar * repeatCalendar;
@property(copy) NSString * alertBody;
@property BOOL hasAction;
@property(copy) NSString * alertAction;
@property(copy) NSString * alertLaunchImage;
@property(copy) NSString * soundName;
@property int applicationIconBadgeNumber;
@property(copy) NSDictionary * userInfo;
@property int totalRepeatCount;
@property int remainingRepeatCount;
@property BOOL hideAlertTitle;
@property BOOL allowSnooze;
@property BOOL soundNameIsARingtone;
@property BOOL interruptAudioAndLockDevice;
@property BOOL resumeApplicationInBackground;
@property BOOL fireNotificationsWhenAppRunning;
@property BOOL showAlarmStatusBarItem;
@property(copy) NSString * customLockSliderLabel;
@property BOOL isSystemAlert;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)clearNonSystemProperties;
- (int)compareFireDates:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
