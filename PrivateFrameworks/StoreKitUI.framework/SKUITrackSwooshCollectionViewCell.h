/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIItemCollectionViewCell.h>

@class SKUITrackSwooshCellLayout;

@interface SKUITrackSwooshCollectionViewCell : SKUIItemCollectionViewCell
{
    SKUITrackSwooshCellLayout *_layout;
}

@property(readonly, nonatomic) SKUITrackSwooshCellLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)_configureForItem:(id)arg1 clientContext:(id)arg2;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2 chartIndex:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
