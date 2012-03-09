/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSPort;

@interface NSConcreteTask : NSTask  {
    NSMutableDictionary *_dictionary;
    BOOL _hasExeced;
    BOOL _isRunning;
    BOOL _hasPostedDeathNotification;
    BOOL _terminationRun;
    int _suspendCount;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;

    int _pid;
    int _platformExitInfo;
    struct dispatch_source_s { } *_dsrc;
    NSPort *_tmpPort;
}


- (void)setStartsNewProcessGroup:(BOOL)arg1;
- (int)_procid;
- (void)terminateTask;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (id)preferredArchitectures;
- (void)setPreferredArchitectures:(id)arg1;
- (void)waitUntilExit;
- (int)_platformExitInformation;
- (id)standardError;
- (id)standardOutput;
- (id)standardInput;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (id)launchPath;
- (int)suspendCount;
- (void)terminate;
- (void)interrupt;
- (void)setLaunchPath:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)launch;
- (int)terminationReason;
- (int)terminationStatus;
- (void)launchWithDictionary:(id)arg1;
- (int)processIdentifier;
- (void)setArguments:(id)arg1;
- (id)currentDirectoryPath;
- (id)init;
- (void)dealloc;
- (void)setEnvironment:(id)arg1;
- (id)environment;
- (void)setTerminationHandler:(id)arg1;
- (id)terminationHandler;
- (BOOL)resume;
- (BOOL)isRunning;
- (void)finalize;
- (id)arguments;
- (BOOL)suspend;

@end
