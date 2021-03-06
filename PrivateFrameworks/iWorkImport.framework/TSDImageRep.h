/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDMediaRep.h>

#import "TSDMagicMoveMatching-Protocol.h"
#import "TSDShapeControlRep-Protocol.h"

@class CALayer, CAShapeLayer, NSCache, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSRecursiveLock, TSDImageRepSizingState, TSDInstantAlphaTracker, TSDLayoutGeometry;

// Not exported
@interface TSDImageRep : TSDMediaRep <TSDMagicMoveMatching, TSDShapeControlRep>
{
    TSDLayoutGeometry *mLastImageGeometryInRoot;
    TSDLayoutGeometry *mLastMaskGeometryInRoot;
    struct CGAffineTransform mLastLayoutToImageTransform;
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    CALayer *mContentsLayer;
    CAShapeLayer *mMaskPathLayer;
    CAShapeLayer *mIAMaskLayer;
    CAShapeLayer *mMaskSublayer;
    struct CGAffineTransform mLastPictureFrameLayerTransform;
    _Bool mDirectlyManagesLayerContent;
    _Bool mShowImageHighlight;
    _Bool mInInstantAlphaMode;
    TSDInstantAlphaTracker *mInstantAlphaTracker;
    struct CGImage *mInstantAlphaImage;
    struct CGAffineTransform mBaseMaskLayoutTransform;
    NSRecursiveLock *mLayerUpdateAndSizingStateLock;
    TSDImageRepSizingState *mSizingState;
    _Bool mSizingStateReady;
    NSObject<OS_dispatch_queue> *mSizedImageAccessQueue;
    struct CGImage *mSizedImage;
    struct CGSize mSizedImageSize;
    long long mSizedImageOrientation;
    _Bool mSizedImageHasMaskBakedIn;
    _Bool mSizedImageHasAdjustmentsBakedIn;
    struct CGPath *mSizedImageMaskPath;
    NSCache *mHitTestCache;
    long long mHitTestCacheOnce;
    NSMutableArray *mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *mUpdateFromLayoutBlocksLock;
}

