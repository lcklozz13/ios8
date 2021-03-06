/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <MessageUI/MFMessageBodyStringAccumulator-Protocol.h>

@class NSMutableString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator>
{
    NSMutableString *_accumulatedString;
    unsigned long long _remainingLength;
    int _options;
    int _lastEntity;
    unsigned long long _lastCustomEntityTag;
    _Bool _isFull;
}

- (id)accumulatedString;
- (void)appendInnerTextWithConsumableNode:(id)arg1;
- (void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)appendRange:(struct _NSRange)arg1 ofString:(id)arg2;
- (void)appendString:(id)arg1;
- (void)appendNewline;
- (_Bool)isFull;
- (void)dealloc;
- (id)initWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2;

@end

