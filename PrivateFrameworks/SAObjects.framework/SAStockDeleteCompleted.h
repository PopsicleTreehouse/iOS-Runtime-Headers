/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAStockDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * results;
@property(copy) NSArray * stocks;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)deleteCompleted;
+ (id)deleteCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)results;
- (void)setResults:(id)arg1;
- (id)stocks;
- (void)setStocks:(id)arg1;
- (id)encodedClassName;

@end
