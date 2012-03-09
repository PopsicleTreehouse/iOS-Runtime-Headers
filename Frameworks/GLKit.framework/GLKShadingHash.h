/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class NSMutableDictionary, NSLock;

@interface GLKShadingHash : NSObject  {
    NSLock *_vshLock;
    NSLock *_fshLock;
    NSMutableDictionary *_compiledVshs;
    NSMutableDictionary *_compiledFshs;
}


- (id)init;
- (void)dealloc;
- (void)setCompiledFsh:(id)arg1 forKey:(id)arg2;
- (id)compiledFshForKey:(id)arg1;
- (void)setCompiledVsh:(id)arg1 forKey:(id)arg2;
- (id)compiledVshForKey:(id)arg1;

@end
