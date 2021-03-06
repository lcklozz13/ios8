/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate-Protocol.h"
#import "SKUIMissingItemDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSObject<OS_dispatch_source>, SKUICarouselPageComponent, SKUIMissingItemLoader, SKUIViewElementLayoutContext, UICollectionView;

@interface SKUICarouselPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_carouselCollectionView;
    long long _cellCount;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSObject<OS_dispatch_source> *_cycleTimer;
    struct CGSize _itemSize;
    double _itemSpacing;
    SKUIMissingItemLoader *_missingItemLoader;
    NSArray *_modelObjects;
    _Bool _needsReload;
}

- (void).cxx_destruct;
- (void)_startCycleTimerIfNecessary;
- (void)_reloadViewElementProperties;
- (void)_reloadLegacySizing;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (double)_legacyItemSpacing;
- (struct CGSize)_legacyItemSize;
- (_Bool)_isItemEnabledAtIndexPath:(id)arg1;
- (void)_fireCycleTimer;
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (Class)_cellClassForViewElement:(id)arg1;
- (Class)_cellClassForLockup:(id)arg1;
- (id)_carouselCollectionView;
- (void)_cancelCycleTimer;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (double)_actualContentWidth;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
@property(retain, nonatomic) SKUICarouselPageComponent *pageComponent; // @dynamic pageComponent;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (long long)defaultPinStyle;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

@end

