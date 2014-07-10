/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPUApplicationDefaults.h"

@class NSArray;

@interface MusicDefaults : MPUApplicationDefaults
{
}

+ (id)sharedDefaults;
- (void)migrateTabBarOrderingIfNeeded;
- (void)ensureInvertedDefaultPlaybackSpeedHackIsInPlace;
- (void)beginObservingDefaultsChanges;
@property(nonatomic, getter=isGeniusUserEnabled) _Bool geniusUserEnabled;
@property(copy, nonatomic) NSArray *tabBarOrdering;
@property(nonatomic) unsigned long long shuffleType;
@property(nonatomic) unsigned long long repeatType;
@property(nonatomic) unsigned long long playbackSpeed;
@property(readonly, nonatomic, getter=isSoundCheckEnabled) _Bool soundCheckEnabled;
@property(readonly, nonatomic, getter=isSortByArtistEnabled) _Bool sortByArtistEnabled;
@property(readonly, nonatomic, getter=isShowCloudMediaEnabled) _Bool showCloudMediaEnabled;
@property(readonly, nonatomic, getter=isShakeToShuffleEnabled) _Bool shakeToShuffleEnabled;
@property(readonly, nonatomic, getter=isPinningEnabled) _Bool pinningEnabled;
@property(readonly, nonatomic, getter=isGroupByAlbumArtistEnabled) _Bool groupByAlbumArtistEnabled;
@property(readonly, nonatomic, getter=isActivityContinuationEnabled) _Bool activityContinuationEnabled;
@property(readonly, nonatomic) int eqPreset;
@property(readonly, nonatomic, getter=areLyricsAndPodcastInfoEnabled) _Bool lyricsAndPodcastInfoEnabled;
@property(nonatomic) _Bool lastEffectiveRadioExplicitTracksEnabled;

@end
