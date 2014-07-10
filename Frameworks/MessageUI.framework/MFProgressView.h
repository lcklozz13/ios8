/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CADisplayLink, NSTimer, UIColor;

@interface MFProgressView : UIView
{
    double _stroke;
    CADisplayLink *_displayLink;
    double _displayedProgress;
    double _targetProgress;
    UIColor *_tintColor;
    NSTimer *_simulateActivityTimer;
    id <MFProgressViewDelegate> _delegate;
}

+ (id)progressViewWithDefaultStyleStrokeAndRect;
@property(nonatomic) id <MFProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)dealloc;
- (void)simulateActivity;
- (void)_onDisplayLink:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)progressDidFinish;
- (void)setProgress:(double)arg1;
- (struct CGRect)scaleBaselineBoundsToScale:(struct CGSize)arg1;
- (id)initWithProgressViewStyle:(int)arg1 stroke:(double)arg2 frame:(struct CGRect)arg3;

@end
