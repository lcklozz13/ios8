/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UITextField, UIVisualEffectView, _UIAlertControllerTextField;

// Not exported
@interface _UIAlertControllerTextFieldView : UIView
{
    UIVisualEffectView *_borderContainerView;
    UIView *_borderView;
    UIView *_innerContentView;
    _UIAlertControllerTextField *_textField;
}

@property(readonly) UITextField *textField;
- (id)_textFieldFont;
- (double)_borderWidth;
- (void)_addConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

