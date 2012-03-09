/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3EntityReplacer : NSObject  {
    struct __CFDictionary { } *_propertyToIndexPair;
    unsigned int _statementCount;
    struct sqlite3_stmt {} **_statements;
}

@property(getter=isOpen,readonly) BOOL open;


- (BOOL)perform;
- (void)dealloc;
- (void)close;
- (void)clearBindings;
- (void)bindPersistentID:(long long)arg1;
- (void)bindDouble:(double)arg1 forProperty:(id)arg2;
- (void)bindInt:(int)arg1 forProperty:(id)arg2;
- (void)bindNullForProperty:(id)arg1;
- (void)statementForProperty:(id)arg1 usingBlock:(id)arg2;
- (id)initWithEntityClass:(Class)arg1 properties:(id)arg2 databaseHandle:(struct sqlite3 { }*)arg3;
- (BOOL)isOpen;

@end
