/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicTableViewCell.h>

@class NSString, UIImage;

@interface MusicActionTableViewCell : MusicTableViewCell
{
}

+ (Class)contentViewClass;
- (id)_actionCellContentView;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) struct UIOffset imageOffset;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic, getter=isDisplayingAsDisabled) _Bool displayAsDisabled;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
