/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <CoreSuggestionsInternals/SGReverseTemplateJS-Protocol.h>

@class JSContext, JSVirtualMachine, NSMutableArray, NSURL, SGReverseTemplatesJSDataDetectors;

@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS>
{
    JSVirtualMachine *_jsVM;
    NSMutableArray *_memoryMappedFiles;
    JSContext *_jsContext;
    SGReverseTemplatesJSDataDetectors *_dd;
    NSURL *_assetPath;
}

- (void).cxx_destruct;
- (void)emailToOutput:(id)arg1 reply:(id)arg2;
- (void)shouldDownloadFull:(id)arg1 reply:(id)arg2;
- (id)emailToOutput:(id)arg1;
- (_Bool)shouldDownloadFull:(id)arg1;
- (void)setAssetPath:(id)arg1;
- (id)loadJSFromASCIIFile:(id)arg1;
- (void)resetVM;
- (void)killVM;
- (id)init;

@end

