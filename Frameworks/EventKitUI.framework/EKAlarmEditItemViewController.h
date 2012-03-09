/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarEventAlarmTable, EKAlarm;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate> {
    CalendarEventAlarmTable *_table;
    EKAlarm *_alarm;
    int _alarmIndex;
    BOOL _allDay;
    BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
}

@property(retain) EKAlarm * alarm;
@property int alarmIndex;
@property BOOL allDay;
@property BOOL shouldAllowAlarmsTriggeringAfterStartDate;
@property int presetIdentifier;


- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (BOOL)allDay;
- (void)setAllDay:(BOOL)arg1;
- (int)alarmIndex;
- (id)alarm;
- (void)setAlarm:(id)arg1;
- (void)setAlarmIndex:(int)arg1;
- (void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1;
- (BOOL)customSelected;
- (void)setCustomString:(id)arg1;
- (int)presetIdentifier;
- (void)setPresetIdentifier:(int)arg1;
- (BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
- (void)alarmTableDidChangeAlarm:(id)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;

@end
