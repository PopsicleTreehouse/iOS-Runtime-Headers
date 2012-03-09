/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject  {
    struct { int x1; int x2; } *_vertices;
    NSMutableArray *_trafficSegments;
    double _expirationTime;
}

@property struct { int x1; int x2; }* vertices;
@property(retain) NSMutableArray * trafficSegments;
@property double expirationTime;

+ (id)createWithData:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
+ (double)expirationTimeInterval;

- (void)dealloc;
- (id)initWithData:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (struct { int x1; int x2; }*)vertices;
- (id)trafficSegments;
- (double)expirationTime;
- (void)setExpirationTime:(double)arg1;
- (void)setTrafficSegments:(id)arg1;
- (void)setVertices:(struct { int x1; int x2; }*)arg1;
- (id)initWithGMMData:(id)arg1 key:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;

@end
