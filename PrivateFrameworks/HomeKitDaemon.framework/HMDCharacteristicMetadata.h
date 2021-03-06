/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface HMDCharacteristicMetadata : NSObject <NSSecureCoding>
{
    double _minimumValue;
    double _maximumValue;
    double _stepValue;
    NSString *_units;
    NSString *_manufacturerDescription;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAllowedTestDescriptorsForType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(readonly, copy, nonatomic) NSString *units; // @synthesize units=_units;
@property(readonly, nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property(readonly, nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly, nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDefaultSaturationValues;
- (void)setDefaultHueValues;
- (void)setDefaultBrightnessValues;
- (void)setDefaultTemperatureValues;
- (_Bool)createTestValuesForCharacteristicType:(id)arg1;
- (id)description;
- (id)initWithDescriptor:(id)arg1;
- (void)configureWithDescriptor:(id)arg1;

@end

