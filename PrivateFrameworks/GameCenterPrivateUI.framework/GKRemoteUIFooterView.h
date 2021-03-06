/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "RemoteUITableFooter-Protocol.h"

@class GKLabel;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter>
{
    _Bool _shouldApplyGameCenterTheme;
    int _layoutStyle;
    GKLabel *_textLabel;
    double _leftMargin;
    double _rightMargin;
    double _bottomMargin;
    double _paragraphMargin;
}

@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) _Bool shouldApplyGameCenterTheme; // @synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme;
@property(nonatomic) double paragraphMargin; // @synthesize paragraphMargin=_paragraphMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) GKLabel *textLabel; // @synthesize textLabel=_textLabel;
- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

@end

