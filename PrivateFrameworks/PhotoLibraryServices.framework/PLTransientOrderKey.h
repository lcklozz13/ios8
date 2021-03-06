/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLOrderKeyObject-Protocol.h"

@class NSManagedObjectContext, NSManagedObjectID;

@interface PLTransientOrderKey : NSObject <PLOrderKeyObject>
{
    long long _orderValue;
    NSManagedObjectID *_objectID;
    NSManagedObjectContext *_moc;
}

@property(retain, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) long long orderValue; // @synthesize orderValue=_orderValue;
- (id)description;
- (void)dealloc;
- (id)secondaryOrderSortKey;
- (id)childManagedObject;
- (void)setIsSpecial:(_Bool)arg1;
- (_Bool)isSpecial;

@end

