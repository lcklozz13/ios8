/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "FBWindowContextAppearance-Protocol.h"

@class FBWindowContextHostManager, UIColor;

@interface FBWindowContextHostWrapperView : UIView <FBWindowContextAppearance>
{
    FBWindowContextHostManager *_manager;
    UIColor *_backgroundColorWhileNotHosting;
    UIColor *_backgroundColorWhileHosting;
}

@property(readonly, nonatomic) FBWindowContextHostManager *manager; // @synthesize manager=_manager;
- (id)description;
- (id)window;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_didRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
@property(retain, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property(retain, nonatomic) UIColor *backgroundColorWhileHosting;
@property(readonly, nonatomic) struct CGRect contentFrame; // @dynamic contentFrame;
@property(readonly, nonatomic) double level;
@property(readonly, nonatomic, getter=isJailed) _Bool jailed; // @dynamic jailed;
@property(readonly, nonatomic, getter=isContextHosted) _Bool contextHosted; // @dynamic contextHosted;
- (void)clearManager;
- (void)updateBackgroundColor;
- (void)_toggleBackgroundColorIfNecessary;
- (id)_backgroundColorWhileNotHosting;
- (id)_backgroundColorWhileHosting;
- (void)_hostingStatusChanged;
- (_Bool)_isReallyHosting;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 manager:(id)arg2;

@end

