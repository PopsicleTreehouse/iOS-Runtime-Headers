/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject  {
    SCRCIndexMap *_stateQueueMap;
    struct __CFDictionary { } *_queueStateDict;
    struct __CFDictionary { } *_displayQueueDict;
    SCRCIndexMap *_tokenDisplayMap;
    unsigned int _maxActiveQueueSize;
}


- (id)init;
- (void)dealloc;
- (void)removeDisplay:(id)arg1;
- (id)loadingDisplays;
- (id)sleepingDisplays;
- (id)activePendingDisplays;
- (id)activeDisplays;
- (void)setActiveQueueMaximumSize:(unsigned int)arg1;
- (unsigned int)activeQueueMaximumSize;
- (void)setPrimaryDisplay:(id)arg1;
- (id)primaryDisplay;
- (unsigned int)displayCountIncludingDisconnectedDisplays:(BOOL)arg1;
- (id)displayForToken:(long)arg1;
- (int)stateForDisplay:(id)arg1;
- (void)setState:(int)arg1 forDisplay:(id)arg2;
- (void)addDisplay:(id)arg1 withState:(int)arg2;
- (id)disconnectedDisplays;
- (void)_fillActiveBrailleDisplayQueue;
- (id)_queueForState:(int)arg1 createQueue:(BOOL)arg2;

@end
