/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

// Not exported
@interface WDAAnchor : NSObject
{
    struct CGRect mBounds;
    int mTextWrappingMode;
    int mTextWrappingModeType;
    NSArray *mTextWrapPoints;
    double mWrapDistanceLeft;
    double mWrapDistanceTop;
    double mWrapDistanceRight;
    double mWrapDistanceBottom;
    int mHorizontalPosition;
    int mRelativeHorizontalPosition;
    int mVerticalPosition;
    int mRelativeVerticalPosition;
    _Bool mAllowOverlap;
    long long mZIndex;
}

+ (id)stringForTextWrappingModeType:(int)arg1;
@property(nonatomic) long long zIndex; // @synthesize zIndex=mZIndex;
@property(nonatomic) _Bool allowOverlap; // @synthesize allowOverlap=mAllowOverlap;
@property(nonatomic) int relativeVerticalPosition; // @synthesize relativeVerticalPosition=mRelativeVerticalPosition;
@property(nonatomic) int verticalPosition; // @synthesize verticalPosition=mVerticalPosition;
@property(nonatomic) int relativeHorizontalPosition; // @synthesize relativeHorizontalPosition=mRelativeHorizontalPosition;
@property(nonatomic) int horizontalPosition; // @synthesize horizontalPosition=mHorizontalPosition;
@property(nonatomic) double wrapDistanceBottom; // @synthesize wrapDistanceBottom=mWrapDistanceBottom;
@property(nonatomic) double wrapDistanceTop; // @synthesize wrapDistanceTop=mWrapDistanceTop;
@property(nonatomic) double wrapDistanceRight; // @synthesize wrapDistanceRight=mWrapDistanceRight;
@property(nonatomic) double wrapDistanceLeft; // @synthesize wrapDistanceLeft=mWrapDistanceLeft;
@property(retain, nonatomic) NSArray *textWrapPoints; // @synthesize textWrapPoints=mTextWrapPoints;
@property(nonatomic) int textWrappingModeType; // @synthesize textWrappingModeType=mTextWrappingModeType;
@property(nonatomic) int textWrappingMode; // @synthesize textWrappingMode=mTextWrappingMode;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
- (id).cxx_construct;
- (void)dealloc;
- (id)init;

@end

