/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPShapeRep.h>

@class CALayer, TSDFloatingCommentControlKnob, TSDFloatingCommentDeleteKnob;

// Not exported
@interface TSWPCommentRep : TSWPShapeRep
{
    _Bool _shouldShowNavigationKnobs;
    TSDFloatingCommentControlKnob *_previousKnob;
    TSDFloatingCommentControlKnob *_nextKnob;
    TSDFloatingCommentDeleteKnob *_deleteKnob;
    _Bool _didNavigate;
    CALayer *_headerLayer;
    CALayer *_dateLayer;
    CALayer *_authorLayer;
    _Bool _needsAuthorOrDateUpdate;
}

- (_Bool)p_shouldDraw;
- (_Bool)exclusivelyProvidesGuidesWhileAligning;
- (_Bool)providesGuidesWhileAligning;
- (void)invalidateAnnotationColor;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)didUpdateLayer:(id)arg1;
- (void)screenScaleDidChange;
- (void)viewScaleDidChange;
- (id)additionalLayersOverLayer;
- (id)p_imageForString:(id)arg1 ofSize:(struct CGSize)arg2 baselineOffsetFromBottom:(double)arg3 foregroundColor:(struct CGColor *)arg4;
- (void)addKnobsToArray:(id)arg1;
- (void)p_previousAnnotation;
- (void)p_nextAnnotation;
- (unsigned long long)enabledKnobMask;
- (void)p_deleteComment;
- (_Bool)shouldShowSmartShapeKnobs;
- (_Bool)canBeUsedForImageMask;
- (_Bool)canMakePathEditable;
- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1 onKnob:(id)arg2;
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (void)dynamicDragDidEnd;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (id)newTrackerForKnob:(id)arg1;
- (void)didEndZooming;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)invalidateComments;
- (void)dynamicOperationDidBegin;
- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;
- (double)selectionHighlightWidth;
- (struct CGRect)boundsForHighlightLayer;
- (double)p_effectiveBorderStrokeWidthInPoints;
- (struct CGColor *)selectionHighlightColor;
- (_Bool)forcesPlacementOnTop;
- (void)willEndEditingContainedRep;
- (void)willBeginEditingContainedRep;
- (_Bool)shouldShowKnobs;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)dealloc;

@end

