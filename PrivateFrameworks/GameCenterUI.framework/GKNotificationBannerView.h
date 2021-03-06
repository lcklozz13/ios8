/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class GKLabel, UIImageView;

@interface GKNotificationBannerView : UIView
{
    UIImageView *_imageView;
    GKLabel *_titleLabel;
    GKLabel *_messageLabel;
    double _duration;
    id _completionHandler;
    id _touchHandler;
    double _preferredWidthPad;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(readonly, nonatomic) double preferredWidthPad; // @synthesize preferredWidthPad=_preferredWidthPad;
@property(copy, nonatomic) id touchHandler; // @synthesize touchHandler=_touchHandler;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) GKLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)callCompletionHandler;
- (void)_wasTouched:(id)arg1;
- (void)showWithTouchHandler:(id)arg1;
- (void)showWithCompletionHandler:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3;

@end

