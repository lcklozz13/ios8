/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterUI/GKImageSource.h>

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource
{
    NSMutableDictionary *_loadingGroups;
}

@property(nonatomic) NSMutableDictionary *loadingGroups; // @synthesize loadingGroups=_loadingGroups;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(id)arg4;
- (_Bool)imageNeedsRefresh:(id)arg1;
- (void)dealloc;

@end

