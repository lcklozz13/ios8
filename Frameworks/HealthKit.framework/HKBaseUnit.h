/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthKit/HKUnit.h>

#import "_HKFactor-Protocol.h"

@class NSString, _HKBaseDimension;

@interface HKBaseUnit : HKUnit <_HKFactor>
{
    NSString *_unitString;
    NSString *_prefix;
    NSString *_root;
    _Bool _uniqued;
    double _proportionalSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)_rootUnitWithDefinition:(CDStruct_875ffba5)arg1;
+ (id)_uniquedUnitWithPrefix:(id)arg1 conversionConstant:(id)arg2 rootUnit:(id)arg3;
+ (id)_uniquedUnitWithPrefix:(id)arg1 rootUnit:(id)arg2;
+ (id)_uniquedRootUnitFromDefinition:(CDStruct_875ffba5)arg1;
+ (id)_uniquedRootUnit:(id)arg1;
+ (id)unitFromString:(id)arg1;
@property(readonly, nonatomic) double proportionalSize; // @synthesize proportionalSize=_proportionalSize;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_unitByPrefixing:(id)arg1 withConversionConstant:(id)arg2;
- (id)_initWithUnitString:(id)arg1 proportionalSize:(double)arg2 scaleOffset:(double)arg3;
- (id)_computeBaseUnitReductionAndProportionalSize:(out double *)arg1 withCycleSet:(id)arg2;
- (id)_baseUnits;
- (id)unitString;
- (unsigned long long)hash;

// Remaining properties
@property(readonly, nonatomic) _HKBaseDimension *dimension;

@end
