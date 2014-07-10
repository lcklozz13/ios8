/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "EKTravelAdvisorWorld-Protocol.h"

@class CLLocation, CLLocationManager, EKTravelAgendaItem, PCPersistentTimer;

// Not exported
@interface EKTravelAdvisorRealWorld : NSObject <EKTravelAdvisorWorld, CLLocationManagerDelegate>
{
    CLLocationManager *_geofenceLocationManager;
    CLLocationManager *_pollingLocationManager;
    _Bool _geofenceUsingSignificantLocationUpdates;
    PCPersistentTimer *_persistentTimer;
    id _geofenceHandler;
    id _locationHandler;
    id _alarmHandler;
    id _locationAuthorizationHandler;
    CLLocation *_geofenceInitialLocation;
    CLLocation *_locationInitialLocation;
    EKTravelAgendaItem *_agendaItem;
}

@property(nonatomic) EKTravelAgendaItem *agendaItem; // @synthesize agendaItem=_agendaItem;
- (id)now;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)getCurrentLocationWithAccuracy:(double)arg1 block:(id)arg2;
- (id)mostRecentLocationSeen;
- (void)disableGeofence;
- (void)setGeofenceWithRadius:(double)arg1 block:(id)arg2;
- (void)disableAlarm;
- (void)alarmFired:(id)arg1;
- (void)setAlarmIn:(double)arg1 block:(id)arg2;
- (void)setLocationAuthorizationChangeCallback:(id)arg1;
- (void)comeOutOfHibernation;
- (void)goIntoHibernation;
- (void)dealloc;
- (id)init;

@end
