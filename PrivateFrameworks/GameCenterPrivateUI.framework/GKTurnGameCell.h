/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUI/GKBaseGameCell.h>

@class GKContiguousContainerView, GKLabel, UIImageView;

@interface GKTurnGameCell : GKBaseGameCell
{
    unsigned long long _numberOfActiveMatches;
    unsigned long long _numberOfLocalPlayerTurns;
    GKLabel *_activeMatchesLabel;
    GKLabel *_localPlayerTurnsLabel;
    UIImageView *_statusImageView;
    GKContiguousContainerView *_textContainerView;
}

+ (void)registerCellClassesForCollectionView:(id)arg1;
+ (double)defaultRowHeight;
@property(retain, nonatomic) GKContiguousContainerView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) GKLabel *localPlayerTurnsLabel; // @synthesize localPlayerTurnsLabel=_localPlayerTurnsLabel;
@property(retain, nonatomic) GKLabel *activeMatchesLabel; // @synthesize activeMatchesLabel=_activeMatchesLabel;
@property(nonatomic) unsigned long long numberOfLocalPlayerTurns; // @synthesize numberOfLocalPlayerTurns=_numberOfLocalPlayerTurns;
@property(nonatomic) unsigned long long numberOfActiveMatches; // @synthesize numberOfActiveMatches=_numberOfActiveMatches;
- (void)didUpdateModel;
- (void)dealloc;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

