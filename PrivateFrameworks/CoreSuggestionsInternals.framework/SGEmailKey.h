/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SGEntityKey-Protocol.h"

@class NSString;

@interface SGEmailKey : NSObject <SGEntityKey>
{
    NSString *_source;
    NSString *_messageId;
    long long _messageIdHash;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) long long messageIdHash; // @synthesize messageIdHash=_messageIdHash;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)messageURL;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToEmailKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;

@end

