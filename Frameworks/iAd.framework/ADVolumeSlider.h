/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPVolumeSlider.h"

@class UIColor;

@interface ADVolumeSlider : MPVolumeSlider
{
    UIColor *_maximumTintUsedForTrackImageColor;
    UIColor *_minimumTintUsedForTrackImageColor;
}

- (void)_updateTrackTintForVolumeControlAvailability;
- (id)_trackImageWithTintColor:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (id)_newVolumeWarningView;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end
