/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthKit/_HKDimension.h>

@class _HKFactorization;

// Not exported
@interface _HKCompoundDimension : _HKDimension
{
    _HKFactorization *_baseDimensions;
}

+ (id)dimensionWithBaseDimensions:(id)arg1;
- (void).cxx_destruct;
- (id)_baseDimensions;
- (id)_initWithBaseDimensions:(id)arg1;

@end
