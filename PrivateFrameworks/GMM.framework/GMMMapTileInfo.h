/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMCopyright;

@interface GMMMapTileInfo : PBCodable  {
    GMMCopyright *_copyright;
}

@property(readonly) BOOL hasCopyright;
@property(retain) GMMCopyright * copyright;


- (id)description;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setCopyright:(id)arg1;
- (id)copyright;
- (BOOL)hasCopyright;

@end
