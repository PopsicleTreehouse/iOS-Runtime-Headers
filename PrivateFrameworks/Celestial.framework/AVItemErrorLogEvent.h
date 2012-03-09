/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDate, AVItemErrorLogEventInternal, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
    AVItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) NSString * playbackSessionID;
@property(readonly) int errorStatusCode;
@property(readonly) NSString * errorDomain;
@property(readonly) NSString * errorComment;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)errorComment;
- (id)errorDomain;
- (int)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;
- (void)finalize;
- (id)initWithDictionary:(id)arg1;
- (id)date;
- (id)URI;

@end
