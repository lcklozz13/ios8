/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIPickerView.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "WKFormControl-Protocol.h"

@class WKContentView;

// Not exported
@interface WKMultipleSelectPicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    WKContentView *_view;
    long long _textAlignment;
    unsigned long long _singleSelectionIndex;
    _Bool _allowsMultipleSelection;
    double _layoutWidth;
    double _fontSize;
    double _maximumTextWidth;
}

- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(_Bool)arg4;
- (long long)findItemIndexAt:(int)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)layoutSubviews;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end
