/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKSelection.h>

#import "NSCopying-Protocol.h"
#import <iWorkImport/TSDCanvasSelection-Protocol.h>

@class NSSet, TSDDrawableInfo<TSDContainerInfo>;

// Not exported
@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying>
{
    NSSet *mInfos;
    TSDDrawableInfo<TSDContainerInfo> *mContainer;
}

+ (id)emptySelection;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container; // @synthesize container=mContainer;
- (id)description;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (_Bool)containsUnlockedKindOfClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (_Bool)containsKindOfClass:(Class)arg1;
- (id)infosOfClass:(Class)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long infoCount;
@property(readonly, nonatomic) NSSet *infos;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;
- (void)saveToArchive:(struct CanvasSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CanvasSelectionArchive *)arg1 unarchiver:(id)arg2;

@end
