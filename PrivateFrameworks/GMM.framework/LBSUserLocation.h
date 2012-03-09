/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSAddress, NSString, LBSPoint, NSMutableArray;

@interface LBSUserLocation : PBCodable  {
    LBSPoint *_latLng;
    NSString *_source;
    BOOL _hasAccuracy;
    int _accuracy;
    BOOL _hasConfidence;
    int _confidence;
    LBSAddress *_address;
    NSString *_misc;
    BOOL _hasObsolete;
    BOOL _obsolete;
    NSMutableArray *_features;
    NSString *_locationString;
    long long _timestamp;
    BOOL _hasLocType;
    int _locType;
}

@property(readonly) BOOL hasLatLng;
@property(retain) LBSPoint * latLng;
@property(readonly) BOOL hasSource;
@property(retain) NSString * source;
@property BOOL hasAccuracy;
@property int accuracy;
@property BOOL hasConfidence;
@property int confidence;
@property(readonly) BOOL hasAddress;
@property(retain) LBSAddress * address;
@property(readonly) BOOL hasMisc;
@property(retain) NSString * misc;
@property BOOL hasObsolete;
@property BOOL obsolete;
@property(retain) NSMutableArray * features;
@property(readonly) BOOL hasLocationString;
@property(retain) NSString * locationString;
@property long long timestamp;
@property BOOL hasLocType;
@property int locType;


- (id)description;
- (void)dealloc;
- (void)setAddress:(id)arg1;
- (id)address;
- (void)setSource:(id)arg1;
- (id)source;
- (id)dictionaryRepresentation;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)confidence;
- (BOOL)hasAddress;
- (id)misc;
- (int)locType;
- (void)setHasLocType:(BOOL)arg1;
- (BOOL)hasLocType;
- (BOOL)obsolete;
- (void)setHasObsolete:(BOOL)arg1;
- (BOOL)hasObsolete;
- (void)setHasConfidence:(BOOL)arg1;
- (BOOL)hasConfidence;
- (void)setHasAccuracy:(BOOL)arg1;
- (BOOL)hasAccuracy;
- (id)latLng;
- (BOOL)hasLocationString;
- (BOOL)hasMisc;
- (id)featureAtIndex:(unsigned int)arg1;
- (unsigned int)featuresCount;
- (BOOL)hasSource;
- (BOOL)hasLatLng;
- (void)setLocType:(int)arg1;
- (void)setObsolete:(BOOL)arg1;
- (void)addFeature:(id)arg1;
- (void)setLocationString:(id)arg1;
- (void)setMisc:(id)arg1;
- (int)accuracy;
- (void)setConfidence:(int)arg1;
- (void)setAccuracy:(int)arg1;
- (void)setFeatures:(id)arg1;
- (id)features;
- (id)locationString;
- (void)setLatLng:(id)arg1;

@end
