/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEOLocation : PBCodable  {
    GEOLatLng *_latLng;
    BOOL _hasType;
    int _type;
    BOOL _hasTimestamp;
    double _timestamp;
    BOOL _hasAltitude;
    int _altitude;
    BOOL _hasHorizontalAccuracy;
    double _horizontalAccuracy;
    BOOL _hasVerticalAccuracy;
    double _verticalAccuracy;
    BOOL _hasSpeed;
    double _speed;
    BOOL _hasHeading;
    double _heading;
    BOOL _hasCourse;
    double _course;
}

@property(retain) GEOLatLng * latLng;
@property BOOL hasType;
@property int type;
@property BOOL hasTimestamp;
@property double timestamp;
@property BOOL hasAltitude;
@property int altitude;
@property BOOL hasHorizontalAccuracy;
@property double horizontalAccuracy;
@property BOOL hasVerticalAccuracy;
@property double verticalAccuracy;
@property BOOL hasSpeed;
@property double speed;
@property BOOL hasHeading;
@property double heading;
@property BOOL hasCourse;
@property double course;


- (id)description;
- (void)dealloc;
- (void)setHasCourse:(BOOL)arg1;
- (BOOL)hasCourse;
- (void)setHasSpeed:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (int)type;
- (double)timestamp;
- (double)speed;
- (void)setType:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (id)initWithGEOCoordinate:(struct { double x1; double x2; })arg1;
- (void)setSpeed:(double)arg1;
- (int)altitude;
- (double)verticalAccuracy;
- (double)course;
- (double)horizontalAccuracy;
- (double)heading;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasSpeed;
- (BOOL)hasType;
- (void)setHasHorizontalAccuracy:(BOOL)arg1;
- (BOOL)hasHorizontalAccuracy;
- (void)writeTo:(id)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHasHeading:(BOOL)arg1;
- (BOOL)hasHeading;
- (void)setHasVerticalAccuracy:(BOOL)arg1;
- (BOOL)hasVerticalAccuracy;
- (void)setHasAltitude:(BOOL)arg1;
- (BOOL)hasAltitude;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)latLng;
- (void)setCourse:(double)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (void)setAltitude:(int)arg1;
- (void)setLatLng:(id)arg1;
- (void)setHeading:(double)arg1;
- (id)_initWithCLClientLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; }*)arg1;

@end
