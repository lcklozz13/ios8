/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayerUI/MPUReportingMetadata.h>

@class NSString;

@interface MPUReportingRadioStationMetadata : MPUReportingMetadata
{
    NSString *_stationHash;
    long long _stationID;
}

@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
- (void).cxx_destruct;

@end

