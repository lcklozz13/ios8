/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEORouteMapMatcher.h>

// Not exported
@interface GEORouteDriveMapMatcher : GEORouteMapMatcher
{
}

- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 useStrictMatch:(_Bool)arg3 timeSinceTunnel:(double)arg4;
- (id)_setupRouteMatchWithRawLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 matchParams:(const CDStruct_7233881d *)arg4;
- (CDStruct_7233881d)_matchToRouteFromLocation:(id)arg1 trackedLocation:(id)arg2 distanceLeftToSearch:(double)arg3 maxDistance:(double)arg4;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4;

@end

