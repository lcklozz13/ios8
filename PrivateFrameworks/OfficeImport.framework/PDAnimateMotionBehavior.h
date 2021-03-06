/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/PDAnimateScaleBehavior.h>

@class NSString;

// Not exported
@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior
{
    NSString *mPath;
    _Bool mHasAngle;
    double mAngle;
    _Bool mHasPointType;
    int mPointType;
    _Bool mHasOriginType;
    int mOriginType;
    _Bool mHasRotationCenter;
    struct CGPoint mRotationCenter;
}

- (id).cxx_construct;
- (_Bool)isEqual:(id)arg1;
- (void)setRotationCenter:(struct CGPoint)arg1;
- (struct CGPoint)rotationCenter;
- (_Bool)hasRotationCenter;
- (void)setOriginType:(int)arg1;
- (int)originType;
- (_Bool)hasOriginType;
- (void)setPointType:(int)arg1;
- (int)pointType;
- (_Bool)hasPointType;
- (void)setAngle:(double)arg1;
- (double)angle;
- (_Bool)hasAngle;
- (void)setPath:(id)arg1;
- (id)path;
- (_Bool)hasPath;
- (void)dealloc;

@end

