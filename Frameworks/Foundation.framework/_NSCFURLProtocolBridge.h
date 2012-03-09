/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLAuthenticationChallenge, NSURLProtocol;

@interface _NSCFURLProtocolBridge : NSObject <NSURLProtocolClient> {
    NSURLProtocol *_nsProt;
    struct _CFURLProtocol { } *_cfProt;
    struct _CFURLAuthChallenge { } *_cfChallenge;
    NSURLAuthenticationChallenge *_nsChallenge;
    BOOL _loading;
}

+ (void)registerWithCFURLProtocol;
+ (void)permitRequest:(struct _CFURLRequest { }*)arg1;
+ (void)barRequest:(struct _CFURLRequest { }*)arg1;

- (void)bridgeRelease;
- (void)bridgeRetain;
- (void)useCredential:(struct _CFURLCredential { }*)arg1 forChallenge:(struct _CFURLAuthChallenge { }*)arg2;
- (void)_forgetClient;
- (void)halt;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)didReceiveAuthenticationChallenge:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didFinishLoading;
- (void)didLoadData:(id)arg1 lengthReceived:(long long)arg2;
- (void)didReceiveResponse:(id)arg1;
- (void)cachedResponseIsValid:(id)arg1;
- (void)wasRedirectedToRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)pushEvent:(id)arg1 from:(const char *)arg2;
- (void)unschedule:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)schedule:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (id)initWithCFURLProtocol:(struct _CFURLProtocol { }*)arg1 request:(id)arg2 protocolClass:(Class)arg3;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2 lengthReceived:(long long)arg3;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned int)arg3;
- (id)description;
- (void)dealloc;
- (void)resume;
- (void)stop;
- (void)start;

@end
