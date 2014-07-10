/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKDPIdentifier, NSString;

@interface CKDProtocolTranslator : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_containerScopedUserID;
    NSString *_overriddenContainerScopedUserID;
}

+ (id)translatorIgnoringUserIDs;
@property(copy, nonatomic) NSString *overriddenContainerScopedUserID; // @synthesize overriddenContainerScopedUserID=_overriddenContainerScopedUserID;
@property(copy, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)notificationFromPPushMessage:(id)arg1;
- (id)pPulseDataFromUserPresence:(id)arg1;
- (id)userPresenceFromPPulseData:(id)arg1;
- (id)pCommentFromComment:(id)arg1;
- (id)commentFromPComment:(id)arg1;
- (id)shareInvitationFromPInvitation:(id)arg1;
- (id)pInvitationRecipientFromShareParticipant:(id)arg1;
- (id)pParticipantFromShareParticipant:(id)arg1;
- (id)shareParticipantFromPInvitationRecipient:(id)arg1;
- (id)shareParticipantFromPParticipant:(id)arg1;
- (id)pShareFromShare:(id)arg1;
- (id)shareFromPShare:(id)arg1;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)recordZoneFromPRecordZone:(id)arg1 withDatabaseScope:(long long)arg2;
- (id)pSubscriptionFromSubscription:(id)arg1 withError:(id *)arg2;
- (id)subscriptionFromPSubscription:(id)arg1;
- (id)pQueryFromQuery:(id)arg1 withError:(id *)arg2;
- (id)pPackageFromPackage:(id)arg1;
- (id)packageFromPPackage:(id)arg1;
- (id)pAssetFromAsset:(id)arg1;
- (id)assetFromPAsset:(id)arg1;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(_Bool)arg2 outDeletedMergeFields:(id *)arg3 outKeysToSend:(id *)arg4;
- (id)pRecordFromRecord:(id)arg1;
- (id)pRecordFromRecord:(id)arg1 forCache:(_Bool)arg2;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(_Bool)arg2;
- (id)recordFromPRecord:(id)arg1;
- (id)pLikedIdFromSharedItemID:(id)arg1;
- (id)pCommentedOnIdFromSharedItemID:(id)arg1;
- (id)pResourceFromSharedItemID:(id)arg1;
- (id)sharedItemIDFromPLikedId:(id)arg1;
- (id)sharedItemIDFromPCommentedOnId:(id)arg1;
- (id)sharedItemIDFromPResource:(id)arg1;
- (id)pShareIdentifierFromShareID:(id)arg1;
- (id)shareIDFromPShareIdentifier:(id)arg1;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)recordIDFromPRecordIdentifier:(id)arg1;
- (id)userNameFromPIdentifier:(id)arg1;
- (id)pIdentifierFromUserRecordName:(id)arg1;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)recordIDFromPUserName:(id)arg1;
@property(readonly, nonatomic) CKDPIdentifier *pUserID;
- (_Bool)_isDefaultUserNameFromClient:(id)arg1;
- (_Bool)_isDefaultUserNameFromServer:(id)arg1;
- (id)initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)fieldValueListOfType:(int)arg1 withList:(id)arg2;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)fieldValueFromObject:(id)arg1;
- (int)fieldValueTypeFromObject:(id)arg1;

@end
