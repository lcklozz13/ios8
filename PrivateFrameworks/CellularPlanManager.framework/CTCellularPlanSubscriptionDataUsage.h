/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface CTCellularPlanSubscriptionDataUsage : NSObject <NSCopying, NSSecureCoding>
{
    double _dataUsed;
    double _dataCapacity;
    NSString *_dataCategory;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *dataCategory; // @synthesize dataCategory=_dataCategory;
@property(readonly, nonatomic) double dataCapacity; // @synthesize dataCapacity=_dataCapacity;
@property(readonly, nonatomic) double dataUsed; // @synthesize dataUsed=_dataUsed;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCategory:(id)arg1 andDataUsed:(int)arg2 andDataCapacity:(int)arg3;

@end
