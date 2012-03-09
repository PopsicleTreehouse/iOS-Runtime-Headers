/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDirectionsIconRequest, GMMMapInfo, NSMutableArray, GMMDateTime;

@interface GMMDirectionsRequest : PBRequest  {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _modes;
    NSMutableArray *_waypoints;
    GMMDateTime *_requestedDateTime;
    BOOL _hasRequestedTimeType;
    int _requestedTimeType;
    BOOL _hasTripMaxCount;
    int _tripMaxCount;
    GMMDirectionsIconRequest *_iconRequest;
    BOOL _hasRequestedResultType;
    int _requestedResultType;
    BOOL _hasResultPageOffset;
    int _resultPageOffset;
    GMMMapInfo *_mapViewport;
    NSMutableArray *_options;
    BOOL _hasIncludeStreetViewPanoId;
    BOOL _includeStreetViewPanoId;
    BOOL _hasAddStepNoticesToInstructionText;
    BOOL _addStepNoticesToInstructionText;
    BOOL _hasIncludeStructuredInstructions;
    BOOL _includeStructuredInstructions;
    BOOL _hasReturnMultipleRoutes;
    BOOL _returnMultipleRoutes;
    BOOL _hasIncludeNonTransitAlternates;
    BOOL _includeNonTransitAlternates;
    BOOL _hasAltTripsMaxPoints;
    int _altTripsMaxPoints;
}

@property(readonly) unsigned int modesCount;
@property(readonly) int* modes;
@property(retain) NSMutableArray * waypoints;
@property(readonly) BOOL hasRequestedDateTime;
@property(retain) GMMDateTime * requestedDateTime;
@property BOOL hasRequestedTimeType;
@property int requestedTimeType;
@property BOOL hasTripMaxCount;
@property int tripMaxCount;
@property(readonly) BOOL hasIconRequest;
@property(retain) GMMDirectionsIconRequest * iconRequest;
@property BOOL hasRequestedResultType;
@property int requestedResultType;
@property BOOL hasResultPageOffset;
@property int resultPageOffset;
@property(readonly) BOOL hasMapViewport;
@property(retain) GMMMapInfo * mapViewport;
@property(retain) NSMutableArray * options;
@property BOOL hasIncludeStreetViewPanoId;
@property BOOL includeStreetViewPanoId;
@property BOOL hasAddStepNoticesToInstructionText;
@property BOOL addStepNoticesToInstructionText;
@property BOOL hasIncludeStructuredInstructions;
@property BOOL includeStructuredInstructions;
@property BOOL hasReturnMultipleRoutes;
@property BOOL returnMultipleRoutes;
@property BOOL hasIncludeNonTransitAlternates;
@property BOOL includeNonTransitAlternates;
@property BOOL hasAltTripsMaxPoints;
@property int altTripsMaxPoints;


- (id)description;
- (void)dealloc;
- (Class)responseClass;
- (id)options;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)setOptions:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (int)altTripsMaxPoints;
- (void)setHasAltTripsMaxPoints:(BOOL)arg1;
- (BOOL)hasAltTripsMaxPoints;
- (void)setHasIncludeNonTransitAlternates:(BOOL)arg1;
- (BOOL)hasIncludeNonTransitAlternates;
- (void)setHasReturnMultipleRoutes:(BOOL)arg1;
- (BOOL)hasReturnMultipleRoutes;
- (void)setHasIncludeStructuredInstructions:(BOOL)arg1;
- (BOOL)hasIncludeStructuredInstructions;
- (void)setHasAddStepNoticesToInstructionText:(BOOL)arg1;
- (BOOL)hasAddStepNoticesToInstructionText;
- (id)mapViewport;
- (void)setHasResultPageOffset:(BOOL)arg1;
- (BOOL)hasResultPageOffset;
- (void)setHasRequestedResultType:(BOOL)arg1;
- (BOOL)hasRequestedResultType;
- (id)iconRequest;
- (void)setHasTripMaxCount:(BOOL)arg1;
- (BOOL)hasTripMaxCount;
- (void)setHasRequestedTimeType:(BOOL)arg1;
- (BOOL)hasRequestedTimeType;
- (id)requestedDateTime;
- (BOOL)includeNonTransitAlternates;
- (BOOL)returnMultipleRoutes;
- (BOOL)includeStructuredInstructions;
- (BOOL)addStepNoticesToInstructionText;
- (id)optionsAtIndex:(unsigned int)arg1;
- (unsigned int)optionsCount;
- (BOOL)hasMapViewport;
- (int)resultPageOffset;
- (int)requestedResultType;
- (BOOL)hasIconRequest;
- (int)tripMaxCount;
- (int)requestedTimeType;
- (BOOL)hasRequestedDateTime;
- (id)waypointAtIndex:(unsigned int)arg1;
- (unsigned int)waypointsCount;
- (void)setModes:(int*)arg1 count:(unsigned int)arg2;
- (int)modeAtIndex:(unsigned int)arg1;
- (void)addMode:(int)arg1;
- (void)clearModes;
- (int*)modes;
- (unsigned int)modesCount;
- (void)setAltTripsMaxPoints:(int)arg1;
- (void)setIncludeNonTransitAlternates:(BOOL)arg1;
- (void)setReturnMultipleRoutes:(BOOL)arg1;
- (void)setIncludeStructuredInstructions:(BOOL)arg1;
- (void)setAddStepNoticesToInstructionText:(BOOL)arg1;
- (void)addOptions:(id)arg1;
- (void)setResultPageOffset:(int)arg1;
- (void)setRequestedResultType:(int)arg1;
- (void)setTripMaxCount:(int)arg1;
- (void)setRequestedTimeType:(int)arg1;
- (void)addWaypoint:(id)arg1;
- (void)setMapViewport:(id)arg1;
- (void)setIconRequest:(id)arg1;
- (void)setRequestedDateTime:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (void)setHasIncludeStreetViewPanoId:(BOOL)arg1;
- (BOOL)hasIncludeStreetViewPanoId;
- (BOOL)includeStreetViewPanoId;
- (void)setIncludeStreetViewPanoId:(BOOL)arg1;
- (id)waypoints;

@end
