/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSMutableDictionary;

@interface EKDaemonConnection : NSObject  {
    unsigned long _options;
    NSString *_dbPath;
    unsigned int _serverPort;
    unsigned int _machPort;
    unsigned int _connectionPort;
    id _delegate;
    NSMutableDictionary *_replyHandlers;
    unsigned int _nextID;
    struct dispatch_source_s { } *_replySource;
    struct dispatch_queue_s { } *_replyHandlerLock;
    BOOL _registeredForStartNote;
}

@property(readonly) unsigned int port;
@property id delegate;


- (void)dealloc;
- (void)_daemonRestarted;
- (void)_processReplyWithID:(unsigned int)arg1 data:(id)arg2;
- (void)_finishAllRepliesOnServerDeath;
- (BOOL)_connectToServer;
- (void)removeReplyHandler:(id)arg1;
- (id)addReplyHandler:(id)arg1;
- (id)initWithOptions:(unsigned long)arg1 path:(id)arg2;
- (unsigned int)port;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)disconnect;

@end
