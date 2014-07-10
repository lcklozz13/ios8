/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDGetAuthTokensForPutURLRequest : CKDURLRequest
{
    NSArray *_MMCSItems;
    NSMutableDictionary *_MMCSItemByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *MMCSItemByRequestID; // @synthesize MMCSItemByRequestID=_MMCSItemByRequestID;
@property(readonly, nonatomic) NSArray *MMCSItems; // @synthesize MMCSItems=_MMCSItems;
- (void).cxx_destruct;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (long long)partitionType;
- (long long)serverType;
- (int)operationType;
- (id)initWithMMCSItems:(id)arg1;

@end
