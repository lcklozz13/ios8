/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKMapServiceTicket-Protocol.h"

@class GEOMapRegion, GEOMapServiceTraits, NSArray, NSError;

// Not exported
@interface _MKTicket : NSObject <MKMapServiceTicket>
{
    id <GEOMapServiceTicket> _ticket;
    NSArray *_exactMapItems;
    NSArray *_refinedMapItems;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly, nonatomic) NSArray *exactMapItems;
- (_Bool)isEqualForHistoryToTicket:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(id)arg1 timeout:(void)arg2 queue:(long long)arg3 networkActivity:(id)arg4;
- (void)submitWithHandler:(id)arg1 queue:(void)arg2 networkActivity:(id)arg3;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(void)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(void)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(void)arg2 networkActivity:(long long)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(void)arg2 networkActivity:(long long)arg3;
- (id)description;
- (id)initWithTicket:(id)arg1;

@end

