/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@interface FigSubtitleWebVTTCueCALayer : CALayer
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)setDefaultFontSize:(double)arg1;
- (void)setViewport:(struct CGRect)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (void)setContent:(struct __CFAttributedString *)arg1;
- (struct __CFString *)getContentID;
- (unsigned char)isDirty;
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;
- (void)setCuePosition:(struct CGPoint)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

