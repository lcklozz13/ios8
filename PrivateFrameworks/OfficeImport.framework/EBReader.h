/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OCBReader.h>

@class NSString;

// Not exported
@interface EBReader : OCBReader
{
    NSString *mTemporaryDirectory;
    struct XlObjectFactory *mXlObjectFactory;
    _Bool mUseStringOptimization;
    _Bool mIsFileStructuredStorage;
    const void *mBuffer;
}

@property(nonatomic) _Bool isFileStructuredStorage; // @synthesize isFileStructuredStorage=mIsFileStructuredStorage;
@property(nonatomic) _Bool useStringOptimization; // @synthesize useStringOptimization=mUseStringOptimization;
@property(retain, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=mTemporaryDirectory;
@property(readonly, nonatomic) struct XlBinaryReader *xlReader;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (id)read;
- (_Bool)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;

@end

