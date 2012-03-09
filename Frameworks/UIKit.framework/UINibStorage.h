/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINibDecoder, NSString, NSData, NSBundle;

@interface UINibStorage : NSObject  {
    NSString *bundleResourceName;
    NSBundle *bundle;
    NSData *archiveData;
    UINibDecoder *nibDecoder;
    BOOL instantiatingForSimulator;
    BOOL captureEnclosingNIBBundleOnDecode;
}

@property(copy) NSString * bundleResourceName;
@property(retain) NSBundle * bundle;
@property(copy) NSData * archiveData;
@property(retain) UINibDecoder * nibDecoder;
@property BOOL instantiatingForSimulator;
@property BOOL captureEnclosingNIBBundleOnDecode;


- (void)dealloc;
- (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)arg1;
- (BOOL)captureEnclosingNIBBundleOnDecode;
- (void)setInstantiatingForSimulator:(BOOL)arg1;
- (BOOL)instantiatingForSimulator;
- (void)setNibDecoder:(id)arg1;
- (id)nibDecoder;
- (void)setArchiveData:(id)arg1;
- (id)archiveData;
- (void)setBundle:(id)arg1;
- (void)setBundleResourceName:(id)arg1;
- (id)bundleResourceName;
- (id)bundle;

@end
