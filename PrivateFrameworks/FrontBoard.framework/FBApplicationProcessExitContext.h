/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FBProcessState;

@interface FBApplicationProcessExitContext : NSObject
{
    FBProcessState *_stateBeforeExiting;
    unsigned long long _launchdExitReason;
    unsigned long long _exitReason;
    long long _terminationReason;
}

+ (id)descriptionForExitReason:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) FBProcessState *stateBeforeExiting; // @synthesize stateBeforeExiting=_stateBeforeExiting;
@property(readonly, nonatomic) long long terminationReason; // @synthesize terminationReason=_terminationReason;
@property(readonly, nonatomic) unsigned long long exitReason; // @synthesize exitReason=_exitReason;
- (_Bool)fairPlayFailure;
- (_Bool)consideredJetsam;
@property(readonly, nonatomic) int terminationSignal;
@property(readonly, nonatomic) int exitCode;
@property(readonly, nonatomic) _Bool exitedNormally;
@property(readonly, nonatomic) long long exitStatus;
- (id)description;
- (void)dealloc;
- (id)initWithExitReason:(unsigned long long)arg1 terminationReason:(long long)arg2 state:(id)arg3;

@end

