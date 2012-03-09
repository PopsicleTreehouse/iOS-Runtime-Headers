/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDRoot, GQDSStylesheet;

@interface GQDSStylesheet : NSObject  {
    GQDRoot *mRoot;
    GQDSStylesheet *mParent;
    struct __CFDictionary { } *mIdentifiedStyles;
    struct __CFArray { } *mStylesNeedingParentResolutionInParent;
    struct __CFArray { } *mStylesNeedingParentResolution;
}


- (void)dealloc;
- (id)parent;
- (id)initWithRoot:(id)arg1;
- (void)addStyle:(id)arg1 withOwnedIdentifier:(char *)arg2;
- (id)styleWithXmlUid:(const char *)arg1;
- (void)addStyle:(id)arg1 needingParentResolution:(const char *)arg2 resolveInParent:(BOOL)arg3;
- (void)resolveStyleParents;
- (struct __CFArray { }*)retainedArrayOfIdentifiedStyles;
- (id)styleWithIdentifier:(const char *)arg1;
- (BOOL)addStyle:(id)arg1 withOwnedXmlUid:(char *)arg2;

@end
