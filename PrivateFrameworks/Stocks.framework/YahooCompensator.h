/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class Stock, NSLock, NSMutableArray, SymbolValidator;

@interface YahooCompensator : NSObject  {
    BOOL _compensatedForAllStocks;
    SymbolValidator *_validator;
    NSMutableArray *_stockQueue;
    NSLock *_stockQueueLock;
    Stock *_currentStock;
}

+ (id)sharedCompensator;
+ (BOOL)compensationRequired;

- (id)init;
- (void)dealloc;
- (void)compensateForStock:(id)arg1;
- (void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2;
- (void)symbolValidator:(id)arg1 didFailWithError:(id)arg2;
- (void)_compensateForNextStock;
- (void)compensateForAllStocks;
- (void)reset;

@end
