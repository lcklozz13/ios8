/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BSXPCConnectionListenerHandler-Protocol.h"

@class NSObject<OS_dispatch_queue>;

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler>
{
    NSObject<OS_dispatch_queue> *_connectionDispatcherQueue;
}

+ (id)sharedInstance;
- (void)handleIncomingConnection:(id)arg1 forService:(id)arg2;
- (void)dealloc;
- (id)init;

@end
