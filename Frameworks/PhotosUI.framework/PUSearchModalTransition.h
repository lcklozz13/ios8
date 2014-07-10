/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUModalTransition.h>

@class PUPhotosGridViewController, PUSearchViewController;

@interface PUSearchModalTransition : PUModalTransition
{
    PUSearchViewController *_searchViewController;
    PUPhotosGridViewController *_searchResultsViewController;
}

@property(retain, nonatomic) PUPhotosGridViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
@property(retain, nonatomic) PUSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
- (void).cxx_destruct;
- (void)animateDismissTransition;
- (void)animatePresentTransition;
- (id)init;

@end
