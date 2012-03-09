/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSDictionary, NSString, EKLocation;

@interface EKReminderLocationItem : NSObject  {
    NSString *_label;
    EKLocation *_location;
    NSDictionary *_addressDictionary;
    BOOL _isLocationBeingDetermined;
}

@property(retain) NSString * label;
@property(retain) EKLocation * location;
@property(retain) NSDictionary * addressDictionary;
@property BOOL isLocationBeingDetermined;


- (id)description;
- (void)dealloc;
- (void)setIsLocationBeingDetermined:(BOOL)arg1;
- (void)setAddressDictionary:(id)arg1;
- (BOOL)isLocationBeingDetermined;
- (id)stringForSubtitle;
- (id)location;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)addressDictionary;

@end
