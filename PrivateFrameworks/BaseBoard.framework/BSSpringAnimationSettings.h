/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BaseBoard/BSAnimationSettings.h>

@interface BSSpringAnimationSettings : BSAnimationSettings
{
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    _Bool _hasCalculatedDuration;
}

+ (_Bool)supportsSecureCoding;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_setEpsilon:(double)arg1;
- (void)_setDamping:(double)arg1;
- (void)_setStiffness:(double)arg1;
- (void)_setMass:(double)arg1;
- (_Bool)isSpringAnimation;
- (_Bool)_hasCalculatedDuration;
- (void)_setTimingFunction:(id)arg1;
- (void)_setDuration:(double)arg1;
- (double)duration;
@property(readonly, nonatomic) double epsilon;
@property(readonly, nonatomic) double damping;
@property(readonly, nonatomic) double stiffness;
@property(readonly, nonatomic) double mass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 frameInterval:(double)arg6 timingFunction:(id)arg7;

@end
