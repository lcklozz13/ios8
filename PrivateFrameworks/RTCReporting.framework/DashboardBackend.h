/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RTCReporting/RTCReportingBackend.h>

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface DashboardBackend : RTCReportingBackend
{
    int _socketDescriptor;
    NSMutableArray *_messageQueue;
    _Bool _reliableUDP;
    _Bool _usingProfile;
    NSObject<OS_dispatch_queue> *_networkProcQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_timer;
    int _cleanupState;
}

- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 dict:(id)arg6;
- (void)dealloc;
- (void)cleanup;
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;
- (id)initWithName:(id)arg1 serverIP:(id)arg2 serverPort:(unsigned short)arg3 productFamily:(id)arg4;
- (id)initWithName:(id)arg1 profile:(id)arg2 serverIP:(id)arg3 serverPort:(unsigned short)arg4 productFamily:(id)arg5;
- (id)writeLocalLog:(struct tagReportingPacket *)arg1;
- (void)tryToSendMsg:(struct tagReportingPacket *)arg1 length:(unsigned short)arg2 eventNumber:(unsigned short)arg3;
- (id)sanitize:(id)arg1;
- (id)descriptionForObject:(id)arg1;
- (void)processSocketRead;
- (void)myPeriodicTask;
- (void)cleanupSources;
- (void)useReliableUDP;

@end

