/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSError, NSString;

@interface NSFilesystemItemMoveOperation : NSOperation  {
    id _delegate;
    NSString *_sourcePath;
    NSString *_destinationPath;
    NSError *_error;
}

+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (id)filesystemItemMoveOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;

- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;
- (void)_setError:(id)arg1;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (void)main;
- (void)dealloc;
- (id)error;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
