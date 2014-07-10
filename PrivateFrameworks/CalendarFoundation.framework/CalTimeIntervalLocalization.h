/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CalTimeIntervalLocalization : NSObject
{
}

+ (id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3;
+ (id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(_Bool)arg4 dayDuration:(id *)arg5 hourDuration:(id *)arg6 minuteDuration:(id *)arg7 secondDuration:(id *)arg8 abbreviate:(_Bool)arg9;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(_Bool)arg4 abbreviate:(_Bool)arg5;
+ (id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(_Bool)arg2;
+ (id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(_Bool)arg2;
+ (id)localizedStringForInterval:(double)arg1 withOptions:(unsigned long long)arg2;

@end
