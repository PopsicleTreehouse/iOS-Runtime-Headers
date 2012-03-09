/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, DOMHTMLFormElement, DOMValidityState, DOMNodeList;

@interface DOMHTMLKeygenElement : DOMHTMLElement  {
}

@property BOOL autofocus;
@property(copy) NSString * challenge;
@property BOOL disabled;
@property(retain,readonly) DOMHTMLFormElement * form;
@property(copy) NSString * keytype;
@property(copy) NSString * name;
@property(copy,readonly) NSString * type;
@property(readonly) BOOL willValidate;
@property(retain,readonly) DOMValidityState * validity;
@property(copy,readonly) NSString * validationMessage;
@property(retain,readonly) DOMNodeList * labels;


- (void)setName:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)disabled;
- (id)form;
- (id)type;
- (id)name;
- (id)challenge;
- (void)setChallenge:(id)arg1;
- (id)keytype;
- (void)setKeytype:(id)arg1;
- (id)validity;
- (BOOL)autofocus;
- (void)setAutofocus:(BOOL)arg1;
- (BOOL)willValidate;
- (id)validationMessage;
- (id)labels;
- (BOOL)checkValidity;
- (void)setCustomValidity:(id)arg1;

@end
