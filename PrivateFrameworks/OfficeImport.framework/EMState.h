/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDSheet, EDWorkbook;

@interface EMState : CMState  {
    EDWorkbook *_workbook;
    EDSheet *_currentSheet;
}

@property EDSheet * currentSheet;
@property(retain) EDWorkbook * workbook;


- (void)dealloc;
- (void)setWorkbook:(id)arg1;
- (void)setCurrentSheet:(id)arg1;
- (id)currentSheet;
- (id)workbook;

@end
