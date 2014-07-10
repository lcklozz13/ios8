/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface FBWindowContext : NSObject
{
    unsigned int _contextID;
    double _level;
    unsigned int _identifier;
}

+ (id)contextWithID:(unsigned int)arg1 level:(double)arg2;
+ (id)contextWithFBSContext:(id)arg1;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContextID:(unsigned int)arg1 level:(double)arg2;

@end
