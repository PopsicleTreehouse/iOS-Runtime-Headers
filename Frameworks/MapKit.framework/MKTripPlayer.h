/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSArray, NSString, NSTimer, NSDate, MKTripPoint;

@interface MKTripPlayer : CLLocationManager  {
    NSString *_filePath;
    NSArray *_tripPoints;
    BOOL _isPlaying;
    NSDate *_startDate;
    double _lastTimeCL;
    NSTimer *_timer;
    NSTimer *_headingTimer;
    unsigned int _index;
    CLLocation *_prevLocation;
    MKTripPoint *_tripPoint;
    float _version;
    double _heading;
    double _headingAccuracy;
}

@property(retain) NSString * filePath;
@property(retain) NSArray * tripPoints;
@property(retain) NSDate * startDate;
@property(retain) NSTimer * timer;
@property(retain) NSTimer * headingTimer;
@property BOOL isPlaying;
@property(retain) CLLocation * prevLocation;
@property(readonly) double bestAccuracy;
@property(readonly) BOOL hasSpeed;
@property(retain) MKTripPoint * tripPoint;


- (void)dealloc;
- (BOOL)locationServicesApproved;
- (void)setHeadingFilter:(double)arg1;
- (BOOL)isPlaying;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)stop;
- (void)reset;
- (void)start;
- (void)playNextHeading;
- (BOOL)parseMKString:(id)arg1 tripPoint:(id*)arg2 timeElapsed:(double*)arg3;
- (BOOL)parseCLString:(id)arg1 tripPoint:(id*)arg2 timeElapsed:(double*)arg3;
- (BOOL)scanNextTripPoint:(id*)arg1;
- (id)headingTimer;
- (id)tripPoints;
- (id)prevLocation;
- (void)playNextTripPoint;
- (BOOL)_readVersion:(id*)arg1;
- (void)setTripPoint:(id)arg1;
- (void)setPrevLocation:(id)arg1;
- (void)setHeadingTimer:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTripPoints:(id)arg1;
- (id)tripPoint;
- (id)timer;
- (id)initWithFilePath:(id)arg1;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (BOOL)hasSpeed;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)hasHeading;
- (double)bestAccuracy;
- (void)setSupportInfo:(BOOL)arg1;

@end
