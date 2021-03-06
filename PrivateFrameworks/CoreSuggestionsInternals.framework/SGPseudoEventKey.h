/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SGEntityKey-Protocol.h"

@class NSString;

@interface SGPseudoEventKey : NSObject <SGEntityKey>
{
    NSString *_serialized;
    NSString *_domain;
    NSString *_groupId;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (unsigned long long)hash;
- (_Bool)isEqualToPseudoEventKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDomain:(id)arg1 groupId:(id)arg2;
- (id)initWithSerialized:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

