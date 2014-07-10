/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKMessageEntryTextView.h>

#import "NSTextStorageDelegate-Protocol.h"

@class CKComposition, NSMutableDictionary;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate>
{
    BOOL _balloonColor;
    NSMutableDictionary *_mediaObjects;
    NSMutableDictionary *_composeImages;
    CKComposition *_pasteboardComposition;
    long long _pasteboardChangeCount;
}

@property(nonatomic) long long pasteboardChangeCount; // @synthesize pasteboardChangeCount=_pasteboardChangeCount;
@property(retain, nonatomic) CKComposition *pasteboardComposition; // @synthesize pasteboardComposition=_pasteboardComposition;
@property(retain, nonatomic) NSMutableDictionary *composeImages; // @synthesize composeImages=_composeImages;
@property(retain, nonatomic) NSMutableDictionary *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(nonatomic) BOOL balloonColor; // @synthesize balloonColor=_balloonColor;
- (id)attributedTextForCompositionText:(id)arg1;
- (id)composeImageForTransferGUID:(id)arg1;
- (void)previewDidChange:(id)arg1;
- (void)updateComposeImages;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (id)compositionText;
- (void)setCompositionText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;

@end
