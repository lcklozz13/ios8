/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIActivity.h>

@class NSExtension, NSString, UIImage, UIViewController, _UIActivityBundleHelper;

@interface UIApplicationExtensionActivity : UIActivity
{
    NSExtension *_applicationExtension;
    UIViewController *_extensionViewController;
    id _extensionContextIdentifier;
    UIViewController *_presenterViewController;
    id _presenterCompletion;
    _UIActivityBundleHelper *_activityBundleHelper;
    NSString *_localizedExtensionBundleName;
    UIImage *_renderedActivityImage;
    UIImage *_renderedActivitySettingsImage;
}

+ (long long)activityCategory;
+ (id)activityForApplicationExtension:(id)arg1 category:(long long)arg2;
+ (id)activityForApplicationExtension:(id)arg1;
+ (id)applicationExtensionActivitiesForItems:(id)arg1;
@property(retain, nonatomic) UIImage *renderedActivitySettingsImage; // @synthesize renderedActivitySettingsImage=_renderedActivitySettingsImage;
@property(retain, nonatomic) UIImage *renderedActivityImage; // @synthesize renderedActivityImage=_renderedActivityImage;
@property(copy, nonatomic) NSString *localizedExtensionBundleName; // @synthesize localizedExtensionBundleName=_localizedExtensionBundleName;
@property(retain, nonatomic) _UIActivityBundleHelper *activityBundleHelper; // @synthesize activityBundleHelper=_activityBundleHelper;
@property(copy, nonatomic) id presenterCompletion; // @synthesize presenterCompletion=_presenterCompletion;
@property(nonatomic) UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(copy, nonatomic) id extensionContextIdentifier; // @synthesize extensionContextIdentifier=_extensionContextIdentifier;
@property(retain, nonatomic) UIViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
- (id)_itemProviderForImageRep:(id)arg1;
- (id)_inputItemsFromActivityItems:(id)arg1;
- (void)_presentExtensionViewControllerIfPossible;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
@property(retain, nonatomic) NSExtension *applicationExtension;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)_isNonUIExtension;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithApplicationExtension:(id)arg1;

@end
