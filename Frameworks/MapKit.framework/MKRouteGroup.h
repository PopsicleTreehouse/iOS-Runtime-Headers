/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSMutableArray, NSArray;

@interface MKRouteGroup : NSObject <MKOverlay> {
    NSMutableArray *_routes;
}

@property(readonly) NSArray * routes;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) NSString * title;
@property(readonly) NSString * subtitle;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)removeAllRoutes;
- (void)replaceRouteAtIndex:(unsigned int)arg1 withRoute:(id)arg2;
- (void)addRoutes:(id)arg1;
- (id)initWithRoutes:(id)arg1;
- (unsigned int)routeCount;
- (unsigned int)indexOfRouteIdenticalTo:(id)arg1;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct { double x1; double x2; })coordinate;
- (id)routeAtIndex:(unsigned int)arg1;
- (void)addRoute:(id)arg1;
- (id)routes;

@end
