/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class UIPickerView;

@interface EKRecurrenceOrdinalPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <EKRecurrenceOrdinalPickerViewControllerDelegate> _delegate;
}

@property id <EKRecurrenceOrdinalPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_rightColumn;
- (id)_leftColumn;
- (int)ordinalValue;
- (int)dayMask;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
@property(readonly, nonatomic) UIPickerView *pickerView;
- (void)loadView;

@end

