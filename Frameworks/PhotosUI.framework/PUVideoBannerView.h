/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface PUVideoBannerView : UIView
{
    UIImage *_badgeImage;
    NSString *_bannerText;
    UIImageView *_backgroundView;
    UIImageView *_badgeImageView;
    UILabel *_textLabel;
    _Bool _flattensSubviews;
    double _videoDuration;
    unsigned long long _videoSubtypes;
}

@property(nonatomic) _Bool flattensSubviews; // @synthesize flattensSubviews=_flattensSubviews;
@property(readonly, nonatomic) unsigned long long videoSubtypes; // @synthesize videoSubtypes=_videoSubtypes;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_badgeImageInsetsForVideoSubtypes:(unsigned long long)arg1;
- (id)_badgeImageForVideoSubtype:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateFlattenSubviews;
- (void)_setBadgeImage:(id)arg1 bannerText:(id)arg2;
- (void)setVideoDuration:(double)arg1 videoSubtypes:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
