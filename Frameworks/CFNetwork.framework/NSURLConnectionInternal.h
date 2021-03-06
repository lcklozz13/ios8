/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLAuthenticationChallengeSender-Protocol.h"
#import "NSURLConnectionRequired-Protocol.h"

@class NSDictionary, NSOperationQueue, NSURL, NSURLConnection, NSURLRequest;

// Not exported
@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender>
{
    NSURLConnection *_connection;
    NSOperationQueue *_delegateQueue;
    NSURL *_url;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    id _delegate;
    NSDictionary *_connectionProperties;
    _Bool _connectionActive;
}

- (id)_timingData;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)_withConnectionAndDelegate:(id)arg1;
- (void)_withActiveConnectionAndDelegate:(id)arg1;
- (void)_withConnectionAndDelegate:(id)arg1 onlyActive:(void)arg2;
- (void)invokeForDelegate:(id)arg1;
- (void)_withConnectionDisconnectFromConnection;
- (void)_invalidate;
- (_Bool)isConnectionActive;
- (void)setConnectionActive:(_Bool)arg1;
- (void)_setDelegateQueue:(id)arg1;
- (id)currentRequest;
- (id)originalRequest;
- (id)_connectionProperties;
- (void)dealloc;
- (id)initWithInfo:(const struct InternalInit *)arg1;

@end

