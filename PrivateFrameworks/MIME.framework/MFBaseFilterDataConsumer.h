/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableArray, NSArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
    NSMutableArray *_consumers;
    BOOL _serialAppend;
}

@property(readonly) NSArray * consumers;
@property(getter=isSerialAppend) BOOL serialAppend;

+ (id)filterWithConsumers:(id)arg1;
+ (id)filterWithConsumer:(id)arg1;

- (id)initWithConsumer:(id)arg1;
- (void)dealloc;
- (id)consumers;
- (BOOL)isSerialAppend;
- (void)setSerialAppend:(BOOL)arg1;
- (id)initWithConsumers:(id)arg1;
- (int)appendData:(id)arg1;
- (void)done;

@end
