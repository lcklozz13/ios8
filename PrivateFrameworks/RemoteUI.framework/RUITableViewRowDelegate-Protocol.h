/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol RUITableViewRowDelegate
- (void)rowActivatedLink:(id)arg1 attributes:(id)arg2 completion:(id)arg3;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)rowIsFirstResponder:(id)arg1;
- (void)rowDidChange:(id)arg1;
- (void)rowDidEndEditing:(id)arg1;
- (id)sourceURLForRUITableViewRow;
@end

