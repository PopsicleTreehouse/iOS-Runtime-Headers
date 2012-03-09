/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSString;

@interface FTRegConnectionHandler : NSObject  {
    int _serviceType;
    unsigned long long _caps;
    NSString *_name;
    NSString *_listenerID;
    NSString *_logName;
    struct { 
        unsigned int listeningForNotifications : 1; 
    } _handlerFlags;
}

@property(retain,readonly) NSString * _serviceName;
@property(retain) NSString * _logName;
@property(setter=_setListenerID:,copy) NSString * _listenerID;
@property unsigned long long caps;
@property int serviceType;
@property(copy) NSString * name;


- (void)setName:(id)arg1;
- (void)dealloc;
- (id)_serviceName;
- (void)_setListenerID:(id)arg1;
- (void)set_logName:(id)arg1;
- (BOOL)_isServiceSupported;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (id)_logName;
- (id)initWithServiceType:(int)arg1 name:(id)arg2 capabilities:(unsigned long long)arg3;
- (void)_handleDaemonConnected:(id)arg1;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemon:(BOOL)arg1;
- (id)_listenerID;
- (BOOL)isConnectedToDaemon;
- (id)initWithServiceType:(int)arg1 name:(id)arg2;
- (void)_disconnectFromDaemon;
- (id)name;
- (unsigned long long)caps;
- (void)setCaps:(unsigned long long)arg1;
- (void)setServiceType:(int)arg1;
- (int)serviceType;

@end
