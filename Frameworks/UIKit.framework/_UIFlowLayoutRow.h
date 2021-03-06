/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, _UIFlowLayoutSection;

// Not exported
@interface _UIFlowLayoutRow : NSObject
{
    NSMutableArray *_items;
    _UIFlowLayoutSection *_section;
    struct CGSize _rowSize;
    struct CGRect _rowFrame;
    long long _index;
    _Bool _isValid;
    _Bool _complete;
    int _verticalAlignement;
    int _horizontalAlignement;
    double _availableSpace;
    _Bool _fixedItemSize;
}

@property(nonatomic) double availableSpace; // @synthesize availableSpace=_availableSpace;
@property(nonatomic) _Bool fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct CGRect rowFrame; // @synthesize rowFrame=_rowFrame;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) _UIFlowLayoutSection *section; // @synthesize section=_section;
- (long long)indexOfNearestItemAtPoint:(struct CGPoint)arg1;
- (id)copyFromSection:(id)arg1;
- (id)snapshot;
- (void)removeItemAtIndex:(long long)arg1;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
- (void)addItem:(id)arg1 atEnd:(_Bool)arg2;
- (void)layoutRow;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

