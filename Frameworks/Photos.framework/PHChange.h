/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface PHChange : NSObject
{
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSArray *_changedObjectIDsArray;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMapTable *_changeHandlingMap;
}

+ (id)handlerQueue;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)changeDetailsForFetchResult:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 handler:(id)arg2;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(id)arg2;
- (id)deletedObjectIDs;
- (id)updatedObjectIDs;
- (id)insertedObjectIDs;
- (id)initWithChangedIdentifiers:(id)arg1;
- (id)init;

@end

