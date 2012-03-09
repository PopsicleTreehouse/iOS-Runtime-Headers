/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFContactsSearchManager, NSString, NSSet, NSNumber;

@interface MFContactsSearchOperation : NSOperation  {
    void *_addressBook;
    MFContactsSearchManager *_owner;
    NSNumber *_taskID;
    NSString *_text;
    NSSet *_properties;
}

@property(readonly) NSSet * properties;
@property(readonly) NSString * text;
@property(readonly) NSNumber * taskID;
@property(readonly) MFContactsSearchManager * owner;
@property(readonly) void* addressBook;

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;

- (void)dealloc;
- (void*)addressBook;
- (id)properties;
- (int)type;
- (id)text;
- (id)owner;
- (id)taskID;

@end