+ (struct CGPath *)p_newPathToBakeIntoSizedImageForSize:(struct CGSize)arg1 withImageLayout:(id)arg2 orientation:(long long)arg3;
+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
@property(readonly, nonatomic) TSDInstantAlphaTracker *instantAlphaTracker; // @synthesize instantAlphaTracker=mInstantAlphaTracker;
- (void)p_popoverViewPresented:(id)arg1;
- (void)p_hitCacheSetCachedValue:(_Bool)arg1 forPoint:(struct CGPoint)arg2;
- (_Bool)p_hitCacheGetCachedValue:(_Bool *)arg1 forPoint:(struct CGPoint)arg2;
- (void)p_invalidateHitTestCache;
- (_Bool)shouldShowMediaReplaceUI;
- (double)additionalRotationForKnobOrientation;
- (void)addKnobsToArray:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (_Bool)shouldCreateSelectionKnobs;
- (_Bool)shouldShowSmartMaskKnobs;
- (id)newTrackerForKnob:(id)arg1;
- (_Bool)p_shouldRenderWithMaskToBounds;
- (_Bool)p_shouldBakeMaskIntoSizedImage;
- (void)p_invalidateSizedImageFromQueue;
- (void)p_invalidateSizedImage;
- (void)p_takeSizedImageFromState;
- (void)p_takeSizedImageFromStateIfReady;
- (void)p_didGenerateSizedImageInBackground;
- (void)i_willEnterForeground;
- (void)p_generateSizedImageInBackground:(id)arg1;
- (void)p_generateSizedImage:(id)arg1;
- (void)p_startSizing;
- (void)p_generateSizedImageIfNecessary;
- (_Bool)p_okayToGenerateSizedImage;
- (struct CGSize)p_desiredSizedImageSize;
- (_Bool)shouldShowReflection;
- (_Bool)shouldShowShadow;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsInOneStep;
- (void)p_updateMaskSublayersForMaskEditMode;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (void)p_disposeMaskLayer;
- (void)p_disposeStrokeLayer;
- (void)p_updateHUD;
- (void)p_cleanUpMaskModeUI;
- (void)p_setUpMaskModeUI;
- (void)p_endEditingMask;
- (void)p_setDefaultMaskWithActionString:(id)arg1;
- (id)p_validatedThumbnailImageProvider;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)p_imageProvider;
- (id)p_imageData;
- (id)textureForContext:(id)arg1;
- (id)magicMoveAttributesWithShapeAttributes:(_Bool)arg1;
- (void)setMagicMoveTextureAttributes:(id)arg1;
- (void)viewScaleDidChange;
- (id)additionalLayersOverLayer;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (void)p_updateMaskLayer:(id)arg1 forRepLayer:(id)arg2 shouldIncludeMask:(_Bool)arg3 shouldIncludeInstantAlpha:(_Bool)arg4;
- (_Bool)p_shouldMaskWithFrameLayers;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)p_getAliasedValuesForMaskToBoundsDirectLayerFrame:(out struct CGRect *)arg1 transform:(out struct CGAffineTransform *)arg2;
- (struct CGRect)frameInUnscaledCanvas;
- (struct CGImage *)p_newImageByApplyingAdjustmentsToImage:(struct CGImage *)arg1 alreadyEnhanced:(_Bool)arg2;
- (_Bool)p_directlyManagesContentForLayer:(id)arg1;
- (long long)p_orientationForDirectlyManagedLayer;
- (struct CGImage *)p_imageForDirectlyManagedLayer:(id)arg1;
- (void)p_updateDirectlyManagesLayerContentForLayer:(id)arg1;
- (_Bool)directlyManagesLayerContent;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 withIAMask:(_Bool)arg6 forLayer:(_Bool)arg7 forShadow:(_Bool)arg8 forHitTest:(_Bool)arg9;
- (_Bool)canDrawInParallel;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)endInstantAlphaMode;
- (struct CGImage *)imageForInstantAlpha;
- (void)beginInstantAlphaMode;
- (void)beginEditingMaskInMaskEditMode;
- (void)beginEditingImageInMaskEditMode;
- (void)dynamicMoveSmartShapeKnobDidEndWithTracker:(id)arg1;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;
- (void)dynamicMoveSmartShapeKnobDidBegin;
- (struct CGPoint)centerForGuideLayerPlacement;
- (void)dynamicRotateDidEndWithTracker:(id)arg1;
- (void)dynamicallyRotatingWithTracker:(id)arg1;
- (struct CGPoint)unscaledGuidePosition;
- (double)angleForRotation;
- (struct CGPoint)centerForRotation;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (_Bool)wantsGuidesWhileResizing;
- (id)infoForTransforming;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (id)dynamicResizeDidBegin;
- (_Bool)demandsExclusiveSelection;
- (_Bool)allowDragDelegate;
- (void)dynamicDragDidEnd;
- (struct CGPoint)i_dragOffset;
- (struct CGRect)snapRectForDynamicDragWithOffset:(struct CGPoint)arg1;
- (_Bool)resetGuidesAfterDragAfterReset;
- (_Bool)exclusivelyProvidesGuidesWhileAligning;
- (_Bool)providesGuidesWhileAligning;
- (void)dynamicDragDidBegin;
- (_Bool)shouldShowDragHUD;
- (_Bool)isDraggable;
- (id)commandToResetToSize:(struct CGSize)arg1;
- (_Bool)shouldAllowReplacementFromPaste;
- (struct CGAffineTransform)transformForHighlightLayer;
- (struct CGRect)boundsForHighlightLayer;
- (struct CGPoint)positionOfStandardKnob:(id)arg1 forBounds:(struct CGRect)arg2;
- (struct CGRect)boundsForStandardKnobs;
- (struct CGRect)targetRectForEditMenu;
- (_Bool)wantsToDistortWithImagerContext;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (int)tilingMode;
- (id)overlayLayers;
- (void)willBeginReadMode;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)updateFromLayout;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)pathSourceForSelectionHighlightBehavior;
- (_Bool)shouldShowSelectionHighlight;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)becameNotSelected;
- (void)willBeRemoved;
- (void)p_canvasSelectionDidChange:(id)arg1;
- (void)resetMask;
- (void)editMaskWithHUD:(_Bool)arg1;
- (void)endEditingMask;
- (void)endDynamicallyChangingMaskScale:(double)arg1;
- (void)dynamicallySetMaskScale:(double)arg1;
- (void)beginDynamicallyChangingMaskScale;
- (void)maskScaleLimitsReturningMin:(double *)arg1 max:(double *)arg2;
- (double)maskScale;
- (void)maskWithHUD:(_Bool)arg1;
- (void)unhighlightImage;
- (void)highlightImage;
- (id)maskLayout;
- (id)maskInfo;
- (id)imageLayout;
- (id)imageInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

