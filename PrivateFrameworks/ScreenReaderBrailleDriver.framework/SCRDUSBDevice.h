/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface SCRDUSBDevice : NSObject  {
    struct IOUSBDeviceStruct300 {} **_device;
    struct IOUSBInterfaceStruct220 {} **_interface;
    BOOL _isOpen;
    BOOL _isConfigured;
    NSString *_privateRunLoopMode;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _notification;
}


- (void)dealloc;
- (BOOL)clearPipe:(unsigned char)arg1 bothEnds:(BOOL)arg2;
- (void)abortPipe:(unsigned char)arg1;
- (BOOL)getInformationForPipe:(unsigned char)arg1 direction:(char *)arg2 number:(char *)arg3 transferType:(char *)arg4 maxPacketSize:(unsigned short*)arg5 interval:(char *)arg6;
- (unsigned long)readData:(void*)arg1 withSize:(unsigned long)arg2 fromBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned long)arg4 andCompletionTimeOut:(unsigned long)arg5;
- (BOOL)readData:(void*)arg1 withSize:(unsigned int*)arg2 fromPipe:(unsigned char)arg3;
- (unsigned long)readData:(void*)arg1 withSize:(unsigned long)arg2 fromPipe:(unsigned char)arg3 withTimeout:(double)arg4;
- (BOOL)writeData:(void*)arg1 withSize:(unsigned long)arg2 toBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned long)arg4 andCompletionTimeOut:(unsigned long)arg5;
- (unsigned long)writeData:(void*)arg1 withSize:(unsigned long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4;
- (BOOL)sendControlRequest:(unsigned char)arg1 type:(unsigned char)arg2 value:(unsigned short)arg3 index:(unsigned short)arg4 data:(void*)arg5 size:(unsigned short)arg6 sizeTransferred:(unsigned int*)arg7 pipe:(unsigned char)arg8 timeout:(double)arg9;
- (BOOL)setAlternateInterface:(unsigned char)arg1;
- (unsigned char)numberOfConfigurations;
- (long)product;
- (long)vendor;
- (BOOL)openWithSeize:(BOOL)arg1;
- (unsigned long)_transferData:(void*)arg1 withSize:(unsigned long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4 withFunction:(int (*)())arg5;
- (void)registerForDisconnectNotifications:(BOOL)arg1;
- (BOOL)setInterface:(unsigned char)arg1;
- (id)initWithIOObject:(unsigned int)arg1;
- (BOOL)isConfigured;
- (BOOL)reset;
- (BOOL)close;
- (BOOL)open;
- (BOOL)setConfiguration:(unsigned char)arg1;
- (BOOL)isOpen;

@end
