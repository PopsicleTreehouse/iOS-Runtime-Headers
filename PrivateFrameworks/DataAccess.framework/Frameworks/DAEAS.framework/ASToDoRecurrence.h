/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSDate, NSNumber, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSCoding> {
    ASToDo *_parentToDo;
    NSDate *_startTime;
    NSNumber *_regenerate;
    NSNumber *_deadOccur;
}

@property(retain) NSDate * startTime;
@property(retain) NSNumber * regenerate;
@property(retain) NSNumber * deadOccur;

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (void)dealloc;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_transformedUntilDateForActiveSync:(id)arg1;
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1;
- (BOOL)_requiresParentEvent;
- (id)deadOccur;
- (id)regenerate;
- (void)setRegenerate:(id)arg1;
- (void)setStartTimeString:(id)arg1;
- (void)setUntilString:(id)arg1;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)saveToCalendarWithParentASToDo:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4;
- (void)setDeadOccur:(id)arg1;
- (id)initWithCalRecurrence:(void*)arg1 parentToDo:(id)arg2;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
