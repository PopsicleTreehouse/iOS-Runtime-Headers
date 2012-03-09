/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDate, UILabel;

@interface UIWeekMonthDayTableCell : UIDateTableCell  {
    UILabel *_weekdayLabel;
    NSDate *_date;
    float _weekdayWidth;
    BOOL _weekdayLast;
}


- (void)dealloc;
- (void)setWeekdayString:(id)arg1;
- (void)setWeekdayWidth:(float)arg1;
- (void)setWeekdayLast:(BOOL)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (void)updateHighlightColors;
- (id)_weekdayLabelColor;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;

@end
