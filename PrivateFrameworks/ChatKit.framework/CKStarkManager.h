/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIScreen, UIViewController, UIWindow;

@interface CKStarkManager : NSObject
{
    _Bool _isStarkConnected;
    UIViewController *_starkRootViewController;
    UIWindow *_starkWindow;
    UIScreen *_starkScreen;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIScreen *starkScreen; // @synthesize starkScreen=_starkScreen;
@property(retain, nonatomic) UIWindow *starkWindow; // @synthesize starkWindow=_starkWindow;
@property(retain, nonatomic) UIViewController *starkRootViewController; // @synthesize starkRootViewController=_starkRootViewController;
- (void)detachStarkScreen:(id)arg1;
- (void)attachStarkToScreen:(id)arg1;
- (void)screenDidDisconnectNotification:(id)arg1;
- (void)screenDidConnectNotification:(id)arg1;
- (void)startListeningForScreenNotifications;
@property(readonly, nonatomic) _Bool isStarkConnected; // @synthesize isStarkConnected=_isStarkConnected;
- (void)dealloc;
- (id)init;

@end

