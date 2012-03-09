/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject  {
    id _delegate;
    BOOL _browsing;
    NSMutableArray *_internalDevices;
}

@property(retain) NSMutableArray * internalDevices;
@property(getter=isBrowsing) BOOL browsing;
@property id delegate;


- (void)dealloc;
- (void)setInternalDevices:(id)arg1;
- (BOOL)isBrowsing;
- (void)setBrowsing:(BOOL)arg1;
- (id)internalDevices;
- (void)finalize;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
