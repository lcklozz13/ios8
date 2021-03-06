/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CameraKit/CAMFocusView.h>

@class CAKeyframeAnimation;

@interface CAMFocusLockView : CAMFocusView
{
    CAKeyframeAnimation *_lockBoundsAnimation;
}

- (void).cxx_destruct;
- (void)animateScaleDownWithCompletion:(id)arg1;
- (void)animateLock;
- (id)_createLockBoundsAnimation;
- (void)startAnimatingContents:(_Bool)arg1 bounds:(_Bool)arg2 fadeIn:(_Bool)arg3;
- (double)fadeInDuration;
- (id)_createBoundsAnimation;

@end

