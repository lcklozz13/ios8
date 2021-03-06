/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

@interface SGIntervalTreeNode : NSObject
{
    _Bool _hasIndex;
    unsigned long long _index;
    SGIntervalTreeNode *_left;
    _Bool _hasLeftIndex;
    unsigned long long _leftIndex;
    SGIntervalTreeNode *_right;
    _Bool _hasRightIndex;
    unsigned long long _rightIndex;
    NSMutableSet *_keys;
}

- (void).cxx_destruct;
- (_Bool)isSpannedByRight:(unsigned long long)arg1;
- (_Bool)isSpannedByLeft:(unsigned long long)arg1;
- (unsigned long long)getMax;
- (unsigned long long)getMin;
- (_Bool)isSpannedBy:(struct _NSRange)arg1;
- (void)insertIndex:(unsigned long long)arg1;
- (void)assignKey:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)queryRange:(struct _NSRange)arg1 toResults:(id)arg2;
- (id)queryRange:(struct _NSRange)arg1;
- (void)storePosition:(unsigned long long)arg1;
- (id)init;

@end

