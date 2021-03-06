/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/MFPGradientBrush.h>

@class NSArray, OITSDBezierPath, OITSUColor;

// Not exported
@interface MFPPathGradientBrush : MFPGradientBrush
{
    OITSUColor *mCenterColor;
    struct CGPoint mCenterPoint;
    NSArray *mSurroundColors;
    OITSDBezierPath *mPath;
}

- (id).cxx_construct;
- (id)endColor;
- (id)startColor;
- (void)createShading;
- (void)setPath:(id)arg1;
- (void)setSurroundColors:(id)arg1;
- (void)setCenterPoint:(struct CGPoint)arg1;
- (void)setCenterColor:(id)arg1;
- (void)dealloc;

@end

