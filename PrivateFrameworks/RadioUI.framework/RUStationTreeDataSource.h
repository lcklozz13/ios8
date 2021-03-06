/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface RUStationTreeDataSource : NSObject
{
    long long _nodeType;
    long long _parentNodeID;
}

- (id)_treeNodeByAppendingTreeNode:(id)arg1 toBaseTreeNode:(id)arg2;
- (void)loadChildNodesWithBaseParentNode:(id)arg1 completionHandler:(id)arg2;
- (id)initWithParentNodeID:(long long)arg1;
- (id)initForFeaturedStations;

@end

