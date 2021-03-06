/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class SKUIAttributedStringLayout, SKUIAttributedStringView, UIImageView;

@interface SKUIStyledButton : UIControl
{
    SKUIAttributedStringView *_attributedStringView;
    long long _buttonType;
    _Bool _didInitialHighlightForTouch;
    UIImageView *_disclosureImageView;
    _Bool _usesTintColor;
}

+ (struct CGSize)sizeForTextSize:(struct CGSize)arg1 buttonType:(long long)arg2;
@property(nonatomic) _Bool usesTintColor; // @synthesize usesTintColor=_usesTintColor;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
- (void).cxx_destruct;
- (id)_textColor;
- (void)_reloadDisclosureImage;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) SKUIAttributedStringLayout *titleLayout;
@property(readonly, nonatomic) double baselineOffset;

@end

