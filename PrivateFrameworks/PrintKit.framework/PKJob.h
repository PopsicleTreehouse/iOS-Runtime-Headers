/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString, PKPrintSettings, NSDate, NSData;

@interface PKJob : NSObject  {
    int number;
    int mediaProgress;
    int mediaSheets;
    int mediaSheetsCompleted;
    NSString *printerDisplayName;
    int printerKind;
    NSString *printerLocation;
    PKPrintSettings *settings;
    int state;
    NSDate *timeAtCompleted;
    NSDate *timeAtCreation;
    NSDate *timeAtProcessing;
    NSData *thumbnailImage;
}

@property(retain) NSData * thumbnailImage;
@property(retain) NSDate * timeAtProcessing;
@property(retain) NSDate * timeAtCreation;
@property(retain) NSDate * timeAtCompleted;
@property int state;
@property(retain) PKPrintSettings * settings;
@property(retain) NSString * printerLocation;
@property int printerKind;
@property(retain) NSString * printerDisplayName;
@property int mediaSheetsCompleted;
@property int mediaSheets;
@property int mediaProgress;
@property int number;

+ (id)currentJob;
+ (id)jobs;

- (int)cancel;
- (int)mediaProgress;
- (void)setMediaProgress:(int)arg1;
- (void)setMediaSheets:(int)arg1;
- (void)setMediaSheetsCompleted:(int)arg1;
- (void)setPrinterDisplayName:(id)arg1;
- (void)setPrinterKind:(int)arg1;
- (void)setPrinterLocation:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setTimeAtCompleted:(id)arg1;
- (void)setTimeAtCreation:(id)arg1;
- (void)setTimeAtProcessing:(id)arg1;
- (void)setNumber:(int)arg1;
- (id)thumbnailImage;
- (int)number;
- (int)mediaSheetsCompleted;
- (int)mediaSheets;
- (id)timeAtCompleted;
- (id)timeAtProcessing;
- (id)timeAtCreation;
- (int)printerKind;
- (id)printerLocation;
- (id)printerDisplayName;
- (id)settings;
- (int)update;
- (void)setState:(int)arg1;
- (int)state;
- (void)setThumbnailImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
