/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class HAPAccessoryServer, NSArray, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface HAPAccessory : NSObject
{
    _Bool _primary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    HAPAccessoryServer *_server;
    NSNumber *_instanceID;
    NSString *_uniqueIdentifier;
    NSArray *_services;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_serialNumber;
}

+ (_Bool)isAccessoryWithUniqueIdentifier:(id)arg1 bridgedToServerWithIdentifier:(id)arg2;
+ (_Bool)isAccessoryWithUniqueIdentifierPrimary:(id)arg1;
+ (id)serverIdentifierForUniqueIdentifier:(id)arg1;
+ (_Bool)isAccessoryWithUniqueIdentifierPaired:(id)arg1;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *services; // @synthesize services=_services;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(nonatomic) __weak HAPAccessoryServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(id)arg3;
- (void)readValueForCharacteristic:(id)arg1 withCompletionHandler:(id)arg2;
- (id)description;
- (id)initWithInstanceID:(id)arg1;

@end

