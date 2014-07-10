/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

@interface PRSDecoder : NSObject
{
    NSMapTable *_converters;
    id <PRSDecoderDelegate> _delegate;
}

@property id <PRSDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addBuiltInConverters;
- (id)convertBlockForClass:(SEL)arg1;
- (void)setConverterForClass:(Class)arg1 withBlock:(id)arg2;
- (id)_numberFromNumber:(id)arg1 expectedType:(char *)arg2;
- (_Bool)_decodeObject:(id)arg1 withProtocol:(id)arg2 fromDictionary:(id)arg3 path:(id)arg4 serverProperties:(id)arg5;
- (id)_decodeObjectOfClass:(Class)arg1 protocol:(id)arg2 fromValue:(id)arg3 parentObject:(id)arg4 propertyName:(id)arg5 path:(id)arg6;
- (_Bool)decodeObject:(id)arg1 withProtocol:(id)arg2 fromDictionary:(id)arg3;
- (id)init;

@end
