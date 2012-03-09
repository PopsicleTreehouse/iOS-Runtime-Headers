/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSBundle, NSMutableDictionary, NSArray;

@interface Decomposer : NSObject  {
    NSArray *_availableSoundFiles;
    NSMutableDictionary *_cache;
    int _iterations;
    bool_debugging;
    id _delegate;
    NSBundle *_bundle;
}

@property id delegate;


- (void)dealloc;
- (id)optimalDecompositionOf:(id)arg1 isSubsetOfWhole:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)optimalDecompositionOf:(id)arg1;
- (id)initWithDirectory:(id)arg1 bundle:(id)arg2;

@end
