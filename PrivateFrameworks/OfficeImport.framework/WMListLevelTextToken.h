/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface WMListLevelTextToken : NSObject  {
    NSString *m_string;
    int m_level;
}

+ (id)tokenWithString:(id)arg1 andLevel:(int)arg2;

- (id)string;
- (void)dealloc;
- (int)level;
- (id)stringForIndex:(int)arg1 withFormat:(int)arg2 initialNumber:(int)arg3;
- (id)initWithString:(id)arg1 andLevel:(int)arg2;

@end
