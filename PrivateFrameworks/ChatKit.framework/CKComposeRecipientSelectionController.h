/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKRecipientSelectionController.h>

#import "UITextFieldDelegate-Protocol.h"

@class CKConversation, CKScheduledUpdater, NSArray;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate>
{
    CKScheduledUpdater *_backfillUpdater;
    id _sendBlock;
}

@property(copy, nonatomic) id sendBlock; // @synthesize sendBlock=_sendBlock;
@property(retain, nonatomic) CKScheduledUpdater *backfillUpdater; // @synthesize backfillUpdater=_backfillUpdater;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_sendIfReady;
- (void)_updateBackfillForNewRecipients;
- (_Bool)shouldSuppressSearchResultsTable;
- (_Bool)homogenizePreferredServiceForiMessage;
- (_Bool)shouldAtomizeToConversationName;
- (_Bool)searchListShouldUsePopvoers;
- (_Bool)shouldUsePopovers;
- (void)preferredServiceDidChangeForConversation:(id)arg1;
- (void)preferredServiceDidChangeForHandle:(id)arg1;
- (void)recipientSelectionControllerDidChange;
- (void)reset;
- (void)atomizeAndInvokeBlock:(id)arg1;
- (void)addRecipient:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *proposedRecipients;
@property(readonly, retain, nonatomic) NSArray *expandedRecipients;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) CKConversation *conversation;
@property(nonatomic) id <CKComposeRecipientSelectionControllerDelegate> delegate;

@end

