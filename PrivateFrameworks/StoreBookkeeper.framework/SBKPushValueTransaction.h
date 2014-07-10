/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreBookkeeper/SBKTransaction.h>

@class NSString;

@interface SBKPushValueTransaction : SBKTransaction
{
    _Bool _isRechedulable;
    _Bool _success;
    id <SBKKeyValuePayloadPair> _clientItemPayloadPair;
    NSString *_clientItemVersionAnchor;
    id <SBKKeyValuePayloadPair> _requestItemPayloadPair;
    NSString *_requestItemVersionAnchor;
    id <SBKKeyValuePayloadPair> _resultItemPayloadPair;
    NSString *_resultItemVersionAnchor;
    NSString *_resultDomainVersion;
}

@property(readonly) NSString *resultDomainVersion; // @synthesize resultDomainVersion=_resultDomainVersion;
@property(readonly) NSString *resultItemVersionAnchor; // @synthesize resultItemVersionAnchor=_resultItemVersionAnchor;
@property(readonly) id <SBKKeyValuePayloadPair> resultItemPayloadPair; // @synthesize resultItemPayloadPair=_resultItemPayloadPair;
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) NSString *requestItemVersionAnchor; // @synthesize requestItemVersionAnchor=_requestItemVersionAnchor;
@property(readonly) id <SBKKeyValuePayloadPair> requestItemPayloadPair; // @synthesize requestItemPayloadPair=_requestItemPayloadPair;
@property(readonly) NSString *clientItemVersionAnchor; // @synthesize clientItemVersionAnchor=_clientItemVersionAnchor;
@property(readonly) id <SBKKeyValuePayloadPair> clientItemPayloadPair; // @synthesize clientItemPayloadPair=_clientItemPayloadPair;
- (void).cxx_destruct;
- (id)_resolveConflictBetweenClientPayloadPair:(id)arg1 andServerPayloadPair:(id)arg2;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id)arg2;
- (id)newRequest;
- (id)clampsKey;
- (id)description;
- (id)initWithStoreBagContext:(id)arg1 clientItemPayloadPair:(id)arg2 clientItemVersionAnchor:(id)arg3;

@end
