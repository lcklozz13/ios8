/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

// Not exported
@interface TSCH3DShaderEffectsStates : NSObject
{
    NSMutableDictionary *mObjects;
}

- (void)clear;
- (void)setState:(id)arg1 forStateInfo:(id)arg2;
- (id)stateForStateInfo:(id)arg1 createIfNil:(_Bool)arg2;
- (id)valueStateForKey:(id)arg1;
- (void)setValueState:(id)arg1 forKey:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

