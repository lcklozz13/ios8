/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOperationQueue, UIPDFDocument;

@interface UIPDFPageImageCache : NSObject
{
    UIPDFDocument *_document;
    unsigned long long _lookAhead;
    unsigned long long _jobCount;
    id *_jobsPrioritized;
    unsigned long long _nextJobIndex;
    unsigned long long _pageCount;
    id *_jobsByPage;
    NSOperationQueue *_renderQueue;
    int _lock;
}

@property(readonly) unsigned long long lookAhead; // @synthesize lookAhead=_lookAhead;
@property(readonly) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property(readonly) UIPDFDocument *document; // @synthesize document=_document;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)cancelPendingRenderOperationsForTarget:(id)arg1;
- (void)cancelPendingRenderOperations;
- (id)getImageIfAvailableForPage:(unsigned long long)arg1;
- (void)deliverImageOfPage:(unsigned long long)arg1 maxSize:(struct CGSize)arg2 quality:(_Bool *)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6;
- (void)cacheImageOfPage:(unsigned long long)arg1 maxSize:(struct CGSize)arg2;
- (void)addRenderJob:(id)arg1;
- (void)dealloc;
- (void)clearCache;
- (id)initWithDocument:(id)arg1 cacheCount:(unsigned long long)arg2 lookAhead:(unsigned long long)arg3;
- (id)initWithDocument:(id)arg1;

@end
