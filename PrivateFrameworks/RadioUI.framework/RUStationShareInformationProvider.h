/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, RadioStation;

@interface RUStationShareInformationProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_shareTypeToLoadCompletionHandlers;
    NSMutableDictionary *_shareTypeToResponse;
    RadioStation *_station;
}

@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (void)_loadStationShareInfoForShareType:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)loadShareInformationForShareType:(long long)arg1 withCompletionHandler:(id)arg2;
- (id)initWithStation:(id)arg1;

@end

