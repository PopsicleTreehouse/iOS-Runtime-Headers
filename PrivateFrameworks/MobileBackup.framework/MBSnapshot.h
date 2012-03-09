/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSDate, NSString;

@interface MBSnapshot : NSObject <NSCopying, NSCoding> {
    unsigned int _snapshotID;
    NSString *_deviceName;
    NSDate *_date;
    int _state;
}

@property(readonly) int state;
@property(readonly) NSDate * date;
@property(readonly) NSString * deviceName;
@property(readonly) unsigned int snapshotID;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deviceName;
- (int)state;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)snapshotID;
- (id)initWithSnapshotID:(unsigned int)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4;

@end
