/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDHint-Protocol.h"

// Not exported
@interface TSDDefaultHint : NSObject <TSDHint>
{
    struct CGRect mBounds;
    unsigned long long mEdges;
}

+ (Class)archivedHintClass;
@property(readonly, nonatomic) unsigned long long edges; // @synthesize edges=mEdges;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
- (id)lastChildHint;
- (id)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (_Bool)overlapsWithSelection:(id)arg1;
- (_Bool)isLastPartitionHorizontally:(_Bool)arg1;
- (id)copyForArchiving;
- (id)initWithBounds:(struct CGRect)arg1 edges:(unsigned long long)arg2;

@end

