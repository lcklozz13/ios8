/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString, RadioStation;

@interface MPRadioStation : NSObject <NSCopying>
{
    RadioStation *_station;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_station) RadioStation *_station;
@property(readonly, nonatomic) long long uniqueIdentifier;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *localizedDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStation:(id)arg1;

@end

