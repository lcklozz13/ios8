/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDInsertionContext.h>

// Not exported
@interface TSDDragInsertionContext : TSDInsertionContext
{
    struct CGPoint mPreferredCenter;
    _Bool mPreferredCenterRequired;
    _Bool mShouldEndEditing;
    _Bool mFromDragToInsertController;
    _Bool mInsertFloating;
}

- (_Bool)fromDragToInsertController;
- (_Bool)shouldEndEditing;
- (struct CGPoint)preferredCenter;
- (_Bool)isPreferredCenterRequired;
- (_Bool)isInteractive;
- (_Bool)insertFromDrag;
- (_Bool)insertFloating;
- (_Bool)hasPreferredCenter;
- (id)init;
- (id)initWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertFloating:(_Bool)arg5;

@end

