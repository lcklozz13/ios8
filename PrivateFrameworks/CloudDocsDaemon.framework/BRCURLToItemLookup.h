/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class BRCAccountSession, BRCItemID, BRCLocalItem, BRCRelativePath, BRCServerItem, NSString, NSURL;

@interface BRCURLToItemLookup : NSObject <NSSecureCoding>
{
    BRCAccountSession *_session;
    union {
        struct {
            unsigned int parentItemID:1;
            unsigned int relpath:1;
            unsigned int pathMatch:1;
            unsigned int faultedMatch:1;
            unsigned int byIDMatch:1;
            unsigned int reservedMatch:1;
        } ;
        unsigned int value;
    } _hasFetched;
    BRCRelativePath *__relpath;
    NSURL *_url;
    BRCRelativePath *_parentRelpath;
    BRCItemID *_parentItemID;
    NSString *_filename;
    BRCLocalItem *_byIDLocalItem;
    BRCServerItem *_byIDServerItem;
    unsigned long long _byIDDiffs;
    BRCLocalItem *_byPathLocalItem;
    BRCServerItem *_byPathServerItem;
    unsigned long long _byPathDiffs;
    BRCLocalItem *_faultedLocalItem;
    BRCServerItem *_faultedServerItem;
    BRCRelativePath *_faultedRelpath;
    unsigned long long _faultedDiffs;
    BRCLocalItem *_reservedLocalItem;
    BRCServerItem *_reservedServerItem;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) BRCRelativePath *parentRelpath; // @synthesize parentRelpath=_parentRelpath;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)clearReservedItem;
@property(readonly, nonatomic) BRCServerItem *reservedServerItem; // @synthesize reservedServerItem=_reservedServerItem;
@property(readonly, nonatomic) BRCLocalItem *reservedLocalItem; // @synthesize reservedLocalItem=_reservedLocalItem;
@property(readonly, nonatomic) CDStruct_b86b310a reservedMatch;
- (void)_fetchReservedPathMatch;
- (void)clearFaultedItem;
@property(readonly, nonatomic) unsigned long long faultedDiffs; // @synthesize faultedDiffs=_faultedDiffs;
@property(readonly, nonatomic) BRCLocalItem *faultedLocalItem; // @synthesize faultedLocalItem=_faultedLocalItem;
@property(readonly, nonatomic) BRCServerItem *faultedServerItem; // @synthesize faultedServerItem=_faultedServerItem;
@property(readonly, nonatomic) BRCRelativePath *faultedRelpath; // @synthesize faultedRelpath=_faultedRelpath;
- (void)_fetchFaultedPathMatch;
@property(readonly, nonatomic) CDStruct_b86b310a faultedMatch;
- (void)refreshFaultedDiffs;
- (void)clearByIDItem;
@property(readonly, nonatomic) unsigned long long byIDDiffs; // @synthesize byIDDiffs=_byIDDiffs;
@property(readonly, nonatomic) BRCServerItem *byIDServerItem; // @synthesize byIDServerItem=_byIDServerItem;
@property(readonly, nonatomic) BRCRelativePath *byIDRelpath;
@property(readonly, nonatomic) BRCLocalItem *byIDLocalItem; // @synthesize byIDLocalItem=_byIDLocalItem;
@property(readonly, nonatomic) CDStruct_b86b310a byIDMatch;
- (void)_fetchIDMatch;
- (void)refreshByIDDiffs;
- (void)clearByPathItem;
@property(readonly, nonatomic) unsigned long long byPathDiffs; // @synthesize byPathDiffs=_byPathDiffs;
@property(readonly, nonatomic) BRCServerItem *byPathServerItem; // @synthesize byPathServerItem=_byPathServerItem;
@property(readonly, nonatomic) BRCRelativePath *byPathRelpath;
@property(readonly, nonatomic) BRCLocalItem *byPathLocalItem; // @synthesize byPathLocalItem=_byPathLocalItem;
@property(readonly, nonatomic) CDStruct_b86b310a byPathMatch;
- (void)_fetchPathMatch;
- (void)refreshByPathDiffs;
- (id)_relpath;
- (void)_fetchRelPath;
@property(readonly, nonatomic) BRCItemID *parentItemID; // @synthesize parentItemID=_parentItemID;
- (void)closePaths;
- (_Bool)resolveParentAndKeepOpenMustExist:(_Bool)arg1 errcode:(int *)arg2;
- (id)initWithURL:(id)arg1 root:(id)arg2;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)matchLookupItemsWithDisk;
- (void)handleReservedPathMatchesIfNeeded;
- (void)markPathMatchLostIfLocationDoesntMatch:(CDStruct_b86b310a *)arg1;
- (_Bool)tryToDeleteItemInNamespace:(unsigned char)arg1;
- (void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2;
- (_Bool)_canUpdatePathMatch:(const CDStruct_b86b310a *)arg1;
- (_Bool)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)arg1;
- (CDStruct_b86b310a)_pathMatchInNamespace:(unsigned char)arg1;
- (void)_clearNamespace:(unsigned char)arg1;
- (_Bool)_bounceBouncesHiddenByFault:(id)arg1;
- (int)_applyDesiredAdditionsOnItem:(id)arg1;
- (int)_applyThumbnailOnItem:(id)arg1 atURL:(id)arg2;
- (int)_discoverConflictLosersOnItem:(id)arg1 atURL:(id)arg2;
- (_Bool)_bouncePathMatch:(const CDStruct_b86b310a *)arg1 toApplyServerItem:(id)arg2;
- (id)_generateGentleBounceForPathMatch:(const CDStruct_b86b310a *)arg1 dirfd:(int)arg2;
- (_Bool)_isPathMatchIdle:(const CDStruct_b86b310a *)arg1;

@end
