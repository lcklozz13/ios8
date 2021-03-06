/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface AudioTier : NSObject <NSCopying>
{
    unsigned int mode;
    unsigned int tier;
    unsigned int duplication;
    unsigned int bundling;
    unsigned int codecPayload;
    unsigned int codecBitrate;
    double duration;
}

@property double duration; // @synthesize duration;
@property unsigned int codecBitrate; // @synthesize codecBitrate;
@property unsigned int codecPayload; // @synthesize codecPayload;
@property unsigned int bundling; // @synthesize bundling;
@property unsigned int duplication; // @synthesize duplication;
@property unsigned int tier; // @synthesize tier;
@property unsigned int mode; // @synthesize mode;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMode:(unsigned int)arg1 tier:(unsigned int)arg2 duplication:(unsigned int)arg3 bundling:(unsigned int)arg4 codecPayload:(unsigned int)arg5 codecBitrate:(unsigned int)arg6;
- (id)init;

@end

