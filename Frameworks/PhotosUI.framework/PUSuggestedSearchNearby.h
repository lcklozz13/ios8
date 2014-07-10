/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUSuggestedSearch.h>

@class CLLocation, CLLocationManager;

@interface PUSuggestedSearchNearby : PUSuggestedSearch
{
    _Bool _cancelled;
    CLLocationManager *_locationManager;
    CLLocation *_lastLocation;
    _Bool _monitoringLocation;
}

- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)cancel;
- (void)_inqRestart;
- (void)dealloc;
- (void)_stopMonitoringLocation;
- (void)_authorizeOrStartMonitoringLocation;
- (void)_startMonitoringLocation;
- (id)init;

@end
