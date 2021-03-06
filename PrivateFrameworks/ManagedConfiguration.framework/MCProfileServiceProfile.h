/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCProfile.h>

@class NSArray, NSData, NSString;

@interface MCProfileServiceProfile : MCProfile
{
    NSString *_URLString;
    NSArray *_deviceAttributes;
    id _challenge;
    NSData *_enrollmentIdentityPersistentID;
    _Bool _confirmInstallation;
    NSArray *_bogusPayloads;
}

@property(readonly, nonatomic) _Bool confirmInstallation; // @synthesize confirmInstallation=_confirmInstallation;
@property(retain, nonatomic) NSData *enrollmentIdentityPersistentID; // @synthesize enrollmentIdentityPersistentID=_enrollmentIdentityPersistentID;
@property(readonly, retain, nonatomic) id challenge; // @synthesize challenge=_challenge;
@property(readonly, retain, nonatomic) NSArray *deviceAttributes; // @synthesize deviceAttributes=_deviceAttributes;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (id)description;
- (id)stubDictionary;
- (id)managedPayloads;
- (id)payloads;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(_Bool)arg2 outError:(id *)arg3;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;

@end

