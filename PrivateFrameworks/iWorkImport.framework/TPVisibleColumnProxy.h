/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSWPOffscreenColumn-Protocol.h"

@class TPPageController;

// Not exported
@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn>
{
    unsigned long long _pageIndex;
    TPPageController *_pageController;
}

- (const CDStruct_6026ced1 *)p_targetLastHint;
- (const CDStruct_6026ced1 *)p_targetFirstHint;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) struct _NSRange anchoredRange;
@property(readonly, nonatomic) unsigned long long startAnchoredCharIndex;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) unsigned long long startCharIndex;
- (void)dealloc;
- (id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2;

@end
