/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MDRenderTarget <NSObject>
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) double contentScale;
@property(readonly, nonatomic) struct CGSize size;

@optional
@property(readonly, nonatomic) float averageFPS;
- (void)didDrawView;
- (void)willDrawView;
@end

