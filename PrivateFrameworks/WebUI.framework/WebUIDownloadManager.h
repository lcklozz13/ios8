/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURLDownload;

@interface WebUIDownloadManager : NSObject
{
    id _delegate;
    NSURLDownload *_download;
    NSString *_downloadPath;
}

- (void).cxx_destruct;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)_downloadDidFail:(id)arg1;
- (void)_cleanUp;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)downloadDidBegin:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
