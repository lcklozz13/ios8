/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TKTonePickerStyleProvider-Protocol.h"
#import "TKVibrationPickerStyleProvider-Protocol.h"

@class UIColor, UIFont;

@interface ABFaceTimeToneKitPickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>
{
}

@property(readonly, nonatomic) _Bool vibrationPickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property(readonly, nonatomic) _Bool wantsCustomVibrationPickerHeaderView;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;
@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property(readonly, nonatomic) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;
@property(readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;
@property(readonly, nonatomic) _Bool vibrationPickerUsesOpaqueBackground;
@property(readonly, nonatomic) _Bool tonePickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) struct UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset tonePickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property(readonly, nonatomic) _Bool wantsCustomTonePickerHeaderView;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newBackgroundViewForSelectedTonePickerCell:(_Bool)arg1;
@property(readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property(readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property(readonly, nonatomic) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *tonePickerCustomTableSeparatorColor;
@property(readonly, nonatomic) long long tonePickerTableViewSeparatorStyle;
@property(readonly, nonatomic) _Bool tonePickerUsesOpaqueBackground;

@end

