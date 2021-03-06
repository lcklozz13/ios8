/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardFoundation/SBFWallpaperView.h>

#import "SBFProceduralWallpaperDelegate-Protocol.h"

@class NSDictionary, NSTimer, UIImage;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate>
{
    id <SBFProceduralWallpaper> _proceduralWallpaper;
    NSDictionary *_options;
    NSTimer *_colorSampleTimer;
    UIImage *_blur;
    int _thermalNotificationToken;
    _Bool _pausedForThermalReasons;
    _Bool _amAppearing;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_allowsParallax;
- (void)prepareToAppear;
- (void)recomputeLegibilitySettings;
- (void)prepareToDisappear;
- (void)_updateAnimating;
- (_Bool)_isVisible;
- (void)_sample;
- (_Bool)_shouldSampleContinuously;
- (void)_updateSampleTimer;
- (id)_newImageFromBlurSurface:(void *)arg1 rect:(struct CGRect)arg2;
- (void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id)arg1 didGenerateBlur:(void *)arg2 forRect:(struct CGRect)arg3;
- (id)_blurredImage;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (_Bool)isDisplayingWallpaper:(id)arg1 forVariant:(long long)arg2 options:(id)arg3;
- (void)layoutSubviews;
- (void)setWallpaperAnimationEnabled:(_Bool)arg1;
- (void)setContinuousColorSamplingEnabled:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 proceduralWallpaper:(id)arg2 options:(id)arg3;

@end

