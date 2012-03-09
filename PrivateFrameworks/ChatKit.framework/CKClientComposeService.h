/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray;

@interface CKClientComposeService : CKService  {
    struct _xpc_connection_s { } *_connection;
    NSArray *_recipients;
}

+ (void)_assertMFClient;
+ (id)sharedClientComposeService;

- (void)dealloc;
- (void)_disconnected;
- (BOOL)canSendMessageWithMediaObjectTypes:(int*)arg1;
- (int)maxRecipientCount;
- (BOOL)supportsMediaAttachments;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (int)maxAttachmentCount;
- (id)lookupRecipientsForConversation:(id)arg1;
- (id)createConversationWithRecipients:(id)arg1;
- (id)abPropertyTypes;
- (id)headerTitleForComposeRecipients:(id)arg1 mediaObjects:(id)arg2 subject:(id)arg3;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id*)arg3;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (id)copyEntityForAddressString:(id)arg1;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (void)sendMessage:(id)arg1;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (BOOL)isValidAddress:(id)arg1;
- (BOOL)restrictsMediaObjects;
- (BOOL)_disconnect;
- (BOOL)_connect;

@end
