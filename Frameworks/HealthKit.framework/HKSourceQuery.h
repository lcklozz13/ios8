/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthKit/HKQuery.h>

#import "HKSourceQueryClient-Protocol.h"

@interface HKSourceQuery : HKQuery <HKSourceQueryClient>
{
    id _completionHandler;
}

+ (void)_configureClientInterface:(id)arg1;
+ (id)_serverInterfaceProtocol;
+ (id)_clientInterfaceProtocol;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_deliverError:(id)arg1;
- (void)_validate;
- (void)_cleanupAfterDeactivation;
- (void)_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (void)_prepareToActivateWithServerProxy:(id)arg1 isReactivation:(_Bool)arg2;
- (void)deliverSources:(id)arg1 queryUUID:(id)arg2;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(id)arg3;

@end

