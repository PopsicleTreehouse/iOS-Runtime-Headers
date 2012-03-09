/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKMessage;

@interface CKMessageLinkedComposition : CKMessageComposition  {
    CKMessage *_message;
}

@property(retain) CKMessage * message;


- (id)markupString;
- (id)subject;
- (void)dealloc;
- (id)textString;
- (id)message;
- (void)setMessage:(id)arg1;
- (BOOL)isTextOnly;
- (id)resources;

@end
