/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSMappedObjectStore.h>

// Not exported
@interface NSMemoryObjectStore : NSMappedObjectStore
{
}

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
- (void)_preflightCrossCheck;
- (id)_archivedData;
- (id)type;
- (void)saveDocumentToPath:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;

@end
