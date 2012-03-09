/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, IMDaemonListener, NSProtocolChecker, NSRecursiveLock, IMRemoteObject<FZDaemon>, NSMutableArray, NSLock, NSString, IMLocalObject, NSMutableDictionary;

@interface IMDaemonController : NSObject  {
    id _delegate;
    IMRemoteObject<FZDaemon> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    IMDaemonListener *_daemonListener;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    struct dispatch_queue_s { } *_listenerLockQueue;
    struct dispatch_queue_s { } *_remoteDaemonLockQueue;
    struct dispatch_queue_s { } *_remoteMessageQueue;
    NSRecursiveLock *_connectionLock;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSLock *_blockingLock;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _inBlockingConnect;
    BOOL _autoReconnect;
    BOOL _blocksConnectionAtResume;
    BOOL _hasBeenSuspended;
    unsigned int _gMyFZListenerCapabilities;
    unsigned int _cachedCapabilities;
}

@property(readonly) IMDaemonListener * listener;
@property(readonly) unsigned int capabilities;
@property(readonly) BOOL isConnecting;
@property(readonly) BOOL isConnected;
@property(setter=_setServicesToAllow:,retain) NSArray * _servicesToAllow;
@property(setter=_setServicesToDeny:,retain) NSArray * _servicesToDeny;
@property(setter=_setListenerID:,retain) NSString * _listenerID;
@property id delegate;
@property(setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume;
@property(setter=__setCapabilities:) unsigned int _capabilities;
@property(setter=_setAutoReconnect:) BOOL _autoReconnect;
@property(readonly) struct dispatch_queue_s { }* _remoteMessageQueue;

+ (void)_setApplicationWillTerminate;
+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (id)sharedController;

- (unsigned int)capabilities;
- (id)init;
- (void)dealloc;
- (BOOL)isConnecting;
- (void)_setServicesToDeny:(id)arg1;
- (void)_setServicesToAllow:(id)arg1;
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1;
- (void)setDaemonTerminatesWithoutListeners:(BOOL)arg1;
- (void)setPresenceValue:(id)arg1 forKey:(id)arg2 forAccount:(id)arg3;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (void)setMyProfile:(id)arg1;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (id)_remoteObject;
- (void)_handleDaemonException:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (void)_localObjectDiedNotification:(id)arg1;
- (BOOL)_autoReconnect;
- (void)__setCapabilities:(unsigned int)arg1;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2 forAccount:(id)arg3;
- (void)_listenerSetUpdated;
- (void)disconnectFromDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(BOOL)arg3;
- (BOOL)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned long long)arg2;
- (void)_makeConnectionWithLaunch:(BOOL)arg1;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (struct dispatch_queue_s { }*)_remoteMessageQueue;
- (void)localObjectDiedNotification:(id)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)_blocksConnectionAtResume;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (void)_addressBookChanged:(id)arg1;
- (void)_setAutoReconnect:(BOOL)arg1;
- (void)_noteSetupComplete;
- (id)_servicesToDeny;
- (id)_servicesToAllow;
- (void)sendABInformationToDaemon;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (unsigned int)_capabilities;
- (void)_setCapabilities:(unsigned int)arg1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (BOOL)isConnected;
- (void)_setListenerID:(id)arg1;
- (BOOL)connectToDaemon;
- (id)_listenerID;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (void)_setBlocksConnectionAtResume:(BOOL)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (void)blockUntilConnected;
- (BOOL)removeListenerID:(id)arg1;
- (void)systemApplicationWillEnterForeground;
- (id)listener;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1 ofPersistentProperty:(id)arg2;
- (void)setVCCapabilities:(unsigned long long)arg1;
- (void)setValue:(id)arg1 ofProperty:(id)arg2;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidEnterBackground;

@end
