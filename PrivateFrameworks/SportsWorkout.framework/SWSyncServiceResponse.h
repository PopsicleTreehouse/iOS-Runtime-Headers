/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSError, NSString, NSMutableString;

@interface SWSyncServiceResponse : NSObject <NSXMLParserDelegate> {
    BOOL _hasFoundRootElement;
    NSError *_validationError;
    NSMutableString *_status;
    NSMutableString *_pin;
    NSMutableString *_pinStatus;
    NSMutableString *_email;
    NSMutableString *_screenName;
    NSMutableString *_token;
    NSMutableString *_serviceException;
    NSString *_errorCode;
    NSString *_currentLeafElement;
}

@property(readonly) NSString * status;
@property(readonly) NSString * pin;
@property(readonly) NSString * pinStatus;
@property(readonly) NSString * email;
@property(readonly) NSString * screenName;
@property(readonly) NSString * token;
@property(readonly) NSString * serviceException;
@property(readonly) NSString * errorCode;


- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)dealloc;
- (id)pin;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)email;
- (id)status;
- (id)errorCode;
- (id)token;
- (id)serviceException;
- (id)screenName;
- (id)pinStatus;

@end
