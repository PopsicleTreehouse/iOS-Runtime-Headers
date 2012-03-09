/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGGeocodeRequest, LBSGCellularProfile, LBSGLocation;

@interface LBSGLocRequestElement : PBCodable  {
    LBSGCellularProfile *_cellularProfile;
    LBSGLocation *_location;
    LBSGGeocodeRequest *_geocode;
}

@property(readonly) BOOL hasCellularProfile;
@property(retain) LBSGCellularProfile * cellularProfile;
@property(readonly) BOOL hasLocation;
@property(retain) LBSGLocation * location;
@property(readonly) BOOL hasGeocode;
@property(retain) LBSGGeocodeRequest * geocode;


- (id)description;
- (void)dealloc;
- (BOOL)hasLocation;
- (id)dictionaryRepresentation;
- (id)location;
- (void)setLocation:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)cellularProfile;
- (BOOL)hasCellularProfile;
- (void)setCellularProfile:(id)arg1;
- (void)setGeocode:(id)arg1;
- (id)geocode;
- (BOOL)hasGeocode;

@end
