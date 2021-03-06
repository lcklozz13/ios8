/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUICacheCoding-Protocol.h"

@class NSMutableDictionary, NSString, NSURL;

@interface SKUIArtwork : NSObject <SKUICacheCoding>
{
    long long _height;
    NSURL *_url;
    NSString *_urlString;
    long long _width;
}

@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithArtworkDictionary:(id)arg1;

@end

