/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAResponse : DAAction  {
    int _status;
}

@property(readonly) int status;


- (int)status;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(int)arg4;

@end
