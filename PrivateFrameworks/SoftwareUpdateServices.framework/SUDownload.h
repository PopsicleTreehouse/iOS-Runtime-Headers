/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class SUOperationProgress, SUDescriptor, SUDownloadMetadata;

@interface SUDownload : NSObject <NSCoding, NSCopying> {
    SUDescriptor *_descriptor;
    SUOperationProgress *_progress;
    SUDownloadMetadata *_metadata;
}

@property(retain) SUDescriptor * descriptor;
@property(retain) SUOperationProgress * progress;
@property(retain) SUDownloadMetadata * metadata;


- (void)setDescriptor:(id)arg1;
- (id)descriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)progress;
- (void)setProgress:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;

@end
