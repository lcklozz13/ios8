/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSActionResponse.h"

@interface UIFetchContentInBackgroundActionResponse : BSActionResponse
{
}

+ (id)responseWithResult:(unsigned long long)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long result;
- (id)initWithInfo:(id)arg1 error:(id)arg2;
- (id)initWithBackgroundFetchResult:(unsigned long long)arg1;

@end
