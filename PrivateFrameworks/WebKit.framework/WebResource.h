/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying> {
    WebResourcePrivate *_private;
}


- (id)textEncodingName;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)_ignoreWhenUnarchiving;
- (id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3;
- (id)_suggestedFilename;
- (id)_response;
- (id)_stringValue;
- (id)frameName;
- (id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(BOOL)arg7;
- (struct ArchiveResource { int (**x1)(); int x2; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; int x_3_1_8; int x_3_1_9; int x_3_1_10; int x_3_1_11; int x_3_1_12; int x_3_1_13; } x3; struct ResourceResponse { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_4_1_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_4_1_2; long long x_4_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_4_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_4_1_5; int x_4_1_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_7_2_1; } x_4_1_7; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString,std::pair<WTF::AtomicString, WTF::String>,WTF::PairFirstExtractor<std::pair<WTF::AtomicString, WTF::String> >,WTF::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String> >,WTF::HashTraits<WTF::AtomicString> > { struct pair<WTF::AtomicString,WTF::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_8_2_1; } x_4_1_8; int x_4_1_9; unsigned int x_4_1_10 : 1; unsigned int x_4_1_11; unsigned int x_4_1_12 : 1; struct RefPtr<WebCore::ResourceLoadTiming> { struct ResourceLoadTiming {} *x_13_2_1; } x_4_1_13; struct RefPtr<WebCore::ResourceLoadInfo> { struct ResourceLoadInfo {} *x_14_2_1; } x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; unsigned int x_4_1_21 : 1; unsigned int x_4_1_22 : 1; unsigned int x_4_1_23 : 1; double x_4_1_24; double x_4_1_25; double x_4_1_26; double x_4_1_27; double x_4_1_28; struct RetainPtr<_CFURLResponse*> { struct _CFURLResponse {} *x_29_2_1; } x_4_1_29; struct RetainPtr<NSURLResponse> { id x_30_2_1; } x_4_1_30; int x_4_1_31; } x4; struct RefPtr<WebCore::SharedBuffer> { struct SharedBuffer {} *x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_7_1_1; } x7; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; boolx9; }*)_coreResource;
- (id)_initWithCoreResource:(struct PassRefPtr<WebCore::ArchiveResource> { struct ArchiveResource {} *x1; })arg1;
- (id)MIMEType;
- (id)URL;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;

@end
