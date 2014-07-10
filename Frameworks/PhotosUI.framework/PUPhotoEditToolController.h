/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PUPhotoEditLayoutDynamicAdaptable-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, PLPhotoEditMutableModel, PUPhotoEditToolControllerSpec, UIButton, UIColor, UIImage, UIScrollView, UIView;

@interface PUPhotoEditToolController : UIViewController <PUPhotoEditLayoutDynamicAdaptable, UIScrollViewDelegate>
{
    _Bool _shouldDeferUpdatingModelDependentControls;
    PUPhotoEditToolControllerSpec *_spec;
    long long _layoutOrientation;
    PLPhotoEditMutableModel *_photoEditModel;
    id <PUPhotoEditToolControllerDelegate> _delegate;
    NSString *_localizedName;
    UIImage *_toolbarIcon;
    UIImage *_selectedToolbarIcon;
    unsigned long long _preferredRenderMode;
    UIButton *_preferredAlternateToolbarButton;
    UIScrollView *__toolControllerScrollView;
    UIView *__dummyScrollContentView;
}

@property(retain, nonatomic, setter=_setDummyScrollContentView:) UIView *_dummyScrollContentView; // @synthesize _dummyScrollContentView=__dummyScrollContentView;
@property(retain, nonatomic, setter=_setToolControllerScrollView:) UIScrollView *_toolControllerScrollView; // @synthesize _toolControllerScrollView=__toolControllerScrollView;
@property(readonly, nonatomic) UIButton *preferredAlternateToolbarButton; // @synthesize preferredAlternateToolbarButton=_preferredAlternateToolbarButton;
@property(readonly, nonatomic) unsigned long long preferredRenderMode; // @synthesize preferredRenderMode=_preferredRenderMode;
@property(readonly, nonatomic) _Bool shouldDeferUpdatingModelDependentControls; // @synthesize shouldDeferUpdatingModelDependentControls=_shouldDeferUpdatingModelDependentControls;
@property(readonly, nonatomic) UIImage *selectedToolbarIcon; // @synthesize selectedToolbarIcon=_selectedToolbarIcon;
@property(readonly, nonatomic) UIImage *toolbarIcon; // @synthesize toolbarIcon=_toolbarIcon;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) __weak id <PUPhotoEditToolControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PLPhotoEditMutableModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(readonly, nonatomic) long long layoutOrientation;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateScrollViewCentering;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setLayoutOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool wantsZoomAndPanEnabled;
@property(readonly, copy, nonatomic) UIColor *preferredPreviewBackgroundColor;
@property(readonly, nonatomic) _Bool wantsDefaultPreviewView;
@property(readonly, nonatomic) struct UIEdgeInsets preferredPreviewViewInsets;
@property(readonly, nonatomic) NSString *localizedResetToolActionTitle;
@property(readonly, nonatomic) _Bool canResetToDefaultValue;
- (void)resetForZoomAndPan;
- (void)setupWithPhotoEditModel:(id)arg1;
@property(readonly, nonatomic) PUPhotoEditToolControllerSpec *spec; // @synthesize spec=_spec;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didResignActiveTool;
- (void)animateResigningActiveTool;
- (void)willResignActiveTool;
- (void)didBecomeActiveTool;
- (void)animateBecomingActiveTool;
- (void)willBecomeActiveTool;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (void)photoEditModelDidChange;

@end
