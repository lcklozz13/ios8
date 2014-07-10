/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDSConnectionDelegate-Protocol.h"

@protocol IDSConnectionDelegatePrivate <IDSConnectionDelegate>

@optional
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteDeclined:(id)arg3 fromID:(id)arg4;
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteAccepted:(id)arg3 fromID:(id)arg4;
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 withOptions:(id)arg6;
- (void)connection:(id)arg1 attachmentReceived:(id)arg2 fileURL:(id)arg3 fromID:(id)arg4;
- (void)connection:(id)arg1 attachmentInviteReceived:(id)arg2 userInfo:(id)arg3 fromID:(id)arg4;
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 updatedWithResponseCode:(long long)arg3 error:(id)arg4 lastCall:(_Bool)arg5;
@end
