/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PFZlibDataDecompressionOptions : NSObject
{
    _Bool _decompressAllAtOnce;
    int _windowBits;
    id _createBuffer;
    id _growData;
}

+ (id)defaultOptions;
@property(nonatomic) _Bool decompressAllAtOnce; // @synthesize decompressAllAtOnce=_decompressAllAtOnce;
@property(copy, nonatomic) id growData; // @synthesize growData=_growData;
@property(copy, nonatomic) id createBuffer; // @synthesize createBuffer=_createBuffer;
@property(nonatomic) int windowBits; // @synthesize windowBits=_windowBits;
- (void).cxx_destruct;

@end

