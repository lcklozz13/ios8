/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSString;

@interface CPBitmapStore : NSObject
{
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
    _Bool _lockOnRead;
}

@property(nonatomic) _Bool lockOnRead; // @synthesize lockOnRead=_lockOnRead;
- (int)setVersion:(int)arg1;
@property(readonly, nonatomic) int version;
- (id)_versionPath;
- (void)purge;
- (unsigned long long)imageCount;
- (id)imagePath;
- (void)removeImagesInGroups:(id)arg1 completion:(id)arg2;
- (void)removeImagesInGroups:(id)arg1;
- (void)commitTransaction;
- (void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(_Bool)arg3 image:(struct CGImage *)arg4;
- (struct CGImage *)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 draw:(id)arg6;
- (struct CGImage *)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 format:(int)arg4 scale:(double)arg5 fillMem:(id)arg6 alternateCompletion:(void)arg7;
- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)commitTxn;
- (id)allGroups;
- (struct CGImage *)copyImageForKey:(id)arg1;
- (unsigned int)memContentOffset;
- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;
- (_Bool)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (_Bool)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (id)cacheNumberForKey:(id)arg1;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
@property(nonatomic) unsigned long long cacheItemLimit;
- (void)dealloc;
- (id)initWithPath:(id)arg1 version:(int)arg2;

@end

