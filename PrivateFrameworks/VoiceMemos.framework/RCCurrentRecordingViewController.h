/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RCCurrentRecordingViewControllerDelegate-Protocol.h"
#import "RCUIServiceCurrentRecordingViewController-Protocol.h"

@class RCAVState, RCCurrentRecordingRemoteViewController, UIColor;

@interface RCCurrentRecordingViewController : UIViewController <RCCurrentRecordingViewControllerDelegate, RCUIServiceCurrentRecordingViewController>
{
    _Bool _screenUpdatesDisabled;
    _Bool _isDisplayingLockscreenInterface;
    UIColor *_presentationBackgroundColor;
    UIColor *_waveformForegroundColor;
    RCCurrentRecordingRemoteViewController *_remoteViewController;
    id <RCCurrentRecordingViewControllerDelegate> _delegate;
    RCAVState *_AVState;
}

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;
@property(retain, nonatomic) RCAVState *AVState; // @synthesize AVState=_AVState;
@property(nonatomic) __weak id <RCCurrentRecordingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_failedToBecomeReadyWithMessage:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)currentRecordingViewController:(id)arg1 didChangeAVState:(id)arg2;
- (void)currentRecordingViewControllerRecordingDidEnd:(id)arg1;
- (void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(_Bool)arg2;
- (void)loadCaptureStateWithCompletionBlock:(id)arg1;
- (void)dismissLockscreenInterface;
- (void)presentLockscreenInterfaceWithBackgroundColor:(id)arg1 waveformForegroundColor:(id)arg2;
- (void)setScreenUpdatesDisabled:(_Bool)arg1;
- (void)insertRemoteViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)initWithDelegate:(id)arg1;

@end

