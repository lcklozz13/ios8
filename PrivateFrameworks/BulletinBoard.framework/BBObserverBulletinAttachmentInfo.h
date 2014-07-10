/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface BBObserverBulletinAttachmentInfo : NSObject
{
    NSMutableDictionary *_imageSizePairs;
    _Bool imagesFetched;
    _Bool sizesFetched;
}

@property(nonatomic) _Bool sizesFetched; // @synthesize sizesFetched;
@property(nonatomic) _Bool imagesFetched; // @synthesize imagesFetched;
- (struct CGSize)sizeForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)_pairForKey:(id)arg1 create:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end
