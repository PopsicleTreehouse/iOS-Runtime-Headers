/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;

@interface SUScriptABMultiValue : SUScriptObject  {
    void *_multiValue;
}

@property(readonly) void* multiValue;
@property(readonly) long length;
@property(readonly) unsigned int propertyType;
@property(readonly) NSArray * values;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (long)length;
- (id)values;
- (id)attributeKeys;
- (void*)multiValue;
- (id)labelAtIndex:(long)arg1;
- (long)indexForIdentifier:(int)arg1;
- (int)identifierAtIndex:(long)arg1;
- (long)firstIndexOfValue:(id)arg1;
- (id)initWithMultiValue:(void*)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)valueAtIndex:(long)arg1;
- (unsigned int)propertyType;

@end
