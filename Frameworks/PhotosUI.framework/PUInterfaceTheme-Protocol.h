/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSDictionary, UIColor, UIFont, UIImage;

@protocol PUInterfaceTheme <NSObject>
@property(readonly, nonatomic) long long defaultKeyboardAppearance;
@property(readonly, nonatomic) UIFont *sharedAlbumCommentCardAlbumTitleFont;
@property(readonly, nonatomic) UIFont *sharedAlbumCommentCardButtonFont;
@property(readonly, nonatomic) UIFont *sharedAlbumCommentCardTextFont;
@property(readonly, nonatomic) UIFont *sharedAlbumCommentCardTitleFont;
@property(readonly, nonatomic) UIImage *cloudFeedSectionHeaderBackgroundImage;
@property(readonly, nonatomic) UIImage *cloudFeedMiniChevronImage;
@property(readonly, nonatomic) NSDictionary *cloudFeedInteractionLargerTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedInteractionTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedInvitationSubtitleTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedInvitationTitleTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedLargerEmphasizedTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedLargerDefaultTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedWhiteEmphasizedTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedWhiteDefaultTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedEmphasizedTextAttributes;
@property(readonly, nonatomic) NSDictionary *cloudFeedDefaultTextAttributes;
@property(readonly, nonatomic) double cloudFeedSeparatorHeight;
@property(readonly, nonatomic) UIColor *cloudFeedSeparatorColor;
@property(readonly, nonatomic) UIColor *cloudFeedBackgroundColor;
@property(readonly, nonatomic) UIFont *wallpaperCategoryLabelFont;
@property(readonly, nonatomic) UIColor *photoEditingCropToggleButtonColor;
@property(readonly, nonatomic) UIFont *photoEditingCropToggleButtonFont;
@property(readonly, nonatomic) UIFont *photoEditingCropTiltWheelFont;
@property(readonly, nonatomic) UIColor *photoEditingCropTiltWheelColor;
@property(readonly, nonatomic) UIColor *photoEditingCropButtonSelectedColor;
@property(readonly, nonatomic) UIColor *photoEditingCropButtonColor;
@property(readonly, nonatomic) UIFont *photoEditingFilterTitleFont;
@property(readonly, nonatomic) UIColor *photoEditingActiveFilterTitleColor;
@property(readonly, nonatomic) UIColor *photoEditingInactiveFilterTitleColor;
@property(readonly, nonatomic) UIFont *photoEditingTooltipFont;
@property(readonly, nonatomic) UIColor *photoEditingTooltipColor;
@property(readonly, nonatomic) UIColor *photoEditingAdjustmentsBarPlayheadColor;
@property(readonly, nonatomic) UIColor *photoEditingAdjustmentsModePickerValueColor;
@property(readonly, nonatomic) UIFont *photoEditingAdjustmentsModePickerValueFont;
@property(readonly, nonatomic) UIFont *photoEditingAdjustmentsModePickerFont;
@property(readonly, nonatomic) UIFont *photoEditingAdjustmentsModeLabelFont;
@property(readonly, nonatomic) UIColor *photoEditingAdjustmentsBarHighlightColor;
@property(readonly, nonatomic) UIColor *photoEditingAdjustmentsBarMainColor;
@property(readonly, nonatomic) UIColor *photoEditingAdjustmentsModeLabelColor;
@property(readonly, nonatomic) UIColor *photoEditingAdjustmentsBarBackgroundColor;
@property(readonly, nonatomic) UIColor *photoEditingAdjustmentsToolBackgroundColor;
@property(readonly, nonatomic) UIFont *photoEditingToolbarButtonCompactFont;
@property(readonly, nonatomic) UIFont *photoEditingToolbarButtonNormalFont;
@property(readonly, nonatomic) UIColor *photoEditingToolbarMainButtonColor;
@property(readonly, nonatomic) UIColor *photoEditingToolbarSecondaryButtonColor;
@property(readonly, nonatomic) UIColor *photoEditingBackgroundColor;
@property(readonly, nonatomic) UIFont *photoBrowserLandscapeDateTitleFont;
@property(readonly, nonatomic) UIFont *photoBrowserPhotoSubtitleFont;
@property(readonly, nonatomic) UIFont *photoBrowserPhotoPrimaryTitleFont;
@property(readonly, nonatomic) struct UIEdgeInsets commentsButtonTextInset;
@property(readonly, nonatomic) UIColor *toolbarCommentsShownButtonImageColor;
@property(readonly, nonatomic) NSDictionary *toolbarCommentsShownButtonTextAttributes;
@property(readonly, nonatomic) UIColor *toolbarCommentsHiddenButtonImageColor;
@property(readonly, nonatomic) NSDictionary *toolbarCommentsHiddenButtonTextAttributes;
@property(readonly, nonatomic) struct UIEdgeInsets contentCommentsButtonImageInset;
@property(readonly, nonatomic) UIColor *contentCommentsShownButtonImageColor;
@property(readonly, nonatomic) NSDictionary *contentCommentsShownButtonTextAttributes;
@property(readonly, nonatomic) UIColor *contentCommentsHiddenButtonImageColor;
@property(readonly, nonatomic) NSDictionary *contentCommentsHiddenButtonTextAttributes;
@property(readonly, nonatomic) double videoPaletteBottomMargin;
@property(readonly, nonatomic) double videoPaletteSideMargin;
@property(readonly, nonatomic) UIColor *photoBrowserChromeHiddenBackgroundColor;
@property(readonly, nonatomic) UIColor *photoBrowserChromeVisibleBackgroundColor;
@property(readonly, nonatomic) long long photoBrowserStatusBarStyle;
@property(readonly, nonatomic) UIFont *gridViewCellBannerTextFont;
@property(readonly, nonatomic) UIColor *gridViewCellBannerTextColor;
@property(readonly, nonatomic) UIColor *gridViewCellBannerBackgroundColor;
@property(readonly, nonatomic) UIImage *gridViewCellBannerBackgroundImage;
@property(readonly, nonatomic) UIColor *bannerBackgroundColor;
@property(readonly, nonatomic) double bannerHeight;
@property(readonly, nonatomic) UIColor *folderCellBackgroundColor;
@property(readonly, nonatomic) double albumListDisabledAlbumTitleAlpha;
@property(readonly, nonatomic) double albumListDisabledAlbumStackViewAlpha;
@property(readonly, nonatomic) UIFont *albumListSubtitleLabelFont;
@property(readonly, nonatomic) UIFont *albumListTitleLabelFont;
@property(readonly, nonatomic) UIColor *albumListBackgroundColor;
@property(readonly, nonatomic) UIColor *emptyPlaceholderViewBackgroundColor;
@property(readonly, nonatomic) unsigned long long emptyPlaceholderStyle;
@property(readonly, nonatomic) UIColor *photoCollectionToolbarButtonTintColor;
@property(readonly, nonatomic) double photoCollectionToolbarIconToTextSpacerWidth;
@property(readonly, nonatomic) double photoCollectionToolbarTextTitleSpacerWidth;
@property(readonly, nonatomic) UIColor *photoCollectionToolbarTintColor;
@property(readonly, nonatomic) UIImage *photoCollectionToolbarShadowImage;
@property(readonly, nonatomic) _Bool photoCollectionToolbarTranslucent;
@property(readonly, nonatomic) long long photoCollectionToolbarStyle;
@property(readonly, nonatomic) int photoCollectionViewBackgroundColorValue;
@property(readonly, nonatomic) UIColor *photoCollectionViewBackgroundColor;
@property(readonly, nonatomic) UIColor *topLevelNavigationBarButtonTintColor;
@property(readonly, nonatomic) long long topLevelStatusBarStyle;
- (void)configureEditPluginUserDefaultsAccessorySwitch:(id)arg1;
- (void)configureEditPluginUserDefaultsCell:(id)arg1 withIcon:(id)arg2 title:(id)arg3;
- (void)configureEditPluginUserDefaultsTableView:(id)arg1;
- (void)configureEditPluginListCellLabel:(id)arg1;
- (void)configureEditPluginNavigationController:(id)arg1;
- (void)configureEditPluginListNavigationController:(id)arg1;
- (void)configureCloudFeedCommentButton:(id)arg1 withCount:(long long)arg2;
- (id)createCloudFeedCommentButton;
- (void)configureCloudFeedStackView:(id)arg1 withStackSize:(struct CGSize)arg2;
- (id)attributedStringForCloudFeedGroupHeaderWithText:(id)arg1;
- (void)configureCloudFeedInvitationReplyButton:(id)arg1;
- (id)commentsButtonStringForCount:(long long)arg1;
- (void)configureMapViewAnnotationCountLabel:(id)arg1;
- (void)configureBannerLabel:(id)arg1;
- (void)configureBannerStackView:(id)arg1;
- (void)configureAlbumListPinButton:(id)arg1;
- (void)configureAlbumListDeleteButton:(id)arg1;
- (void)configureAlbumListEmptyStackViewPadPhotoDecoration:(id)arg1;
- (void)configureAlbumListStackViewPadPhotoDecoration:(id)arg1;
- (void)configureAlbumListEmptyStackViewPhonePhotoDecoration:(id)arg1;
- (void)configureAlbumListStackViewPhonePhotoDecoration:(id)arg1;
- (void)configureAlbumListSubtitleLabel:(id)arg1 asOpaque:(_Bool)arg2;
- (void)configureAlbumListTitleLabel:(id)arg1 asOpaque:(_Bool)arg2;
- (void)configureAlbumListTitleTextField:(id)arg1 asOpaque:(_Bool)arg2;
- (id)photoCollectionToolbarDeleteButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)photoCollectionToolbarButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (struct UIOffset)photoCollectionToolbarButtonTitlePositionAdjustmentforBarMetrics:(long long)arg1;
- (id)photoCollectionToolbarDeleteButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (id)photoCollectionToolbarButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (void)configurePhotoCollectionToolbarDeleteButton:(id)arg1;
- (void)configurePhotoCollectionToolbarButton:(id)arg1;
- (id)photoCollectionToolbarBackgroundImageForBarMetrics:(long long)arg1;
- (void)configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg1;
- (void)configurePhotoCollectionGlobalFooterTitleLabel:(id)arg1;
- (id)photoCollectionHeaderActionButtonAttributesForStyle:(long long)arg1;
- (id)photoCollectionHeaderActionButtonFontForStyle:(long long)arg1;
- (void)configurePhotoCollectionHeaderDateLabel:(id)arg1 forStyle:(long long)arg2;
- (void)configurePhotoCollectionHeaderLocationsLabel:(id)arg1 forStyle:(long long)arg2;
- (void)configurePhotoCollectionHeaderTitleLabel:(id)arg1 forStyle:(long long)arg2;
- (id)photoCollectionHeaderBackgroundColorForBackgroundStyle:(unsigned long long)arg1;
- (struct UIOffset)photoCollectionHeaderLocationIconOffsetForStyle:(long long)arg1;
- (id)photoCollectionHeaderLocationIconForStyle:(long long)arg1;
- (id)topLevelNavigationBarDoneButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)topLevelNavigationBarBackButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)topLevelNavigationBarButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (struct UIOffset)topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(long long)arg1;
- (id)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (id)topLevelNavigationBarButtonTitleTextAttributesForState:(unsigned long long)arg1;
@end

