/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ADAdSheetConnectionDelegate-Protocol.h"

@class ADAdSheetConnection;

@interface ADAnalytics : NSObject <ADAdSheetConnectionDelegate>
{
    ADAdSheetConnection *_connection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
- (void)reportIngestionForPassWithTeamIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 iAdReportingIdentifier:(id)arg4;
- (void)configureConnection:(id)arg1;
- (id)adSheetMachServiceName;
- (id)init;

@end

