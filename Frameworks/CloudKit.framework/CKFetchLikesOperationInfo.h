/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKOperationInfo.h>

@class CKShareID, NSArray;

@interface CKFetchLikesOperationInfo : CKOperationInfo
{
    NSArray *_itemIDs;
    CKShareID *_shareID;
    unsigned long long _resultsLimit;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

