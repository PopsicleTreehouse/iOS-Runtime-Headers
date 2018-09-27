/* Generated by RuntimeBrowser.
 */

@protocol WKActionSheetAssistantDelegate <NSObject>

@required

- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(WKActionSheetAssistant *)arg1 decideActionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 performAction:(int)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shareElementWithURL:(NSURL *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (struct optional<WebKit::InteractionInformationAtPosition> { bool x1; union storage_t<WebKit::InteractionInformationAtPosition> { unsigned char x_2_1_1; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_4_1; int x_1_4_2; } x_1_3_1; bool x_1_3_2; bool x_1_3_3; } x_2_2_1; bool x_2_2_2; bool x_2_2_3; bool x_2_2_4; bool x_2_2_5; bool x_2_2_6; bool x_2_2_7; bool x_2_2_8; bool x_2_2_9; bool x_2_2_10; bool x_2_2_11; bool x_2_2_12; struct FloatPoint { float x_13_3_1; float x_13_3_2; } x_2_2_13; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_14_3_1; unsigned int x_14_3_2 : 1; unsigned int x_14_3_3 : 1; unsigned int x_14_3_4 : 1; unsigned int x_14_3_5 : 3; unsigned int x_14_3_6 : 26; unsigned int x_14_3_7; unsigned int x_14_3_8; unsigned int x_14_3_9; unsigned int x_14_3_10; unsigned int x_14_3_11; unsigned int x_14_3_12; unsigned int x_14_3_13; } x_2_2_14; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_15_3_1; unsigned int x_15_3_2 : 1; unsigned int x_15_3_3 : 1; unsigned int x_15_3_4 : 1; unsigned int x_15_3_5 : 3; unsigned int x_15_3_6 : 26; unsigned int x_15_3_7; unsigned int x_15_3_8; unsigned int x_15_3_9; unsigned int x_15_3_10; unsigned int x_15_3_11; unsigned int x_15_3_12; unsigned int x_15_3_13; } x_2_2_15; } x_2_1_2; } x2; })positionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@optional

- (void)actionSheetAssistant:(void *)arg1 getAlternateURLForImage:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: WKActionSheetAssistant *, UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDictionary *, void*
- (bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 willStartInteractionWithElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistantDidStopInteraction:(WKActionSheetAssistant *)arg1;
- (NSDictionary *)dataDetectionContextForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (NSString *)selectedTextForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (void)updatePositionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@end