/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, PLMomentAnalyzer;

@interface PLMomentGeneration : NSObject
{
    NSMutableSet *_pendingInsertsAndUpdates;
    NSMutableDictionary *_pendingDeletes;
    NSObject<OS_dispatch_queue> *_pendingIsolation;
    PLMomentAnalyzer *_pairedAnalyzer;
    id <PLMomentGenerationDataManagement> _momentGenerationDataManager;
    PLMomentAnalyzer *_analyzer;
}

+ (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
+ (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
+ (void)_updateMoment:(id)arg1 fromCluster:(id)arg2 inManager:(id)arg3;
+ (id)_insertMomentsForAssets:(id)arg1 inManager:(id)arg2;
+ (id)generateSplitCustomMomentUUID;
+ (id)generateMergeCustomMomentUUID;
+ (_Bool)_rebuildAllMomentListsWithDataManager:(id)arg1 error:(id *)arg2;
@property(nonatomic) PLMomentAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
@property(nonatomic) id <PLMomentGenerationDataManagement> momentGenerationDataManager; // @synthesize momentGenerationDataManager=_momentGenerationDataManager;
- (void)clearUserInfluencedMoments;
- (id)allMomentsMetadataWriteToFile:(id)arg1;
- (id)_detailsForMoment:(id)arg1;
- (id)_nameForMomentGenerationType:(short)arg1;
- (id)allAssetMetadataWriteToFile:(id)arg1;
- (id)_detailsForAsset:(id)arg1;
- (_Bool)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3;
- (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
- (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
- (id)_insertMomentsForAssets:(id)arg1 inManager:(id)arg2;
- (void)rebuildAllMomentLists:(id)arg1;
- (_Bool)_rebuildAllMomentsInManager:(id)arg1 shouldAnalyze:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_deleteAllMomentDataInManager:(id)arg1 incremental:(_Bool)arg2 error:(id *)arg3;
- (void)rebuildAllMomentsIncremental:(_Bool)arg1 completionHandler:(id)arg2;
- (void)generateWithIncrementalDataCompletionHandler:(id)arg1;
- (void)generateWithAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2 completionHandler:(id)arg3;
- (void)saveChangesForAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2;
- (_Bool)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1;
- (id)affectedMomentsForAssetDateCreated:(id)arg1 inManager:(id)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)rebuildAllMomentsWithManager:(id)arg1 error:(id *)arg2;

@end
