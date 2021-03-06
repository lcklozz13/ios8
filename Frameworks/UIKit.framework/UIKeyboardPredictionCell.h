/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIKBKeyView, UIMorphingLabel;

// Not exported
@interface UIKeyboardPredictionCell : UIView
{
    UIMorphingLabel *m_label;
    UIView *m_maskView;
    UIKBKeyView *m_activeKeyView;
    UIKBKeyView *m_enabledKeyView;
    _Bool m_lightKeyboard;
    _Bool _isAutocorrection;
    _Bool _isCenter;
    _Bool _isLongCandidate;
    int _state;
    unsigned long long _index;
    struct CGRect _baseFrame;
    struct CGRect _activeFrame;
}

+ (id)initKeyViewWithSize:(struct CGSize)arg1 state:(int)arg2 needsBackground:(_Bool)arg3;
@property(nonatomic) _Bool isLongCandidate; // @synthesize isLongCandidate=_isLongCandidate;
@property(nonatomic) _Bool isCenter; // @synthesize isCenter=_isCenter;
@property(nonatomic) _Bool isAutocorrection; // @synthesize isAutocorrection=_isAutocorrection;
@property(nonatomic) struct CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
@property(nonatomic) struct CGRect baseFrame; // @synthesize baseFrame=_baseFrame;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (id)label;
- (void)setText:(id)arg1 index:(unsigned long long)arg2 active:(_Bool)arg3;
- (void)setState:(int)arg1 withText:(id)arg2;
- (void)setCellAttributes;
- (id)textColor;
- (void)scrollLabelWithText:(id)arg1 force:(_Bool)arg2;
- (void)touchMoved:(double)arg1;
- (void)setVisibleRect;
- (struct CGRect)visibleRect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

