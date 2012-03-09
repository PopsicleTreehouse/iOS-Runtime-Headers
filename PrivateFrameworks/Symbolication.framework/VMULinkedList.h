/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMULinkedListEntry;

@interface VMULinkedList : NSObject  {
    VMULinkedListEntry *_head;
    VMULinkedListEntry *_tail;
}

+ (id)linkedList;

- (id)init;
- (void)pushHead:(id)arg1;
- (id)popTail;
- (void)removeAllObjects;
- (void)remove:(id)arg1;
- (id)head;
- (id)tail;

@end
