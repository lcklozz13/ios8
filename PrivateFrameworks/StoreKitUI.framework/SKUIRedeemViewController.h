/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class NSOperationQueue, NSString, SKUIClientContext, SKUIRedeemConfiguration, SKUIRedeemStepViewController;

@interface SKUIRedeemViewController : UINavigationController
{
    BOOL _cameraRedeemEnabled;
    long long _category;
    SKUIClientContext *_clientContext;
    NSString *_initialCode;
    NSOperationQueue *_operationQueue;
    SKUIRedeemConfiguration *_redeemConfiguration;
    SKUIRedeemStepViewController *_rootViewController;
}

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)_showRootViewController;
- (id)_newRootViewController;
- (void)_loadRootViewController;
- (void)_configurationDidLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (void)redeemAgainAnimated:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithRedeemCategory:(long long)arg1;

@end
