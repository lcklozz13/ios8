/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class UIColor;

@interface PUPhotoDecoration : NSObject <NSCopying>
{
    UIColor *_borderColor;
    double _borderWidth;
    UIColor *_foregroundColor;
}

@property(copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (id)photoDecorationVariantsWithIncreasingBorderBrightness:(long long)arg1;
- (id)photoDecorationVariantsWithIncreasingAlpha:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

