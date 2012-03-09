/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ACSystemConfigManager : NSObject  {
    void *_prefs;
    BOOL _notifyForExternalChangeOnly;
    int _applySkipCount;
}


- (id)init;
- (void)dealloc;
- (void*)getValueForKey:(id)arg1;
- (void)notifyTarget:(unsigned int)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (void)setCallback:(int (*)())arg1 withContext:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2;
- (void)refresh;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
- (void)synchronize;
- (void)setValue:(void*)arg1 forKey:(id)arg2;

@end
