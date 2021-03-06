/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBFColorBoxes : NSObject
{
    struct **_colorBoxes;
    unsigned long long _rowCount;
    unsigned long long _columnCount;
    unsigned long long _size;
    double _contrast;
}

@property(readonly, nonatomic) double contrast; // @synthesize contrast=_contrast;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
@property(readonly, nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;
@property(readonly, nonatomic) struct **colorBoxes; // @synthesize colorBoxes=_colorBoxes;
- (id)description;
- (void)_freeColorBoxes;
- (void)dealloc;
- (id)initWithColorBoxes:(struct **)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 contrast:(double)arg5;

@end

