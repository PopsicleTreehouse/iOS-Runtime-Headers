/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVCalendarServerAccessItem, CalDAVSupportedCalendarComponentSet, CalDAVCalendarServerOrganizerItem, CoreDAVHrefItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem  {
    CoreDAVLeafItem *_uid;
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_inviteStatus;
    CalDAVCalendarServerAccessItem *_access;
    CoreDAVItemWithHrefChildItem *_hostURL;
    CalDAVCalendarServerOrganizerItem *_organizer;
    CoreDAVLeafItem *_summary;
    CalDAVSupportedCalendarComponentSet *_supportedCalendarComponentSet;
}

@property(retain) CalDAVSupportedCalendarComponentSet * supportedCalendarComponentSet;
@property(retain) CoreDAVLeafItem * summary;
@property(retain) CalDAVCalendarServerOrganizerItem * organizer;
@property(retain) CoreDAVItemWithHrefChildItem * hostURL;
@property(retain) CalDAVCalendarServerAccessItem * access;
@property(retain) CoreDAVItemWithNoChildren * inviteStatus;
@property(retain) CoreDAVHrefItem * href;
@property(retain) CoreDAVLeafItem * uid;


- (void)setUid:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setInviteStatus:(id)arg1;
- (id)inviteStatus;
- (id)copyParseRules;
- (void)setOrganizer:(id)arg1;
- (id)organizer;
- (id)uid;
- (id)summary;
- (void)setSummary:(id)arg1;
- (void)setHref:(id)arg1;
- (id)href;
- (BOOL)isComponentSupportedForString:(id)arg1;
- (void)setAccess:(id)arg1;
- (void)setHostURL:(id)arg1;
- (id)hostURL;
- (id)access;
- (void)setSupportedCalendarComponentSet:(id)arg1;
- (id)supportedCalendarComponentSet;

@end
