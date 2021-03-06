/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardMenuView.h>

@class NSArray, NSMutableArray;

// Not exported
@interface UIInputSwitcherView : UIKeyboardMenuView
{
    int m_currentInputModeIndex;
    _Bool m_keyboardSettingsFromSwitcher;
    NSMutableArray *m_inputModes;
}

+ (id)activeInstance;
+ (id)sharedInstance;
@property(nonatomic) _Bool keyboardSettingsFromSwitcher; // @synthesize keyboardSettingsFromSwitcher=m_keyboardSettingsFromSwitcher;
@property(retain, nonatomic) NSArray *inputModes; // @synthesize inputModes=m_inputModes;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)subtitleForItemAtIndex:(int)arg1;
- (id)titleForItemAtIndex:(int)arg1;
- (long long)defaultSelectedIndex;
- (struct CGSize)preferredSize;
- (long long)numberOfItems;
- (void)show;
- (void)selectPreviousInputMode;
- (id)previousInputMode;
- (void)selectNextInputMode;
- (id)nextInputMode;
- (void)selectInputMode:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)selectRowForInputMode:(id)arg1;
- (id)selectedInputMode;
- (_Bool)selectedRowIsPredictionCell;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

