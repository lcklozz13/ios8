/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UINavigationBarDelegate-Protocol.h"

@class NSArray, UINavigationBar, UINavigationController, _UIBackdropView;

@interface SKUIStackedBar : UIView <UINavigationBarDelegate>
{
    UINavigationController *_associatedNavigationController;
    _UIBackdropView *_backdropView;
    NSArray *_items;
    NSArray *_separators;
    NSArray *_labels;
    _Bool _lastItemExpanded;
    _Bool _hidesStatusBar;
    _Bool _iPadStyle;
    UINavigationBar *_navigationBar;
    _Bool _alwaysShowsBackButton;
    double _offset;
    UIView *_wrapperView;
    UIView *_maskView;
    double _newOffset;
}

@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool iPadStyle; // @synthesize iPadStyle=_iPadStyle;
@property(nonatomic) _Bool hidesStatusBar; // @synthesize hidesStatusBar=_hidesStatusBar;
@property(nonatomic) _Bool lastItemExpanded; // @synthesize lastItemExpanded=_lastItemExpanded;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool alwaysShowsBackButton; // @synthesize alwaysShowsBackButton=_alwaysShowsBackButton;
@property(nonatomic) __weak UINavigationController *associatedNavigationController; // @synthesize associatedNavigationController=_associatedNavigationController;
- (void).cxx_destruct;
- (void)_pop:(long long)arg1;
- (void)_reload;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)_backAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)animateToFullSizeIfNecessary;
- (void)tintColorDidChange;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setLastItemExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
