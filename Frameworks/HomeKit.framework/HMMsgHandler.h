/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HMMsgHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_receiverQueue;
    id _messageHandler;
}

+ (id)msgHandler:(id)arg1 receiverQueue:(void)arg2;
@property(copy, nonatomic) id messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
- (void).cxx_destruct;
- (id)initWithMessageHandler:(id)arg1 receiverQueue:(void)arg2;

@end

