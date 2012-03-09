/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSSQLAliasGenerator : NSObject  {
    unsigned int _nextTableAlias;
    unsigned int _nextVariableAlias;
    NSString *_tableBase;
    NSString *_variableBase;
}


- (id)init;
- (void)dealloc;
- (id)generateTableAlias;
- (id)generateSubqueryVariableAlias;
- (id)initWithNestingLevel:(unsigned int)arg1;

@end
