/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableString, NSString;

@interface MFStringAccumulator : NSObject
{
    NSMutableString *_mutable;
    NSString *_immutable;
}

- (id)string;
- (void)appendString:(id)arg1;
- (void)dealloc;

@end
