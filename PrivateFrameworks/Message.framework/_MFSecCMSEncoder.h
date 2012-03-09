/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer  {
    int _SecCMSError;
    struct SecCmsEncoderStr { } *_encoder;
    struct SecCmsMessageStr { } *_message;
    NSMutableData *_singleShot;
}

@property(readonly) int lastSecCMSError;


- (void)_appendBytes:(const void*)arg1 length:(unsigned long)arg2;
- (int)lastSecCMSError;
- (id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id*)arg3;
- (id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (int)appendData:(id)arg1;
- (void)done;
- (id)data;

@end
