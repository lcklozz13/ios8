/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSString, UILabel;

@interface _MCDAlbumTracksCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_trackNumberLabel;
    UILabel *_durationLabel;
    double _maximumDurationWidth;
}

@property(nonatomic) double maximumDurationWidth; // @synthesize maximumDurationWidth=_maximumDurationWidth;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *durationText;
@property(copy, nonatomic) NSString *trackNumberText;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

