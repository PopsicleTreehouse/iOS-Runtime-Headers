/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUSymbolOwner, NSString;

@interface VMURegion : VMUAddressRange <NSCoding, NSCopying> {
    VMUSymbolOwner *_owner;
    NSString *_name;
}

+ (id)regionWithOwner:(id)arg1 name:(id)arg2 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 name:(id)arg2 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3;
- (BOOL)isEqualToRegion:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (int)compare:(id)arg1;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)owner;

@end
