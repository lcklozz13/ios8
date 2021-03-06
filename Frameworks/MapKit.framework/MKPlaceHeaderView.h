/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "MKPlaceHeaderBackgroundViewDelegate-Protocol.h"
#import "MKPlaceHeaderViewCinematics-Protocol.h"
#import "MKStackingViewControllerSizableView-Protocol.h"

@class MKDistanceDetailProvider, MKMapItem, MKPlaceHeaderBackgroundView, MKStarRatingView, NSString, UIImageView;

// Not exported
@interface MKPlaceHeaderView : UIView <MKStackingViewControllerSizableView, MKPlaceHeaderViewCinematics, MKPlaceHeaderBackgroundViewDelegate>
{
    MKPlaceHeaderBackgroundView *_background;
    UIView *_screen;
    UIImageView *_vignette;
    MKDistanceDetailProvider *_distanceMonitor;
    _Bool _showBusinessDetails;
    MKStarRatingView *_ratingView;
    struct UILabel *_titleLabel;
    struct UILabel *_distanceToPlaceLabel;
    struct {
        unsigned int isPresenting;
    } _headerViewFlags;
    MKMapItem *_mapItem;
    long long _backgroundTypeOverride;
}

@property(nonatomic) long long backgroundTypeOverride; // @synthesize backgroundTypeOverride=_backgroundTypeOverride;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)reset;
- (void)present;
- (void)fadeOutScreen;
- (void)prepareForPresentation;
- (void)resetVignette;
- (id)viewsForPresentation;
- (void)layoutSubviews;
- (struct CGSize)sizeForLabel:(struct UILabel *)arg1;
- (struct CGSize)sizeForLabel:(struct UILabel *)arg1 widthFactor:(double)arg2;
- (void)refreshContent;
- (void)headerViewBackground:(id)arg1 willShowBackground:(id)arg2;
- (void)headerViewBackgroundDidFinishLoading:(id)arg1;
- (void)presentBackgroundIfNeeded;
- (void)suspendAnimations;
- (void)resumeAnimations;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addLabelConstraints;
- (void)addContent;
- (long long)_numberOfLinesForLabel:(struct UILabel *)arg1;
- (struct UILabel *)newInfoLabel;
- (struct CATransform3D)perspectiveTransform;
@property(nonatomic) double rating;
@property(copy, nonatomic) NSString *subTitle;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;
- (void)setBackgroundViewTransform:(struct CATransform3D)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

