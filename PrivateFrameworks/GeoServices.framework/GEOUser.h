/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPhoto, NSString;

@interface GEOUser : PBCodable <NSCopying>
{
    GEOPhoto *_image;
    NSString *_name;
}

@property(retain, nonatomic) GEOPhoto *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasName;
- (void)dealloc;
- (id)initWithPlaceDataUser:(id)arg1;

@end

