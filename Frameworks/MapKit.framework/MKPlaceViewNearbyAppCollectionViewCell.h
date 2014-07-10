/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class NSDictionary, UIImageView, UILabel;

// Not exported
@interface MKPlaceViewNearbyAppCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_categoryLabel;
    UILabel *_priceLabel;
    UIImageView *_icon;
    NSDictionary *_storeData;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) NSDictionary *storeData; // @synthesize storeData=_storeData;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
