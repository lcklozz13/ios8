/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MPUDataSourceConfiguration : NSObject
{
    Class _dataSourceClass;
    NSString *_dataSourceCachingKey;
    id _defaultQueryCreationBlock;
    long long _entityType;
}

+ (id)configurationWithDataSourceClass:(Class)arg1;
@property(nonatomic) long long entityType; // @synthesize entityType=_entityType;
@property(copy, nonatomic) id defaultQueryCreationBlock; // @synthesize defaultQueryCreationBlock=_defaultQueryCreationBlock;
@property(copy, nonatomic) NSString *dataSourceCachingKey; // @synthesize dataSourceCachingKey=_dataSourceCachingKey;
@property(readonly, nonatomic) Class dataSourceClass; // @synthesize dataSourceClass=_dataSourceClass;
- (void).cxx_destruct;
- (id)initWithDataSourceClass:(Class)arg1;

@end

