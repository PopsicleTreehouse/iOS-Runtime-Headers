/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EBReaderSheetState;

@interface EBSheetContext : NSObject <OCDDelayedNodeContext> {
    EBReaderSheetState *mSheetState;
    unsigned int mSheetIndex;
}


- (void)dealloc;
- (bool)loadDelayedNode:(id)arg1;
- (id)initWithSheetIndex:(unsigned int)arg1 state:(id)arg2;

@end
