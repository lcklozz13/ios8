/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEONameInfo, NSString;

@interface GEOPDLocalizedNameInfo : PBCodable <NSCopying>
{
    NSString *_languageCode;
    GEONameInfo *_name;
    NSString *_requestedLanguageCode;
}

@property(retain, nonatomic) GEONameInfo *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *requestedLanguageCode; // @synthesize requestedLanguageCode=_requestedLanguageCode;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasRequestedLanguageCode;
- (void)dealloc;

@end

