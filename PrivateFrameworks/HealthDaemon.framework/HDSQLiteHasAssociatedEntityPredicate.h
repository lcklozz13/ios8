/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthDaemon/HDSQLitePredicate.h>

#import "NSCopying-Protocol.h"

@interface HDSQLiteHasAssociatedEntityPredicate : HDSQLitePredicate <NSCopying>
{
    Class _associatedEntityClass;
    HDSQLitePredicate *_associatedPredicate;
}

+ (id)predicateWithAssociatedEntityClass:(Class)arg1;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;

@end

