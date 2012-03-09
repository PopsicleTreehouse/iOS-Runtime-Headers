/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADLogMetaData, ADClickLocation;

@interface ADLogSysEventRequest : PBRequest  {
    ADLogMetaData *_metaData;
    BOOL _hasEventType;
    int _eventType;
    ADClickLocation *_clickLocation;
    BOOL _hasActionableDuration;
    float _actionableDuration;
}

@property(readonly) BOOL hasMetaData;
@property(retain) ADLogMetaData * metaData;
@property BOOL hasEventType;
@property int eventType;
@property(readonly) BOOL hasClickLocation;
@property(retain) ADClickLocation * clickLocation;
@property BOOL hasActionableDuration;
@property float actionableDuration;

+ (void)initialize;

- (id)description;
- (void)dealloc;
- (Class)responseClass;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)setHasActionableDuration:(BOOL)arg1;
- (void)setHasEventType:(BOOL)arg1;
- (BOOL)hasEventType;
- (void)setActionableDuration:(float)arg1;
- (void)setEventType:(int)arg1;
- (void)setClickLocation:(id)arg1;
- (BOOL)hasMetaData;
- (void)setMetaData:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (float)actionableDuration;
- (BOOL)hasActionableDuration;
- (id)clickLocation;
- (BOOL)hasClickLocation;
- (int)eventType;
- (id)metaData;

@end
