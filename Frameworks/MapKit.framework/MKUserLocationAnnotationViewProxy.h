/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKPuckAnimatorTarget-Protocol.h"
#import "VKRouteMatchedAnnotationPresentation-Protocol.h"
#import "VKTrackableAnnotationPresentation-Protocol.h"

@class GEORouteMatch, MKAnnotationView, NSHashTable;

// Not exported
@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation>
{
    MKAnnotationView *_annotationView;
    NSHashTable *_presentationCoordinateObservers;
}

@property(nonatomic) __weak MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
- (void)removePresentationCoordinateChangedObserver:(id)arg1;
- (void)addPresentationCoordinateChangedObserver:(id)arg1;
@property(retain, nonatomic) GEORouteMatch *routeMatch;
@property(nonatomic, getter=isTracking) _Bool tracking;
- (void)setAnimatingToCoordinate:(_Bool)arg1;
@property(nonatomic) double presentationCourse;
@property(nonatomic) CDStruct_c3b9c2ee presentationCoordinate;

@end

