/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebFormControl>, DOMHTMLInputElement;

@interface UIWebDateTimePeripheral : NSObject <UIFormPeripheral> {
    DOMHTMLInputElement *_inputElement;
    <UIWebFormControl> *_control;
}

@property(retain) DOMHTMLInputElement * _inputElement;
@property(retain) <UIWebFormControl> * _control;

+ (id)createPeripheralWithDOMHTMLInputElement:(id)arg1;

- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1;
- (void)set_control:(id)arg1;
- (int)_datePickerModeForInputType:(id)arg1;
- (id)_inputElement;
- (void)set_inputElement:(id)arg1;
- (id)assistantView;
- (void)beginEditing;
- (id)_control;

@end
