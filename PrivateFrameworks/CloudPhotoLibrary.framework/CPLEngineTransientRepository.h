/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject-Protocol.h"

@class CPLPlatformObject, NSData, NSMutableArray, NSMutableDictionary;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject>
{
    unsigned long long _state;
    unsigned long long _popState;
    _Bool *_usesInMemoryBatch;
    NSMutableDictionary *_inMemoryChangesPerIdentifier;
    NSData *_inMemoryTransientSyncAnchor;
    NSMutableArray *_remainingClassesToBePopped;
    unsigned long long _maximumCountOfRecordsInMemory;
    unsigned long long _maximumCountOfRecordsInBatches;
}

+ (id)orderedClassesForChanges;
+ (id)orderedClassesForDelete;
@property(nonatomic) unsigned long long maximumCountOfRecordsInBatches; // @synthesize maximumCountOfRecordsInBatches=_maximumCountOfRecordsInBatches;
@property(nonatomic) unsigned long long maximumCountOfRecordsInMemory; // @synthesize maximumCountOfRecordsInMemory=_maximumCountOfRecordsInMemory;
- (void).cxx_destruct;
- (_Bool)openWithError:(id *)arg1;
- (_Bool)resetTransientRepositoryWithError:(id *)arg1;
- (_Bool)endTransientRepositoryWithError:(id *)arg1;
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (_Bool)_popChangeBatchOfChangedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_popChangeBatchOfDeletedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)prepareForMinglingWithError:(id *)arg1;
- (_Bool)appendBatch:(id)arg1 error:(id *)arg2;
- (_Bool)_appendBatchToStorage:(id)arg1 error:(id *)arg2;
- (id)_changeWithIdentifier:(id)arg1;
- (_Bool)beginTransientRepositoryWithError:(id *)arg1;
- (_Bool)storeTransientSyncAnchor:(id)arg1 error:(id *)arg2;
- (id)transientSyncAnchor;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) CPLPlatformObject *platformObject;

@end
