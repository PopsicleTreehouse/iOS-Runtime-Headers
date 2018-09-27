/* Generated by RuntimeBrowser.
 */

@protocol VKMapViewDelegate <NSObject>

@optional

- (void)mapLayer:(VKMapView *)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
- (void)mapLayer:(VKMapView *)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)mapLayer:(VKMapView *)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canShowFlyoverDidChange:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canZoomInDidChange:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canZoomOutDidChange:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 didBecomePitched:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 didEncounterARError:(NSError *)arg2;
- (void)mapLayer:(VKMapView *)arg1 didFinishChangingMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg2;
- (void)mapLayer:(VKMapView *)arg1 didStopFlyoverTourCompleted:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverTourLabelDidChange:(NSString *)arg2;
- (void)mapLayer:(VKMapView *)arg1 labelMarkerDidChangeState:(VKLabelMarker *)arg2;
- (<VKTrackableAnnotationPresentation> *)mapLayer:(VKMapView *)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerDidChangeState:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 showingFlyoverDidChange:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 venueWithFocusDidChange:(VKVenueFeatureMarker *)arg2 building:(VKVenueBuildingFeatureMarker *)arg3;
- (void)mapLayer:(VKMapView *)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapLayerARSessionInterruptionEnded:(VKMapView *)arg1;
- (void)mapLayerDidBecomeFullyDrawn:(VKMapView *)arg1 hasFailedTiles:(bool)arg2;
- (void)mapLayerDidBecomePartiallyDrawn:(VKMapView *)arg1;
- (void)mapLayerDidChangeVisibleRegion:(VKMapView *)arg1;
- (void)mapLayerDidDraw:(VKMapView *)arg1;
- (void)mapLayerDidEnterAR:(VKMapView *)arg1;
- (void)mapLayerDidExitAR:(VKMapView *)arg1;
- (void)mapLayerDidFailLoadingTiles:(VKMapView *)arg1 withError:(NSError *)arg2;
- (void)mapLayerDidFinishInitialTrackingAnimation:(VKMapView *)arg1;
- (void)mapLayerDidFinishLoadingTiles:(VKMapView *)arg1;
- (void)mapLayerDidReloadStylesheet:(VKMapView *)arg1;
- (void)mapLayerDidStartLoadingTiles:(VKMapView *)arg1;
- (void)mapLayerLabelsDidLayout:(VKMapView *)arg1;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom:(VKMapView *)arg1;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom:(VKMapView *)arg1;
- (void)mapLayerNavigationCameraHasStartedPanning:(VKMapView *)arg1;
- (void)mapLayerNavigationCameraHasStoppedPanning:(VKMapView *)arg1;
- (void)mapLayerWillEnterAR:(VKMapView *)arg1;
- (void)mapLayerWillExitAR:(VKMapView *)arg1;
- (void)mapLayerWillStartFlyoverTour:(VKMapView *)arg1;

@end