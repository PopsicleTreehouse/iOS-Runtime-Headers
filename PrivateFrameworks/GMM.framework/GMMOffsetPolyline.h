/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMGeometry, NSData;

@interface GMMOffsetPolyline : PBCodable  {
    GMMGeometry *_absolutePoint;
    NSData *_relativePoints;
}

@property(retain) GMMGeometry * absolutePoint;
@property(readonly) BOOL hasRelativePoints;
@property(retain) NSData * relativePoints;


- (id)description;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)relativePoints;
- (id)absolutePoint;
- (BOOL)hasRelativePoints;
- (void)setRelativePoints:(id)arg1;
- (void)setAbsolutePoint:(id)arg1;

@end
