/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class PSSearchEntry;

@interface PSSearchIndexOperation : NSOperation
{
    PSSearchEntry *_searchEntry;
    id <PSSearchIndexOperationDelegate> _delegate;
}

+ (id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(_Bool *)arg2 checkManifest:(_Bool *)arg3;
@property(nonatomic) id <PSSearchIndexOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PSSearchEntry *searchEntry; // @synthesize searchEntry=_searchEntry;
- (void)main;
- (void)_cancel;
- (void)_finishedIndexingWithEntries:(id)arg1 cancelled:(_Bool)arg2;
- (void)dealloc;
- (id)initWithSearchEntry:(id)arg1 delegate:(id)arg2;

@end
