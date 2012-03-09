/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, NSOrderedSet;

@interface UIKeyboardCandidateGroup : NSObject  {
    NSString *_title;
    NSOrderedSet *_candidates;
    NSArray *_nonExtensionCandidates;
}

@property(copy) NSString * title;
@property(copy) NSOrderedSet * candidates;
@property(retain) NSArray * nonExtensionCandidates;


- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)candidates;
- (void)dealloc;
- (void)addCandidate:(id)arg1;
- (void)setNonExtensionCandidates:(id)arg1;
- (id)mutableCandidates;
- (id)initWithTitle:(id)arg1 candidates:(id)arg2;
- (id)nonExtensionCandidates;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (void)setCandidates:(id)arg1;
- (id)title;
- (void)sortUsingComparator:(id)arg1;
- (void)setTitle:(id)arg1;

@end
