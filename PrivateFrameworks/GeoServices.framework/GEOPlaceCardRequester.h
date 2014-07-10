/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOPlaceDataProxy-Protocol.h"

@interface GEOPlaceCardRequester : NSObject <GEOPlaceDataProxy>
{
    id <GEOPlaceDataProxy> _proxy;
}

+ (id)sharedRequester;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 traits:(id)arg2 networkActivity:(id)arg3 requesterHandler:(void)arg4;
- (void)requestMUIDs:(id)arg1 traits:(id)arg2 networkActivity:(id)arg3 requesterHandler:(void)arg4;
- (void)requestPhoneNumbers:(id)arg1 traits:(id)arg2 requesterHandler:(id)arg3;
- (void)requestMUIDs:(id)arg1 traits:(id)arg2 requesterHandler:(id)arg3;
- (void)dealloc;
- (id)init;

@end
