/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPRep.h>

// Not exported
@interface TSWPHeaderRep : TSWPRep
{
    double _leftClip;
    double _rightClip;
}

@property(nonatomic) double rightClip; // @synthesize rightClip=_rightClip;
@property(nonatomic) double leftClip; // @synthesize leftClip=_leftClip;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;

@end
