/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class ADInterstitialAd, ADTapGestureRecognizer, _UIRemoteView;

@interface ADInterstitialView : UIView
{
    ADInterstitialAd *_interstitialAd;
    _Bool _dimmed;
    ADTapGestureRecognizer *_tapGestureRecognizer;
    _UIRemoteView *_remoteView;
    UIView *_dimmerView;
    ADTapGestureRecognizer *_gestureRecognizer;
    struct CGRect _dismissButtonRect;
}

@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) ADTapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UIView *dimmerView; // @synthesize dimmerView=_dimmerView;
@property(retain, nonatomic) _UIRemoteView *remoteView; // @synthesize remoteView=_remoteView;
@property(nonatomic) struct CGRect dismissButtonRect; // @synthesize dismissButtonRect=_dismissButtonRect;
@property(readonly, nonatomic) ADTapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)_gestureHandler:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)removeFromSuperview;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (id)interstitialAd;
- (id)initForInterstitialAd:(id)arg1;
- (void)dealloc;

@end

