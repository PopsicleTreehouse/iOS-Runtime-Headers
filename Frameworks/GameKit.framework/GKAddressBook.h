/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSOperationQueue;

@interface GKAddressBook : NSObject  {
    NSOperationQueue *_searchQueue;
}

@property(retain) NSOperationQueue * searchQueue;

+ (id)sharedAddressBook;
+ (id)fullNameWithFirstName:(id)arg1 lastName:(id)arg2;

- (void)dealloc;
- (void)setSearchQueue:(id)arg1;
- (void)acquireNamesForEmailAddresses:(id)arg1 completionHandler:(id)arg2;
- (id)searchQueue;
- (id)_emailSearchPredicateForEmails:(id)arg1;

@end
