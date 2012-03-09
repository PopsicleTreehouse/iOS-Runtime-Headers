/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSString, IMAccount;

@interface CNFRegAlias : NSObject  {
    NSString *_alias;
    IMAccount *_account;
}

@property(copy,readonly) NSString * displayName;
@property(retain,readonly) NSString * identifier;
@property(readonly) int type;
@property(retain) IMAccount * account;
@property(copy) NSString * alias;


- (void)setAccount:(id)arg1;
- (id)account;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (void)setAlias:(id)arg1;
- (id)alias;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (int)validationStatus;
- (BOOL)validate;
- (id)displayName;
- (int)type;
- (id)identifier;

@end
