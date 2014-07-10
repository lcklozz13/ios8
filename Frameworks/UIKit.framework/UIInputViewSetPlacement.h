/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface UIInputViewSetPlacement : NSObject
{
}

+ (id)placement;
- (_Bool)accessoryViewWillAppear;
- (_Bool)inputViewWillAppear;
- (unsigned long long)notificationsForTransitionToPlacement:(id)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
@property(readonly, nonatomic) _Bool isInteractive;
@property(readonly, nonatomic) _Bool showsInputViews;
@property(readonly, nonatomic) _Bool isUndocked;
- (_Bool)isEqual:(id)arg1;

@end
