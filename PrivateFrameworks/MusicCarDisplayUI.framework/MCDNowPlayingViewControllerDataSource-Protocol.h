/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MCDNowPlayingViewControllerDataSource <NSObject>
- (_Bool)nowPlayingViewControllerIsPlaying:(id)arg1;
- (double)playbackDurationForNowPlayingViewController:(id)arg1 withElapsedTime:(out double *)arg2;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;

@optional
- (id)repeatStringForNowPlayingViewController:(id)arg1;
- (unsigned long long)repeatTypeForNowPlayingViewController:(id)arg1;
- (id)shuffleStringForNowPlayingViewController:(id)arg1;
- (unsigned long long)shuffleTypeForNowPlayingViewController:(id)arg1;
@end

