/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;

@interface ABPersonLinkedInfo : NSObject  {
    NSString *_type;
    NSString *_name;
    void *_person;
    BOOL _unified;
}

@property(getter=isUnified) BOOL unified;
@property void* person;
@property(retain) NSString * name;
@property(retain) NSString * type;


- (void)setName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (BOOL)isUnified;
- (void)setUnified:(BOOL)arg1;
- (void)setPerson:(void*)arg1;
- (void*)person;
- (id)type;
- (id)name;
- (void)setType:(id)arg1;

@end
