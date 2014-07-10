/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataAccess/DAMailboxRequest.h>

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest
{
    int _maxSize;
}

@property(nonatomic) int maxSize; // @synthesize maxSize=_maxSize;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *messageID;

@end
