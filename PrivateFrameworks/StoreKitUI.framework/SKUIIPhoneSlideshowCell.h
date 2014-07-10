/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class UIImage, UIImageView;

@interface SKUIIPhoneSlideshowCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_playIcon;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic, getter=isVideo) _Bool video;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end
