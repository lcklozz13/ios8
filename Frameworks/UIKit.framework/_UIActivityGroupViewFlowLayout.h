/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, UILongPressGestureRecognizer, UIView;

// Not exported
@interface _UIActivityGroupViewFlowLayout : UICollectionViewFlowLayout
{
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForDraggedItem;
    UIView *_draggingView;
    struct UIOffset _draggingOffset;
}

@property(retain, nonatomic) UIView *draggingView; // @synthesize draggingView=_draggingView;
@property(nonatomic) struct UIOffset draggingOffset; // @synthesize draggingOffset=_draggingOffset;
@property(copy, nonatomic) NSIndexPath *indexPathForDraggedItem; // @synthesize indexPathForDraggedItem=_indexPathForDraggedItem;
@property(retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
- (void)cancelDraggingForGesture:(id)arg1;
- (_Bool)shouldCancelDraggingForGesture:(id)arg1;
- (void)updateDraggingViewForGesture:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (id)parentContainerViewController;
- (void)invalidateGroupViewLayoutAnimated:(_Bool)arg1;
- (void)handleEditingGesture:(id)arg1;
- (void)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;
- (void)dealloc;

@end

