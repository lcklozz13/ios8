/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GEOWaypoint.h"

@interface GEOWaypoint (MKGeoServicesExtras)
- (_Bool)_canGeocodeAddressFromPlace:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithDynamicCurrentLocationAndRevGeo:(_Bool)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 needRevGeo:(_Bool)arg3;
- (id)initWithPlace:(id)arg1 forQuickETA:(_Bool)arg2;
- (id)initWithIncompletePlace:(id)arg1;
- (id)initWithPlaceSearchRequest:(id)arg1;
- (id)initWithMapItem:(id)arg1 forQuickETA:(_Bool)arg2;
@end

