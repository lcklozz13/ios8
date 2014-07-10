/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class NSString, UILabel, UIView;

@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell
{
    UILabel *_dividerLabel;
    UIView *_leftLine;
    UIView *_rightLine;
    double _topEdgeInset;
}

@property(nonatomic) double topEdgeInset; // @synthesize topEdgeInset=_topEdgeInset;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
@property(copy, nonatomic) NSString *dividerTitle;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)reloadWithViewElement:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
