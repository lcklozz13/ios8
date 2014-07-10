/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface SGMicrodataDocument : NSObject
{
    NSMutableDictionary *_htmlIds;
    NSMutableArray *_items;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSDictionary *htmlIds; // @synthesize htmlIds=_htmlIds;
- (void).cxx_destruct;
- (id)init;
- (void)addItem:(id)arg1;
- (void)setHtmlIdItemScope:(id)arg1 forHtmlId:(id)arg2;
- (id)asJsonLd;
- (id)jsonLdForItem:(id)arg1;

@end
