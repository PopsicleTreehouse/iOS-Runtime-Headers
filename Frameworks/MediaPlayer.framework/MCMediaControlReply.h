/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MCMediaControlClientRemote;

@interface MCMediaControlReply : NSObject  {
    MCMediaControlClientRemote *_client;
    struct dispatch_queue_s { } *_completionQueue;
    id _completionBlock;
    BOOL _replySent;
    struct dispatch_queue_s { } *_queue;
    struct dispatch_source_s { } *_source;
}

@property(readonly) unsigned int receivePort;


- (unsigned int)receivePort;
- (id)init;
- (void)dealloc;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 playbackInfo:(id)arg2;
- (void)_sendReplyWithDictionary:(id)arg1;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 volume:(float)arg2;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 position:(float)arg2 duration:(float)arg3;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 picData:(id)arg2 playerGUID:(id)arg3;
- (id)initWithClient:(id)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;

@end
