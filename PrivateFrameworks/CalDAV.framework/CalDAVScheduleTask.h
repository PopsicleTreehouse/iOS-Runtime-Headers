/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVScheduleResponseItem, NSString, NSArray;

@interface CalDAVScheduleTask : CoreDAVPostTask  {
    NSArray *_attendees;
    NSString *_originator;
    CalDAVScheduleResponseItem *_scheduleResponse;
}

@property(retain) NSArray * attendees;
@property(retain) NSString * originator;
@property(retain) CalDAVScheduleResponseItem * scheduleResponse;


- (void)dealloc;
- (id)originator;
- (void)setOriginator:(id)arg1;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setAttendees:(id)arg1;
- (id)attendees;
- (id)scheduleResponse;
- (void)setScheduleResponse:(id)arg1;
- (id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4;

@end
