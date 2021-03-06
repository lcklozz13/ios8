/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CPLAbstractObject-Protocol.h"

@class CPLEngineScheduler, CPLEngineStore, CPLEngineSyncManager, CPLEngineSystemMonitor, CPLEngineTransport, CPLPlatformObject, CPLStatistics, NSArray, NSError, NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLEngineLibrary : NSObject <CPLAbstractObject>
{
    NSArray *_components;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_attachedObjects;
    NSError *_openingError;
    _Bool _closed;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    CPLEngineStore *_store;
    CPLEngineScheduler *_scheduler;
    CPLEngineSyncManager *_syncManager;
    CPLEngineTransport *_transport;
    CPLStatistics *_statistics;
    CPLEngineSystemMonitor *_systemMonitor;
}

+ (id)platformImplementationProtocol;
@property(readonly, nonatomic) CPLEngineSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(readonly, nonatomic) CPLStatistics *statistics; // @synthesize statistics=_statistics;
@property(readonly, nonatomic) CPLEngineTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) CPLEngineSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(readonly, nonatomic) CPLEngineScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // @synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // @synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL;
@property(readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // @synthesize clientLibraryBaseURL=_clientLibraryBaseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (id)componentName;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)_performBlockWithLibrary:(_Bool)arg1 enumerateAttachedObjects:(id)arg2;
- (void)detachObject:(id)arg1 withCompletionHandler:(id)arg2;
- (void)attachObject:(id)arg1 withCompletionHandler:(id)arg2;
- (id)description;
- (void)startSyncSession;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(id)arg2;
- (void)_closeNextComponent:(id)arg1 deactivate:(_Bool)arg2 lastError:(id)arg3 completionHandler:(id)arg4;
- (void)openWithCompletionHandler:(id)arg1;
- (void)_openNextComponent:(id)arg1 completionHandler:(id)arg2;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;

@end

