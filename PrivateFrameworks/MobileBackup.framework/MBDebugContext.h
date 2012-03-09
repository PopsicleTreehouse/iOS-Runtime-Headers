/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSDate, NSMutableDictionary;

@interface MBDebugContext : NSObject  {
    NSMutableDictionary *_dictionary;
}

@property(readonly) int time;
@property(retain) NSDate * simulatedDate;

+ (id)defaultDebugContext;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)valueForName:(id)arg1;
- (void)setValue:(id)arg1 forName:(id)arg2;
- (long)time;
- (void)setSimulatedDate:(id)arg1;
- (BOOL)isFlagSet:(id)arg1;
- (void)setFlag:(id)arg1;
- (void)setBool:(BOOL)arg1 forName:(id)arg2;
- (BOOL)boolForName:(id)arg1;
- (void)setInt:(int)arg1 forName:(id)arg2;
- (int)intForName:(id)arg1;
- (void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3;
- (id)performSelectorForName:(id)arg1;
- (id)performSelectorForName:(id)arg1 withObject:(id)arg2;
- (BOOL)eval:(id)arg1;
- (id)simulatedDate;
- (void)removeValueForName:(id)arg1;

@end
