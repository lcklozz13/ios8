/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@interface PUPhotosSharingProgressOverlay : UIView
{
    _Bool _isShowing;
    UIView *_progressView;
}

@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)setShowing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addProgressView:(id)arg1;
- (void)_tearDownOverlayAnimated:(_Bool)arg1;
- (void)_setupOverlayAnimated:(_Bool)arg1;
- (id)_grayScaleImageFromImage:(id)arg1;
- (id)_screenshotImage;
- (void)_installInStatusBarWindow;
- (id)_statusBarWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end
