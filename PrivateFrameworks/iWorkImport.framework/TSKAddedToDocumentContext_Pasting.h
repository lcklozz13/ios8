/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKAddedToDocumentContext.h>

@class NSMutableArray;

// Not exported
@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext
{
    NSMutableArray *mAddedDrawables;
    struct __CFDictionary *mTableIDMap;
}

- (_Bool)syncChanges;
- (_Bool)uniqueBookmarks;
- (_Bool)autoUpdateSmartFields;
- (_Bool)wasPasted;
- (id)description;
- (void)setTableIDMap:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)tableIDMap;
- (id)addedDrawables;
- (void)addDrawable:(id)arg1;
- (void)dealloc;
- (id)init;

@end

