/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BaseBoard/BSBaseXPCServer.h>

@class NSMapTable, NSObject<OS_dispatch_queue>;

@interface BSActionListener : BSBaseXPCServer
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_queue_portToContextMap;
}

- (CDStruct_2873f8fa)listenForResponseWithHandler:(id)arg1 timeout:(void)arg2;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;

@end
