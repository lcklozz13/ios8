/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface OABColor : NSObject
{
}

+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)arg1;
+ (int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)arg1;
+ (int)writeSystemColorID:(int)arg1;
+ (id)readColor:(const struct EshColor *)arg1 colorPropertiesManager:(id)arg2 colorPalette:(id)arg3;
+ (struct EshColor)propertyColor:(int)arg1 colorPropertiesManager:(id)arg2;
+ (int)readColorAdjustmentType:(int)arg1;
+ (int)readSystemColorID:(int)arg1;

@end

