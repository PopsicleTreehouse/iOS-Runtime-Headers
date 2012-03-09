/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class <WebQuotaManager>, WebSecurityOriginPrivate;

@interface WebSecurityOrigin : NSObject  {
    WebSecurityOriginPrivate *_private;
    <WebQuotaManager> *_applicationCacheQuotaManager;
    <WebQuotaManager> *_databaseQuotaManager;
}


- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned long long)usage;
- (unsigned long long)quota;
- (id)databaseIdentifier;
- (struct SecurityOrigin { int x1; int x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_7_1_1; } x7; unsigned short x8; boolx9; boolx10; boolx11; boolx12; boolx13; }*)_core;
- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { int x1; int x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_7_1_1; } x7; unsigned short x8; boolx9; boolx10; boolx11; boolx12; boolx13; }*)arg1;
- (id)domain;
- (id)initWithURL:(id)arg1;
- (id)protocol;
- (unsigned short)port;
- (id)applicationCacheQuotaManager;
- (void)setQuota:(unsigned long long)arg1;
- (id)databaseQuotaManager;
- (void)finalize;
- (id)host;
- (id)toString;
- (id)safari_userVisibleName;
- (id)webui_userVisibleName;

@end
