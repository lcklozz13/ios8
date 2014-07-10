/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

// Not exported
@interface CalAlarmMetadata : NSObject <NSCoding>
{
    NSArray *_attach;
    NSArray *_attendee;
    NSString *_description;
    NSString *_summary;
}

+ (id)metadataWithData:(id)arg1;
@property(retain) NSString *summary; // @synthesize summary=_summary;
@property(retain) NSString *description; // @synthesize description=_description;
@property(retain) NSArray *attendee; // @synthesize attendee=_attendee;
@property(retain) NSArray *attach; // @synthesize attach=_attach;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dataRepresentation;
- (void)applyToAlarm:(id)arg1;
- (void)dealloc;
- (id)initWithICSAlarm:(id)arg1;

@end
