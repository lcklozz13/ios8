/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying>
{
    int _badgeCount;
    NSString *_dialog;
    NSData *_payload;
    NSString *_sound;
    int _source;
    NSString *_uuid;
    _Bool _isRead;
    struct {
        unsigned int badgeCount:1;
        unsigned int source:1;
        unsigned int isRead:1;
    } _has;
}

@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int badgeCount; // @synthesize badgeCount=_badgeCount;
@property(retain, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) NSString *dialog; // @synthesize dialog=_dialog;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPayload;
@property(nonatomic) _Bool hasBadgeCount;
@property(readonly, nonatomic) _Bool hasSound;
@property(readonly, nonatomic) _Bool hasDialog;
@property(nonatomic) _Bool hasSource;
@property(readonly, nonatomic) _Bool hasUuid;
@property(nonatomic) _Bool hasIsRead;

@end

