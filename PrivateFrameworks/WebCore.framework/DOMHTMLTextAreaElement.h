/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement
{
}

- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setRangeText:(id)arg1;
- (void)select;
- (void)setCustomValidity:(id)arg1;
- (_Bool)checkValidity;
@property(copy) NSString *accessKey;
- (void)setAutocapitalize:(id)arg1;
- (id)autocapitalize;
- (void)setAutocorrect:(_Bool)arg1;
- (_Bool)autocorrect;
- (void)setSelectionDirection:(id)arg1;
- (id)selectionDirection;
@property int selectionEnd;
@property int selectionStart;
- (id)labels;
- (id)validationMessage;
- (id)validity;
@property(readonly) _Bool willValidate;
- (unsigned int)textLength;
@property(copy) NSString *value;
@property(copy) NSString *defaultValue;
@property(readonly, copy) NSString *type;
- (void)setWrap:(id)arg1;
- (id)wrap;
@property int rows;
- (void)setRequired:(_Bool)arg1;
- (_Bool)required;
@property _Bool readOnly;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
@property(copy) NSString *name;
- (void)setMaxLength:(int)arg1;
- (int)maxLength;
@property(readonly) DOMHTMLFormElement *form;
@property _Bool disabled;
- (void)setDirName:(id)arg1;
- (id)dirName;
@property int cols;
@property _Bool autofocus;
- (_Bool)_isEdited;
- (int)_autocapitalizeType;
- (int)structuralComplexityContribution;

@end

