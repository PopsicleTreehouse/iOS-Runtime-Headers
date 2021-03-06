/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDADeferredDeleteMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {
    NSString * _folderID;
}

+ (bool)supportsSecureCoding;

- (void)applyToFolderMap:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)folderChangeResult;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderID:(id)arg1;
- (bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end
