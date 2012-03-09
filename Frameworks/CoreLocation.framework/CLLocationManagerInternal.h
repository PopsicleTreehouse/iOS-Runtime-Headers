/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class <CLLocationManagerDelegate>;

@interface CLLocationManagerInternal : NSObject  {
    struct __CLClient { } *fClient;
    <CLLocationManagerDelegate> *fDelegate;
    double fDistanceFilter;
    double fDesiredAccuracy;
    BOOL fUpdatingLocation;
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
    } fLocation;
    BOOL fCapabilitiesValid;
    struct { 
        double bestAccuracy; 
    } fCapabilities;
    BOOL fUpdatingHeading;
    double fHeadingFilter;
    int fHeadingOrientation;
    BOOL fPersistentMonitoringEnabled;
    BOOL fLocationServicesPreferencesDialogEnabled;
    BOOL fPreviousAuthorizationStatusValid;
    int fPreviousAuthorizationStatus;
}


- (void)dealloc;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;

@end
