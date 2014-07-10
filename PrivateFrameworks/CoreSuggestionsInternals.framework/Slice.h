/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface Slice : NSObject
{
    struct {
        unsigned short category;
        unsigned short subtype;
    } _type;
    unsigned long long _start;
    unsigned long long _end;
}

+ (id)sliceWithType:(CDStruct_d65e47c4)arg1 range:(struct _NSRange)arg2;
+ (id)sliceWithType:(CDStruct_d65e47c4)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long end; // @synthesize end=_end;
@property(readonly, nonatomic) unsigned long long start; // @synthesize start=_start;
@property(readonly, nonatomic) CDStruct_d65e47c4 type; // @synthesize type=_type;
- (id)description;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) struct _NSRange range;
- (id)initWithType:(CDStruct_d65e47c4)arg1 range:(struct _NSRange)arg2;
- (id)initWithType:(CDStruct_d65e47c4)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;

@end
