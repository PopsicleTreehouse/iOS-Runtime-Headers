/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MSStreamsProtocolDelegate>, NSString, NSURL;

@interface MSStreamsProtocol : NSObject  {
    <MSStreamsProtocolDelegate> *_delegate;
    NSString *_personID;
    NSURL *_URL;
}

@property <MSStreamsProtocolDelegate> * delegate;
@property(readonly) NSString * personID;
@property(readonly) NSURL * putURL;
@property(readonly) NSURL * getURL;
@property(readonly) NSURL * resetURL;
@property(readonly) NSURL * reauthorizeURL;
@property(readonly) NSURL * uploadCompleteURL;
@property(readonly) NSURL * deleteURL;

+ (id)deviceInfoDictForPersonID:(id)arg1;

- (void)dealloc;
- (id)personID;
- (id)deleteURL;
- (id)reauthorizeURL;
- (id)resetURL;
- (id)getURL;
- (void)_didReceiveRetryAfterDate:(id)arg1;
- (void)_didFindServerSideConfigurationVersion:(id)arg1;
- (id)uploadCompleteURL;
- (id)putURL;
- (void)_refreshAuthTokenForContext:(struct __MSSPCContext { void *x1; struct __CFString {} *x2; struct __CFString {} *x3; struct __CFDictionary {} *x4; double x5; int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); struct CFURLConnectionClient_V1 {} *x11; struct _CFURLConnection {} *x12; struct __CFData {} *x13; struct __CFHTTPMessage {} *x14; struct __CFError {} *x15; }*)arg1;
- (id)deviceInfoDict;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)abort;

@end
