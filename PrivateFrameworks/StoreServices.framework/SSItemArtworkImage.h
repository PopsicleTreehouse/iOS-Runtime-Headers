/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSURL, NSMutableDictionary, NSString;

@interface SSItemArtworkImage : NSObject <SSCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
    NSString *_imageKind;
}

@property(readonly) int height;
@property(readonly) int width;
@property(copy) NSString * imageKind;
@property(readonly) int imageOrientation;
@property(readonly) float imageScale;
@property(getter=isPrerendered,readonly) BOOL prerendered;
@property(retain) NSURL * URL;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;


- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isPrerendered;
- (int)height;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)URL;
- (struct CGSize { float x1; float x2; })imageSize;
- (int)width;
- (int)imageOrientation;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)imageKind;
- (float)imageScale;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;
- (void)setImageKind:(id)arg1;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;

@end
