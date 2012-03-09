/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSURLRequestProperties, NSURLRequest, <SSURLConnectionRequestDelegate>;

@interface SSURLConnectionRequest : SSRequest <SSCoding> {
    SSURLRequestProperties *_requestProperties;
}

@property(readonly) NSURLRequest * URLRequest;
@property(readonly) SSURLRequestProperties * requestProperties;
@property <SSURLConnectionRequestDelegate> * delegate;


- (id)initWithURLRequest:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)URLRequest;
- (id)initWithRequestProperties:(id)arg1;
- (id)requestProperties;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end
