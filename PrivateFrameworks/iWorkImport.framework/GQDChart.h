/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDGraphic.h>

@class GQDChartLegend, GQDChartModel, GQDSStyle;

// Not exported
@interface GQDChart : GQDGraphic
{
    GQDChartLegend *mLegend;
    _Bool mIsLegendRetained;
    GQDChartModel *mModel;
    GQDSStyle *mStyle;
    long long mType;
}

+ (const struct StateSpec *)stateForReading;
- (void)setLegend:(id)arg1;
- (long long)type;
- (id)graphicStyle;
- (id)style;
- (id)model;
- (id)legend;
- (void)dealloc;

@end
