/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WKRotatingPopover.h>

#import "WKRotatingPopoverDelegate-Protocol.h"

@class WKContentView;

// Not exported
@interface WKFormRotatingAccessoryPopover : WKRotatingPopover <WKRotatingPopoverDelegate>
{
    WKContentView *_view;
}

- (void)popoverWasDismissed:(id)arg1;
- (unsigned long long)popoverArrowDirections;
- (void)accessoryDone;
- (id)initWithView:(id)arg1;

@end

