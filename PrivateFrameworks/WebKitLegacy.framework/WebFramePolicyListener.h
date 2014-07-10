/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebFormSubmissionListener-Protocol.h"
#import <WebKitLegacy/WebPolicyDecisionListener-Protocol.h>

// Not exported
@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener>
{
    struct RefPtr<WebCore::Frame> _frame;
    function_9acd5659 _policyFunction;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)continue;
- (void)use;
- (void)download;
- (void)ignore;
- (void)receivedPolicyDecision:(int)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFrame:(struct Frame *)arg1 policyFunction:(function_9acd5659)arg2;

@end
