/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVFrameRateRangeInternal_FigRecorder;

@interface AVFrameRateRange_FigRecorder : NSObject
{
    AVFrameRateRangeInternal_FigRecorder *_internal;
}

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;
- (_Bool)includesFrameDuration:(CDStruct_1b6d18a9)arg1;
- (_Bool)includesFrameRate:(double)arg1;
@property(readonly) CDStruct_1b6d18a9 minFrameDuration;
@property(readonly) CDStruct_1b6d18a9 maxFrameDuration;
@property(readonly) double maxFrameRate;
@property(readonly) double minFrameRate;
- (void)dealloc;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
