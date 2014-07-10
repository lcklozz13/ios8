/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMMessageReceiver-Protocol.h"

@class HMHome, HMMessageDispatcher, HMXpcClient, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSUUID;

@interface HMHomeManager : NSObject <HMMessageReceiver>
{
    id <HMHomeManagerDelegate> _delegate;
    HMHome *_primaryHome;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_currentHomes;
    NSMutableDictionary *_pendingRequests;
    HMXpcClient *_xpcClient;
    HMMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
}

@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMXpcClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableArray *currentHomes; // @synthesize currentHomes=_currentHomes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMHome *primaryHome; // @synthesize primaryHome=_primaryHome;
@property(nonatomic) __weak id <HMHomeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handlePrimaryChangedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleHomeAddedNotification:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_start;
- (void)resetConfiguration:(_Bool)arg1 completionHandler:(id)arg2;
- (void)removeHome:(id)arg1 completionHandler:(id)arg2;
- (void)addHomeWithName:(id)arg1 completionHandler:(id)arg2;
- (void)updatePrimaryHome:(id)arg1 completionHandler:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy, nonatomic) NSArray *homes;
- (id)init;

@end
