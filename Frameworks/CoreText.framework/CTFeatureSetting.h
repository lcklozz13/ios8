/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDictionary.h"

// Not exported
@interface CTFeatureSetting : NSDictionary
{
    NSDictionary *_dictionary;
}

- (_Bool)isEqualToFeatureSetting:(id)arg1;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)value;
- (id)tag;
- (id)selector;
- (id)type;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithType:(id)arg1 selector:(id)arg2 tag:(id)arg3 value:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNormalizedDictionary:(id)arg1;

@end
