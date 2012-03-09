/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;

@interface GMMHasTrafficRequest : GMMOldRequest  {
    GMMMapPoint *_mapPoint;
}

@property(retain) GMMMapPoint * mapPoint;


- (void)dealloc;
- (Class)responseClass;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (void)setMapPoint:(id)arg1;
- (id)mapPoint;

@end
