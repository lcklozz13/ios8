/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class GEOMapRegion, NSArray, VKAnchorWrapper;

@protocol VKInteractiveMap <NSObject>
+ (_Bool)supportsMapType:(long long)arg1 scale:(int)arg2;
@property(readonly, nonatomic) VKAnchorWrapper *externalAnchors;
@property(readonly, nonatomic, getter=isFullyDrawn) _Bool fullyDrawn;
@property(readonly, nonatomic) NSArray *visibleTileSets;
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) _Bool animatingToTrackAnnotation;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(nonatomic) long long annotationTrackingZoomStyle;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) _Bool localizeLabels;
@property(nonatomic) _Bool labelMarkerSelectionEnabled;
@property(readonly, nonatomic) double maximumZoomLevel;
@property(readonly, nonatomic) double minimumZoomLevel;
@property(retain, nonatomic) NSArray *externalTrafficIncidents;
@property(nonatomic) struct PolylineCoordinate routeUserOffset;
@property(nonatomic) _Bool showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
@property(nonatomic) long long mapType;
@property(readonly, nonatomic, getter=isFullyPitched) _Bool fullyPitched;
@property(readonly, nonatomic, getter=isPitched) _Bool pitched;
@property(nonatomic) _Bool isPitchable;
@property(nonatomic) _Bool staysCenteredDuringRotation;
@property(nonatomic) _Bool staysCenteredDuringPinch;
@property(nonatomic) _Bool trafficEnabled;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (void)stopSnappingAnimations;
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)didStartPanningDeceleration;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(id)arg3;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;
- (double)currentZoomLevel;
- (_Bool)isShowingNoDataPlaceholders;
- (id)attributionsForCurrentRegion;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (id)persistentOverlays;
- (id)overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (CDStruct_071ac149)centerCoordinate;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (void)deselectLabelMarker;
- (id)selectedLabelMarker;
- (void)selectLabelMarker:(id)arg1;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(_Bool)arg2;
- (id)labelMarkers;
- (id)selectedAnnotationMarker;
- (id)annotationMarkers;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (id)annotationMarkerDeselectionCallback;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(_Bool)arg2;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(_Bool)arg2;
- (void)debugHighlightLabelAtPoint:(struct CGPoint)arg1;
- (struct VKPoint)screenPointForPoint:(struct CGPoint)arg1;
- (_Bool)currentZoomLevelAllowsRotation;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(void)arg7;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4;
- (void)setMapRegion:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(unsigned long long)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)setStylesheetMapDisplayStyle:(unsigned long long)arg1;
- (void)stylesheetAnimationDidEnd:(_Bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(unsigned long long)arg1 toStyle:(unsigned long long)arg2;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(unsigned long long)arg2 setupHandler:(id)arg3;
- (id)consoleString:(_Bool)arg1;
- (id)detailedDescription;
- (void)exit3DMode;
- (void)enter3DMode;
- (_Bool)canEnter3DMode;
@end
