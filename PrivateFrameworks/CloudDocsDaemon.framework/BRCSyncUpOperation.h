/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudDocsDaemon/BRCOperation.h>

#import "BRCOperationSubclass-Protocol.h"

@class CKModifyRecordsOperation;

// Not exported
@interface BRCSyncUpOperation : BRCOperation <BRCOperationSubclass>
{
    CKModifyRecordsOperation *_modifyOperation;
}

+ (id)modifyRecordsOperationForContainer:(id)arg1;
@property(retain, nonatomic) CKModifyRecordsOperation *modifyOperation; // @synthesize modifyOperation=_modifyOperation;
- (void).cxx_destruct;
- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (_Bool)_serverSaysSyncDownFirstForError:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithContainer:(id)arg1 modifyOperation:(id)arg2;

@end
