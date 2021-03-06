/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GKAchievementInternal, GKGame, GKPlayer, NSDate, NSString;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    _Bool _showsCompletionBanner;
    _Bool _hidden;
    GKAchievementInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)resetAchievementsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id)arg4;
+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(_Bool)arg3 includeHidden:(_Bool)arg4 withCompletionHandler:(id)arg5;
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(_Bool)arg3 includeHidden:(_Bool)arg4 withCompletionHandler:(id)arg5;
+ (void)loadAchievementsWithCompletionHandler:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool showsCompletionBanner; // @synthesize showsCompletionBanner=_showsCompletionBanner;
@property(retain) GKAchievementInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)reportAchievementWithCompletionHandler:(id)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isCompleted) _Bool completed;
@property(nonatomic) GKGame *game; // @synthesize game=_game;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDate *lastReportedDate; // @dynamic lastReportedDate;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;

@end

