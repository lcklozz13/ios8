/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, PKDaemonClient;

@interface PKHost : NSObject
{
    NSDictionary *_hostInfoPlist;
    NSMutableDictionary *_activePlugIns;
    NSMutableDictionary *_activatingPlugIns;
    NSObject<OS_dispatch_queue> *_hostQueue;
    PKDaemonClient *_client;
}

+ (id)defaultHost;
@property(retain) PKDaemonClient *client; // @synthesize client=_client;
@property(retain) NSObject<OS_dispatch_queue> *hostQueue; // @synthesize hostQueue=_hostQueue;
@property(retain) NSMutableDictionary *activatingPlugIns; // @synthesize activatingPlugIns=_activatingPlugIns;
@property(retain) NSMutableDictionary *activePlugIns; // @synthesize activePlugIns=_activePlugIns;
- (void).cxx_destruct;
@property(readonly) NSDictionary *hostInfoPlist; // @synthesize hostInfoPlist=_hostInfoPlist;
- (void)deactivatePlugIn:(id)arg1;
- (void)activatePlugIn:(id)arg1;
- (void)stopActivatingPlugIn:(id)arg1;
- (id)startActivatingPlugIn:(id)arg1;
- (id)activePlugInForIdentifier:(id)arg1;
- (void)setElection:(long long)arg1 forPlugIn:(id)arg2;
- (void)readyPlugIns:(id)arg1 ready:(id)arg2;
- (void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 extensions:(id)arg3;
- (void)cancelPlugInDiscovery:(id)arg1;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(id)arg3;
- (id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2;
- (void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(id)arg3;
- (id)init;

@end

