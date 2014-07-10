/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSObject<OS_dispatch_group>, NSString;

@interface CKPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    _Bool _isFinished;
    _Bool _isExecuting;
    NSString *_operationID;
    id _daemonInvokeBlock;
}

@property(readonly, nonatomic) id daemonInvokeBlock; // @synthesize daemonInvokeBlock=_daemonInvokeBlock;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (_Bool)isConcurrent;
- (void)main;
- (void)start;
- (void)cancel;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(id)arg2;

@end
