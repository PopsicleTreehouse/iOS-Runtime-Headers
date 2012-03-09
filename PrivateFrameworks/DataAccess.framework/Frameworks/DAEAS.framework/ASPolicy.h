/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSString;

@interface ASPolicy : ASItem  {
    NSString *_type;
    NSString *_key;
    NSString *_status;
}

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (void)_setKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (int)status;
- (id)key;
- (id)type;
- (void)_setStatus:(id)arg1;
- (void)_setType:(id)arg1;
- (id)perDomainDictsForPolicy;
- (id)asParseRules;

@end
