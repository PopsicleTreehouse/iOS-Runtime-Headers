/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMemoryMonitor : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFMemoryMonitorDelegate> * _delegate;
    HMFUnfairLock * _lock;
    NSObject<OS_dispatch_source> * _memoryPressure;
    long long  _memoryState;
    bool  _monitoring;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property <HMFMemoryMonitorDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *memoryPressure;
@property (nonatomic, readonly) long long memoryState;
@property (getter=isMonitoring, nonatomic) bool monitoring;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isMonitoring;
- (id)memoryPressure;
- (long long)memoryState;
- (void)setDelegate:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)start;
- (void)stop;

@end